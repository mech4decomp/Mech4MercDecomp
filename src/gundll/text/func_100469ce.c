/*
 * FUN_100469CE (6 B) - IAT jump thunk: jmp dword ptr [g_10049180].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049180;   /* slot 0x10049180 */

__declspec(naked) void FUN_100469CE(void)
{
    __asm {
        jmp     dword ptr [g_10049180]
    }
}
