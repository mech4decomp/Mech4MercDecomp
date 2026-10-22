/*
 * FUN_00500D40 (132 B) — data block containing three __thiscall RET 0x8
 * functions. First two copy a NUL-terminated string from an arg into a
 * buffer at [ecx+0x1c]+offset using repne scasb + rep movsd/movsb; the
 * third copies a 16-byte struct.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00500D40(void)
{
    __asm {
        mov     edx, dword ptr [ecx + 0x1c]
        add     edx, dword ptr [esp + 4]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        pop     edi
        pop     esi
        ret     8
        nop
        push    esi
        push    edi
        mov     edi, dword ptr [ecx + 0x1c]
        add     edi, dword ptr [esp + 0xc]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        mov     edi, dword ptr [esp + 0x10]
        shr     ecx, 2
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        pop     edi
        pop     esi
        ret     8
        nop
        nop
        nop
        mov     eax, dword ptr [ecx + 0x1c]
        add     eax, dword ptr [esp + 4]
        mov     ecx, dword ptr [esp + 8]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [ecx + 4]
        mov     dword ptr [eax + 4], edx
        mov     edx, dword ptr [ecx + 8]
        mov     ecx, dword ptr [ecx + 0xc]
        mov     dword ptr [eax + 8], edx
        mov     dword ptr [eax + 0xc], ecx
        ret     8
    }
}
