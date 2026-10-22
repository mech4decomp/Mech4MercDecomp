/*
 * FUN_1004696E (6 B) - IAT jump thunk: jmp dword ptr [g_10049140].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049140;   /* slot 0x10049140 */

__declspec(naked) void FUN_1004696E(void)
{
    __asm {
        jmp     dword ptr [g_10049140]
    }
}
