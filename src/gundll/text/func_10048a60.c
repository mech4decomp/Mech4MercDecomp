/*
 * FUN_10048A60 (11 B) - __cdecl, 1 arg.  Free-wrapper: passes its third arg
 * (at [ebp+0x10]) to FUN_10001d60 (shared_free).  (Transcribed from reference
 * bytes; gaptext.  Real entry after 11 int3 pads at 0x10048a55.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */

__declspec(naked) void __cdecl FUN_10048A60(void)
{
    __asm {
        mov     eax, dword ptr [ebp + 0x10]
        push    eax
        call    FUN_10001d60
        pop     ecx
        ret
    }
}
