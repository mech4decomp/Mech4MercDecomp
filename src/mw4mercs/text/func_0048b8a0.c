/*
 * FUN_0048b8a0 (21 B) — Dealloc with offset.
 *
 * __fastcall (ECX = this). If *this != 0, frees (*this - 4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __fastcall FUN_0048b8a0(int *param1)
{
    __asm {
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jz      l_done
        mov     ecx, dword ptr [eax - 0x04]
        add     eax, -0x04
        push    eax
        dec     ecx
        call    FUN_004084e0
        pop     ecx
    l_done:
        ret
    }
}
