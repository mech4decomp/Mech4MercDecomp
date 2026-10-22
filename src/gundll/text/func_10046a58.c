/*
 * FUN_10046A58 (6 B) - IAT jump thunk: jmp dword ptr [g_10049040].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049040;   /* slot 0x10049040 */

__declspec(naked) void FUN_10046A58(void)
{
    __asm {
        jmp     dword ptr [g_10049040]
    }
}
