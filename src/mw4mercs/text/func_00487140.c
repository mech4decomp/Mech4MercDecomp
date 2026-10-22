/*
 * FUN_00487140 (14 B) — Free if non-null (__fastcall, ECX=this).
 *
 * If *this != 0, calls FUN_004084e0(*this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __stdcall FUN_004084e0(void *ptr);

__declspec(naked) void __fastcall FUN_00487140(void *this)
{
    __asm {
        mov     eax, [ecx]
        test    eax, eax
        jz      l_done
        push    eax
        call    FUN_004084e0
        pop     ecx
    l_done:
        ret
    }
}
