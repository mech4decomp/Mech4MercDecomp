/*
 * FUN_100471A3 (11 B) - free-wrapper: pushes [ebp-0x48] and calls
 * FUN_10001d60 (shared_free).  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */

__declspec(naked) void FUN_100471A3(void)
{
    __asm {
        mov     eax, dword ptr [ebp - 0x48]
        push    eax
        call    FUN_10001d60
        pop     ecx
        ret
    }
}
