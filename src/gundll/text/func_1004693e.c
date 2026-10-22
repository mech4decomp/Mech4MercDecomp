/*
 * FUN_1004693E (6 B) - IAT jump thunk: jmp dword ptr [g_100491C8].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_100491C8;   /* slot 0x100491C8 */

__declspec(naked) void FUN_1004693E(void)
{
    __asm {
        jmp     dword ptr [g_100491C8]
    }
}
