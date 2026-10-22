/*
 * FUN_10046968 (6 B) - IAT jump thunk: jmp dword ptr [g_1004913C].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_1004913C;   /* slot 0x1004913C */

__declspec(naked) void FUN_10046968(void)
{
    __asm {
        jmp     dword ptr [g_1004913C]
    }
}
