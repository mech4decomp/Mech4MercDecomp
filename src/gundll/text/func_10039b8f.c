/*
 * FUN_10039b8f (24 B) - __cdecl. Calls IAT slot 0x10049128 with (0, arg),
 * then IAT slot 0x100490cc with 0xff. (Transcribed from reference bytes;
 * gaptext.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049128;   /* IAT */
extern void *g_100490cc;   /* IAT */

__declspec(naked) void __cdecl FUN_10039b8f(void)
{
    __asm {
        push    dword ptr [esp + 0x4]
        push    0x0
        call    dword ptr [g_10049128]
        push    0xff
        call    dword ptr [g_100490cc]
        ret
    }
}
