/*
 * FUN_1004698C (6 B) - IAT jump thunk: jmp dword ptr [g_10049154].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049154;   /* slot 0x10049154 */

__declspec(naked) void FUN_1004698C(void)
{
    __asm {
        jmp     dword ptr [g_10049154]
    }
}
