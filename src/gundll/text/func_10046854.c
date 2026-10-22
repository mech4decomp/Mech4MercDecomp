/*
 * FUN_10046854 (6 B) - IAT jump thunk: jmp dword ptr [g_10049088].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049088;   /* slot 0x10049088 */

__declspec(naked) void FUN_10046854(void)
{
    __asm {
        jmp     dword ptr [g_10049088]
    }
}
