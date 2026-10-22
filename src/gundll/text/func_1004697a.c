/*
 * FUN_1004697A (6 B) - IAT jump thunk: jmp dword ptr [g_10049148].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049148;   /* slot 0x10049148 */

__declspec(naked) void FUN_1004697A(void)
{
    __asm {
        jmp     dword ptr [g_10049148]
    }
}
