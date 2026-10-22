/*
 * FUN_10046A3A (6 B) - IAT jump thunk: jmp dword ptr [g_10049050].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049050;   /* slot 0x10049050 */

__declspec(naked) void FUN_10046A3A(void)
{
    __asm {
        jmp     dword ptr [g_10049050]
    }
}
