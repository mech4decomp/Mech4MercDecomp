/*
 * FUN_5e00e3d0 (48 B) — __fastcall (ECX = this).
 * Returns 1 if all four fields (0x4814/0x4818/0x4820/0x4824) == 2, else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __fastcall FUN_5e00e3d0(void)
{
    __asm {
        mov     edx, dword ptr [ecx + 0x4814]
        mov     eax, 0x2
        cmp     edx, eax
        jnz     L_e3fd
        cmp     dword ptr [ecx + 0x4818], eax
        jnz     L_e3fd
        cmp     dword ptr [ecx + 0x4820], eax
        jnz     L_e3fd
        cmp     dword ptr [ecx + 0x4824], eax
        jnz     L_e3fd
        mov     eax, 0x1
        ret
L_e3fd:
        xor     eax, eax
        ret
    }
}
