/*
 * FUN_100467E8 (6 B) - IAT jump thunk: jmp dword ptr [g_10049220].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049220;   /* slot 0x10049220 */

__declspec(naked) void FUN_100467E8(void)
{
    __asm {
        jmp     dword ptr [g_10049220]
    }
}
