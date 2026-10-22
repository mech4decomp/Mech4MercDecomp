/*
 * FUN_10037CC0 (8 B) - __cdecl, 1 arg. Returns arg1 + 0x20.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __cdecl FUN_10037CC0(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        add     eax, 0x20
        ret
    }
}
