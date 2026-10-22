/*
 * FUN_100468FC (6 B) - IAT jump thunk: jmp dword ptr [g_100490F4].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_100490F4;   /* slot 0x100490F4 */

__declspec(naked) void FUN_100468FC(void)
{
    __asm {
        jmp     dword ptr [g_100490F4]
    }
}
