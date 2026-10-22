/*
 * FUN_100468C0 (6 B) - IAT jump thunk: jmp dword ptr [g_100490D0].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_100490D0;   /* slot 0x100490D0 */

__declspec(naked) void FUN_100468C0(void)
{
    __asm {
        jmp     dword ptr [g_100490D0]
    }
}
