/*
 * FUN_100423E8 (17 B) - __cdecl.
 * Calls FUN_1003a6a8(arg, 0x80).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1003a6a8(void);   /* rel32 call */

__declspec(naked) void __cdecl FUN_100423E8(void)
{
    __asm {
        push    0x80
        push    dword ptr [esp + 8]
        call    FUN_1003a6a8
        pop     ecx
        pop     ecx
        ret
    }
}
