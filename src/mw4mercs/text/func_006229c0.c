/*
 * FUN_006229c0 (56 B) — __thiscall (ECX = this), RET 8. Linear search
 * over a range [this[0], this[1]) of 4-byte entries; returns the entry
 * whose *entry != 0 and entry[1] == param_1 and entry[2] == param_2,
 * else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __fastcall FUN_006229c0(void *this, int param_1, int param_2)
{
    __asm {
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [ecx + 4]
        cmp     edx, ecx
        push    esi
        push    edi
        jz      L_ret0
        mov     esi, dword ptr [esp + 0x10]
        mov     edi, dword ptr [esp + 0x0C]
L_loop:
        mov     eax, dword ptr [edx]
        test    eax, eax
        jz      L_next
        cmp     dword ptr [eax + 4], edi
        jnz     L_next
        cmp     dword ptr [eax + 8], esi
        jz      L_found
L_next:
        add     edx, 4
        cmp     edx, ecx
        jnz     L_loop
L_ret0:
        pop     edi
        pop     esi
        xor     eax, eax
        ret     8
L_found:
        mov     eax, dword ptr [edx]
        pop     edi
        pop     esi
        ret     8
    }
}
