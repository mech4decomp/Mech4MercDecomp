/*
 * FUN_0066D9E0 (130 B) — __stdcall, RET 8 (two params: uint* out, uint in).
 * Recombines the four bytes of *out, adjusting the high byte by the
 * difference of the high bytes, clamping each byte to 0xFF, and writes the
 * packed result back to *out.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_0066d9e0(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 8]
        mov     eax, dword ptr [ebx]
        xor     ecx, ecx
        xor     edx, edx
        mov     dword ptr [esp + 8], eax
        mov     cl, byte ptr [esp + 0xa]
        mov     dl, ah
        push    esi
        push    edi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x14]
        mov     edi, edx
        mov     edx, eax
        shr     eax, 0x18
        shr     ecx, 0x18
        and     edx, 0xff
        sub     ecx, eax
        jz      L_16
        mov     ecx, 0xfffffffb
L_16:
        add     eax, ecx
        cmp     esi, 0xff
        jbe     L_25
        mov     esi, 0xff
L_25:
        cmp     edi, 0xff
        jbe     L_32
        mov     edi, 0xff
L_32:
        cmp     edx, 0xff
        jbe     L_3f
        mov     edx, 0xff
L_3f:
        cmp     eax, 0xff
        jbe     L_4b
        mov     eax, 0xff
L_4b:
        shl     eax, 8
        add     eax, esi
        shl     eax, 8
        add     eax, edi
        shl     eax, 8
        pop     edi
        add     eax, edx
        pop     esi
        mov     dword ptr [ebx], eax
        pop     ebx
        ret     8
    }
}
