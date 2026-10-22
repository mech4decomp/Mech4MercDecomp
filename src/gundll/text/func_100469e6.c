/*
 * FUN_100469E6 (6 B) - IAT jump thunk: jmp dword ptr [g_10049190].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049190;   /* slot 0x10049190 */

__declspec(naked) void FUN_100469E6(void)
{
    __asm {
        jmp     dword ptr [g_10049190]
    }
}
