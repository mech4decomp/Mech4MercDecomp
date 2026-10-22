/*
 * FUN_10046914 (6 B) - IAT jump thunk: jmp dword ptr [g_10049104].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049104;   /* slot 0x10049104 */

__declspec(naked) void FUN_10046914(void)
{
    __asm {
        jmp     dword ptr [g_10049104]
    }
}
