#ifndef _FRAGMENT16_H_
#define _FRAGMENT16_H_

#include "global.h"
#include "prevent_bss_reordering.h"

typedef struct unk_D_86A025A0 {
    /* 0x00 */ s8 unk_00;
    /* 0x01 */ s8 unk_01;
    /* 0x02 */ u16 unk_02;
} unk_D_86A025A0; // size = 0x4

typedef struct unk_D_86A02750 {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ char* unk_04[2];
} unk_D_86A02750; // size = 0xC

typedef struct unk_D_86A03014 {
    /* 0x00 */ u16 unk_00;
    /* 0x02 */ u16 unk_02;
    /* 0x04 */ u8 unk_04;
    /* 0x05 */ u8 unk_05;
    /* 0x08 */ unk_D_86A02750* unk_08;
} unk_D_86A03014; // size = 0xC

typedef struct unk_D_86A03170 {
    /* 0x00 */ s16 unk_00;
    /* 0x02 */ s16 unk_02;
    /* 0x04 */ s8 unk_04;
    /* 0x06 */ s16 unk_06;
    /* 0x08 */ s16 unk_08;
    /* 0x0C */ f32 unk_0C;
    /* 0x10 */ f32 unk_10;
    /* 0x14 */ f32 unk_14;
    /* 0x18 */ f32 unk_18;
} unk_D_86A03170; // size = 0x1C

typedef struct unk_D_86A04328 {
    /* 0x00 */ Vec3f unk_00;
    /* 0x0C */ f32 unk_0C;
    /* 0x10 */ f32 unk_10;
    /* 0x14 */ Vec3f unk_14;
    /* 0x20 */ f32 unk_20;
    /* 0x24 */ f32 unk_24;
    /* 0x28 */ f32 unk_28;
    /* 0x2C */ f32 unk_2C;
    /* 0x30 */ f32 unk_30;
    /* 0x34 */ f32 unk_34;
} unk_D_86A04328; // size = 0x38

extern unk_D_86A03170 D_86A03170[17][6];

