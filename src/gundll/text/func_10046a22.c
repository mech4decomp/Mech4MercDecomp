/*
 * FUN_10046A22 (6 B) - IAT jump thunk: jmp dword ptr [g_1004900C].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_1004900C;   /* slot 0x1004900C */

__declspec(naked) void FUN_10046A22(void)
{
    __asm {
        jmp     dword ptr [g_1004900C]
    }
}
