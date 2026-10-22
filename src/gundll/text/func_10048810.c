/*
 * FUN_10048810 (11 B) - __cdecl.  Free-wrapper: loads a pointer from
 * [ebp+4], pushes it, calls FUN_10001d60 (shared_free), pops the arg,
 * returns.  (Transcribed from reference bytes; gaptext.  Leading 8 int3
 * padding bytes at 0x10048808 skipped.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */

__declspec(naked) void __cdecl FUN_10048810(void)
{
    __asm {
        mov     eax, dword ptr [ebp + 4]
        push    eax
        call    FUN_10001d60
        pop     ecx
        ret
    }
}
