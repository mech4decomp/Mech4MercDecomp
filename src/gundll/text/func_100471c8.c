/*
 * FUN_100471C8 (11 B) - free-wrapper: pushes arg0 ([ebp+4]) and calls
 * FUN_10001d60 (shared_free).  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */

__declspec(naked) void FUN_100471C8(void)
{
    __asm {
        mov     eax, dword ptr [ebp + 0x4]
        push    eax
        call    FUN_10001d60
        pop     ecx
        ret
    }
}
