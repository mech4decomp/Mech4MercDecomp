/*
 * FUN_10046A7C (6 B) - IAT jump thunk: jmp dword ptr [g_10049028].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049028;   /* slot 0x10049028 */

__declspec(naked) void FUN_10046A7C(void)
{
    __asm {
        jmp     dword ptr [g_10049028]
    }
}
