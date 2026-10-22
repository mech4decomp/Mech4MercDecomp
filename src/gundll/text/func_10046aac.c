/*
 * FUN_10046AAC (6 B) - IAT jump thunk: jmp dword ptr [g_100491DC].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_100491DC;   /* slot 0x100491DC */

__declspec(naked) void FUN_10046AAC(void)
{
    __asm {
        jmp     dword ptr [g_100491DC]
    }
}
