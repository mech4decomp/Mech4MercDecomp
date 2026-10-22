/*
 * FUN_0073D430 (55 B) — __cdecl (RET 0). Reads a global, calls FUN_00713CC0
 * twice with (1, [g_8b28d4]) and (7, 1), then zeroes two globals and sets
 * two more to 0x50/0x28.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_8b28d4;
extern int  g_8aaf38;
extern int  g_8aaf34;
extern int  g_8aaf1c;
extern int  g_8aaf18;
extern void __cdecl FUN_00713cc0(void);

__declspec(naked) void FUN_0073D430(void)
{
    __asm {
        mov     eax, dword ptr [g_8b28d4]
        push    eax
        push    1
        call    FUN_00713cc0
        push    1
        push    7
        call    FUN_00713cc0
        xor     eax, eax
        mov     dword ptr [g_8aaf38], eax
        mov     dword ptr [g_8aaf34], eax
        mov     dword ptr [g_8aaf1c], 0x50
        mov     dword ptr [g_8aaf18], 0x28
        ret
    }
}
