/*
 * FUN_100467D0 (6 B) - IAT jump thunk: jmp dword ptr [g_1004920C].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_1004920C;   /* slot 0x1004920C */

__declspec(naked) void FUN_100467D0(void)
{
    __asm {
        jmp     dword ptr [g_1004920C]
    }
}
