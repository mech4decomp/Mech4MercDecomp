/*
 * FUN_10048940 (11 B) - __cdecl.  Free-wrapper thunk: reads a pointer from
 * [ebp+0x10] (caller's frame), pushes it, calls FUN_10001d60 (shared_free),
 * pops, ret.  (Transcribed from reference bytes; gaptext.  Real entry after
 * 5 int3 padding bytes at 0x1004893b.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */

__declspec(naked) void __cdecl FUN_10048940(void)
{
    __asm {
        mov     eax, dword ptr [ebp + 0x10]
        push    eax
        call    FUN_10001d60
        pop     ecx
        ret
    }
}
