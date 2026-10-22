/*
 * FUN_100468C6 (6 B) - IAT jump thunk: jmp dword ptr [g_100490D4].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_100490D4;   /* slot 0x100490D4 */

__declspec(naked) void FUN_100468C6(void)
{
    __asm {
        jmp     dword ptr [g_100490D4]
    }
}
