/*
 * FUN_10046A16 (6 B) - IAT jump thunk: jmp dword ptr [g_1004905C].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_1004905C;   /* slot 0x1004905C */

__declspec(naked) void FUN_10046A16(void)
{
    __asm {
        jmp     dword ptr [g_1004905C]
    }
}
