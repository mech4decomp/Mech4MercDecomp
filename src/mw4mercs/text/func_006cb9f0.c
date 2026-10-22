/*
 * FUN_006cb9f0 (1188 B) — __thiscall (RET 0x10) block-copy routine.
 * Pure integer/pointer arithmetic, no external calls, no absolute data
 * refs, no vtable. In scope.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006cb9f0(void)
{
    __asm {
        sub     esp, 0x24
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x34]
        test    esi, esi
        mov     eax, ecx
        push    edi
        mov     dword ptr [esp + 0x10], eax
        jnz     L_006cba13
        mov     ebp, dword ptr [eax + 0x4]
        mov     esi, dword ptr [eax + 0x8]
        xor     edx, edx
        xor     edi, edi
        dec     ebp
        dec     esi
        jmp     L_006cba2e
L_006cba13:
        mov     ecx, 0x6
        lea     edi, [esp + 0x1c]
        rep     movsd
        mov     esi, dword ptr [esp + 0x28]
        mov     ebp, dword ptr [esp + 0x2c]
        mov     edi, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x20]
L_006cba2e:
        mov     ecx, dword ptr [esp + 0x3c]
        lea     ebx, [esi + ecx*0x1]
        test    ebx, ebx
        jl      L_006cbe8a
        mov     ebx, dword ptr [esp + 0x44]
        mov     ebx, dword ptr [ebx + 0x8]
        mov     dword ptr [esp + 0x14], ebx
        dec     ebx
        cmp     ecx, ebx
        mov     dword ptr [esp + 0x38], ebx
        jl      L_006cba60
        mov     eax, dword ptr [eax + 0x8]
        lea     eax, [eax + ecx*0x1 + -0x1]
        cmp     eax, ebx
        jg      L_006cbe8a
L_006cba60:
        mov     eax, dword ptr [esp + 0x40]
        lea     ebx, [eax + ebp*0x1]
        test    ebx, ebx
        jl      L_006cbe8a
        mov     ebx, dword ptr [esp + 0x44]
        mov     ebx, dword ptr [ebx + 0x4]
        mov     dword ptr [esp + 0x40], ebx
        dec     ebx
        cmp     eax, ebx
        mov     dword ptr [esp + 0x18], ebx
        jl      L_006cba9a
        mov     ecx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [ecx + 0x4]
        lea     ecx, [ecx + eax*0x1 + -0x1]
        cmp     ecx, ebx
        jg      L_006cbe8a
        mov     ecx, dword ptr [esp + 0x3c]
L_006cba9a:
        test    ecx, ecx
        jge     L_006cbabe
        mov     ebx, esi
        sub     ebx, edi
        add     ebx, ecx
        test    ebx, ebx
        jle     L_006cbe8a
        sub     edi, ecx
        xor     ecx, ecx
        cmp     esi, edi
        mov     dword ptr [esp + 0x3c], ecx
        jl      L_006cbe8a
        jmp     L_006cbac0
L_006cbabe:
        jnz     L_006cbb1a
L_006cbac0:
        test    eax, eax
        jnz     L_006cbb1a
        test    edi, edi
        jge     L_006cbad0
        neg     edi
        mov     dword ptr [esp + 0x3c], edi
        xor     edi, edi
L_006cbad0:
        mov     ecx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [ecx + 0x8]
        dec     ecx
        cmp     esi, ecx
        jle     L_006cbade
        mov     esi, ecx
L_006cbade:
        cmp     esi, edi
        jle     L_006cbe8a
        mov     ebx, dword ptr [esp + 0x14]
        mov     ecx, esi
        sub     ecx, edi
        cmp     ecx, ebx
        jle     L_006cbaf6
        mov     esi, dword ptr [esp + 0x38]
L_006cbaf6:
        mov     ebx, dword ptr [esp + 0x40]
        mov     ecx, ebp
        sub     ecx, edx
        cmp     ecx, ebx
        jle     L_006cbb06
        mov     ebp, dword ptr [esp + 0x18]
L_006cbb06:
        test    edx, edx
        jge     L_006cbb10
        mov     eax, edx
        neg     eax
        xor     edx, edx
L_006cbb10:
        cmp     ebp, edx
        jle     L_006cbe8a
        jmp     L_006cbb80
L_006cbb1a:
        mov     ebx, esi
        sub     ebx, edi
        lea     ecx, [ebx + ecx*0x1 + -0x1]
        cmp     ecx, dword ptr [esp + 0x38]
        jle     L_006cbb41
        mov     ebx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x14]
        sub     ecx, dword ptr [ebx + 0x8]
        sub     ecx, dword ptr [esp + 0x3c]
        add     esi, ecx
        cmp     esi, edi
        jle     L_006cbe8a
L_006cbb41:
        test    eax, eax
        jge     L_006cbb60
        mov     ecx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [ecx + 0x4]
        lea     ecx, [ecx + eax*0x1 + -0x1]
        test    ecx, ecx
        jl      L_006cbb60
        sub     edx, eax
        xor     eax, eax
        cmp     ebp, edx
        jle     L_006cbe8a
L_006cbb60:
        mov     ecx, dword ptr [esp + 0x40]
        cmp     eax, ecx
        jge     L_006cbb80
        mov     ebx, ebp
        sub     ebx, edx
        add     ebx, eax
        cmp     ebx, ecx
        jle     L_006cbb80
        sub     ecx, eax
        add     ecx, edx
        mov     ebp, ecx
        cmp     ebp, edx
        jle     L_006cbe8a
L_006cbb80:
        mov     ebx, dword ptr [esp + 0x44]
        mov     ecx, dword ptr [ebx + 0xc]
        mov     dword ptr [esp + 0x44], ecx
        imul    ecx, eax
        mov     eax, dword ptr [esp + 0x3c]
        lea     eax, [ecx + eax*0x4]
        mov     ecx, dword ptr [ebx + 0x14]
        mov     ebx, dword ptr [esp + 0x10]
        add     eax, ecx
        mov     ecx, dword ptr [ebx + 0xc]
        mov     dword ptr [esp + 0x3c], ecx
        imul    ecx, edx
        lea     ecx, [ecx + edi*0x4]
        add     ecx, dword ptr [ebx + 0x18]
        cmp     byte ptr [ebx + 0x1c], 0x1
        jnz     L_006cbc7d
        cmp     byte ptr [ebx + 0x38], 0x0
        jz      L_006cbc0d
        sub     ebp, edx
        test    ebp, ebp
        jle     L_006cbe8a
        sub     esi, edi
        mov     edi, dword ptr [esp + 0x44]
L_006cbbce:
        test    esi, esi
        jle     L_006cbbed
        mov     edx, esi
L_006cbbd4:
        cmp     byte ptr [ecx], 0x0
        jz      L_006cbbe4
        mov     ebx, dword ptr [esp + 0x10]
        add     ebx, 0x34
        mov     ebx, dword ptr [ebx]
        mov     dword ptr [eax], ebx
L_006cbbe4:
        add     ecx, 0x4
        add     eax, 0x4
        dec     edx
        jnz     L_006cbbd4
L_006cbbed:
        mov     ebx, dword ptr [esp + 0x3c]
        mov     edx, esi
        neg     edx
        shl     edx, 0x2
        add     ebx, edx
        add     edx, edi
        add     ecx, ebx
        add     eax, edx
        dec     ebp
        jnz     L_006cbbce
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x24
        ret     0x10
L_006cbc0d:
        sub     ebp, edx
        test    ebp, ebp
        jle     L_006cbe8a
        mov     ebx, esi
        sub     ebx, edi
        mov     dword ptr [esp + 0x40], ebp
L_006cbc1f:
        test    ebx, ebx
        jle     L_006cbc51
        mov     dword ptr [esp + 0x38], ebx
L_006cbc27:
        cmp     byte ptr [ecx], 0x0
        jz      L_006cbc40
        mov     edi, ecx
        mov     esi, eax
        sub     edi, eax
        mov     ebp, 0x4
L_006cbc37:
        mov     dl, byte ptr [edi + esi*0x1]
        mov     byte ptr [esi], dl
        inc     esi
        dec     ebp
        jnz     L_006cbc37
L_006cbc40:
        mov     edx, dword ptr [esp + 0x38]
        add     ecx, 0x4
        add     eax, 0x4
        dec     edx
        mov     dword ptr [esp + 0x38], edx
        jnz     L_006cbc27
L_006cbc51:
        mov     esi, dword ptr [esp + 0x3c]
        mov     edx, ebx
        neg     edx
        shl     edx, 0x2
        add     esi, edx
        add     ecx, esi
        mov     esi, dword ptr [esp + 0x44]
        add     esi, edx
        mov     edx, dword ptr [esp + 0x40]
        add     eax, esi
        dec     edx
        mov     dword ptr [esp + 0x40], edx
        jnz     L_006cbc1f
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x24
        ret     0x10
L_006cbc7d:
        cmp     byte ptr [ebx + 0x38], 0x0
        jz      L_006cbd9a
        cmp     byte ptr [ebx + 0x39], 0x0
        jz      L_006cbd11
        sub     ebp, edx
        test    ebp, ebp
        jle     L_006cbe8a
        sub     esi, edi
        mov     dword ptr [esp + 0x40], esi
        mov     dword ptr [esp + 0x38], ebp
L_006cbca5:
        test    esi, esi
        jle     L_006cbce5
        mov     ebp, esi
L_006cbcab:
        cmp     byte ptr [ecx], 0x0
        jnz     L_006cbcc5
        xor     esi, esi
        lea     edi, [ebx + 0x30]
L_006cbcb5:
        mov     dl, byte ptr [edi]
        mov     byte ptr [esi + eax*0x1], dl
        inc     esi
        add     edi, 0x4
        cmp     esi, 0x4
        jc      L_006cbcb5
        jmp     L_006cbcd8
L_006cbcc5:
        xor     esi, esi
        lea     edi, [ebx + 0x34]
L_006cbcca:
        mov     dl, byte ptr [edi]
        mov     byte ptr [esi + eax*0x1], dl
        inc     esi
        add     edi, 0x4
        cmp     esi, 0x4
        jc      L_006cbcca
L_006cbcd8:
        add     ecx, 0x4
        add     eax, 0x4
        dec     ebp
        jnz     L_006cbcab
        mov     esi, dword ptr [esp + 0x40]
L_006cbce5:
        mov     edi, dword ptr [esp + 0x3c]
        mov     edx, esi
        neg     edx
        shl     edx, 0x2
        add     edi, edx
        add     ecx, edi
        mov     edi, dword ptr [esp + 0x44]
        add     edi, edx
        mov     edx, dword ptr [esp + 0x38]
        add     eax, edi
        dec     edx
        mov     dword ptr [esp + 0x38], edx
        jnz     L_006cbca5
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x24
        ret     0x10
L_006cbd11:
        sub     ebp, edx
        test    ebp, ebp
        jle     L_006cbe8a
        mov     ebx, esi
        sub     ebx, edi
        mov     dword ptr [esp + 0x40], ebp
L_006cbd23:
        test    ebx, ebx
        jle     L_006cbd6e
        mov     dword ptr [esp + 0x38], ebx
L_006cbd2b:
        cmp     byte ptr [ecx], 0x0
        jnz     L_006cbd46
        mov     edi, ecx
        mov     esi, eax
        sub     edi, eax
        mov     ebp, 0x4
L_006cbd3b:
        mov     dl, byte ptr [esi + edi*0x1]
        mov     byte ptr [esi], dl
        inc     esi
        dec     ebp
        jnz     L_006cbd3b
        jmp     L_006cbd5d
L_006cbd46:
        mov     edx, dword ptr [esp + 0x10]
        xor     esi, esi
        lea     edi, [edx + 0x34]
L_006cbd4f:
        mov     dl, byte ptr [edi]
        mov     byte ptr [esi + eax*0x1], dl
        inc     esi
        add     edi, 0x4
        cmp     esi, 0x4
        jc      L_006cbd4f
L_006cbd5d:
        mov     edx, dword ptr [esp + 0x38]
        add     ecx, 0x4
        add     eax, 0x4
        dec     edx
        mov     dword ptr [esp + 0x38], edx
        jnz     L_006cbd2b
L_006cbd6e:
        mov     esi, dword ptr [esp + 0x3c]
        mov     edx, ebx
        neg     edx
        shl     edx, 0x2
        add     esi, edx
        add     ecx, esi
        mov     esi, dword ptr [esp + 0x44]
        add     esi, edx
        mov     edx, dword ptr [esp + 0x40]
        add     eax, esi
        dec     edx
        mov     dword ptr [esp + 0x40], edx
        jnz     L_006cbd23
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x24
        ret     0x10
L_006cbd9a:
        cmp     byte ptr [ebx + 0x39], 0x0
        jz      L_006cbe2d
        sub     ebp, edx
        test    ebp, ebp
        jle     L_006cbe8a
        mov     ebx, esi
        sub     ebx, edi
        mov     dword ptr [esp + 0x40], ebp
L_006cbdb6:
        test    ebx, ebx
        jle     L_006cbe01
        mov     dword ptr [esp + 0x38], ebx
L_006cbdbe:
        cmp     byte ptr [ecx], 0x0
        jnz     L_006cbddc
        mov     edx, dword ptr [esp + 0x10]
        xor     esi, esi
        lea     edi, [edx + 0x30]
L_006cbdcc:
        mov     dl, byte ptr [edi]
        mov     byte ptr [esi + eax*0x1], dl
        inc     esi
        add     edi, 0x4
        cmp     esi, 0x4
        jc      L_006cbdcc
        jmp     L_006cbdf0
L_006cbddc:
        mov     edi, ecx
        mov     esi, eax
        sub     edi, eax
        mov     ebp, 0x4
L_006cbde7:
        mov     dl, byte ptr [esi + edi*0x1]
        mov     byte ptr [esi], dl
        inc     esi
        dec     ebp
        jnz     L_006cbde7
L_006cbdf0:
        mov     edx, dword ptr [esp + 0x38]
        add     ecx, 0x4
        add     eax, 0x4
        dec     edx
        mov     dword ptr [esp + 0x38], edx
        jnz     L_006cbdbe
L_006cbe01:
        mov     esi, dword ptr [esp + 0x3c]
        mov     edx, ebx
        neg     edx
        shl     edx, 0x2
        add     esi, edx
        add     ecx, esi
        mov     esi, dword ptr [esp + 0x44]
        add     esi, edx
        mov     edx, dword ptr [esp + 0x40]
        add     eax, esi
        dec     edx
        mov     dword ptr [esp + 0x40], edx
        jnz     L_006cbdb6
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x24
        ret     0x10
L_006cbe2d:
        sub     ebp, edx
        test    ebp, ebp
        jle     L_006cbe8a
        mov     ebx, esi
        sub     ebx, edi
        mov     dword ptr [esp + 0x40], ebp
L_006cbe3b:
        test    ebx, ebx
        jle     L_006cbe68
        mov     dword ptr [esp + 0x38], ebx
L_006cbe43:
        mov     edi, ecx
        mov     esi, eax
        sub     edi, eax
        mov     ebp, 0x4
L_006cbe4e:
        mov     dl, byte ptr [esi + edi*0x1]
        mov     byte ptr [esi], dl
        inc     esi
        dec     ebp
        jnz     L_006cbe4e
        mov     edx, dword ptr [esp + 0x38]
        add     ecx, 0x4
        add     eax, 0x4
        dec     edx
        mov     dword ptr [esp + 0x38], edx
        jnz     L_006cbe43
L_006cbe68:
        mov     esi, dword ptr [esp + 0x3c]
        mov     edx, ebx
        neg     edx
        shl     edx, 0x2
        add     esi, edx
        add     ecx, esi
        mov     esi, dword ptr [esp + 0x44]
        add     esi, edx
        mov     edx, dword ptr [esp + 0x40]
        add     eax, esi
        dec     edx
        mov     dword ptr [esp + 0x40], edx
        jnz     L_006cbe3b
L_006cbe8a:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x24
        ret     0x10
    }
}
