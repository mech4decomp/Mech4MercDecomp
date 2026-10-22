/*
 * FUN_006cf450 (97 B) — Bitmask allocator (__fastcall, ECX = this).
 * Scans 4 dwords of a 128-bit allocation bitmap at this+0x100C for a
 * free bit; sets it and returns (slot<<5 | bit), or -1 if full.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int FUN_006cf450(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        xor     eax, eax
        lea     ebx, [ecx + 0x100C]
L_6cf45b:
        mov     edi, dword ptr [ebx]
        test    edi, edi
        jz      L_6cf489
        cmp     edi, -0x1
        jnc     L_6cf479
        mov     esi, 0x1
        xor     edx, edx
L_6cf46d:
        test    edi, esi
        jz      L_6cf4a1
        inc     edx
        shl     esi, 0x1
        cmp     edx, 0x20
        jc      L_6cf46d
L_6cf479:
        inc     eax
        add     ebx, 0x4
        cmp     eax, 0x4
        jl      L_6cf45b
        pop     edi
        pop     esi
        or      eax, 0xFFFFFFFF
        pop     ebx
        ret
L_6cf489:
        mov     edx, dword ptr [ecx + eax*4 + 0x100C]
        pop     edi
        or      edx, 0x1
        pop     esi
        mov     dword ptr [ecx + eax*4 + 0x100C], edx
        shl     eax, 0x5
        pop     ebx
        ret
L_6cf4a1:
        or      dword ptr [ecx + eax*4 + 0x100C], esi
        pop     edi
        shl     eax, 0x5
        pop     esi
        add     eax, edx
        pop     ebx
        ret
    }
}
