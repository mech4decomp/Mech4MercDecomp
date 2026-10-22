/*
 * FUN_5e00e120 (54 B) — __fastcall (ECX = this).
 * If this->m7c != 0 and this->m80 == 0, call vtable[0x64/4]
 * (this->m7c, 0, this, 0x801, 0); if result < 0 return it;
 * else set this->m80 = 1. Return 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __fastcall FUN_5e00e120(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x7c]
        test    eax, eax
        jz      L152
        mov     ecx, dword ptr [esi + 0x80]
        test    ecx, ecx
        jnz     L152
        mov     ecx, dword ptr [eax]
        push    0
        push    0x801
        push    esi
        push    0
        push    eax
        call    dword ptr [ecx + 0x64]
        test    eax, eax
        jl      L154
        mov     dword ptr [esi + 0x80], 1
    L152:
        xor     eax, eax
    L154:
        pop     esi
        ret
    }
}
