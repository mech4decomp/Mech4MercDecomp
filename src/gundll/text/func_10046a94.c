/*
 * FUN_10046A94 (6 B) - IAT jump thunk: jmp dword ptr [g_10049244].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049244;   /* slot 0x10049244 */

__declspec(naked) void FUN_10046A94(void)
{
    __asm {
        jmp     dword ptr [g_10049244]
    }
}
