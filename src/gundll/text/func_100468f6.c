/*
 * FUN_100468F6 (6 B) - IAT jump thunk: jmp dword ptr [g_100490F0].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_100490F0;   /* slot 0x100490F0 */

__declspec(naked) void FUN_100468F6(void)
{
    __asm {
        jmp     dword ptr [g_100490F0]
    }
}
