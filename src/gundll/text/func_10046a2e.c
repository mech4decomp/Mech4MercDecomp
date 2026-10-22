/*
 * FUN_10046A2E (6 B) - IAT jump thunk: jmp dword ptr [g_10049004].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049004;   /* slot 0x10049004 */

__declspec(naked) void FUN_10046A2E(void)
{
    __asm {
        jmp     dword ptr [g_10049004]
    }
}
