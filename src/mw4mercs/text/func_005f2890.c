/*
 * FUN_005f2890 (14 B) — __thiscall. Frees the pointer stored at [ECX] via
 *   FUN_004084e0 if non-null.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern void FUN_004084e0(void *);

__declspec(naked) void FUN_005f2890(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jz      L289D
        push    eax
        call    FUN_004084e0
        pop     ecx
    L289D:
        ret
    }
}
