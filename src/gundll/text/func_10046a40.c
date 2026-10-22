/*
 * FUN_10046A40 (6 B) - IAT jump thunk: jmp dword ptr [g_10049054].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049054;   /* slot 0x10049054 */

__declspec(naked) void FUN_10046A40(void)
{
    __asm {
        jmp     dword ptr [g_10049054]
    }
}
