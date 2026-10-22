/*
 * FUN_1004891B (11 B) - __cdecl.  Free-wrapper thunk: reads a pointer from
 * [ebp+4] (caller's frame), pushes it, calls FUN_10001d60 (shared_free),
 * pops, ret.  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */

__declspec(naked) void __cdecl FUN_1004891B(void)
{
    __asm {
        mov     eax, dword ptr [ebp + 4]
        push    eax
        call    FUN_10001d60
        pop     ecx
        ret
    }
}
