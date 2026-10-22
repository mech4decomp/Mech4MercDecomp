/*
 * FUN_10046AF0 (11 B) - __cdecl.  Loads a pointer from [ebp-0x10], passes it
 * to FUN_10001d60 (shared_free), pops the arg.  (Transcribed from reference
 * bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */

__declspec(naked) void __cdecl FUN_10046AF0(void)
{
    __asm {
        mov     eax, dword ptr [ebp - 0x10]
        push    eax
        call    FUN_10001d60
        pop     ecx
        ret
    }
}
