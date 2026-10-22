/*
 * FUN_10046956 (6 B) - IAT jump thunk: jmp dword ptr [g_10049130].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049130;   /* slot 0x10049130 */

__declspec(naked) void FUN_10046956(void)
{
    __asm {
        jmp     dword ptr [g_10049130]
    }
}
