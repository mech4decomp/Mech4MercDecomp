/*
 * FUN_10046ACA (6 B) - IAT jump thunk: jmp dword ptr [g_100491F4].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_100491F4;   /* slot 0x100491F4 */

__declspec(naked) void FUN_10046ACA(void)
{
    __asm {
        jmp     dword ptr [g_100491F4]
    }
}
