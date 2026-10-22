/*
 * FUN_0055ccf0 (1052 B) — __thiscall method with heavy FPU math (3D transform).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_006f2de0(void *this, int idx);
extern char __fastcall FUN_0041c540(void *this, void *a, int b);
extern void __fastcall FUN_0040c410(void *this, void *param);
extern void __fastcall FUN_0040d560(void *this, void *param);
extern int __fastcall FUN_004e2f40(void *this, void *param);
extern void __fastcall FUN_004e8dc0(void *this, float val, void *param);
extern void __fastcall FUN_00419e70(void *this);
extern void __fastcall FUN_0041fde0(void *this, void *vec, int a, int b, int c);
extern void __fastcall FUN_00419460(void *this, void *param);
extern int __fastcall FUN_004206b0(void *this, void *param);
extern void __fastcall FUN_004daa20(void *this, void *param);

__declspec(naked) void FUN_0055ccf0(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_0076d978;
extern int DAT_0076f5d8;
extern int DAT_0077de9c;
extern int DAT_007b220c;
extern int DAT_0077de8c;
extern int DAT_007dc728;
extern int DAT_007b8d18;
extern int DAT_007b8d1c;
extern int DAT_007b8d20;
extern int DAT_0077de98;
extern int DAT_0076d064;
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0xfc
        mov eax, dword ptr [DAT_007dab44]
        push    ebx
        mov     ebx, [ebp + 0x38]
        push    esi
        mov esi, dword ptr [DAT_007dab40]
        push    edi
        mov     edi, ecx                    ; save this
        mov     ecx, [eax]
        xor     ecx, esi
        mov     esi, [ecx + 0x24]
        xor     esi, 0x85739531
        push    0xf
        mov     ecx, esi
        mov     dword ptr [edi + 0x618], 0xa
        mov     [edi + 0x61c], ebx
        call    FUN_006f2de0
        fstp    dword ptr [ebp - 0x20]
        push    0x10
        mov     ecx, esi
        call    FUN_006f2de0
        fstp    dword ptr [ebp + 0x38]
        push    0x11
        mov     ecx, esi
        call    FUN_006f2de0
        fstp    dword ptr [ebp - 0x4]
        mov     eax, ebx
        sub     eax, 5
        jz      case_5
        dec     eax
        jnz     after_switch
        /* case 6 */
        fld     dword ptr [ebp - 0x4]
        fmul dword ptr [DAT_0076d978]
        fstp    dword ptr [ebp - 0x4]
        fld     dword ptr [ebp + 0x38]
        fmul dword ptr [DAT_0076f5d8]
        jmp     store_38

    case_5:
        fld     dword ptr [ebp - 0x4]
        fadd    st(0), st(0)
        fstp    dword ptr [ebp - 0x4]
        fld     dword ptr [ebp + 0x38]
        fmul dword ptr [DAT_0077de9c]

    store_38:
        fstp    dword ptr [ebp + 0x38]

    after_switch:
        mov edx, dword ptr [DAT_007b220c]
        push    edx
        lea     esi, [edi + 0x5bc]
        push    0x7b8d88
        push    esi
        call    FUN_0041c540
        add     esp, 0xc
        test    al, al
        jz      skip_copy
        fld     dword ptr [ebp + 0x14]
        lea     eax, [ebp - 0x10]
        fadd    dword ptr [ebp - 0x20]
        push    eax
        mov     ecx, esi
        fstp    dword ptr [ebp - 0x10]
        fld     dword ptr [ebp + 0x24]
        fadd    dword ptr [ebp + 0x38]
        fstp    dword ptr [ebp - 0xc]
        fld     dword ptr [ebp + 0x34]
        fadd    dword ptr [ebp - 0x4]
        fstp    dword ptr [ebp - 0x8]
        call    FUN_0040c410
    skip_copy:
        push    esi
        lea     ecx, [ebp - 0x2c]
        call    FUN_0040c410
        lea     ecx, [ebp - 0x48]
        lea     eax, [ebp - 0x10]
        mov     [ebp - 0x60], ecx
        lea     edx, [ebp - 0x6c]
        push    eax
        lea     ecx, [ebp - 0x3c]
        mov     [ebp - 0x5c], edx
        mov     dword ptr [ebp - 0x58], 0
        mov     [ebp - 0x50], edi
        mov     dword ptr [ebp - 0x4c], 0x1000
        mov     dword ptr [ebp - 0x30], 0x43160000
        mov     dword ptr [ebp - 0x10], 0
        mov     dword ptr [ebp - 0xc], 0xbf800000
        mov     dword ptr [ebp - 0x8], 0
        call    FUN_0040d560
        fld     dword ptr [ebp - 0x28]
        mov     ecx, [ebp - 0x2c]
        fadd dword ptr [DAT_0077de8c]
        mov     edx, [ebp - 0x24]
        lea     eax, [ebp - 0x60]
        mov     [ebp - 0x48], ecx
        fstp    dword ptr [ebp - 0x44]
        mov ecx, dword ptr [DAT_007dc728]
        push    eax
        mov     [ebp - 0x40], edx
        mov     dword ptr [ebp - 0x4], 0
        call    FUN_004e2f40
        test    eax, eax
        jz      skip_cast
        mov     edx, [ebp - 0x30]
        lea     ecx, [ebp - 0x2c]
        push    ecx
        push    edx
        lea     ecx, [ebp - 0x48]
        call    FUN_004e8dc0
        fld     dword ptr [ebp - 0x28]
        fadd    dword ptr [ebp + 0x38]
        fstp    dword ptr [ebp - 0x4]
    skip_cast:
        mov     ecx, [esi + 4]
        mov     eax, [esi]
        mov     edx, [esi + 8]
        mov     [ebp - 0xc], ecx
        fld     dword ptr [ebp - 0xc]
        fcomp   dword ptr [ebp - 0x4]
        mov     [ebp - 0x10], eax
        mov     [ebp - 0x8], edx
        fnstsw  ax
        test    ah, 1
        jz      no_lerp
        fld     dword ptr [ebp - 0x4]
        fmul dword ptr [DAT_007b8d18]
        fadd    dword ptr [ebp - 0x10]
        fstp    dword ptr [ebp - 0x10]
        fld     dword ptr [ebp - 0x4]
        fmul dword ptr [DAT_007b8d1c]
        fstp    dword ptr [ebp - 0xc]
        fld     dword ptr [ebp - 0x4]
        fmul dword ptr [DAT_007b8d20]
        fadd    dword ptr [ebp - 0x8]
        fstp    dword ptr [ebp - 0x8]
    no_lerp:
        fld     dword ptr [ebp + 0x38]
        lea     ecx, [ebp - 0x9c]
        fmul dword ptr [DAT_0077de98]
        fadd    dword ptr [ebp + 0x24]
        fld     dword ptr [ebp + 0x14]
        fsub    dword ptr [ebp - 0x10]
        fstp    dword ptr [ebp - 0x1c]
        fsub    dword ptr [ebp - 0xc]
        fld     dword ptr [ebp + 0x34]
        fsub    dword ptr [ebp - 0x8]
        fst     dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp - 0x14]
        fld     st(1)
        fmul    st(0), st(2)
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp - 0x1c]
        faddp   st(1), st(0)
        fsqrt
        fdivr dword ptr [DAT_0076d064]
        fstp    dword ptr [ebp + 0x38]
        fld     dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp + 0x38]
        fstp    dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp + 0x38]
        fstp    dword ptr [ebp - 0x18]
        fld     dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp + 0x38]
        fstp    dword ptr [ebp - 0x14]
        call    FUN_00419e70
        push    0
        push    1
        push    2
        lea     eax, [ebp - 0x1c]
        push    eax
        lea     ecx, [ebp - 0x9c]
        call    FUN_0041fde0
        mov     ecx, [ebp - 0x10]
        mov     edx, [ebp - 0xc]
        mov     eax, [ebp - 0x8]
        mov     [ebp - 0x90], ecx
        lea     ecx, [ebp + 8]
        push    ecx
        lea     ecx, [ebp - 0xcc]
        mov     [ebp - 0x80], edx
        mov     [ebp - 0x70], eax
        call    FUN_00419460
        lea     edx, [ebp - 0xcc]
        push    edx
        lea     ecx, [ebp + 8]
        call    FUN_004206b0
        mov     [ebp - 0x20], eax
        lea     eax, [ebp - 0x9c]
        lea     ecx, [ebp - 0xfc]
        mov     [ebp - 0x4], eax
        mov     [ebp + 0x38], ecx
        mov     edx, [ebp - 0x4]
        push    esi
        mov     esi, [ebp - 0x20]
        mov     eax, [ebp + 0x38]
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
        lea     edx, [ebp - 0xfc]
        push    edx
        mov     ecx, edi
        call    FUN_004daa20
        mov     eax, [edi]
        push    1
        mov     ecx, edi
        call    dword ptr [eax + 0x48]
        mov     byte ptr [edi + 0x338], 1
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x34
    }


}
