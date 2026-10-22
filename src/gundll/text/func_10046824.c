/*
 * FUN_10046824 (6 B) - IAT jump thunk: jmp dword ptr [g_10049064].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049064;   /* slot 0x10049064 */

__declspec(naked) void FUN_10046824(void)
{
    __asm {
        jmp     dword ptr [g_10049064]
    }
}
