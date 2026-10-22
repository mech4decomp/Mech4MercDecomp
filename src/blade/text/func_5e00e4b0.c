/*
 * FUN_5e00e4b0 (41 B) — __fastcall (ECX = this).
 * Returns 1 if 0x4814==2, 0x4818==2, 0x4820==1; else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __fastcall FUN_5e00e4b0(void)
{
    __asm {
        mov     edx, dword ptr [ecx + 0x4814]
        mov     eax, 0x2
        cmp     edx, eax
        jnz     L_e4d6
        cmp     dword ptr [ecx + 0x4818], eax
        jnz     L_e4d6
        mov     edx, dword ptr [ecx + 0x4820]
        mov     eax, 0x1
        cmp     edx, eax
        jz      L_e4d8
L_e4d6:
        xor     eax, eax
L_e4d8:
        ret
    }
}
