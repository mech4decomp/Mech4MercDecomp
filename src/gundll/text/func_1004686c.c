/*
 * FUN_1004686C (6 B) - IAT jump thunk: jmp dword ptr [g_10049098].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049098;   /* slot 0x10049098 */

__declspec(naked) void FUN_1004686C(void)
{
    __asm {
        jmp     dword ptr [g_10049098]
    }
}
