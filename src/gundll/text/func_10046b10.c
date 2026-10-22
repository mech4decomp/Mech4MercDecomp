/*
 * FUN_10046B10 (11 B) - __cdecl.  Loads a pointer from [ebp+4], passes it to
 * FUN_10001d60 (shared_free), pops the arg.  (Transcribed from reference
 * bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */

__declspec(naked) void __cdecl FUN_10046B10(void)
{
    __asm {
        mov     eax, dword ptr [ebp + 4]
        push    eax
        call    FUN_10001d60
        pop     ecx
        ret
    }
}
