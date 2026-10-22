/*
 * FUN_0055b880 (1437 B) — __thiscall method with heavy FPU math (3D transform).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_006f2de0(void *this, int idx);
extern float __fastcall FUN_0040cb00(void *this);
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

__declspec(naked) void FUN_0055b880(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_0076d978;
extern int DAT_0077d094;
extern int DAT_0076d064;
extern int DAT_007b8d20;
extern int DAT_007b8d1c;
extern int DAT_007b8d18;
extern int DAT_007704c4;
extern int DAT_0077de94;
extern int DAT_0076e1ec;
extern int DAT_0077de90;
extern int DAT_0077de8c;
extern int DAT_007dc728;
extern int DAT_0076d040;
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x130
        mov eax, dword ptr [DAT_007dab44]
        mov edx, dword ptr [DAT_007dab40]
        push    ebx
        mov     ebx, [ebp + 0x50]
        push    esi
        push    edi
        mov     edi, ecx                    ; save this
        mov     ecx, [eax]
        xor     ecx, edx
        mov     esi, [ecx + 0x24]
        xor     esi, 0x85739531
        push    7
        mov     ecx, esi
        mov     dword ptr [edi + 0x618], 7
        mov     [edi + 0x61c], ebx
        call    FUN_006f2de0
        fstp    dword ptr [ebp - 0x2c]
        fld     dword ptr [ebp + 0x3c]
        lea     ecx, [ebp - 0x18]
        fadd dword ptr [DAT_0076d978]
        fstp    dword ptr [ebp + 0x3c]
        fld     dword ptr [ebp + 0x38]
        fsub    dword ptr [ebp + 0x44]
        fstp    dword ptr [ebp - 0x18]
        fld     dword ptr [ebp + 0x3c]
        fsub    dword ptr [ebp + 0x48]
        fstp    dword ptr [ebp - 0x14]
        fld     dword ptr [ebp + 0x40]
        fsub    dword ptr [ebp + 0x4c]
        fstp    dword ptr [ebp - 0x10]
        call    FUN_0040cb00
        fsqrt
        lea     ecx, [ebp - 0x18]
        fmul dword ptr [DAT_0077d094]
        fstp    dword ptr [ebp - 0x30]
        call    FUN_0040cb00
        fsqrt
        fdivr dword ptr [DAT_0076d064]
        fld     st(0)
        fmul    dword ptr [ebp - 0x18]
        fstp    dword ptr [ebp - 0x18]
        fld     dword ptr [ebp - 0x14]
        fmul    st(0), st(1)
        fstp    dword ptr [ebp - 0x14]
        fld     dword ptr [ebp - 0x10]
        fmul    st(0), st(1)
        fstp    dword ptr [ebp - 0x10]
        fstp    st(0)
        fld     dword ptr [ebp - 0x14]
        fmul dword ptr [DAT_007b8d20]
        fld     dword ptr [ebp - 0x10]
        fmul dword ptr [DAT_007b8d1c]
        fsubp   st(1), st(0)
        fld     dword ptr [ebp - 0x10]
        fmul dword ptr [DAT_007b8d18]
        fld     dword ptr [ebp - 0x18]
        fmul dword ptr [DAT_007b8d20]
        fsubp   st(1), st(0)
        fstp    dword ptr [ebp - 0x20]
        fld     dword ptr [ebp - 0x18]
        fmul dword ptr [DAT_007b8d1c]
        fld     dword ptr [ebp - 0x14]
        fmul dword ptr [DAT_007b8d18]
        fsubp   st(1), st(0)
        fstp    dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp - 0x30]
        fadd    dword ptr [ebp + 0x44]
        fld     dword ptr [ebp - 0x20]
        fmul    dword ptr [ebp - 0x30]
        fadd    dword ptr [ebp + 0x48]
        fstp    dword ptr [ebp - 0x50]
        fld     dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp - 0x30]
        fadd    dword ptr [ebp + 0x4c]
        fstp    dword ptr [ebp - 0x4c]
        fld dword ptr [DAT_007b8d18]
        fmul    dword ptr [ebp - 0x2c]
        fadd    st(0), st(1)
        push    3
        mov     ecx, esi
        fstp    dword ptr [ebp - 0x24]
        fstp    st(0)
        fld dword ptr [DAT_007b8d1c]
        fmul    dword ptr [ebp - 0x2c]
        fadd    dword ptr [ebp - 0x50]
        fstp    dword ptr [ebp - 0x20]
        fld dword ptr [DAT_007b8d20]
        fmul    dword ptr [ebp - 0x2c]
        fadd    dword ptr [ebp - 0x4c]
        fstp    dword ptr [ebp - 0x1c]
        call    FUN_006f2de0
        push    4
        fstp    dword ptr [ebp + 0x44]
        mov     ecx, esi
        call    FUN_006f2de0
        fstp    dword ptr [ebp + 0x48]
        push    5
        mov     ecx, esi
        call    FUN_006f2de0
        fstp    dword ptr [ebp + 0x4c]
        mov     eax, ebx
        sub     eax, 5
        jz      case_5
        dec     eax
        jnz     after_switch
        /* case 6 */
        fld     dword ptr [ebp + 0x44]
        fmul dword ptr [DAT_007704c4]
        fstp    dword ptr [ebp + 0x44]
        fld     dword ptr [ebp + 0x48]
        fmul dword ptr [DAT_0077de94]
        fstp    dword ptr [ebp + 0x48]
        fld     dword ptr [ebp + 0x4c]
        fmul dword ptr [DAT_0076d978]
        jmp     store_4c

    case_5:
        fld     dword ptr [ebp + 0x44]
        fmul dword ptr [DAT_0076e1ec]
        fstp    dword ptr [ebp + 0x44]
        fld     dword ptr [ebp + 0x48]
        fmul dword ptr [DAT_0077de90]
        fstp    dword ptr [ebp + 0x48]
        fld     dword ptr [ebp + 0x4c]
        fadd    st(0), st(0)

    store_4c:
        fstp    dword ptr [ebp + 0x4c]

    after_switch:
        fld     dword ptr [ebp - 0x24]
        lea     ecx, [ebp - 0xc]
        fsub    dword ptr [ebp + 0x38]
        fstp    dword ptr [ebp - 0xc]
        fld     dword ptr [ebp - 0x20]
        fsub    dword ptr [ebp + 0x3c]
        fstp    dword ptr [ebp - 0x8]
        fld     dword ptr [ebp - 0x1c]
        fsub    dword ptr [ebp + 0x40]
        fstp    dword ptr [ebp - 0x4]
        call    FUN_0040cb00
        fsqrt
        lea     edx, [ebp - 0x48]
        push    edx
        lea     ecx, [ebp - 0x60]
        fdivr dword ptr [DAT_0076d064]
        fld     dword ptr [ebp - 0xc]
        fmul    st(0), st(1)
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
        fstp    dword ptr [ebp - 0x50]
        fld     dword ptr [ebp - 0xc]
        fmul dword ptr [DAT_007b8d1c]
        fld     dword ptr [ebp - 0x8]
        fmul dword ptr [DAT_007b8d18]
        fsubp   st(1), st(0)
        fstp    dword ptr [ebp - 0x4c]
        fld     dword ptr [ebp - 0xc]
        fmul    dword ptr [ebp + 0x4c]
        fadd    dword ptr [ebp + 0x38]
        fld     dword ptr [ebp - 0x8]
        fmul    dword ptr [ebp + 0x4c]
        fadd    dword ptr [ebp + 0x3c]
        fstp    dword ptr [ebp - 0x2c]
        fld     dword ptr [ebp - 0x4]
        fmul    dword ptr [ebp + 0x4c]
        fadd    dword ptr [ebp + 0x40]
        fstp    dword ptr [ebp - 0x28]
        fxch    st(1)
        fmul    dword ptr [ebp + 0x44]
        fadd    st(0), st(1)
        fstp    dword ptr [ebp - 0x48]
        fstp    st(0)
        fld     dword ptr [ebp - 0x50]
        fmul    dword ptr [ebp + 0x44]
        fadd    dword ptr [ebp - 0x2c]
        fstp    dword ptr [ebp - 0x44]
        fld     dword ptr [ebp - 0x4c]
        fmul    dword ptr [ebp + 0x44]
        fadd    dword ptr [ebp - 0x28]
        fstp    dword ptr [ebp - 0x40]
        call    FUN_0040c410
        lea     eax, [ebp - 0x7c]
        lea     ecx, [ebp - 0xa0]
        mov     [ebp - 0x94], eax
        mov     [ebp - 0x90], ecx
        mov     dword ptr [ebp - 0x8c], 0
        mov     [ebp - 0x84], edi
        mov     dword ptr [ebp - 0x80], 0x1000
        mov     dword ptr [ebp - 0x64], 0x43160000
        mov     dword ptr [ebp + 0x38], 0
        mov     dword ptr [ebp + 0x3c], 0xbf800000
        mov     dword ptr [ebp + 0x40], 0
        lea     edx, [ebp + 0x38]
        push    edx
        lea     ecx, [ebp - 0x70]
        call    FUN_0040d560
        lea     eax, [ebp - 0x60]
        push    eax
        lea     ecx, [ebp - 0x7c]
        call    FUN_0040c410
        fld     dword ptr [ebp - 0x78]
        fadd dword ptr [DAT_0077de8c]
        lea     ecx, [ebp - 0x94]
        push    ecx
        mov ecx, dword ptr [DAT_007dc728]
        fstp    dword ptr [ebp - 0x78]
        mov     dword ptr [ebp + 0x50], 0
        call    FUN_004e2f40
        test    eax, eax
        jz      skip_cast
        mov     eax, [ebp - 0x64]
        lea     edx, [ebp - 0x60]
        push    edx
        push    eax
        lea     ecx, [ebp - 0x7c]
        call    FUN_004e8dc0
        fld     dword ptr [ebp - 0x5c]
        fadd    dword ptr [ebp + 0x48]
        fadd dword ptr [DAT_0076d040]
        jmp     after_cast
    skip_cast:
        fld     dword ptr [ebp + 0x50]
    after_cast:
        fld     st(0)
        lea     ecx, [ebp - 0xc]
        fmul dword ptr [DAT_007b8d18]
        fadd    dword ptr [ebp - 0x48]
        fstp    dword ptr [ebp - 0x3c]
        fld     st(0)
        fmul dword ptr [DAT_007b8d1c]
        fstp    dword ptr [ebp - 0x38]
        fmul dword ptr [DAT_007b8d20]
        fadd    dword ptr [ebp - 0x40]
        fstp    dword ptr [ebp - 0x34]
        fld     dword ptr [ebp - 0x24]
        fsub    dword ptr [ebp - 0x3c]
        fstp    dword ptr [ebp - 0xc]
        fld     dword ptr [ebp - 0x20]
        fsub    dword ptr [ebp - 0x38]
        fstp    dword ptr [ebp - 0x8]
        fld     dword ptr [ebp - 0x1c]
        fsub    dword ptr [ebp - 0x34]
        fstp    dword ptr [ebp - 0x4]
        call    FUN_0040cb00
        fsqrt
        lea     ecx, [ebp - 0xd0]
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
        call    FUN_00419e70
        push    0
        push    1
        push    2
        lea     ecx, [ebp - 0xc]
        push    ecx
        lea     ecx, [ebp - 0xd0]
        call    FUN_0041fde0
        lea     edx, [ebp - 0x3c]
        push    edx
        lea     ecx, [ebp - 0xd0]
        call    FUN_0040d030
        lea     eax, [ebp + 8]
        push    eax
        lea     ecx, [ebp - 0x100]
        call    FUN_00428850
        lea     ecx, [ebp - 0x100]
        push    ecx
        lea     ecx, [ebp + 8]
        call    FUN_004206b0
        mov     [ebp + 0x40], eax
        lea     edx, [ebp - 0xd0]
        lea     eax, [ebp - 0x130]
        mov     [ebp + 0x4c], edx
        mov     [ebp + 0x50], eax
        mov     edx, [ebp + 0x4c]
        push    esi
        mov     esi, [ebp + 0x40]
        mov     eax, [ebp + 0x50]
        /* 4x4 matrix multiply loop (unrolled) */
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
        lea     ecx, [ebp - 0x130]
        push    ecx
        mov     ecx, edi
        call    FUN_004daa20
        mov     edx, [edi]
        push    1
        mov     ecx, edi
        call    dword ptr [edx + 0x48]
        mov     byte ptr [edi + 0x338], 1
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4c
    }


}
