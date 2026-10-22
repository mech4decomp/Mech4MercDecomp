/*
 * FUN_10046A76 (6 B) - IAT jump thunk: jmp dword ptr [g_1004902C].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_1004902C;   /* slot 0x1004902C */

__declspec(naked) void FUN_10046A76(void)
{
    __asm {
        jmp     dword ptr [g_1004902C]
    }
}
