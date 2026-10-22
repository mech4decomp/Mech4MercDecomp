/*
 * FUN_10048BF8 (11 B) - __cdecl.  Free-wrapper thunk: loads first stack arg
 * (this) from [ebp+4], passes it to FUN_10001d60 (shared_free), returns.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */

__declspec(naked) void __cdecl FUN_10048BF8(void)
{
    __asm {
        mov     eax, dword ptr [ebp + 4]
        push    eax
        call    FUN_10001d60
        pop     ecx
        ret
    }
}
