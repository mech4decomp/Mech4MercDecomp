/*
 * FUN_0058a840 (1446 B) — __thiscall (ECX = this), RET 0xC.
 * CFLAGS: /O1
 */

#include <windows.h>

/* External data symbols (absolute addresses; relocations masked by diff) */
extern int   DAT_007b8ce8;
extern int   DAT_007b8cec;
extern int   DAT_007b8cf0;
extern float DAT_0077016c;
extern int   DAT_007dc728;
extern int   DAT_007b8d68;
extern int   DAT_007b8d6c;
extern int   DAT_007b8d70;
extern float DAT_0076c5b0;
extern int   DAT_007b8cd8;
extern int   DAT_007b8cdc;
extern int   DAT_007b8ce0;
extern int   DAT_007b8ce4;
extern int   DAT_007b8d88;
extern int   DAT_007b8d8c;
extern int   DAT_007b8d90;

/* External function declarations */
extern void __fastcall FUN_0041c680(void *, void *);
extern void __fastcall FUN_0040c9e0(void *, void *);
extern void __fastcall FUN_0041acb0(void *, void *);
extern void __fastcall FUN_0040c410(void *, void *);
extern void __stdcall FUN_0040d560(void *);
extern int __fastcall FUN_004e2f40(int, void *);
extern void __fastcall FUN_004e8dc0(void *, void *);
extern void __fastcall FUN_0041c6e0(void *, void *, void *);
extern void __fastcall FUN_0040d030(void *, void *);
extern void __fastcall FUN_0041a070(void *, void *);
extern void __fastcall FUN_004daa20(void *, void *);
extern void __fastcall FUN_0041afa0(void *, void *);
extern void __fastcall FUN_0041bb80(void *, void *, void *);
extern void __fastcall FUN_0041a160(void *, void *);
extern void __fastcall FUN_0041b680(void *);

__declspec(naked) void FUN_0058a840(void)
{
    __asm {
        sub     esp, 0x130
        mov     eax, dword ptr [esp + 0x138]
        fld     dword ptr [esp + 0x134]
        fmul    dword ptr [eax]
        push    esi
        push    edi
        mov     esi, ecx
        mov     edi, dword ptr [esi + 0xd8]
        fstp    dword ptr [esp + 0x8c]
        fld     dword ptr [esp + 0x13c]
        add     edi, 0x80
        fmul    dword ptr [eax + 4]
        push    edi
        lea     ecx, [esp + 0xf4]
        fstp    dword ptr [esp + 0x94]
        fld     dword ptr [esp + 0x140]
        fmul    dword ptr [eax + 8]
        lea     eax, [esp + 0x90]
        push    eax
        fstp    dword ptr [esp + 0x9c]
        call    FUN_0041c680
        mov     ecx, dword ptr [edi + 0xc]
        mov     dword ptr [esp + 0x40], ecx
        mov     edx, dword ptr [edi + 0x1c]
        mov     dword ptr [esp + 0x44], edx
        mov     eax, dword ptr [edi + 0x2c]
        lea     ecx, [esp + 0xf0]
        push    ecx
        lea     edx, [esp + 0x44]
        push    edx
        lea     ecx, [esp + 0x48]
        mov     dword ptr [esp + 0x50], eax
        call    FUN_0040c9e0
        mov     ecx, dword ptr [DAT_007b8ce8]
        mov     eax, dword ptr [DAT_007b8cec]
        mov     edx, dword ptr [DAT_007b8cf0]
        mov     dword ptr [esp + 0xc], ecx
        push    edi
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x18], edx
        call    FUN_0041acb0
        fld     dword ptr [esp + 0x13c]
        mov     eax, dword ptr [esp + 0x144]
        fmul    dword ptr [eax + 4]
        lea     ecx, [esp + 0x98]
        push    ecx
        mov     ecx, dword ptr [esp + 0x140]
        fadd    dword ptr [esp + 0x10]
        lea     edx, [esp + 0xe8]
        push    edx
        fstp    dword ptr [esp + 0x14]
        push    ecx
        fld     dword ptr [esp + 0x148]
        mov     ecx, esi
        fmul    dword ptr [eax]
        fadd    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x148]
        fmul    dword ptr [eax + 8]
        mov     eax, dword ptr [esi]
        fadd    dword ptr [esp + 0x20]
        fstp    dword ptr [esp + 0x20]
        call    dword ptr [eax + 0x164]
        test    al, al
        jz      label_0x58a98a
        mov     edx, dword ptr [esp + 0x9c]
        mov     ecx, dword ptr [esp + 0xa0]
        mov     eax, dword ptr [esp + 0x98]
        mov     dword ptr [esp + 0x10], edx
        lea     edx, [esp + 0xe4]
        mov     dword ptr [esp + 0x14], ecx
        push    edx
        lea     ecx, [esp + 0x44]
        mov     dword ptr [esp + 0x10], eax
        call    FUN_0040c410

