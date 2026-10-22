/*
 * FUN_10048B80 (11 B) - naked.  Free wrapper: loads arg from [ebp+0x10]
 * (caller's frame), pushes it, calls FUN_10001d60 (shared_free), pops the
 * arg, returns.  (Transcribed from reference bytes; gaptext.  Real entry
 * after 11 int3 padding bytes at 0x10048b75.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */

__declspec(naked) void FUN_10048B80(void)
{
    __asm {
        mov     eax, dword ptr [ebp + 0x10]
        push    eax
        call    FUN_10001d60
        pop     ecx
        ret
    }
}
