/*
 * FUN_100467FA (6 B) - IAT jump thunk: jmp dword ptr [g_1004922C].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_1004922C;   /* slot 0x1004922C */

__declspec(naked) void FUN_100467FA(void)
{
    __asm {
        jmp     dword ptr [g_1004922C]
    }
}
