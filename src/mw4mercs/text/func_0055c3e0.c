/*
 * FUN_0055c3e0 (1147 B) — __thiscall method with heavy FPU math (3D transform).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_006f2de0(void *this, int idx);
extern float __fastcall FUN_0040cb00(void *this);
extern void __fastcall FUN_0055c860(void *this);
extern void __fastcall FUN_0040c410(void *this, void *param);
extern void __fastcall FUN_0040d560(void *this, void *param);
extern int __fastcall FUN_004e2f40(void *this, void *param);
extern void __fastcall FUN_004e8dc0(void *this, float val, void *param);
extern void __fastcall FUN_00419e70(void *this);
extern void __fastcall FUN_0041fde0(void *this, void *vec, int a, int b, int c);
extern void __fastcall FUN_0040d030(void *this, void *param);
extern void __fastcall FUN_00428850(void *this, void *param);
extern int __fastcall FUN_004206b0(void *this, void *param);
extern void __fastcall FUN_004daa20(void *this, void *param);

__declspec(naked) void FUN_0055c3e0(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_0076d064;
extern int DAT_007b8d20;
extern int DAT_007b8d1c;
extern int DAT_007b8d18;
extern int DAT_0076d070;
extern int DAT_0077d030;
extern int DAT_007dc728;
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x12c
        mov eax, dword ptr [DAT_007dab44]
        mov edx, dword ptr [DAT_007dab40]
        push    esi
        push    edi
        mov     edi, ecx                    ; save this
        mov     ecx, [eax]
        xor     ecx, edx
        mov     esi, [ecx + 0x24]
        xor     esi, 0x85739531
        push    9
        mov     ecx, esi
        mov     dword ptr [edi + 0x618], 8
        mov     dword ptr [edi + 0x61c], 3
        call    FUN_006f2de0
        fstp    dword ptr [ebp - 0x1c]
        push    0xa
        mov     ecx, esi
        call    FUN_006f2de0
        fstp    dword ptr [ebp - 0x20]
        push    0xb
        mov     ecx, esi
        call    FUN_006f2de0
        fld     dword ptr [ebp + 0x24]
        fadd    st(0), st(1)
        mov     edx, [ebp + 0x14]
        mov     eax, [ebp + 0x34]
        lea     ecx, [ebp - 0xc]
        fstp    dword ptr [ebp - 0x34]
        mov     [ebp - 0x38], edx
        mov     [ebp - 0x30], eax
        fstp    st(0)
        fld     dword ptr [ebp + 0x44]
        fsub    dword ptr [ebp + 0x14]
        fstp    dword ptr [ebp - 0xc]
        fld     dword ptr [ebp + 0x54]
        fsub    dword ptr [ebp - 0x34]
        fstp    dword ptr [ebp - 0x8]
        fld     dword ptr [ebp + 0x64]
        fsub    dword ptr [ebp + 0x34]
        fstp    dword ptr [ebp - 0x4]
        call    FUN_0040cb00
        fsqrt
        lea     ecx, [ebp - 0xc]
        fst     dword ptr [ebp + 0x64]
        fdiv    dword ptr [ebp - 0x1c]
        fstp    dword ptr [ebp - 0x44]
        fld     dword ptr [ebp + 0x64]
        fdiv    dword ptr [ebp - 0x20]
        fstp    dword ptr [ebp - 0x40]
        call    FUN_0040cb00
        fsqrt
        fdivr dword ptr [DAT_0076d064]
        fld     st(0)
        fmul    dword ptr [ebp - 0xc]
        fstp    dword ptr [ebp - 0xc]
        fld     dword ptr [ebp - 0x8]
        fmul    st(0), st(1)
        fstp    dword ptr [ebp - 0x8]
        fld     dword ptr [ebp - 0x4]
        fmul    st(0), st(1)
        fstp    dword ptr [ebp - 0x4]
        fstp    st(0)
        fld     dword ptr [ebp - 0x8]
        fmul dword ptr [DAT_007b8d20]
        fld     dword ptr [ebp - 0x4]
        fmul dword ptr [DAT_007b8d1c]
        fsubp   st(1), st(0)
        fld     dword ptr [ebp - 0x4]
        fmul dword ptr [DAT_007b8d18]
        fld     dword ptr [ebp - 0xc]
        fmul dword ptr [DAT_007b8d20]
        fsubp   st(1), st(0)
        fstp    dword ptr [ebp - 0x4c]
        fld     dword ptr [ebp - 0xc]
        fmul dword ptr [DAT_007b8d1c]
        fld     dword ptr [ebp - 0x8]
        fmul dword ptr [DAT_007b8d18]
        fsubp   st(1), st(0)
        fstp    dword ptr [ebp - 0x48]
        lea     ecx, [ebp - 0x9c]
        fld     dword ptr [ebp + 0x64]
        push    ecx
        fmul dword ptr [DAT_0076d070]
        lea     edx, [ebp - 0x78]
        push    edx
        lea     ecx, [ebp - 0x90]
        fld     st(0)
        fmul    dword ptr [ebp - 0xc]
        fadd    dword ptr [ebp - 0x38]
        fstp    dword ptr [ebp + 0x5c]
        fld     dword ptr [ebp - 0x8]
        fmul    st(0), st(1)
        fadd    dword ptr [ebp - 0x34]
        fstp    dword ptr [ebp + 0x60]
        fld     dword ptr [ebp - 0x4]
        fmul    st(0), st(1)
        fadd    dword ptr [ebp - 0x30]
        fstp    dword ptr [ebp + 0x64]
        fstp    st(0)
        fmul    dword ptr [ebp - 0x44]
        fadd    dword ptr [ebp + 0x5c]
        fld     dword ptr [ebp - 0x4c]
        fmul    dword ptr [ebp - 0x44]
        fadd    dword ptr [ebp + 0x60]
        fstp    dword ptr [ebp - 0x34]
        fld     dword ptr [ebp - 0x48]
        fmul    dword ptr [ebp - 0x44]
        fadd    dword ptr [ebp + 0x64]
        fstp    dword ptr [ebp - 0x30]
        fld dword ptr [DAT_007b8d18]
        fmul    dword ptr [ebp - 0x40]
        fadd    st(0), st(1)
        fstp    dword ptr [ebp - 0x2c]
        fstp    st(0)
        fld dword ptr [DAT_007b8d1c]
        fmul    dword ptr [ebp - 0x40]
        fadd    dword ptr [ebp - 0x34]
        fstp    dword ptr [ebp - 0x28]
        fld dword ptr [DAT_007b8d20]
        fmul    dword ptr [ebp - 0x40]
        fadd    dword ptr [ebp - 0x30]
        fstp    dword ptr [ebp - 0x24]
        call    FUN_0055c860
        lea     eax, [ebp - 0x2c]
        push    eax
        lea     ecx, [ebp - 0x5c]
        mov     [ebp - 0x80], edi
        mov     dword ptr [ebp - 0x7c], 0x1000
        call    FUN_0040c410
        lea     ecx, [ebp - 0x50]
        push    ecx
        lea     ecx, [ebp - 0x6c]
        mov     dword ptr [ebp - 0x60], 0x43960000
        mov     dword ptr [ebp - 0x50], 0
        mov     dword ptr [ebp - 0x4c], 0xbf800000
        mov     dword ptr [ebp - 0x48], 0
        call    FUN_0040d560
        lea     edx, [ebp - 0x5c]
        push    edx
        lea     ecx, [ebp - 0x78]
        call    FUN_0040c410
        fld     dword ptr [ebp - 0x74]
        fadd dword ptr [DAT_0077d030]
        mov ecx, dword ptr [DAT_007dc728]
        lea     eax, [ebp - 0x90]
        push    eax
        fstp    dword ptr [ebp - 0x74]
        call    FUN_004e2f40
        test    eax, eax
        jz      skip_cast
        mov     edx, [ebp - 0x60]
        lea     ecx, [ebp - 0x5c]
        push    ecx
        push    edx
        lea     ecx, [ebp - 0x78]
        call    FUN_004e8dc0
        fld     dword ptr [ebp - 0x58]
        fadd    dword ptr [ebp - 0x40]
        fstp    dword ptr [ebp - 0x28]
    skip_cast:
        fld     dword ptr [ebp + 0x5c]
        lea     ecx, [ebp - 0xcc]
        fsub    dword ptr [ebp - 0x2c]
        fld     dword ptr [ebp + 0x60]
        fsub    dword ptr [ebp - 0x28]
        fstp    dword ptr [ebp - 0x14]
        fld     dword ptr [ebp + 0x64]
        fsub    dword ptr [ebp - 0x24]
        fst     dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp - 0x10]
        fld     dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp - 0x14]
        faddp   st(1), st(0)
        fld     st(1)
        fmul    st(0), st(2)
        faddp   st(1), st(0)
        fsqrt
        fdivr dword ptr [DAT_0076d064]
        fst     dword ptr [ebp + 0x64]
        fmul    st(0), st(1)
        fstp    dword ptr [ebp - 0x18]
        fstp    st(0)
        fld     dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp + 0x64]
        fstp    dword ptr [ebp - 0x14]
        fld     dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp + 0x64]
        fstp    dword ptr [ebp - 0x10]
        call    FUN_00419e70
        push    0
        push    1
        push    2
        lea     eax, [ebp - 0x18]
        push    eax
        lea     ecx, [ebp - 0xcc]
        call    FUN_0041fde0
        lea     ecx, [ebp - 0x2c]
        push    ecx
        lea     ecx, [ebp - 0xcc]
        call    FUN_0040d030
        lea     edx, [ebp + 8]
        push    edx
        lea     ecx, [ebp - 0xfc]
        call    FUN_00428850
        lea     eax, [ebp - 0xfc]
        push    eax
        lea     ecx, [ebp + 8]
        call    FUN_004206b0
        lea     ecx, [ebp - 0xcc]
        lea     edx, [ebp - 0x12c]
        mov     [ebp - 0x20], eax
        mov     [ebp - 0x1c], ecx
        mov     [ebp + 0x64], edx
        mov     edx, [ebp - 0x1c]
        push    esi
        mov     esi, [ebp - 0x20]
        mov     eax, [ebp + 0x64]
        /* 4x4 matrix multiply (unrolled) */
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
        lea     eax, [ebp - 0x12c]
        push    eax
        mov     ecx, edi
        call    FUN_004daa20
        mov     edx, [edi]
        push    1
        mov     ecx, edi
        call    dword ptr [edx + 0x48]
        mov     byte ptr [edi + 0x338], 1
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x60
    }


}
