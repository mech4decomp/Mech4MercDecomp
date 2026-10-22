/*
 * FUN_10046944 (6 B) - IAT jump thunk: jmp dword ptr [g_10049124].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049124;   /* slot 0x10049124 */

__declspec(naked) void FUN_10046944(void)
{
    __asm {
        jmp     dword ptr [g_10049124]
    }
}
