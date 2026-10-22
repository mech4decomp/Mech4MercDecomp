/*
 * FUN_006BEFD0 (12 B) — Call FUN_0075dbbe with address 0x6befe0.
 *
 * __cdecl.
 *
 * Disassembly:
 *   68 E0 EF 6B 00    push    0x6befe0
 *   E8 xx xx xx xx    call    FUN_0075dbbe
 *   59                pop     ecx
 *   C3                ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0075dbbe(void *ptr);

__declspec(naked) void FUN_006befd0(void)
{
    __asm {
        push    0x6befe0
        call    FUN_0075dbbe
        pop     ecx
        ret
    }
}
