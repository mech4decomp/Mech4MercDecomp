/*
 * FUN_0075E010 (24 B) — four IAT thunks (jmp dword ptr [import]).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void (__stdcall *g_76b604)(void);
extern void (__stdcall *g_76b600)(void);
extern void (__stdcall *g_76b5dc)(void);
extern void (__stdcall *g_76b5f8)(void);

__declspec(naked) void FUN_0075E010(void)
{
    __asm {
        jmp     dword ptr [g_76b604]
        jmp     dword ptr [g_76b600]
        jmp     dword ptr [g_76b5dc]
        jmp     dword ptr [g_76b5f8]
    }
}
