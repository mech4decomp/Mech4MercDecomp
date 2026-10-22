/*
 * FUN_006525a0 (105 B) — __thiscall, RET 0x4. Removes an element (by value)
 * from a vector of 12-byte records: linear search, then shift-down the tail.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006525a0(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        push    esi
        push    edi
        mov     edi, dword ptr [ecx + 0x4]
        cmp     eax, edi
        jz      L_652604
        mov     edx, dword ptr [esp + 0xc]
L_6525af:
        cmp     dword ptr [eax], edx
        jz      L_6525bf
        add     eax, 0xc
        cmp     eax, edi
        jnz     L_6525af
        pop     edi
        pop     esi
        ret     0x4
L_6525bf:
        push    ebx
        lea     ebx, [eax + 0xc]
        cmp     ebx, edi
        jz      L_6525fd
        mov     esi, eax
        mov     edx, edi
        sub     edx, ebx
        mov     eax, 0x2aaaaaab
        imul    edx
        sar     edx, 0x1
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        test    edx, edx
        jle     L_6525fd
        push    ebp
L_6525e2:
        dec     edx
        lea     eax, [esi + 0xc]
        mov     ebx, eax
        mov     ebp, dword ptr [ebx]
        mov     dword ptr [esi], ebp
        mov     ebp, dword ptr [ebx + 0x4]
        mov     dword ptr [esi + 0x4], ebp
        mov     ebx, dword ptr [ebx + 0x8]
        mov     dword ptr [esi + 0x8], ebx
        mov     esi, eax
        jnz     L_6525e2
        pop     ebp
L_6525fd:
        add     edi, -0xc
        mov     dword ptr [ecx + 0x4], edi
        pop     ebx
L_652604:
        pop     edi
        pop     esi
        ret     0x4
    }
}