extern u16 D_86A05B50;
extern char D_86A05B60;
extern char D_86A05B64;
extern char D_86A05B68;
extern char D_86A05B6C;
extern char D_86A05B70;
extern char D_86A05B74;
extern char D_86A05B78;
extern char D_86A05B7C;
extern char D_86A05B80;
extern char D_86A05B84;
extern char D_86A05B88;
extern char D_86A05B8C;
extern char D_86A05B90;
extern char D_86A05B94;
extern char D_86A05B98;
extern char D_86A05B9C;
extern char D_86A05BA0;
extern char D_86A05BA4;
extern char D_86A05BA8;
extern char D_86A05BAC;
extern char D_86A05BB0;
extern char D_86A05BB4;
extern char D_86A05BB8;
extern char D_86A05BBC;
extern char D_86A05BC0;
extern char D_86A05BC4;
extern char D_86A05BC8;
extern char D_86A05BCC;
extern char D_86A05BD0;
extern char D_86A05BD4;
extern char D_86A05BD8;
extern char D_86A05BDC;
extern char D_86A05BE0;
extern char D_86A05BE4;
extern char D_86A05BE8;
extern char D_86A05BEC;
extern char D_86A05BF0;
extern char D_86A05BF4;
extern char D_86A05BF8;
extern char D_86A05BFC;
extern char D_86A05C00;
extern char D_86A05C04;
extern char D_86A05C08;
extern char D_86A05C0C;
extern char D_86A05C10;
extern char D_86A05C14;
extern char D_86A05C18;
extern char D_86A05C1C;
extern char D_86A05C20;
extern char D_86A05C24;
extern char D_86A05C28;
extern char D_86A05C2C;
extern char D_86A05C30;
extern char D_86A05C34;
extern char D_86A05C38;
extern char D_86A05C3C;
extern char D_86A05C40;
extern char D_86A05C44;
extern char D_86A05C48;
extern char D_86A05C4C;
extern char D_86A05C50;
extern char D_86A05C54;
extern char D_86A05C58;
extern char D_86A05C5C;
extern char D_86A05C60;
extern char D_86A05C64;
extern char D_86A05C68;
extern char D_86A05C6C;
extern char D_86A05C70;
extern char D_86A05C74;
extern char D_86A05C78;
extern char D_86A05C7C;
extern char D_86A05C80;
extern char D_86A05C84;
extern char D_86A05C88;
extern char D_86A05C8C;
extern char D_86A05C90;
extern char D_86A05C94;
extern char D_86A05C98;
extern char D_86A05C9C;
extern char D_86A05CA0;
extern char D_86A05CA4;
extern char D_86A05CA8;
extern char D_86A05CAC;
extern char D_86A05CB0;
extern char D_86A05CB4;
extern char D_86A05CB8;
extern char D_86A05CBC;
extern char D_86A05CC0;
extern char D_86A05CC4;
extern char D_86A05CC8;
extern char D_86A05CCC;
extern char D_86A05CD0;
extern char D_86A05CD4;
extern char D_86A05CD8;
extern char D_86A05CDC;
extern char D_86A05CE0;
extern char D_86A05CE4;
extern char D_86A05CE8;
extern char D_86A05CEC;
extern char D_86A05CF0;
extern char D_86A05CF4;
extern char D_86A05CF8;
extern char D_86A05CFC;
extern char D_86A05D00;
extern char D_86A05D04;
extern char D_86A05D08;
extern char D_86A05D0C;
extern char D_86A05D10;
extern char D_86A05D14;
extern char D_86A05D18;
extern char D_86A05D1C;
extern char D_86A05D20;
extern char D_86A05D24;
extern char D_86A05D28;
extern char D_86A05D2C;
extern char D_86A05D30;
extern char D_86A05D34;
extern char D_86A05D38;
extern char D_86A05D3C;
extern char D_86A05D40;
extern char D_86A05D44;
extern char D_86A05D48;
extern char D_86A05D4C;
extern char D_86A05D50;
extern char D_86A05D54;
extern char D_86A05D58;
extern char D_86A05D5C;
extern char D_86A05D60;
extern char D_86A05D64;
extern char D_86A05D68;
extern char D_86A05D6C;
extern char D_86A05D70;
extern char D_86A05D74;
extern char D_86A05D78;
extern char D_86A05D7C;
extern char D_86A05D80;
extern char D_86A05D84;
extern char D_86A05D88;
extern char D_86A05D8C;
extern char D_86A05D90;
extern char D_86A05D94;
extern char D_86A05D98;
extern char D_86A05D9C;
extern char D_86A05DA0;
extern char D_86A05DA4;
extern char D_86A05DA8;
extern char D_86A05DAC;
extern char D_86A05DB0;
extern char D_86A05DB4;
extern char D_86A05DB8;
extern char D_86A05DBC;
extern char D_86A05DC0;
extern char D_86A05DC4;
extern char D_86A05DC8;
extern char D_86A05DCC;
extern char D_86A05DD0;
extern char D_86A05DD4;
extern char D_86A05DD8;
extern char D_86A05DDC;
extern char D_86A05DE0;
extern char D_86A05DE4;
extern char D_86A05DE8;
extern char D_86A05DEC;
extern char D_86A05DF0;
extern char D_86A05DF4;
extern char D_86A05DF8;
extern char D_86A05DFC;
extern char D_86A05E00;
extern char D_86A05E04;
extern char D_86A05E08;
extern char D_86A05E0C;
extern char D_86A05E10;
extern char D_86A05E14;
extern char D_86A05E18;
extern char D_86A05E1C;
extern char D_86A05E20;
extern char D_86A05E24;
extern char D_86A05E28;
extern char D_86A05E2C;
extern char D_86A05E30;
extern char D_86A05E34;
extern char D_86A05E38;
extern char D_86A05E3C;
extern char D_86A05E40;
extern char D_86A05E44;
extern char D_86A05E48;
extern char D_86A05E4C;
extern char D_86A05E50;
extern char D_86A05E54;
extern char D_86A05E58;
extern char D_86A05E5C;
extern char D_86A05E60;
extern char D_86A05E64;
extern char D_86A05E68;
extern char D_86A05E6C;
extern char D_86A05E70;
extern char D_86A05E74;
extern char D_86A05E78;
extern char D_86A05E7C;
extern char D_86A05E80;
extern char D_86A05E84;
extern char D_86A05E88;
extern char D_86A05E8C;
extern char D_86A05E90;
extern char D_86A05E94;
extern char D_86A05E98;
extern char D_86A05E9C;
extern char D_86A05EA0;
extern char D_86A05EA4;
extern char D_86A05EA8;
extern char D_86A05EAC;
extern char D_86A05EB0;
extern char D_86A05EB4;
extern char D_86A05EB8;
extern char D_86A05EBC;
extern char D_86A05EC0;
extern char D_86A05EC4;
extern char D_86A05EC8;
extern char D_86A05ECC;
extern char D_86A05ED0;
extern char D_86A05ED4;
extern char D_86A05ED8;
extern char D_86A05EDC;
extern char D_86A05EE0;
extern char D_86A05EE4;
extern char D_86A05EE8;
extern char D_86A05EEC;
extern char D_86A05EF0;
extern char D_86A05EF4;
extern char D_86A05EF8;
extern char D_86A05EFC;
extern char D_86A05F00;
extern char D_86A05F04;
extern char D_86A05F08;
extern char D_86A05F0C;
extern char D_86A05F10;
extern char D_86A05F14;
extern char D_86A05F18;
extern char D_86A05F1C;
extern char D_86A05F20;
extern char D_86A05F24;
extern char D_86A05F28;
extern char D_86A05F2C;
extern char D_86A05F30;
extern char D_86A05F34;
extern char D_86A05F38;
extern char D_86A05F3C;
extern char D_86A05F40;
extern char D_86A05F44;
extern char D_86A05F48;
extern char D_86A05F4C;
extern char D_86A05F50;
extern char D_86A05F54;
extern char D_86A05F58;
extern char D_86A05F5C;
extern char D_86A05F60;
extern char D_86A05F64;
extern char D_86A05F68;
extern char D_86A05F6C;
extern char D_86A05F70;
extern char D_86A05F74;
extern char D_86A05F78;
extern char D_86A05F7C;
extern char D_86A05F80;
extern char D_86A05F84;
extern char D_86A05F88;
extern char D_86A05F8C;
extern char D_86A05F90;
extern char D_86A05F94;
extern char D_86A05F98;
extern char D_86A05F9C;
extern char D_86A05FA0;
extern char D_86A05FA4;
extern char D_86A05FA8;
extern char D_86A05FAC;
extern char D_86A05FB0;
extern char D_86A05FB4;
extern char D_86A05FB8;
extern char D_86A05FBC;
extern char D_86A05FC0;
extern char D_86A05FC4;
extern char D_86A05FC8;
extern char D_86A05FCC;
extern char D_86A05FD0;
extern char D_86A05FD4;
extern char D_86A05FD8;
extern char D_86A05FDC;
extern char D_86A05FE0;
extern char D_86A05FE4;
extern char D_86A05FE8;
extern char D_86A05FEC;
extern char D_86A05FF0;
extern char D_86A05FF4;
extern char D_86A05FF8;
extern char D_86A05FFC;
extern char D_86A06000;
extern char D_86A06004;
extern char D_86A06008;
extern char D_86A0600C;
extern char D_86A06010;
extern char D_86A06014;
extern char D_86A06018;
extern char D_86A0601C;
extern char D_86A06020;
extern char D_86A06024;
extern char D_86A06028;
extern char D_86A0602C;
extern char D_86A06030;
extern char D_86A06034;
extern char D_86A06038;
extern char D_86A0603C;
extern char D_86A06040;
extern char D_86A06044;
extern char D_86A06048;
extern char D_86A0604C;
extern char D_86A06050;
extern char D_86A06054;
extern char D_86A06058;
extern char D_86A0605C;
extern char D_86A06060;
extern char D_86A06064;
extern char D_86A06068;
extern char D_86A0606C;
extern char D_86A06070;
extern char D_86A06074;
extern char D_86A06078;
extern char D_86A0607C;
extern char D_86A06080;
extern char D_86A06084;
extern char D_86A06088;
extern char D_86A0608C;
extern char D_86A06090;
extern char D_86A06094;
extern char D_86A06098;
extern char D_86A0609C;
extern char D_86A060A0;
extern char D_86A060A4;
extern char D_86A060A8;
extern char D_86A060AC;
extern char D_86A060B0;
extern char D_86A060B4;
extern char D_86A060B8;
extern char D_86A060BC;
extern char D_86A060C0;
extern char D_86A060C4;
extern char D_86A060C8;
extern char D_86A060CC;
extern char D_86A060D0;
extern char D_86A060D4;
extern char D_86A060D8;
extern char D_86A060DC;
extern char D_86A060E0;
extern char D_86A060E4;
extern char D_86A060E8;
extern char D_86A060EC;
extern char D_86A060F0;
extern char D_86A060F4;
extern char D_86A060F8;
extern char D_86A060FC;
extern char D_86A06100;
extern char D_86A06104;
extern char D_86A06108;
extern char D_86A0610C;
extern char D_86A06110;
extern char D_86A06114;
extern char D_86A06118;
extern char D_86A0611C;
extern char D_86A06120;
extern char D_86A06124;
extern char D_86A06128;
extern char D_86A0612C;
extern char D_86A06130;
extern char D_86A06134;

extern u8 D_86A06210;
extern u8 D_86A06211;

extern u16 D_86A06220;
extern u16 D_86A06222;
extern Vec3f D_86A06228;
extern f32 D_86A06234;
extern Vec3f D_86A06238;
extern f32 D_86A06244;
extern Vec3f D_86A06248;
extern unk_D_86002F34_00C* D_86A06254;
extern s16 D_86A06258;
extern s16* D_86A0625C;

s32 func_86A00020(s32 arg0, struct GraphNode* arg1);
void func_86A013C8(u8 arg0, u8 arg1, unk_D_86A03014* arg2);
void func_86A01490(void);
void func_86A014F0(void);

u16 func_86A018C0(void);

void func_86A018D0(unk_D_86002F34_00C*, u16, s8, u8);
void func_86A01BEC(void);
void func_86A01CF0(s16*, s16*, s16*, unk_D_86002F34_00C*, u16, s8, u8);
void func_86A02164(void);
void func_86A021C0(s8*, u8*);

s32 func_86A023A0(s32);
void func_86A0240C(u8);

#endif // _FRAGMENT16_H_
