/*
 * FUN_006C944C (644 B) — __thiscall (RET 0x18). Texture blit/copy routine:
 * computes a clipped source/dest rectangle and copies a run of texels
 * (either 4-byte-per-texel path or a byte-wise path depending on a format
 * flag at this+0x1c).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006C944C(void)
{
    __asm {
        nop
        nop
        nop
        nop
        sub     esp, 0x1c
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x2c]
        test    esi, esi
        mov     ebx, ecx
        push    edi
        mov     dword ptr [esp + 0x10], ebx
        jne     L6C947B
        mov     eax, dword ptr [ebx + 4]
        mov     edx, dword ptr [ebx + 8]
        xor     ecx, ecx
        mov     dword ptr [esp + 0x14], esi
        mov     dword ptr [esp + 0x24], eax
        mov     dword ptr [esp + 0x20], edx
        jmp     L6C948E
L6C947B:
        mov     ecx, 6
        lea     edi, [esp + 0x14]
        rep     movsd
        mov     ecx, dword ptr [esp + 0x18]
        mov     esi, dword ptr [esp + 0x14]
L6C948E:
        mov     edi, dword ptr [esp + 0x3c]
        mov     eax, dword ptr [esp + 0x20]
        add     eax, edi
        test    eax, eax
        jl      L6C96C2
        mov     edx, dword ptr [esp + 0x44]
        mov     edx, dword ptr [edx + 8]
        lea     eax, [edx - 1]
        cmp     edi, eax
        jl      L6C94BD
        mov     ebp, dword ptr [ebx + 8]
        lea     ebp, [edi + ebp - 1]
        cmp     ebp, eax
        jg      L6C96C2
L6C94BD:
        mov     eax, dword ptr [esp + 0x40]
        mov     ebp, dword ptr [esp + 0x24]
        add     ebp, eax
        test    ebp, ebp
        jl      L6C96C2
        mov     ebp, dword ptr [esp + 0x44]
        mov     ebp, dword ptr [ebp + 4]
        mov     dword ptr [esp + 0x30], ebp
        dec     ebp
        cmp     eax, ebp
        jl      L6C94F2
        mov     esi, dword ptr [ebx + 4]
        lea     esi, [esi + eax - 1]
        cmp     esi, ebp
        jg      L6C96C2
        mov     esi, dword ptr [esp + 0x14]
L6C94F2:
        test    edi, edi
        jge     L6C950C
        mov     ebp, dword ptr [esp + 0x20]
        sub     ebp, esi
        add     ebp, edi
        js      L6C950A
        sub     esi, edi
        mov     dword ptr [esp + 0x14], esi
        xor     edi, edi
        jmp     L6C950E
L6C950A:
        test    edi, edi
L6C950C:
        jne     L6C9566
L6C950E:
        test    eax, eax
        jne     L6C9566
        test    esi, esi
        jge     L6C951E
        mov     edi, esi
        neg     edi
        mov     dword ptr [esp + 0x14], eax
L6C951E:
        mov     esi, dword ptr [ebx + 8]
        cmp     dword ptr [esp + 0x20], esi
        jle     L6C952B
        mov     dword ptr [esp + 0x20], esi
L6C952B:
        cmp     dword ptr [esp + 0x20], edx
        jle     L6C9535
        mov     dword ptr [esp + 0x20], edx
L6C9535:
        mov     edx, dword ptr [esp + 0x30]
        cmp     dword ptr [esp + 0x24], edx
        jle     L6C9543
        mov     dword ptr [esp + 0x24], edx
L6C9543:
        test    ecx, ecx
        jge     L6C954D
        mov     eax, ecx
        neg     eax
        xor     ecx, ecx
L6C954D:
        mov     edx, dword ptr [ebx + 4]
        cmp     dword ptr [esp + 0x24], edx
        jle     L6C955A
        mov     dword ptr [esp + 0x24], edx
L6C955A:
        cmp     dword ptr [esp + 0x24], ecx
        jle     L6C96C2
        jmp     L6C95CC
L6C9566:
        mov     ebp, dword ptr [esp + 0x20]
        sub     ebp, esi
        lea     ebp, [edi + ebp - 1]
        lea     esi, [edx - 1]
        cmp     ebp, esi
        jle     L6C9592
        mov     ebp, dword ptr [ebx + 8]
        mov     esi, dword ptr [esp + 0x20]
        sub     edx, ebp
        sub     edx, edi
        add     esi, edx
        cmp     esi, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x20], esi
        jle     L6C96C2
L6C9592:
        test    eax, eax
        jge     L6C95A5
        mov     edx, dword ptr [ebx + 4]
        lea     edx, [edx + eax - 1]
        test    edx, edx
        jl      L6C95A5
        sub     ecx, eax
        xor     eax, eax
L6C95A5:
        mov     edx, dword ptr [esp + 0x30]
        lea     esi, [edx - 1]
        cmp     eax, esi
        jge     L6C95CC
        mov     ebp, dword ptr [esp + 0x24]
        sub     ebp, ecx
        add     ebp, eax
        cmp     ebp, esi
        jle     L6C95CC
        sub     edx, eax
        add     edx, ecx
        cmp     edx, ecx
        mov     dword ptr [esp + 0x24], edx
        jle     L6C96C2
L6C95CC:
        cmp     byte ptr [ebx + 0x1c], 1
        mov     edx, dword ptr [ebx + 0x14]
        mov     esi, dword ptr [esp + 0x44]
        mov     ebp, dword ptr [esi + 0x14]
        mov     dword ptr [esp + 0x30], edx
        jne     L6C9658
        cmp     ecx, dword ptr [esp + 0x24]
        mov     edi, ecx
        jge     L6C96C2
L6C95EC:
        mov     esi, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x20]
        mov     eax, esi
        cmp     eax, ecx
        jge     L6C9645
L6C95FA:
        mov     ecx, dword ptr [ebx + 0xc]
        imul    ecx, edi
        add     edx, ecx
        lea     ecx, [edx + eax*4 + 2]
L6C9606:
        mov     dl, byte ptr [ecx - 2]
        test    dl, dl
        je      L6C9635
        mov     eax, dword ptr [esp + 0x44]
        mov     eax, dword ptr [eax + 0xc]
        imul    eax, edi
        mov     ebx, ebp
        add     ebx, eax
        lea     eax, [ebx + esi*4]
        mov     ebx, dword ptr [esp + 0x10]
        mov     byte ptr [eax], dl
        mov     dl, byte ptr [ecx - 1]
        mov     byte ptr [eax + 1], dl
        mov     dl, byte ptr [ecx]
        mov     byte ptr [eax + 2], dl
        mov     dl, byte ptr [ecx + 1]
        mov     byte ptr [eax + 3], dl
L6C9635:
        mov     eax, dword ptr [esp + 0x20]
        inc     esi
        add     ecx, 4
        cmp     esi, eax
        jl      L6C9606
        mov     edx, dword ptr [esp + 0x30]
L6C9645:
        mov     eax, dword ptr [esp + 0x24]
        inc     edi
        cmp     edi, eax
        jl      L6C95EC
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1c
        ret     0x18
L6C9658:
        mov     ebx, dword ptr [ebx + 0xc]
        mov     esi, ebx
        imul    esi, ecx
        add     esi, edx
        mov     edx, dword ptr [esp + 0x14]
        lea     edx, [esi + edx*4]
        mov     esi, dword ptr [esp + 0x44]
        mov     esi, dword ptr [esi + 0xc]
        mov     dword ptr [esp + 0x3c], esi
        imul    esi, eax
        add     esi, ebp
        lea     eax, [esi + edi*4]
        mov     esi, dword ptr [esp + 0x24]
        cmp     ecx, esi
        jge     L6C96C2
        mov     edi, dword ptr [esp + 0x20]
        sub     edi, dword ptr [esp + 0x14]
        shl     edi, 2
        sub     esi, ecx
        mov     dword ptr [esp + 0x30], edi
        mov     dword ptr [esp + 0x44], esi
L6C9699:
        mov     ecx, dword ptr [esp + 0x30]
        mov     ebp, ecx
        shr     ecx, 2
        mov     esi, edx
        mov     edi, eax
        rep     movsd
        mov     ecx, ebp
        and     ecx, 3
        rep     movsb
        mov     edi, dword ptr [esp + 0x3c]
        mov     ecx, dword ptr [esp + 0x44]
        add     eax, edi
        add     edx, ebx
        dec     ecx
        mov     dword ptr [esp + 0x44], ecx
        jne     L6C9699
L6C96C2:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1c
        ret     0x18
        nop
        nop
        nop
        nop
    }
}
