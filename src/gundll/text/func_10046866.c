/*
 * FUN_10046866 (6 B) - IAT jump thunk: jmp dword ptr [g_10049094].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049094;   /* slot 0x10049094 */

__declspec(naked) void FUN_10046866(void)
{
    __asm {
        jmp     dword ptr [g_10049094]
    }
}
