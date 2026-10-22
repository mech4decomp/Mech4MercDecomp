/*
 * FUN_10046878 (6 B) - IAT jump thunk: jmp dword ptr [g_100490A0].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_100490A0;   /* slot 0x100490A0 */

__declspec(naked) void FUN_10046878(void)
{
    __asm {
        jmp     dword ptr [g_100490A0]
    }
}
