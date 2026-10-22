/*
 * FUN_10046A5E (6 B) - IAT jump thunk: jmp dword ptr [g_1004903C].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_1004903C;   /* slot 0x1004903C */

__declspec(naked) void FUN_10046A5E(void)
{
    __asm {
        jmp     dword ptr [g_1004903C]
    }
}
