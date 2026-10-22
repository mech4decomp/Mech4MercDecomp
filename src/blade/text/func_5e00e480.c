/*
 * FUN_5e00e480 (46 B) — __fastcall (ECX = this).
 * Returns 1 if 0x4814==4, 0x4818==2, 0x481c==0, 0x4820==1; else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __fastcall FUN_5e00e480(void)
{
    __asm {
        cmp     dword ptr [ecx + 0x4814], 0x4
        jnz     L_e4ab
        cmp     dword ptr [ecx + 0x4818], 0x2
        jnz     L_e4ab
        mov     eax, dword ptr [ecx + 0x481c]
        test    eax, eax
        jnz     L_e4ab
        mov     edx, dword ptr [ecx + 0x4820]
        mov     eax, 0x1
        cmp     edx, eax
        jz      L_e4ad
L_e4ab:
        xor     eax, eax
L_e4ad:
        ret
    }
}
