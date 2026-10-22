/*
 * FUN_1000a120 (15 B) - malloc wrapper: calls malloc(param_1).
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_malloc; /* IAT slot for malloc (0x100210f8) */

__declspec(naked) void __cdecl FUN_1000a120(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        push    eax
        call    dword ptr [g_malloc]
        add     esp, 4
        ret
    }
}
