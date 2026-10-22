/*
 * FUN_0075E0CA (30 B) — five IAT jump thunks (jmp dword ptr [import]).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_0076b27c;
extern void *g_0076b278;
extern void *g_0076b26c;
extern void *g_0076b284;
extern void *g_0076b280;

__declspec(naked) void FUN_0075E0CA(void)
{
    __asm {
        jmp     dword ptr [g_0076b27c]
        jmp     dword ptr [g_0076b278]
        jmp     dword ptr [g_0076b26c]
        jmp     dword ptr [g_0076b284]
        jmp     dword ptr [g_0076b280]
    }
}
