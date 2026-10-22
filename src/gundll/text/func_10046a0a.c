/*
 * FUN_10046A0A (6 B) - IAT jump thunk: jmp dword ptr [g_100491D0].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_100491D0;   /* slot 0x100491D0 */

__declspec(naked) void FUN_10046A0A(void)
{
    __asm {
        jmp     dword ptr [g_100491D0]
    }
}
