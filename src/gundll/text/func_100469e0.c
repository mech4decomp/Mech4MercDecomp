/*
 * FUN_100469E0 (6 B) - IAT jump thunk: jmp dword ptr [g_1004918C].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_1004918C;   /* slot 0x1004918C */

__declspec(naked) void FUN_100469E0(void)
{
    __asm {
        jmp     dword ptr [g_1004918C]
    }
}