label_0x58a98a:
        mov     eax, dword ptr [esi + 0x458]
        push    0x7b8d08
        lea     ecx, [esp + 0x5c]
        mov     dword ptr [esp + 0x68], eax
        call    FUN_0040d560
        lea     ecx, [esp + 0x40]
        push    ecx
        lea     ecx, [esp + 0x50]
        call    FUN_0040c410
        fld     dword ptr [esp + 0x50]
        fadd    dword ptr [DAT_0077016c]
        lea     ecx, [esp + 0x74]
        lea     edx, [esp + 0x4c]
        lea     eax, [esp + 0xfc]
        push    ecx
        fstp    dword ptr [esp + 0x54]
        mov     ecx, dword ptr [DAT_007dc728]
        mov     dword ptr [esp + 0x78], edx
        mov     dword ptr [esp + 0x7c], eax
        mov     dword ptr [esp + 0x80], 0
        mov     dword ptr [esp + 0x88], esi
        mov     dword ptr [esp + 0x8c], 0x1000
        call    FUN_004e2f40
        test    eax, eax
        mov     edx, dword ptr [DAT_007b8d68]
        mov     ecx, dword ptr [DAT_007b8d6c]
        mov     dword ptr [esp + 0x18], edx
        mov     edx, dword ptr [DAT_007b8d70]
        mov     dword ptr [esp + 0x1c], ecx
        mov     dword ptr [esp + 0x20], edx
        jnz     label_0x58aaa7
        mov     ecx, dword ptr [DAT_007dc728]
        lea     eax, [esp + 0x74]
        push    eax
        mov     dword ptr [esp + 0x68], 0x461c4000
        call    FUN_004e2f40
        test    eax, eax
        jz      label_0x58aa6d
        mov     edx, dword ptr [esp + 0x64]
        lea     ecx, [esp + 0x40]
        push    ecx
        push    edx
        lea     ecx, [esp + 0x54]
        call    FUN_004e8dc0
        mov     eax, dword ptr [esp + 0x78]
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esp + 0x18], ecx
        mov     edx, dword ptr [eax + 4]
        mov     dword ptr [esp + 0x1c], edx
        mov     eax, dword ptr [eax + 8]
        mov     dword ptr [esp + 0x20], eax
        jmp     label_0x58aad2

label_0x58aa6d:
        lea     ecx, [esp + 0x24]
        push    ecx
        lea     ecx, [esp + 0x5c]
        mov     dword ptr [esp + 0x28], 0
        mov     dword ptr [esp + 0x2c], 0x3f800000
        mov     dword ptr [esp + 0x30], 0
        call    FUN_0040d560
        mov     ecx, dword ptr [DAT_007dc728]
        lea     edx, [esp + 0x74]
        push    edx
        call    FUN_004e2f40
        test    eax, eax
        jz      label_0x58aad2

