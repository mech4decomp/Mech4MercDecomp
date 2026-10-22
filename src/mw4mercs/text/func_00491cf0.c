/*
 * FUN_00491cf0 (31 B) — __fastcall (ECX=ptr).
 * Enables flag bit 2 and calls FUN_00717b30 if not already set.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_00717b30(int, int, int, void *);

__declspec(naked) void __fastcall FUN_00491cf0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x18]
        test    al, 0x2
        jnz     l_done
        or      eax, 0x2
        mov     dword ptr [ecx + 0x18], eax
        lea     eax, [ecx + 0x20]
        mov     ecx, dword ptr [ecx + 0x1c]
        push    eax
        push    0x0
        push    0x0
        push    ecx
        call    FUN_00717b30
    l_done:
        ret
    }
}
