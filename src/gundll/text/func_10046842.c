/*
 * FUN_10046842 (6 B) - IAT jump thunk: jmp dword ptr [g_10049078].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049078;   /* slot 0x10049078 */

__declspec(naked) void FUN_10046842(void)
{
    __asm {
        jmp     dword ptr [g_10049078]
    }
}
