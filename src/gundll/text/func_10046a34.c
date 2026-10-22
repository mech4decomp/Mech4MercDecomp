/*
 * FUN_10046A34 (6 B) - IAT jump thunk: jmp dword ptr [g_10049000].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049000;   /* slot 0x10049000 */

__declspec(naked) void FUN_10046A34(void)
{
    __asm {
        jmp     dword ptr [g_10049000]
    }
}
