/*
 * FUN_1003a6fa (16 B) - __cdecl. Pushes arg[1] twice and calls FUN_1003a6a8.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1003a6a8(void);   /* rel32 call */

__declspec(naked) void __cdecl FUN_1003a6fa(void)
{
    __asm {
        push    dword ptr [esp + 0x8]
        push    dword ptr [esp + 0x8]
        call    FUN_1003a6a8
        pop     ecx
        pop     ecx
        ret
    }
}
