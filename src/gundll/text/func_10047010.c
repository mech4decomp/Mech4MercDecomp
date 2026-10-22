/*
 * FUN_10047010 (11 B) - __cdecl.  Free wrapper: pushes arg [ebp+8] and calls
 * FUN_10001d60 (shared_free).  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */

__declspec(naked) void __cdecl FUN_10047010(void)
{
    __asm {
        mov     eax, dword ptr [ebp + 8]
        push    eax
        call    FUN_10001d60
        pop     ecx
        ret
    }
}
