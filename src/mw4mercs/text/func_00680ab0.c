/*
 * FUN_00680ab0 (15 B) — HUD element accessor (__fastcall).
 * Returns [ecx+0x14]+1, or 0 if it equals 0xfe.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00680ab0(void)
{
    __asm {
        mov     eax, dword ptr [ecx+0x14]
        cmp     eax, 0xfe
        jnz     L_0x680abd
        xor     eax, eax
        ret
    L_0x680abd:
        inc     eax
        ret
    }
}
