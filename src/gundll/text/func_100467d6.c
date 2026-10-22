/*
 * FUN_100467D6 (6 B) - IAT jump thunk: jmp dword ptr [g_10049214].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049214;   /* slot 0x10049214 */

__declspec(naked) void FUN_100467D6(void)
{
    __asm {
        jmp     dword ptr [g_10049214]
    }
}
