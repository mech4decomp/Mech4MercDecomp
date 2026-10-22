/*
 * FUN_100469C8 (6 B) - IAT jump thunk: jmp dword ptr [g_1004917C].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_1004917C;   /* slot 0x1004917C */

__declspec(naked) void FUN_100469C8(void)
{
    __asm {
        jmp     dword ptr [g_1004917C]
    }
}
