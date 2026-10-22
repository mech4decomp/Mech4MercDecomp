/*
 * FUN_10046848 (6 B) - IAT jump thunk: jmp dword ptr [g_10049080].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049080;   /* slot 0x10049080 */

__declspec(naked) void FUN_10046848(void)
{
    __asm {
        jmp     dword ptr [g_10049080]
    }
}
