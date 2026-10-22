/*
 * FUN_100467CA (6 B) - IAT jump thunk: jmp dword ptr [g_10049218].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049218;   /* slot 0x10049218 */

__declspec(naked) void FUN_100467CA(void)
{
    __asm {
        jmp     dword ptr [g_10049218]
    }
}
