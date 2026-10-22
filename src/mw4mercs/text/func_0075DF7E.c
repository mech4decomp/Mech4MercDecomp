/*
 * FUN_0075DF7E (30 B) — five IAT jump thunks (jmp dword ptr [import]).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_0076b334;
extern void *g_0076b330;
extern void *g_0076b31c;
extern void *g_0076b328;
extern void *g_0076b30c;

__declspec(naked) void FUN_0075DF7E(void)
{
    __asm {
        jmp     dword ptr [g_0076b334]
        jmp     dword ptr [g_0076b330]
        jmp     dword ptr [g_0076b31c]
        jmp     dword ptr [g_0076b328]
        jmp     dword ptr [g_0076b30c]
    }
}
