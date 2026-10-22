/*
 * FUN_100468AE (6 B) - IAT jump thunk: jmp dword ptr [g_100490C4].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_100490C4;   /* slot 0x100490C4 */

__declspec(naked) void FUN_100468AE(void)
{
    __asm {
        jmp     dword ptr [g_100490C4]
    }
}
