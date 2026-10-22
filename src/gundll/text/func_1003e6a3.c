/*
 * FUN_1003e6a3 (292 B) — __cdecl.
 * String-buffer allocator: finds a free slot in a byte-arena and returns
 * an offset-encoded pointer.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void FUN_1003e6a3(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        mov     ecx, dword ptr [ebp + 8]
        mov     edx, dword ptr [ebp + 0x10]
        push    ebx
        push    esi
        mov     esi, dword ptr [ecx + 4]
        push    edi
        mov     edi, dword ptr [ecx]
        lea     ebx, [ecx + 0xf8]
        cmp     esi, edx
        mov     dword ptr [ebp - 4], edi
        mov     eax, edi
        mov     dword ptr [ebp + 8], ebx
        jc      L_e6e8
        lea     eax, [edi + edx]
        mov     byte ptr [edi], dl
        cmp     eax, ebx
        jnc     L_e6d7
        add     dword ptr [ecx], edx
        sub     dword ptr [ecx + 4], edx
        jmp     L_e6e0
    L_e6d7:
        and     dword ptr [ecx + 4], 0
        lea     eax, [ecx + 8]
        mov     dword ptr [ecx], eax
    L_e6e0:
        lea     eax, [edi + 8]
        jmp     L_e7b6
    L_e6e8:
        add     esi, edi
        cmp     byte ptr [esi], 0
        jz      L_e6f1
        mov     eax, esi
    L_e6f1:
        lea     esi, [eax + edx]
        cmp     esi, ebx
        jnc     L_e73b
    L_e6f8:
        mov     bl, byte ptr [eax]
        test    bl, bl
        jnz     L_e72e
        push    1
        lea     ebx, [eax + 1]
        pop     esi
    L_e704:
        cmp     byte ptr [ebx], 0
        jnz     L_e70d
        inc     ebx
        inc     esi
        jmp     L_e704
    L_e70d:
        cmp     esi, edx
        jnc     L_e75f
        cmp     eax, dword ptr [ebp - 4]
        jnz     L_e71b
        mov     dword ptr [ecx + 4], esi
        jmp     L_e727
    L_e71b:
        sub     dword ptr [ebp + 0xc], esi
        cmp     dword ptr [ebp + 0xc], edx
        jc      L_e7c0
    L_e727:
        mov     edi, dword ptr [ebp - 4]
        mov     eax, ebx
        jmp     L_e733
    L_e72e:
        movzx   esi, bl
        add     eax, esi
    L_e733:
        lea     esi, [eax + edx]
        cmp     esi, dword ptr [ebp + 8]
        jc      L_e6f8
    L_e73b:
        lea     esi, [ecx + 8]
    L_e73e:
        cmp     esi, edi
        jnc     L_e7c0
        lea     eax, [esi + edx]
        cmp     eax, dword ptr [ebp + 8]
        jnc     L_e7c0
        mov     al, byte ptr [esi]
        test    al, al
        jnz     L_e790
        push    1
        lea     ebx, [esi + 1]
        pop     eax
    L_e756:
        cmp     byte ptr [ebx], 0
        jnz     L_e780
        inc     ebx
        inc     eax
        jmp     L_e756
    L_e75f:
        lea     ebx, [eax + edx]
        cmp     ebx, dword ptr [ebp + 8]
        jnc     L_e770
        sub     esi, edx
        mov     dword ptr [ecx], ebx
        mov     dword ptr [ecx + 4], esi
        jmp     L_e779
    L_e770:
        and     dword ptr [ecx + 4], 0
        lea     esi, [ecx + 8]
        mov     dword ptr [ecx], esi
    L_e779:
        mov     byte ptr [eax], dl
        add     eax, 8
        jmp     L_e7b6
    L_e780:
        cmp     eax, edx
        jnc     L_e797
        sub     dword ptr [ebp + 0xc], eax
        cmp     dword ptr [ebp + 0xc], edx
        jc      L_e7c0
        mov     esi, ebx
        jmp     L_e73e
    L_e790:
        movzx   eax, al
        add     esi, eax
        jmp     L_e73e
    L_e797:
        lea     ebx, [esi + edx]
        cmp     ebx, dword ptr [ebp + 8]
        jnc     L_e7a8
        sub     eax, edx
        mov     dword ptr [ecx], ebx
        mov     dword ptr [ecx + 4], eax
        jmp     L_e7b1
    L_e7a8:
        and     dword ptr [ecx + 4], 0
        lea     eax, [ecx + 8]
        mov     dword ptr [ecx], eax
    L_e7b1:
        mov     byte ptr [esi], dl
        lea     eax, [esi + 8]
    L_e7b6:
        imul    ecx, ecx, 0xf
        shl     eax, 4
        sub     eax, ecx
        jmp     L_e7c2
    L_e7c0:
        xor     eax, eax
    L_e7c2:
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
