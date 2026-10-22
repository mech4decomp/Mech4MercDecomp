/*
 * FUN_10048BCB (11 B) - __cdecl.  Free-wrapper thunk: loads second stack arg
 * from [ebp+8], passes it to FUN_10001d60 (shared_free), returns.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */

__declspec(naked) void __cdecl FUN_10048BCB(void)
{
    __asm {
        mov     eax, dword ptr [ebp + 8]
        push    eax
        call    FUN_10001d60
        pop     ecx
        ret
    }
}
