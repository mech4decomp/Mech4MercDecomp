/*
 * FUN_10048C50 (11 B) - __cdecl.  Free-wrapper thunk: loads stack arg from
 * [ebp+0x10], passes it to FUN_10001d60 (shared_free), returns.
 * (Transcribed from reference bytes; gaptext.  Real entry after 11 int3 pads
 * at 0x10048c45.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */

__declspec(naked) void __cdecl FUN_10048C50(void)
{
    __asm {
        mov     eax, dword ptr [ebp + 0x10]
        push    eax
        call    FUN_10001d60
        pop     ecx
        ret
    }
}
