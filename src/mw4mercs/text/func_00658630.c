/*
 * FUN_00658630 (16 B) — ABL free helper. __cdecl, RET 0x4.
 *
 * Frees a heap pointer passed as the argument if non-null.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *p);   /* free */

__declspec(naked) void FUN_00658630(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jz      L63f
        push    eax
        call    FUN_004084e0
        pop     ecx
L63f:
        ret
    }
}
