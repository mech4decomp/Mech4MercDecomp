/*
 * FUN_1004692C (6 B) - IAT jump thunk: jmp dword ptr [g_10049114].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049114;   /* slot 0x10049114 */

__declspec(naked) void FUN_1004692C(void)
{
    __asm {
        jmp     dword ptr [g_10049114]
    }
}
