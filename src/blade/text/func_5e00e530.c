/*
 * FUN_5e00e530 (70 B) — __fastcall (ECX = this).
 * Returns 1 if 0x4814==1, 0x4818==2, 0x481c==0, 0x4820==3, 0x4824==2,
 * 0x4828==0; else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __fastcall FUN_5e00e530(void)
{
    __asm {
        cmp     dword ptr [ecx + 0x4814], 0x1
        jnz     L_e573
        mov     edx, dword ptr [ecx + 0x4818]
        mov     eax, 0x2
        cmp     edx, eax
        jnz     L_e573
        mov     edx, dword ptr [ecx + 0x481c]
        test    edx, edx
        jnz     L_e573
        cmp     dword ptr [ecx + 0x4820], 0x3
        jnz     L_e573
        cmp     dword ptr [ecx + 0x4824], eax
        jnz     L_e573
        mov     eax, dword ptr [ecx + 0x4828]
        test    eax, eax
        jnz     L_e573
        mov     eax, 0x1
        ret
L_e573:
        xor     eax, eax
        ret
    }
}