label_0x58aaa7:
        mov     ecx, dword ptr [esp + 0x64]
        lea     eax, [esp + 0x40]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x54]
        call    FUN_004e8dc0
        mov     eax, dword ptr [esp + 0x78]
        mov     edx, dword ptr [eax]
        mov     dword ptr [esp + 0x18], edx
        mov     ecx, dword ptr [eax + 4]
        mov     dword ptr [esp + 0x1c], ecx
        mov     edx, dword ptr [eax + 8]
        mov     dword ptr [esp + 0x20], edx

label_0x58aad2:
        push    edi
        lea     eax, [esp + 0x1c]
        push    eax
        lea     ecx, [esp + 0x70]
        call    FUN_0041c6e0
        fld     dword ptr [esp + 0x6c]
        fcomp   dword ptr [DAT_0076c5b0]
        mov     dword ptr [esp + 0x3c], 0
        mov     dword ptr [esp + 8], 0
        fnstsw  ax
        test    ah, 0x40
        jnz     label_0x58ab1e
        fld     dword ptr [esp + 0x68]
        fld     dword ptr [esp + 0x6c]
        fpatan
        fstp    dword ptr [esp + 0x3c]
        fld     dword ptr [esp + 0x70]
        fld     dword ptr [esp + 0x6c]
        fpatan
        fstp    dword ptr [esp + 8]

label_0x58ab1e:
        lea     ecx, [esp + 0x40]
        push    ecx
        lea     ecx, [esp + 0x10c]
        call    FUN_0040d030
        lea     edx, [esp + 0xc]
        push    edx
        lea     ecx, [esp + 0x10c]
        call    FUN_0041a070
        lea     eax, [esp + 0x108]
        push    eax
        mov     ecx, esi
        call    FUN_004daa20
        mov     eax, dword ptr [esi + 0x2f4]
        mov     cl, byte ptr [eax + 0x1d]
        test    cl, cl
        jz      label_0x58addb
        mov     eax, dword ptr [eax + 0x14]
        cmp     eax, 0x1e
        jl      label_0x58acb7
        cmp     eax, 0x21
        jg      label_0x58acb7
        fld     dword ptr [esi + 0x600]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      label_0x58addb
        mov     edx, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [edx + 4]
        fld     dword ptr [esp + 0x3c]
        mov     ecx, dword ptr [esp + 8]
        fchs
        mov     edi, eax
        fstp    dword ptr [esp + 0x2c]
        mov     eax, dword ptr [DAT_007b8ce8]
        lea     edx, [esp + 0x24]
        mov     dword ptr [esp + 0x28], ecx
        push    edx
        lea     ecx, [esp + 0xa8]
        mov     dword ptr [esp + 0x28], eax
        call    FUN_0041afa0
        fld     dword ptr [esi + 0x604]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jnz     label_0x58ac37
        fld     dword ptr [esi + 0x604]
        fcomp   dword ptr [edi + 0x318]
        fnstsw  ax
        test    ah, 1
        jz      label_0x58abfb
        fld     dword ptr [esi + 0x604]
        fdiv    dword ptr [edi + 0x310]
        fstp    dword ptr [esp + 8]
        jmp     label_0x58ac03

label_0x58abfb:
        mov     dword ptr [esp + 8], 0x3f800000

label_0x58ac03:
        mov     eax, dword ptr [esp + 8]
        push    eax
        lea     ecx, [esp + 0xa8]
        push    ecx
        lea     edi, [esi + 0x60c]
        push    0x7b8cd8
        mov     ecx, edi
        call    FUN_0041bb80
        fld     dword ptr [esi + 0x604]
        fsub    dword ptr [esp + 0x13c]
        fstp    dword ptr [esi + 0x604]
        jmp     label_0x58ac5f

label_0x58ac37:
        mov     edx, dword ptr [DAT_007b8cd8]
        mov     eax, dword ptr [DAT_007b8cdc]
        mov     ecx, dword ptr [DAT_007b8ce0]
        lea     edi, [esi + 0x60c]
        mov     dword ptr [edi], edx
        mov     edx, dword ptr [DAT_007b8ce4]
        mov     dword ptr [edi + 4], eax
        mov     dword ptr [edi + 8], ecx
        mov     dword ptr [edi + 0xc], edx

