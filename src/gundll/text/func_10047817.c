/*
 * FUN_10047817 (11 B) - __cdecl, 1 arg.  free-wrapper: passes its single
 * argument (this) through to FUN_10001d60 (shared_free).  cdecl epilogue.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */

__declspec(naked) void __cdecl FUN_10047817(void)
{
    __asm {
        mov     eax, dword ptr [ebp + 0x4]
        push    eax
        call    FUN_10001d60
        pop     ecx
        ret
    }
}
