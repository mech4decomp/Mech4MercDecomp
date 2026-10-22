/*
 * FUN_100469F8 (6 B) - IAT jump thunk: jmp dword ptr [g_1004919C].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_1004919C;   /* slot 0x1004919C */

__declspec(naked) void FUN_100469F8(void)
{
    __asm {
        jmp     dword ptr [g_1004919C]
    }
}
