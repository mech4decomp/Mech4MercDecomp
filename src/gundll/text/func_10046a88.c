/*
 * FUN_10046A88 (6 B) - IAT jump thunk: jmp dword ptr [g_1004923C].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_1004923C;   /* slot 0x1004923C */

__declspec(naked) void FUN_10046A88(void)
{
    __asm {
        jmp     dword ptr [g_1004923C]
    }
}
