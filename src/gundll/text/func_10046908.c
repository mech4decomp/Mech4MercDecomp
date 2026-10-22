/*
 * FUN_10046908 (6 B) - IAT jump thunk: jmp dword ptr [g_100491AC].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_100491AC;   /* slot 0x100491AC */

__declspec(naked) void FUN_10046908(void)
{
    __asm {
        jmp     dword ptr [g_100491AC]
    }
}
