/*
 * FUN_0075DBD0 (6 B) — IAT thunk: jmp dword ptr [import].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_0076b2bc;

__declspec(naked) void FUN_0075DBD0(void)
{
    __asm {
        jmp     dword ptr [g_0076b2bc]
    }
}
