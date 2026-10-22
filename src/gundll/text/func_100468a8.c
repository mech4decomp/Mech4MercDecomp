/*
 * FUN_100468A8 (6 B) - IAT jump thunk: jmp dword ptr [g_100490C0].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_100490C0;   /* slot 0x100490C0 */

__declspec(naked) void FUN_100468A8(void)
{
    __asm {
        jmp     dword ptr [g_100490C0]
    }
}
