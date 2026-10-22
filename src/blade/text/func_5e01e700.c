/*
 * FUN_5e01e700 (26 B) — __fastcall (ECX = this).
 * Zeroes global 0x5e77a574, zeroes *this, sets this[0x60] = FUN_5e013200.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77a574;
extern void __cdecl FUN_5e013200(void);

__declspec(naked) void __fastcall FUN_5e01e700(void)
{
    __asm {
        mov     eax, ecx
        mov     dword ptr [g_5e77a574], 0x0
        mov     dword ptr [eax], 0x0
        mov     dword ptr [eax + 0x60], offset FUN_5e013200
        ret
    }
}
