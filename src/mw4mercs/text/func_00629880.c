/*
 * FUN_00629880 (181 B) — ABL/game-logic helper. Iterates a vector of
 * 0x1c-byte records at [this+0x50..0x54], invoking a virtual method
 * (slot 0, arg 1) on each of 6 sub-object pointers per record, then
 * compacts the vector (memmove of 7 dwords per record).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00629880(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi + 0x50]
        mov     ebx, dword ptr [edi + 0x54]
        cmp     esi, ebx
        mov     dword ptr [esp + 0x10], edi
        jz      L_6298ea
L_629895:
        mov     ecx, dword ptr [esi + 0x4]
        test    ecx, ecx
        jz      L_6298a2
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
L_6298a2:
        mov     ecx, dword ptr [esi + 0x8]
        test    ecx, ecx
        jz      L_6298af
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
L_6298af:
        mov     ecx, dword ptr [esi + 0xc]
        test    ecx, ecx
        jz      L_6298bc
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
L_6298bc:
        mov     ecx, dword ptr [esi + 0x10]
        test    ecx, ecx
        jz      L_6298c9
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
L_6298c9:
        mov     ecx, dword ptr [esi + 0x14]
        test    ecx, ecx
        jz      L_6298d6
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
L_6298d6:
        mov     ecx, dword ptr [esi + 0x18]
        test    ecx, ecx
        jz      L_6298e3
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
L_6298e3:
        add     esi, 0x1c
        cmp     esi, ebx
        jnz     L_629895
L_6298ea:
        mov     ebx, dword ptr [edi + 0x54]
        mov     ebp, dword ptr [edi + 0x50]
        mov     ecx, ebx
        sub     ecx, ebx
        mov     eax, 0x92492493
        imul    ecx
        add     edx, ecx
        sar     edx, 0x4
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        test    edx, edx
        jle     L_62992c
L_62990b:
        mov     esi, ebx
        mov     edi, ebp
        mov     ecx, 0x7
        add     ebx, 0x1c
        add     ebp, 0x1c
        dec     edx
        rep movsd
        jnz     L_62990b
        mov     ecx, dword ptr [esp + 0x10]
        pop     edi
        pop     esi
        mov     dword ptr [ecx + 0x54], ebp
        pop     ebp
        pop     ebx
        pop     ecx
        ret
L_62992c:
        mov     dword ptr [edi + 0x54], ebp
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret
    }
}
