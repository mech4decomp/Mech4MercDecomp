/*
 * FUN_006D1A70 (82 B) — Clear a bit in a bitfield array, then find first
 * zero bit and store its index.
 *
 * __thiscall (ECX = this), RET 8 (2 params).
 * Clears bit param_2 in the array at this->field_54[param_1*2],
 * then scans for first zero bit in that array.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006d1a70(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x10]
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esi + edi * 8 + 0x54]
        and     dword ptr [eax + ecx * 4], 0xFFFFFFFE
        mov     dl, byte ptr [edi + esi + 0x18]
        xor     cl, cl
        test    dl, dl
        mov     byte ptr [esp + 0x10], cl
        jbe     l_done
    l_loop:
        mov     ebx, dword ptr [esp + 0x10]
        and     ebx, 0xFF
        test    byte ptr [eax + ebx * 4], 1
        jz      l_found
        inc     cl
        cmp     cl, dl
        mov     byte ptr [esp + 0x10], cl
        jc      l_loop
        pop     edi
        pop     esi
        pop     ebx
        ret     8
    l_found:
        mov     byte ptr [edi + esi + 0x22], cl
        mov     byte ptr [edi + esi + 0x27], 1
    l_done:
        pop     edi
        pop     esi
        pop     ebx
        ret     8
    }
}
