/*
 * FUN_10048870 (11 B) - __cdecl.  Free-wrapper thunk: reads a pointer from
 * [ebp-0x10] (caller's frame), pushes it, calls FUN_10001d60 (shared_free),
 * pops, ret.  (Transcribed from reference bytes; gaptext.  Real entry after
 * 11 int3 padding bytes at 0x10048865.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */

__declspec(naked) void __cdecl FUN_10048870(void)
{
    __asm {
        mov     eax, dword ptr [ebp - 0x10]
        push    eax
        call    FUN_10001d60
        pop     ecx
        ret
    }
}
