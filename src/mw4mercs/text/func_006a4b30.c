/*
 * FUN_006a4b30 (61 B) — float helper (__cdecl).
 *
 * Calls virtual method (vtable+0xa4), adds param_2, calls FUN_00707e70(0),
 * compares, returns one of two float constants.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern float g_0076d064;
extern float g_0076c5b0;
extern float __cdecl FUN_00707e70(void);

__declspec(naked) float __cdecl FUN_006a4b30(void)
{
    __asm {
        sub     esp, 8
        mov     ecx, dword ptr [esp + 0x0c]   ; param_1
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0xa4]        ; virtual call, returns float
        fadd    dword ptr [esp + 0x10]        ; + param_2
        push    0
        fstp    qword ptr [esp + 0x04]        ; store double arg
        call    FUN_00707e70
        __emit 0xDC   ; fcomp qword ptr [esp] -- MSVC6 drops the zero-disp byte (DC 1C 24 vs ref DC 5C 24 00)
        __emit 0x5C
        __emit 0x24
        __emit 0x00
        fnstsw  ax
        test    ah, 1
        jz      L_else
        fld     dword ptr [g_0076d064]
        add     esp, 8
        ret
    L_else:
        fld     dword ptr [g_0076c5b0]
        add     esp, 8
        ret
    }
}
