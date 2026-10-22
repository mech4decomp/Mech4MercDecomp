/*
 * FUN_006D1A10 (85 B) — Set a bit in a bitfield array, then find first
 * zero bit and store its index.
 *
 * __thiscall (ECX = this), RET 8 (2 params).
 * Sets bit param_2 in the array at this->field_54[param_1*2],
 * then scans for first zero bit in that array.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006d1a10(void)
{
    __asm {
        mov     eax, dword ptr [esp + 8]
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     esi, dword ptr [ecx + edi * 8 + 0x54]
        or      dword ptr [esi + eax * 4], 1
        mov     dl, byte ptr [edi + ecx + 0x18]
        xor     al, al
        test    dl, dl
        mov     byte ptr [esp + 0x10], al
        jbe     l_not_found
    l_loop:
        mov     ebx, dword ptr [esp + 0x10]
        and     ebx, 0xFF
        test    byte ptr [esi + ebx * 4], 1
        jz      l_found
        inc     al
        cmp     al, dl
        mov     byte ptr [esp + 0x10], al
        jc      l_loop
    l_not_found:
        mov     byte ptr [edi + ecx + 0x27], 0
        pop     edi
        pop     esi
        pop     ebx
        ret     8
    l_found:
        mov     byte ptr [edi + ecx + 0x22], al
        mov     byte ptr [edi + ecx + 0x27], 1
        pop     edi
        pop     esi
        pop     ebx
        ret     8
    }
}
