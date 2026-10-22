/*
 * FUN_5e00e440 (56 B) — __fastcall (ECX = this).
 * Returns 1 if 0x4814==4, 0x4818==2, 0x481c==0, 0x4820==3, 0x4828==0; else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __fastcall FUN_5e00e440(void)
{
    __asm {
        cmp     dword ptr [ecx + 0x4814], 0x4
        jnz     L_e475
        cmp     dword ptr [ecx + 0x4818], 0x2
        jnz     L_e475
        mov     eax, dword ptr [ecx + 0x481c]
        test    eax, eax
        jnz     L_e475
        cmp     dword ptr [ecx + 0x4820], 0x3
        jnz     L_e475
        mov     eax, dword ptr [ecx + 0x4828]
        test    eax, eax
        jnz     L_e475
        mov     eax, 0x1
        ret
L_e475:
        xor     eax, eax
        ret
    }
}
