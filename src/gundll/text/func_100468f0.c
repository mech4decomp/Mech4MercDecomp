/*
 * FUN_100468F0 (6 B) - IAT jump thunk: jmp dword ptr [g_100490EC].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_100490EC;   /* slot 0x100490EC */

__declspec(naked) void FUN_100468F0(void)
{
    __asm {
        jmp     dword ptr [g_100490EC]
    }
}
