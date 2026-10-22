/*
 * FUN_10048A28 (11 B) - __cdecl.  Free-wrapper: passes a local (at [ebp-0x4c])
 * to FUN_10001d60 (shared_free).  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */

__declspec(naked) void __cdecl FUN_10048A28(void)
{
    __asm {
        mov     eax, dword ptr [ebp - 0x4c]
        push    eax
        call    FUN_10001d60
        pop     ecx
        ret
    }
}
