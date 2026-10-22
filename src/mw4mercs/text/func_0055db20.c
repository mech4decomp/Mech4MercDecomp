/*
 * FUN_0055db20 (1816 B) — __thiscall method with heavy FPU math (3D transform).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_00428850(void *this, int param);
extern void __fastcall FUN_00419f50(void *this, void *param);
extern void __fastcall FUN_00419f10(void *this, void *param);
extern void __fastcall FUN_00419460(void *this, void *param);
extern void __fastcall FUN_0041a070(void *this, void *param);
extern void __fastcall FUN_0040d560(void *this, void *param);
extern void __fastcall FUN_0040c410(void *this, void *param);
extern int __fastcall FUN_004e2f40(void *this, void *param);
extern void __fastcall FUN_004e8dc0(void *this, float val, void *param);
extern void __fastcall FUN_00419e70(void *this);
extern void __fastcall FUN_0040d030(void *this, void *param);
extern void __fastcall FUN_0041c830(void *this, void *a, void *b);
extern void __fastcall FUN_00767550(void *this, void *param);
extern int __fastcall FUN_004206b0(void *this, void *param);
extern void __fastcall FUN_004daa20(void *this, void *param);

__declspec(naked) void FUN_0055db20(void)
{
    

extern int DAT_0076d5f0;
extern int DAT_0077de8c;
extern int DAT_007dc728;
extern int DAT_007b8cec;
extern int DAT_0077016c;
extern int DAT_007b8cf0;
extern int DAT_007b8ce8;
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x1f0
        push    ebx
        mov     ebx, ecx                    ; save this
        fld     dword ptr [ebx + 0x51c]
        push    esi
        fcomp dword ptr [DAT_0076d5f0]
        push    edi
        mov     dword ptr [ebx + 0x618], 0xc
        fnstsw  ax
        test    ah, 1
        jz      no_clamp
        mov     dword ptr [ebx + 0x51c], 0x40000000
    no_clamp:
        mov     eax, [ebx + 0xc4]
        mov     ecx, [eax + 0xd8]
        add     ecx, 0x80
        xor     edi, edi
        push    ecx
        mov     [ebx + 0x528], edi
        lea     ecx, [ebp - 0x100]
        mov     [ebx + 0x52c], edi
        call    FUN_00428850
        lea     edx, [ebx + 0x518]
        push    edx
        lea     ecx, [ebp - 0x1c0]
        call    FUN_00419f50
        lea     eax, [ebx + 0x524]
        push    eax
        lea     ecx, [ebp - 0x190]
        call    FUN_00419f10
        lea     ecx, [ebp - 0x190]
        lea     edx, [ebp - 0x1c0]
        lea     eax, [ebp - 0x130]
        mov     [ebp - 0x4], ecx
        mov     [ebp - 0x8], edx
        mov     [ebp - 0xc], eax
        mov     edx, [ebp - 0x8]
        push    esi
        mov     esi, [ebp - 0x4]
        mov     eax, [ebp - 0xc]
        /* 4x4 matrix multiply #1 */
        fld     dword ptr [edx]
        fmul    dword ptr [esi]
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 4]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 4]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 8]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax + 4]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax + 8]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fadd    dword ptr [esi + 0xc]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x18]
        fxch    st(1)
        fstp    dword ptr [eax + 0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x10]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x14]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x18]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fadd    dword ptr [esi + 0x1c]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x28]
        fxch    st(1)
        fstp    dword ptr [eax + 0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x20]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x24]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x28]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fadd    dword ptr [esi + 0x2c]
        fstp    dword ptr [eax + 0x2c]
        pop     esi
        lea     ecx, [ebp - 0x100]
        push    ecx
        lea     ecx, [ebp - 0x160]
        call    FUN_00419460
        push    0x7b8ce8
        lea     ecx, [ebp - 0x160]
        call    FUN_0041a070
        lea     edx, [ebp - 0x160]
        lea     eax, [ebp - 0x130]
        lea     ecx, [ebp - 0xd0]
        mov     [ebp - 0x4], edx
        mov     [ebp - 0xc], eax
        mov     [ebp - 0x8], ecx
        mov     edx, [ebp - 0xc]
        push    esi
        mov     esi, [ebp - 0x4]
        mov     eax, [ebp - 0x8]
        /* 4x4 matrix multiply #2 */
        fld     dword ptr [edx]
        fmul    dword ptr [esi]
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 4]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 4]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 8]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax + 4]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax + 8]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fadd    dword ptr [esi + 0xc]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x18]
        fxch    st(1)
        fstp    dword ptr [eax + 0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x10]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x14]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x18]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fadd    dword ptr [esi + 0x1c]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x28]
        fxch    st(1)
        fstp    dword ptr [eax + 0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x20]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x24]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x28]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fadd    dword ptr [esi + 0x2c]
        fstp    dword ptr [eax + 0x2c]
        pop     esi
        mov     ecx, [ebp - 0xa4]
        mov     edx, [ebp - 0xc4]
        mov     eax, [ebp - 0xb4]
        mov     [ebp - 0x10], ecx
        lea     ecx, [ebp - 0xa0]
        mov     [ebp - 0x18], edx
        mov     [ebp - 0x14], eax
        lea     edx, [ebp - 0x94]
        lea     eax, [ebp - 0x60]
        push    ecx
        lea     ecx, [ebp - 0x88]
        mov     [ebp - 0x78], edx
        mov     [ebp - 0x74], eax
        mov     [ebp - 0x70], edi
        mov     [ebp - 0x68], ebx
        mov     dword ptr [ebp - 0x64], 0x1000
        mov     dword ptr [ebp - 0x7c], 0x42c80000
        mov     [ebp - 0xa0], edi
        mov     dword ptr [ebp - 0x9c], 0xbf800000
        mov     [ebp - 0x98], edi
        call    FUN_0040d560
        lea     edx, [ebp - 0x18]
        push    edx
        lea     ecx, [ebp - 0x94]
        call    FUN_0040c410
        fld     dword ptr [ebp - 0x90]
        fadd dword ptr [DAT_0077de8c]
        mov ecx, dword ptr [DAT_007dc728]
        lea     eax, [ebp - 0x78]
        push    eax
        fstp    dword ptr [ebp - 0x90]
        call    FUN_004e2f40
        test    eax, eax
        jz      skip_cast
        mov     edx, [ebp - 0x7c]
        lea     ecx, [ebp - 0x18]
        push    ecx
        push    edx
        lea     ecx, [ebp - 0x94]
        call    FUN_004e8dc0
        fld     dword ptr [ebp - 0x14]
        fadd    dword ptr [ebx + 0x51c]
        fstp    dword ptr [ebp - 0x14]
    skip_cast:
        lea     ecx, [ebp - 0xd0]
        call    FUN_00419e70
        lea     eax, [ebp - 0x18]
        push    eax
        lea     ecx, [ebp - 0xd0]
        call    FUN_0040d030
        fld     dword ptr [ebp - 0xe4]
        mov ecx, dword ptr [DAT_007b8cec]
        fadd dword ptr [DAT_0077016c]
        mov eax, dword ptr [DAT_007b8cf0]
        mov edx, dword ptr [DAT_007b8ce8]
        mov     [ebp - 0x20], ecx
        fstp    dword ptr [ebp - 0x38]
        mov     ecx, [ebp - 0xf4]
        mov     [ebp - 0x1c], eax
        mov     [ebp - 0x3c], ecx
        lea     eax, [ebp - 0xd0]
        push    eax
        lea     ecx, [ebp - 0x3c]
        mov     [ebp - 0x24], edx
        mov     edx, [ebp - 0xd4]
        push    ecx
        lea     ecx, [ebp - 0x48]
        mov     [ebp - 0x34], edx
        call    FUN_0041c830
        mov     edx, [ebp - 0x48]
        mov     ecx, [ebp - 0x40]
        mov     eax, [ebp - 0x44]
        mov     [ebp - 0x30], edx
        lea     edx, [ebp - 0x30]
        mov     [ebp - 0x28], ecx
        push    edx
        lea     ecx, [ebp - 0x54]
        mov     [ebp - 0x2c], eax
        call    FUN_00767550
        mov     ecx, [ebp - 0x50]
        mov     eax, [ebp - 0x54]
        lea     edx, [ebp - 0x24]
        mov     [ebp - 0x20], ecx
        push    edx
        lea     ecx, [ebp - 0xd0]
        mov     [ebp - 0x24], eax
        call    FUN_0041a070
        mov     ecx, 0xc
        lea     esi, [ebp - 0x100]
        lea     edi, [ebp - 0x1f0]
        lea     eax, [ebp - 0x1f0]
        rep movsd
        push    eax
        lea     ecx, [ebp - 0x100]
        call    FUN_004206b0
        lea     ecx, [ebp - 0xd0]
        lea     edx, [ebp - 0x130]
        mov     [ebp - 0x4], eax
        mov     [ebp - 0xc], ecx
        mov     [ebp - 0x8], edx
        mov     edx, [ebp - 0xc]
        push    esi
        mov     esi, [ebp - 0x4]
        mov     eax, [ebp - 0x8]
        /* 4x4 matrix multiply #3 */
        fld     dword ptr [edx]
        fmul    dword ptr [esi]
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 4]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 4]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 8]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax + 4]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax + 8]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fadd    dword ptr [esi + 0xc]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x18]
        fxch    st(1)
        fstp    dword ptr [eax + 0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x10]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x14]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x18]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fadd    dword ptr [esi + 0x1c]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x28]
        fxch    st(1)
        fstp    dword ptr [eax + 0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x20]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x24]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x28]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fadd    dword ptr [esi + 0x2c]
        fstp    dword ptr [eax + 0x2c]
        pop     esi
        lea     eax, [ebp - 0x130]
        push    eax
        mov     ecx, ebx
        call    FUN_004daa20
        mov     edx, [ebx]
        push    1
        mov     ecx, ebx
        call    dword ptr [edx + 0x48]
        pop     edi
        pop     esi
        mov     byte ptr [ebx + 0x338], 1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }


}
