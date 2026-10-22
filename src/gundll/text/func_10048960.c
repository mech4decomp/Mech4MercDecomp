/*
 * FUN_10048960 (11 B) - __cdecl, 1 arg.  Free-wrapper: passes its first arg
 * (at [ebp+4]) to FUN_10001d60 (shared_free).  (Transcribed from reference
 * bytes; gaptext.  Real entry after 11 int3 pads at 0x10048955.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */

__declspec(naked) void __cdecl FUN_10048960(void)
{
    __asm {
        mov     eax, dword ptr [ebp + 4]
        push    eax
        call    FUN_10001d60
        pop     ecx
        ret
    }
}
