/*
 * FUN_100489E0 (11 B) - __cdecl, 1 arg.  Free-wrapper: passes its second arg
 * (at [ebp+8]) to FUN_10001d60 (shared_free).  (Transcribed from reference
 * bytes; gaptext.  Real entry after 11 int3 pads at 0x100489d5.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */

__declspec(naked) void __cdecl FUN_100489E0(void)
{
    __asm {
        mov     eax, dword ptr [ebp + 8]
        push    eax
        call    FUN_10001d60
        pop     ecx
        ret
    }
}
