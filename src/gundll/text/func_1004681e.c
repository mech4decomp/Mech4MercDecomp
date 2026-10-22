/*
 * FUN_1004681E (6 B) - IAT jump thunk: jmp dword ptr [g_1004907C].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_1004907C;   /* slot 0x1004907C */

__declspec(naked) void FUN_1004681E(void)
{
    __asm {
        jmp     dword ptr [g_1004907C]
    }
}
