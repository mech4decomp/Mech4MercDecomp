/*
 * FUN_10046872 (6 B) - IAT jump thunk: jmp dword ptr [g_1004909C].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_1004909C;   /* slot 0x1004909C */

__declspec(naked) void FUN_10046872(void)
{
    __asm {
        jmp     dword ptr [g_1004909C]
    }
}
