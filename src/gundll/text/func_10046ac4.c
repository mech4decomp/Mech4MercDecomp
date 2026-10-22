/*
 * FUN_10046AC4 (6 B) - IAT jump thunk: jmp dword ptr [g_100491EC].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_100491EC;   /* slot 0x100491EC */

__declspec(naked) void FUN_10046AC4(void)
{
    __asm {
        jmp     dword ptr [g_100491EC]
    }
}
