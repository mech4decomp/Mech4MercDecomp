/*
 * FUN_100469DA (6 B) - IAT jump thunk: jmp dword ptr [g_10049188].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049188;   /* slot 0x10049188 */

__declspec(naked) void FUN_100469DA(void)
{
    __asm {
        jmp     dword ptr [g_10049188]
    }
}
