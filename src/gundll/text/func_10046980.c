/*
 * FUN_10046980 (6 B) - IAT jump thunk: jmp dword ptr [g_1004914C].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_1004914C;   /* slot 0x1004914C */

__declspec(naked) void FUN_10046980(void)
{
    __asm {
        jmp     dword ptr [g_1004914C]
    }
}
