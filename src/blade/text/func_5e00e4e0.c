/*
 * FUN_5e00e4e0 (78 B) — __fastcall (ECX = this).
 * Returns 1 if 0x4814==4, 0x4818==2, 0x481c==0, 0x4820==4, 0x4824==2,
 * 0x4828==0; else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __fastcall FUN_5e00e4e0(void)
{
    __asm {
        mov     edx, dword ptr [ecx + 0x4814]
        mov     eax, 0x4
        cmp     edx, eax
        push    esi
        jnz     L_e52a
        mov     esi, dword ptr [ecx + 0x4818]
        mov     edx, 0x2
        cmp     esi, edx
        jnz     L_e52a
        mov     esi, dword ptr [ecx + 0x481c]
        test    esi, esi
        jnz     L_e52a
        cmp     dword ptr [ecx + 0x4820], eax
        jnz     L_e52a
        cmp     dword ptr [ecx + 0x4824], edx
        jnz     L_e52a
        mov     eax, dword ptr [ecx + 0x4828]
        test    eax, eax
        jnz     L_e52a
        mov     eax, 0x1
        pop     esi
        ret
L_e52a:
        xor     eax, eax
        pop     esi
        ret
    }
}
