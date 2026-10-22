/*
 * FUN_10046A8E (6 B) - IAT jump thunk: jmp dword ptr [g_10049238].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049238;   /* slot 0x10049238 */

__declspec(naked) void FUN_10046A8E(void)
{
    __asm {
        jmp     dword ptr [g_10049238]
    }
}
