/*
 * FUN_10046938 (6 B) - IAT jump thunk: jmp dword ptr [g_1004911C].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_1004911C;   /* slot 0x1004911C */

__declspec(naked) void FUN_10046938(void)
{
    __asm {
        jmp     dword ptr [g_1004911C]
    }
}
