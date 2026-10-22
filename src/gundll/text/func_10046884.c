/*
 * FUN_10046884 (6 B) - IAT jump thunk: jmp dword ptr [g_100490A8].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_100490A8;   /* slot 0x100490A8 */

__declspec(naked) void FUN_10046884(void)
{
    __asm {
        jmp     dword ptr [g_100490A8]
    }
}
