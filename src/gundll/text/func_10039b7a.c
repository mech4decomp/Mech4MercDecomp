/*
 * FUN_10039b7a (21 B) - __cdecl. LeaveCriticalSection on &g_cs[param_1].
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_cs_10051ba0[];
extern void *g_LeaveCriticalSection_10049064;

__declspec(naked) void FUN_10039b7a(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp + 0x8]
        push    dword ptr [eax*4 + g_cs_10051ba0]
        call    dword ptr [g_LeaveCriticalSection_10049064]
        pop     ebp
        ret
    }
}
