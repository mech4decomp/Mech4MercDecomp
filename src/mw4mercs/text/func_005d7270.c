/*
 * FUN_005d7270 (12 B) — pushes the address of a local label and calls
 * FUN_0075dbbe (__cdecl, 1 arg), then pops the arg.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern void __cdecl FUN_0075dbbe(void *);

__declspec(naked) void FUN_005d7270(void)
{
    __asm {
        push    0x5d7280
        call    FUN_0075dbbe
        pop     ecx
        ret
    }
}
