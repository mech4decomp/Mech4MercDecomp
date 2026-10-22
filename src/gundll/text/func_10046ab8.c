/*
 * FUN_10046AB8 (6 B) - IAT jump thunk: jmp dword ptr [g_100491E4].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_100491E4;   /* slot 0x100491E4 */

__declspec(naked) void FUN_10046AB8(void)
{
    __asm {
        jmp     dword ptr [g_100491E4]
    }
}
