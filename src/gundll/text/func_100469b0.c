/*
 * FUN_100469B0 (6 B) - IAT jump thunk: jmp dword ptr [g_1004916C].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_1004916C;   /* slot 0x1004916C */

__declspec(naked) void FUN_100469B0(void)
{
    __asm {
        jmp     dword ptr [g_1004916C]
    }
}
