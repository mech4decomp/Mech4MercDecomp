/*
 * FUN_100480FB (11 B) - __cdecl.  Free-wrapper: loads the object pointer
 * from the caller's saved frame slot [ebp-0x10], passes it to FUN_10001d60
 * (free), and returns.  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __cdecl FUN_100480FB(void)
{
    __asm {
        mov     eax, dword ptr [ebp - 0x10]
        push    eax
        call    FUN_10001d60
        pop     ecx
        ret
    }
}
