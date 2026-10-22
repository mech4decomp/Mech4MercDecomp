/*
 * FUN_100469FE (6 B) - IAT jump thunk: jmp dword ptr [g_100491A0].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_100491A0;   /* slot 0x100491A0 */

__declspec(naked) void FUN_100469FE(void)
{
    __asm {
        jmp     dword ptr [g_100491A0]
    }
}
