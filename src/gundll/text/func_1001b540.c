/*
 * FUN_1001b540 (147 B) - __thiscall, RET 0x4.
 *
 * __thiscall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_1001b540(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        test    ebp, ebp
        push    esi
        push    edi
        mov     ebx, ecx
        jnz     L_5c
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80004003
        pop     ebx
        pop     ecx
        ret     4
L_5c:
        push    ebp
        call    dword ptr [ebx + 0xc]
        and     ax, word ptr [ebx + 2]
        mov     ecx, dword ptr [ebx + 4]
        xor     edi, edi
        mov     di, ax
        shl     edi, 4
        mov     esi, dword ptr [edi + ecx*1]
        add     edi, ecx
        cmp     esi, edi
        jz      L_bc
L_78:
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        js      L_93
        mov     eax, dword ptr [esi + 8]
        push    ebp
        push    eax
        mov     dword ptr [esp + 0x18], eax
        call    dword ptr [ebx + 8]
        test    al, al
        jnz     L_a6
        mov     ebp, dword ptr [esp + 0x18]
L_93:
        mov     esi, dword ptr [esi]
        cmp     esi, edi
        jnz     L_78
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xc1120007
        pop     ebx
        pop     ecx
        ret     4
L_a6:
        mov     ebx, dword ptr [ebx + 0x10]
        test    ebx, ebx
        jz      L_b4
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        call    ebx
L_b4:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jnz     L_c9
L_bc:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xc1120007
        pop     ebx
        pop     ecx
        ret     4
L_c9:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        pop     ecx
        ret     4
    }
}
