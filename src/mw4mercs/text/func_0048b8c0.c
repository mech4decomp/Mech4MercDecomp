/*
 * FUN_0048b8c0 (14 B) — Dealloc.
 *
 * __fastcall (ECX = this). If *this != 0, frees *this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __fastcall FUN_0048b8c0(int *param1)
{
    __asm {
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jz      l_done
        push    eax
        call    FUN_004084e0
        pop     ecx
    l_done:
        ret
    }
}
