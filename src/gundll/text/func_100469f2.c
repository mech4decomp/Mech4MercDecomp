/*
 * FUN_100469F2 (6 B) - IAT jump thunk: jmp dword ptr [g_10049198].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049198;   /* slot 0x10049198 */

__declspec(naked) void FUN_100469F2(void)
{
    __asm {
        jmp     dword ptr [g_10049198]
    }
}
