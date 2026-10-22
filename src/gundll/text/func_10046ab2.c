/*
 * FUN_10046AB2 (6 B) - IAT jump thunk: jmp dword ptr [g_100491E8].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_100491E8;   /* slot 0x100491E8 */

__declspec(naked) void FUN_10046AB2(void)
{
    __asm {
        jmp     dword ptr [g_100491E8]
    }
}
