/*
 * FUN_10003a4c (87 B, __cdecl) — resolve a string-table address: walk the
 * arena free-list to find the arena containing param_1, then compute the
 * block index. Writes the arena base to *param_2 and the block offset to
 * *param_3; returns the block index (or 0 if not found).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int FUN_10003a4c(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     edx, 0x10006340
        push    esi
        mov     ecx, edx
L_3a58:
        cmp     eax, dword ptr [ecx + 0x10]
        jbe     L_3a62
        cmp     eax, dword ptr [ecx + 0x14]
        jc      L_3a6a
L_3a62:
        mov     ecx, dword ptr [ecx]
        cmp     ecx, edx
        jz      L_3a9f
        jmp     L_3a58
L_3a6a:
        test    al, 0xf
        jnz     L_3a9f
        mov     esi, eax
        mov     edx, 0x100
        and     esi, 0xfff
        cmp     esi, edx
        jc      L_3a9f
        mov     esi, dword ptr [esp + 0xc]
        mov     dword ptr [esi], ecx
        mov     esi, dword ptr [esp + 0x10]
        mov     ecx, eax
        and     cx, 0xf000
        sub     eax, ecx
        mov     dword ptr [esi], ecx
        sub     eax, edx
        pop     esi
        sar     eax, 4
        lea     eax, [eax + ecx + 8]
        ret
L_3a9f:
        xor     eax, eax
        pop     esi
        ret
    }
}
