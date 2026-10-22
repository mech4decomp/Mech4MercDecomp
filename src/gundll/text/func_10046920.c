/*
 * FUN_10046920 (6 B) - IAT jump thunk: jmp dword ptr [g_1004910C].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_1004910C;   /* slot 0x1004910C */

__declspec(naked) void FUN_10046920(void)
{
    __asm {
        jmp     dword ptr [g_1004910C]
    }
}
