/*
 * FUN_10046950 (6 B) - IAT jump thunk: jmp dword ptr [g_1004912C].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_1004912C;   /* slot 0x1004912C */

__declspec(naked) void FUN_10046950(void)
{
    __asm {
        jmp     dword ptr [g_1004912C]
    }
}
