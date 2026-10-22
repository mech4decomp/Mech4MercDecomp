/*
 * FUN_1004278F (8 B) - __cdecl.  return arg1 - 0x20.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void FUN_1004278F(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        add     eax, -0x20
        ret
    }
}
