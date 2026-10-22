/*
 * FUN_100468CC (6 B) - IAT jump thunk: jmp dword ptr [g_100490D8].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_100490D8;   /* slot 0x100490D8 */

__declspec(naked) void FUN_100468CC(void)
{
    __asm {
        jmp     dword ptr [g_100490D8]
    }
}
