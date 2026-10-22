/*
 * FUN_10046896 (6 B) - IAT jump thunk: jmp dword ptr [g_100490B4].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_100490B4;   /* slot 0x100490B4 */

__declspec(naked) void FUN_10046896(void)
{
    __asm {
        jmp     dword ptr [g_100490B4]
    }
}
