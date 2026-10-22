/*
 * FUN_5e00e580 (120 B) — __fastcall (ECX = this).
 * Returns 1 if 0x4814==1 and either:
 *   (0x4818==2 && 0x481c==0 && 0x4820==4 && 0x4824==2 && 0x4828==0)  OR
 *   (0x4818==2 && 0x481c==0 && 0x4820==2 && 0x4824==2 && 0x4828==2)
 * else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __fastcall FUN_5e00e580(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x4814]
        push    esi
        cmp     eax, 0x1
        mov     edx, 0x2
        jnz     L_e5f4
        cmp     dword ptr [ecx + 0x4818], edx
        jnz     L_e5be
        mov     esi, dword ptr [ecx + 0x481c]
        test    esi, esi
        jnz     L_e5be
        cmp     dword ptr [ecx + 0x4820], 0x4
        jnz     L_e5be
        cmp     dword ptr [ecx + 0x4824], edx
        jnz     L_e5be
        mov     esi, dword ptr [ecx + 0x4828]
        test    esi, esi
        jz      L_e5ed
L_e5be:
        cmp     eax, 0x1
        jnz     L_e5f4
        cmp     dword ptr [ecx + 0x4818], edx
        jnz     L_e5f4
        mov     eax, dword ptr [ecx + 0x481c]
        test    eax, eax
        jnz     L_e5f4
        cmp     dword ptr [ecx + 0x4820], edx
        jnz     L_e5f4
        cmp     dword ptr [ecx + 0x4824], edx
        jnz     L_e5f4
        cmp     dword ptr [ecx + 0x4828], edx
        jnz     L_e5f4
L_e5ed:
        mov     eax, 0x1
        pop     esi
        ret
L_e5f4:
        xor     eax, eax
        pop     esi
        ret
    }
}