label_0x58ac5f:
        mov     ecx, dword ptr [DAT_007b8d8c]
        mov     eax, dword ptr [DAT_007b8d88]
        mov     edx, dword ptr [DAT_007b8d90]
        mov     dword ptr [esp + 0x34], ecx
        push    edi
        lea     ecx, [esp + 0xb8]
        mov     dword ptr [esp + 0x34], eax
        mov     dword ptr [esp + 0x3c], edx
        call    FUN_0041a160
        mov     eax, dword ptr [esp + 0x30]
        mov     ecx, dword ptr [esp + 0x34]
        mov     edx, dword ptr [esp + 0x38]
        mov     dword ptr [esp + 0xc0], eax
        lea     eax, [esp + 0xb4]
        mov     dword ptr [esp + 0xd0], ecx
        mov     dword ptr [esp + 0xe0], edx
        push    eax
        jmp     label_0x58add0

label_0x58acb7:
        mov     edx, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [edx + 4]
        fld     dword ptr [esp + 0x3c]
        mov     ecx, dword ptr [esp + 8]
        fchs
        mov     edi, eax
        fstp    dword ptr [esp + 0x2c]
        mov     eax, dword ptr [DAT_007b8ce8]
        lea     edx, [esp + 0x24]
        mov     dword ptr [esp + 0x28], ecx
        push    edx
        lea     ecx, [esp + 0xa8]
        mov     dword ptr [esp + 0x28], eax
        call    FUN_0041afa0
        fld     dword ptr [esi + 0x600]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jnz     label_0x58ad6b
        fld     dword ptr [esi + 0x600]
        fcomp   dword ptr [edi + 0x30c]
        fnstsw  ax
        test    ah, 1
        jz      label_0x58ad26
        fld     dword ptr [esi + 0x600]
        fdiv    dword ptr [edi + 0x30c]
        fstp    dword ptr [esp + 8]
        jmp     label_0x58ad2e

label_0x58ad26:
        mov     dword ptr [esp + 8], 0x3f800000

label_0x58ad2e:
        mov     eax, dword ptr [esp + 8]
        push    eax
        lea     ecx, [esi + 0x5f0]
        push    ecx
        lea     edx, [esp + 0xac]
        lea     edi, [esi + 0x60c]
        push    edx
        mov     ecx, edi
        call    FUN_0041bb80
        mov     ecx, edi
        call    FUN_0041b680
        fld     dword ptr [esi + 0x600]
        fsub    dword ptr [esp + 0x13c]
        fstp    dword ptr [esi + 0x600]
        jmp     label_0x58ad7d

label_0x58ad6b:
        lea     eax, [esp + 0x24]
        lea     edi, [esi + 0x60c]
        push    eax
        mov     ecx, edi
        call    FUN_0041afa0

label_0x58ad7d:
        mov     ecx, dword ptr [DAT_007b8d88]
        mov     edx, dword ptr [DAT_007b8d8c]
        mov     eax, dword ptr [DAT_007b8d90]
        mov     dword ptr [esp + 0x30], ecx
        push    edi
        lea     ecx, [esp + 0xb8]
        mov     dword ptr [esp + 0x38], edx
        mov     dword ptr [esp + 0x3c], eax
        call    FUN_0041a160
        mov     ecx, dword ptr [esp + 0x30]
        mov     edx, dword ptr [esp + 0x34]
        mov     eax, dword ptr [esp + 0x38]
        mov     dword ptr [esp + 0xc0], ecx
        lea     ecx, [esp + 0xb4]
        mov     dword ptr [esp + 0xd0], edx
        mov     dword ptr [esp + 0xe0], eax
        push    ecx

label_0x58add0:
        mov     ecx, dword ptr [esi + 0x82c]
        call    FUN_004daa20

label_0x58addb:
        pop     edi
        pop     esi
        add     esp, 0x130
        ret     0xc
    }
}
