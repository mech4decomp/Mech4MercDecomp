/*
 * FUN_10046890 (6 B) - IAT jump thunk: jmp dword ptr [g_100490B0].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_100490B0;   /* slot 0x100490B0 */

__declspec(naked) void FUN_10046890(void)
{
    __asm {
        jmp     dword ptr [g_100490B0]
    }
}
