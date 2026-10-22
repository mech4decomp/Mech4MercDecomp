/*
 * FUN_10046A04 (6 B) - IAT jump thunk: jmp dword ptr [g_100491D4].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_100491D4;   /* slot 0x100491D4 */

__declspec(naked) void FUN_10046A04(void)
{
    __asm {
        jmp     dword ptr [g_100491D4]
    }
}
