/*
 * FUN_005CD3E0 (508 B) — __thiscall (ECX = this), RET 0x8.
 * Aiming/rotation update. Calls FUN_0041fd80, FUN_00707e70 (random),
 * FUN_00415020, FUN_005cd6f0. FPU math with absolute constants.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __fastcall FUN_0041fd80(void *this);
extern float __cdecl FUN_00707e70(int);
extern float __cdecl FUN_00415020(void);
extern char __cdecl FUN_005cd6f0(void);

extern float DAT_0076c5b0;
extern float DAT_0076d070;
extern float DAT_0077431c;
extern float DAT_00787d54;

__declspec(naked) void __fastcall FUN_005cd3e0(void *param1)
{
    __asm {
        sub     esp, 0x1c
        push    esi
        mov     esi, ecx
        push    edi
        lea     edi, [esi + 0x1c8]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jz      l_d5d4
        fld     dword ptr [esi + 0x394]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jnz     l_d427
        push    0x0
        call    FUN_00707e70
        fcomp   dword ptr [esi + 0x394]
        fnstsw  ax
        test    ah, 1
        jnz     l_d5d4
    l_d427:
        fld     qword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0x28]
        call    FUN_00415020
        fsubr   dword ptr [DAT_0076d070]
        fmul    dword ptr [esp + 0x28]
        fadd    dword ptr [esi + 0x354]
        fst     dword ptr [esp + 0x8]
        fstp    dword ptr [esi + 0x354]
        call    FUN_00415020
        fsubr   dword ptr [DAT_0076d070]
        mov     eax, dword ptr [esi + 0x1e8]
        fmul    dword ptr [esp + 0x28]
        mov     dword ptr [esp + 0x28], eax
        fadd    dword ptr [esi + 0x35c]
        fst     dword ptr [esi + 0x35c]
        fld     dword ptr [esp + 0x8]
        fcomp   dword ptr [esp + 0x28]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_d48c
        mov     ecx, dword ptr [esp + 0x28]
        mov     dword ptr [esi + 0x354], ecx
    l_d48c:
        fld     dword ptr [esp + 0x28]
        fchs
        fstp    dword ptr [esp + 0x8]
        fld     dword ptr [esi + 0x354]
        fcomp   dword ptr [esp + 0x8]
        fnstsw  ax
        test    ah, 1
        jz      l_d4b1
        mov     edx, dword ptr [esp + 0x8]
        mov     dword ptr [esi + 0x354], edx
    l_d4b1:
        fcomp   dword ptr [esp + 0x28]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_d4c6
        mov     eax, dword ptr [esp + 0x28]
        mov     dword ptr [esi + 0x35c], eax
    l_d4c6:
        fld     dword ptr [esi + 0x35c]
        fcomp   dword ptr [esp + 0x8]
        fnstsw  ax
        test    ah, 1
        jz      l_d4e1
        mov     ecx, dword ptr [esp + 0x8]
        mov     dword ptr [esi + 0x35c], ecx
    l_d4e1:
        mov     ecx, esi
        call    FUN_005cd6f0
        cmp     al, 1
        jnz     l_d4f8
        mov     dword ptr [esi + 0x398], 0x2
        jmp     l_d502
    l_d4f8:
        mov     dword ptr [esi + 0x398], 0x1
    l_d502:
        mov     edx, dword ptr [esi + 0x170]
        mov     eax, dword ptr [edx + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        mov     edx, dword ptr [eax + 0xac]
        add     eax, 0x80
        mov     dword ptr [esp + 0x18], ecx
        mov     ecx, edi
        mov     dword ptr [esp + 0x20], edx
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0xd8]
        fld     dword ptr [eax + 0x8c]
        add     eax, 0x80
        fadd    dword ptr [esi + 0x354]
        mov     eax, dword ptr [eax + 0x2c]
        mov     dword ptr [esp + 0x14], eax
        fld     dword ptr [esp + 0x14]
        fadd    dword ptr [esi + 0x35c]
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esi + 0x1f8]
        fmul    dword ptr [DAT_0077431c]
        fstp    dword ptr [esp + 0x28]
        fcomp   dword ptr [esp + 0x18]
        fnstsw  ax
        test    ah, 1
        jz      l_d583
        fld     dword ptr [esp + 0x28]
        fchs
        fstp    dword ptr [esi + 0x334]
        jmp     l_d58d
    l_d583:
        mov     ecx, dword ptr [esp + 0x28]
        mov     dword ptr [esi + 0x334], ecx
    l_d58d:
        fld     dword ptr [esp + 0x14]
        fcomp   dword ptr [esp + 0x20]
        fnstsw  ax
        test    ah, 1
        jz      l_d5aa
        fld     dword ptr [esp + 0x28]
        fchs
        fstp    dword ptr [esi + 0x338]
        jmp     l_d5b4
    l_d5aa:
        mov     edx, dword ptr [esp + 0x28]
        mov     dword ptr [esi + 0x338], edx
    l_d5b4:
        push    0x0
        call    FUN_00707e70
        fstp    dword ptr [esp + 0x28]
        call    FUN_00415020
        fadd    dword ptr [esp + 0x28]
        fadd    dword ptr [DAT_00787d54]
        fstp    dword ptr [esi + 0x394]
    l_d5d4:
        pop     edi
        pop     esi
        add     esp, 0x1c
        ret     0x8
    }
}
