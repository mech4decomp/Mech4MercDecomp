/*
 * FUN_10046AA6 (6 B) - IAT jump thunk: jmp dword ptr [g_100491F0].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_100491F0;   /* slot 0x100491F0 */

__declspec(naked) void FUN_10046AA6(void)
{
    __asm {
        jmp     dword ptr [g_100491F0]
    }
}
