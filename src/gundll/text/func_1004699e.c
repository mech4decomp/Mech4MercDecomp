/*
 * FUN_1004699E (6 B) - IAT jump thunk: jmp dword ptr [g_10049160].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049160;   /* slot 0x10049160 */

__declspec(naked) void FUN_1004699E(void)
{
    __asm {
        jmp     dword ptr [g_10049160]
    }
}
