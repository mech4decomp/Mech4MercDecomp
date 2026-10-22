/*
 * FUN_004A9720 (31 B) — __thiscall CStringT<wchar_t> constructor.
 *   Forwards (this, param_1, param_2, param_3) to FUN_004AC110 and
 *   returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_004ac110(void);

__declspec(naked) void __fastcall FUN_004a9720(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 4]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0xc]
        push    eax
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_004ac110
        mov     eax, esi
        pop     esi
        ret     0xc
    }
}
