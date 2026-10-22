/*
 * FUN_1004684E (6 B) - IAT jump thunk: jmp dword ptr [g_10049084].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049084;   /* slot 0x10049084 */

__declspec(naked) void FUN_1004684E(void)
{
    __asm {
        jmp     dword ptr [g_10049084]
    }
}
