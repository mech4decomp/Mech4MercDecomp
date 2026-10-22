/*
 * FUN_10002638 (74 B, __cdecl) — codepage resolver. Returns the effective
 * codepage for a requested value: -2 -> GetOEMCP(), -3 -> GetACP(), -4 ->
 * DAT_10008c34, else the value itself. Sets DAT_10008c00 = 1 when a
 * "system" codepage was selected.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * Language.dll FUN_10002638 (74 B) -- __cdecl. Codepage resolver: returns
 */

extern int (__stdcall *g_GetOEMCP)(void);
extern int (__stdcall *g_GetACP)(void);

extern int g_10008c00;
extern int g_10008c34;

__declspec(naked) int __cdecl FUN_10002638(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        and     dword ptr [g_10008c00], 0
        cmp     eax, -2
        jnz     L_2658
        mov     dword ptr [g_10008c00], 1
        jmp     dword ptr [g_GetOEMCP]
L_2658:
        cmp     eax, -3
        jnz     L_266d
        mov     dword ptr [g_10008c00], 1
        jmp     dword ptr [g_GetACP]
L_266d:
        cmp     eax, -4
        jnz     L_2681
        mov     eax, dword ptr [g_10008c34]
        mov     dword ptr [g_10008c00], 1
L_2681:
        ret
    }
}
