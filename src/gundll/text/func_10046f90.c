/*
 * FUN_10046F90 (11 B) - __cdecl.  Loads a stack-local pointer [ebp-0x10],
 * pushes it, calls FUN_10001d60 (shared_free), pops the arg, returns.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */

__declspec(naked) void __cdecl FUN_10046F90(void)
{
    __asm {
        mov     eax, dword ptr [ebp - 0x10]
        push    eax
        call    FUN_10001d60
        pop     ecx
        ret
    }
}
