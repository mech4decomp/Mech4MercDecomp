/*
 * FUN_10001754 (436 B) — command-line tokenizer: parse a source string
 * into an array of argument pointers, honoring quotes and backslash
 * escapes, using a character-class table at 0x100056a1.
 *
 * __cdecl, 5 args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_100056a1;                               /* 0x100056a1 char-class table */

__declspec(naked) void __cdecl FUN_10001754(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     ecx, dword ptr [ebp + 0x18]
        mov     eax, dword ptr [ebp + 0x14]
        push    ebx
        push    esi
        and     dword ptr [ecx], 0
        mov     esi, dword ptr [ebp + 0x10]
        push    edi
        mov     edi, dword ptr [ebp + 0xc]
        mov     dword ptr [eax], 1
        mov     eax, dword ptr [ebp + 0x8]
        test    edi, edi
        jz      L_77e
        mov     dword ptr [edi], esi
        add     edi, 4
        mov     dword ptr [ebp + 0xc], edi
L_77e:
        cmp     byte ptr [eax], 0x22
        jnz     L_7c7
L_783:
        mov     dl, byte ptr [eax + 1]
        inc     eax
        cmp     dl, 0x22
        jz      L_7b5
        test    dl, dl
        jz      L_7b5
        movzx   edx, dl
        test    byte ptr [g_100056a1 + edx], 4
        jz      L_7a8
        inc     dword ptr [ecx]
        test    esi, esi
        jz      L_7a8
        mov     dl, byte ptr [eax]
        mov     byte ptr [esi], dl
        inc     esi
        inc     eax
L_7a8:
        inc     dword ptr [ecx]
        test    esi, esi
        jz      L_783
        mov     dl, byte ptr [eax]
        mov     byte ptr [esi], dl
        inc     esi
        jmp     L_783
L_7b5:
        inc     dword ptr [ecx]
        test    esi, esi
        jz      L_7bf
        and     byte ptr [esi], 0
        inc     esi
L_7bf:
        cmp     byte ptr [eax], 0x22
        jnz     L_80a
        inc     eax
        jmp     L_80a
L_7c7:
        inc     dword ptr [ecx]
        test    esi, esi
        jz      L_7d2
        mov     dl, byte ptr [eax]
        mov     byte ptr [esi], dl
        inc     esi
L_7d2:
        mov     dl, byte ptr [eax]
        inc     eax
        movzx   ebx, dl
        test    byte ptr [g_100056a1 + ebx], 4
        jz      L_7ed
        inc     dword ptr [ecx]
        test    esi, esi
        jz      L_7ec
        mov     bl, byte ptr [eax]
        mov     byte ptr [esi], bl
        inc     esi
L_7ec:
        inc     eax
L_7ed:
        cmp     dl, 0x20
        jz      L_7fb
        test    dl, dl
        jz      L_7ff
        cmp     dl, 9
        jnz     L_7c7
L_7fb:
        test    dl, dl
        jnz     L_802
L_7ff:
        dec     eax
        jmp     L_80a
L_802:
        test    esi, esi
        jz      L_80a
        and     byte ptr [esi - 1], 0
L_80a:
        and     dword ptr [ebp + 0x18], 0
L_80e:
        cmp     byte ptr [eax], 0
        jz      L_8f7
L_817:
        mov     dl, byte ptr [eax]
        cmp     dl, 0x20
        jz      L_823
        cmp     dl, 9
        jnz     L_826
L_823:
        inc     eax
        jmp     L_817
L_826:
        cmp     byte ptr [eax], 0
        jz      L_8f7
        test    edi, edi
        jz      L_83b
        mov     dword ptr [edi], esi
        add     edi, 4
        mov     dword ptr [ebp + 0xc], edi
L_83b:
        mov     edx, dword ptr [ebp + 0x14]
        inc     dword ptr [edx]
L_840:
        mov     dword ptr [ebp + 0x8], 1
        xor     ebx, ebx
L_849:
        cmp     byte ptr [eax], 0x5c
        jnz     L_852
        inc     eax
        inc     ebx
        jmp     L_849
L_852:
        cmp     byte ptr [eax], 0x22
        jnz     L_883
        test    bl, 1
        jnz     L_881
        xor     edi, edi
        cmp     dword ptr [ebp + 0x18], edi
        jz      L_870
        cmp     byte ptr [eax + 1], 0x22
        lea     edx, [eax + 1]
        jnz     L_870
        mov     eax, edx
        jmp     L_873
L_870:
        mov     dword ptr [ebp + 0x8], edi
L_873:
        mov     edi, dword ptr [ebp + 0xc]
        xor     edx, edx
        cmp     dword ptr [ebp + 0x18], edx
        setz    dl
        mov     dword ptr [ebp + 0x18], edx
L_881:
        shr     ebx, 1
L_883:
        mov     edx, ebx
        dec     ebx
        test    edx, edx
        jz      L_898
        inc     ebx
L_88b:
        test    esi, esi
        jz      L_893
        mov     byte ptr [esi], 0x5c
        inc     esi
L_893:
        inc     dword ptr [ecx]
        dec     ebx
        jnz     L_88b
L_898:
        mov     dl, byte ptr [eax]
        test    dl, dl
        jz      L_8e8
        cmp     dword ptr [ebp + 0x18], 0
        jnz     L_8ae
        cmp     dl, 0x20
        jz      L_8e8
        cmp     dl, 9
        jz      L_8e8
L_8ae:
        cmp     dword ptr [ebp + 0x8], 0
        jz      L_8e2
        test    esi, esi
        jz      L_8d1
        movzx   ebx, dl
        test    byte ptr [g_100056a1 + ebx], 4
        jz      L_8ca
        mov     byte ptr [esi], dl
        inc     esi
        inc     eax
        inc     dword ptr [ecx]
L_8ca:
        mov     dl, byte ptr [eax]
        mov     byte ptr [esi], dl
        inc     esi
        jmp     L_8e0
L_8d1:
        movzx   edx, dl
        test    byte ptr [g_100056a1 + edx], 4
        jz      L_8e0
        inc     eax
        inc     dword ptr [ecx]
L_8e0:
        inc     dword ptr [ecx]
L_8e2:
        inc     eax
        jmp     L_840
L_8e8:
        test    esi, esi
        jz      L_8f0
        and     byte ptr [esi], 0
        inc     esi
L_8f0:
        inc     dword ptr [ecx]
        jmp     L_80e
L_8f7:
        test    edi, edi
        jz      L_8fe
        and     dword ptr [edi], 0
L_8fe:
        mov     eax, dword ptr [ebp + 0x14]
        pop     edi
        pop     esi
        pop     ebx
        inc     dword ptr [eax]
        pop     ebp
        ret
    }
}
