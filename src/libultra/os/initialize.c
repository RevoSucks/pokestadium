#include <ultra64.h>

#define RESETTYPE_COLD 0
#define RESETTYPE_WARM 1

typedef struct {
	unsigned int inst1;
	unsigned int inst2;
	unsigned int inst3;
	unsigned int inst4;
} __osExceptionVector;

extern __osExceptionVector __osExceptionPreamble;
extern s32 osAppNMIBuffer[];

extern u32 __osFinalRom;

OSTime osClockRate = 62500000;

s32 osViClock = VI_NTSC_CLOCK;

u32 __osShutdown = 0;
u32 __osGlobalIntMask = OS_IM_ALL;

u32 var8005cf74 = 0;
u32 var8005cf78 = 0;
u32 var8005cf7c = 0;

OSPiHandle *__osCartRomInit(void);

void osInitialize(void)
{
    u32 pifdata;
    u32 unused = 0;

	__osFinalRom = TRUE;
	__osSetSR(__osGetSR() | SR_CU1);
	__osSetFpcCsr(FPCSR_FS | FPCSR_EV);

	while (__osSiRawReadIo(PIF_RAM_END - 3, &pifdata));

	while (__osSiRawWriteIo(PIF_RAM_END - 3, pifdata | 8));

	*(__osExceptionVector *)UT_VEC = __osExceptionPreamble;
	*(__osExceptionVector *)XUT_VEC = __osExceptionPreamble;
	*(__osExceptionVector *)ECC_VEC = __osExceptionPreamble;
	*(__osExceptionVector *)E_VEC = __osExceptionPreamble;

	osWritebackDCache((void *)UT_VEC, E_VEC - UT_VEC + sizeof(__osExceptionVector));
	osInvalICache((void *)UT_VEC, E_VEC - UT_VEC + sizeof(__osExceptionVector));
	__osCartRomInit();
    osUnmapTLBAll();
	osMapTLBRdb();

	osClockRate = osClockRate * 3 / 4;

	if (osResetType == RESETTYPE_COLD) {
		bzero(&osAppNMIBuffer, 0x40);
	}

	if (osTvType == OS_TV_PAL) {
		osViClock = VI_PAL_CLOCK;
	} else if (osTvType == OS_TV_MPAL) {
		osViClock = VI_MPAL_CLOCK;
	} else {
		osViClock = VI_NTSC_CLOCK;
	}

	if (__osGetCause() & CAUSE_IP5) {
		while (1);
	}

	*(u32 *)PHYS_TO_K1(AI_CONTROL_REG) = 1;
	*(u32 *)PHYS_TO_K1(AI_DACRATE_REG) = 0x3fff;
	*(u32 *)PHYS_TO_K1(AI_BITRATE_REG) = 0xf;
}

extern OSPiHandle CartRomHandle;
extern OSPiHandle LeoDiskHandle;

/**
 * According to Nintendo's SDK this function should return a pointer to an
 * OSPiHandle, but the function only matches if the return statement is omitted.
 * By chance the value in v0 happens to be &CartRomHandle anyway.
 */
OSPiHandle *__osCartRomInit(void)
{
	CartRomHandle.type = DEVICE_TYPE_INIT;
	CartRomHandle.latency = IO_READ(0xa4600014);
	CartRomHandle.pulse = IO_READ(0xa4600018);
	CartRomHandle.pageSize = IO_READ(0xa460001c);
	CartRomHandle.relDuration = IO_READ(0xa4600020);

	LeoDiskHandle.type = DEVICE_TYPE_INIT;
	LeoDiskHandle.latency = IO_READ(0xa4600024);
	LeoDiskHandle.pulse = IO_READ(0xa4600028);
	LeoDiskHandle.pageSize = IO_READ(0xa460002c);
	LeoDiskHandle.relDuration = IO_READ(0xa4600030);
}
