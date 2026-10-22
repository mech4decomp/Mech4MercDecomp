/*
 * FUN_10046ABE (6 B) - IAT jump thunk: jmp dword ptr [g_100491E0].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_100491E0;   /* slot 0x100491E0 */

__declspec(naked) void FUN_10046ABE(void)
{
    __asm {
        jmp     dword ptr [g_100491E0]
    }
}
