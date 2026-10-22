/*
 * FUN_5e00e400 (59 B) — __fastcall (ECX = this).
 * Returns 1 if 0x4814==4, 0x4818==2, 0x481c==0, 0x4820==2, 0x4824==2; else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __fastcall FUN_5e00e400(void)
{
    __asm {
        cmp     dword ptr [ecx + 0x4814], 0x4
        jnz     L_e438
        mov     edx, dword ptr [ecx + 0x4818]
        mov     eax, 0x2
        cmp     edx, eax
        jnz     L_e438
        mov     edx, dword ptr [ecx + 0x481c]
        test    edx, edx
        jnz     L_e438
        cmp     dword ptr [ecx + 0x4820], eax
        jnz     L_e438
        cmp     dword ptr [ecx + 0x4824], eax
        jnz     L_e438
        mov     eax, 0x1
        ret
L_e438:
        xor     eax, eax
        ret
    }
}
