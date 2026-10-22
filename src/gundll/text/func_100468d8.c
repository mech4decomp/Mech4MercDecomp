/*
 * FUN_100468D8 (6 B) - IAT jump thunk: jmp dword ptr [g_100490E0].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_100490E0;   /* slot 0x100490E0 */

__declspec(naked) void FUN_100468D8(void)
{
    __asm {
        jmp     dword ptr [g_100490E0]
    }
}
