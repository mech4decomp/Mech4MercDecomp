/*
 * FUN_100467E2 (6 B) - IAT jump thunk: jmp dword ptr [g_1004921C].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_1004921C;   /* slot 0x1004921C */

__declspec(naked) void FUN_100467E2(void)
{
    __asm {
        jmp     dword ptr [g_1004921C]
    }
}
