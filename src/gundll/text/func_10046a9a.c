/*
 * FUN_10046A9A (6 B) - IAT jump thunk: jmp dword ptr [g_10049240].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049240;   /* slot 0x10049240 */

__declspec(naked) void FUN_10046A9A(void)
{
    __asm {
        jmp     dword ptr [g_10049240]
    }
}
