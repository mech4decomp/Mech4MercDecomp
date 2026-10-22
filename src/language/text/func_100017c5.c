/*
 * FUN_100017c5 (436 B) — CRT-style command-line parser: tokenize
 * param_1 (handling quotes, backslashes, whitespace), fill the string
 * table param_2 with pointers into param_3, and report counts via
 * param_4 (argc) / param_5 (buffer length).
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_10008ee1;   /* char classification table 0x10008ee1 */

__declspec(naked) void __cdecl FUN_100017c5(void)
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
        jz      L_17ef
        mov     dword ptr [edi], esi
        add     edi, 4
        mov     dword ptr [ebp + 0xc], edi
L_17ef:
        cmp     byte ptr [eax], 0x22
        jnz     L_1838
L_17f4:
        mov     dl, byte ptr [eax + 1]
        inc     eax
        cmp     dl, 0x22
        jz      L_1826
        test    dl, dl
        jz      L_1826
        movzx   edx, dl
        test    byte ptr [edx + g_10008ee1], 4
        jz      L_1819
        inc     dword ptr [ecx]
        test    esi, esi
        jz      L_1819
        mov     dl, byte ptr [eax]
        mov     byte ptr [esi], dl
        inc     esi
        inc     eax
L_1819:
        inc     dword ptr [ecx]
        test    esi, esi
        jz      L_17f4
        mov     dl, byte ptr [eax]
        mov     byte ptr [esi], dl
        inc     esi
        jmp     L_17f4
L_1826:
        inc     dword ptr [ecx]
        test    esi, esi
        jz      L_1830
        and     byte ptr [esi], 0
        inc     esi
L_1830:
        cmp     byte ptr [eax], 0x22
        jnz     L_187b
        inc     eax
        jmp     L_187b
L_1838:
        inc     dword ptr [ecx]
        test    esi, esi
        jz      L_1843
        mov     dl, byte ptr [eax]
        mov     byte ptr [esi], dl
        inc     esi
L_1843:
        mov     dl, byte ptr [eax]
        inc     eax
        movzx   ebx, dl
        test    byte ptr [ebx + g_10008ee1], 4
        jz      L_185e
        inc     dword ptr [ecx]
        test    esi, esi
        jz      L_185d
        mov     bl, byte ptr [eax]
        mov     byte ptr [esi], bl
        inc     esi
L_185d:
        inc     eax
L_185e:
        cmp     dl, 0x20
        jz      L_186c
        test    dl, dl
        jz      L_1870
        cmp     dl, 9
        jnz     L_1838
L_186c:
        test    dl, dl
        jnz     L_1873
L_1870:
        dec     eax
        jmp     L_187b
L_1873:
        test    esi, esi
        jz      L_187b
        and     byte ptr [esi - 1], 0
L_187b:
        and     dword ptr [ebp + 0x18], 0
L_187f:
        cmp     byte ptr [eax], 0
        jz      L_1968
L_1888:
        mov     dl, byte ptr [eax]
        cmp     dl, 0x20
        jz      L_1894
        cmp     dl, 9
        jnz     L_1897
L_1894:
        inc     eax
        jmp     L_1888
L_1897:
        cmp     byte ptr [eax], 0
        jz      L_1968
        test    edi, edi
        jz      L_18ac
        mov     dword ptr [edi], esi
        add     edi, 4
        mov     dword ptr [ebp + 0xc], edi
L_18ac:
        mov     edx, dword ptr [ebp + 0x14]
        inc     dword ptr [edx]
L_18b1:
        mov     dword ptr [ebp + 8], 1
        xor     ebx, ebx
L_18ba:
        cmp     byte ptr [eax], 0x5c
        jnz     L_18c3
        inc     eax
        inc     ebx
        jmp     L_18ba
L_18c3:
        cmp     byte ptr [eax], 0x22
        jnz     L_18f4
        test    bl, 1
        jnz     L_18f2
        xor     edi, edi
        cmp     dword ptr [ebp + 0x18], edi
        jz      L_18e1
        cmp     byte ptr [eax + 1], 0x22
        lea     edx, [eax + 1]
        jnz     L_18e1
        mov     eax, edx
        jmp     L_18e4
L_18e1:
        mov     dword ptr [ebp + 8], edi
L_18e4:
        mov     edi, dword ptr [ebp + 0xc]
        xor     edx, edx
        cmp     dword ptr [ebp + 0x18], edx
        setz    dl
        mov     dword ptr [ebp + 0x18], edx
L_18f2:
        shr     ebx, 1
L_18f4:
        mov     edx, ebx
        dec     ebx
        test    edx, edx
        jz      L_1909
        inc     ebx
L_18fc:
        test    esi, esi
        jz      L_1904
        mov     byte ptr [esi], 0x5c
        inc     esi
L_1904:
        inc     dword ptr [ecx]
        dec     ebx
        jnz     L_18fc
L_1909:
        mov     dl, byte ptr [eax]
        test    dl, dl
        jz      L_1959
        cmp     dword ptr [ebp + 0x18], 0
        jnz     L_191f
        cmp     dl, 0x20
        jz      L_1959
        cmp     dl, 9
        jz      L_1959
L_191f:
        cmp     dword ptr [ebp + 8], 0
        jz      L_1953
        test    esi, esi
        jz      L_1942
        movzx   ebx, dl
        test    byte ptr [ebx + g_10008ee1], 4
        jz      L_193b
        mov     byte ptr [esi], dl
        inc     esi
        inc     eax
        inc     dword ptr [ecx]
L_193b:
        mov     dl, byte ptr [eax]
        mov     byte ptr [esi], dl
        inc     esi
        jmp     L_1951
L_1942:
        movzx   edx, dl
        test    byte ptr [edx + g_10008ee1], 4
        jz      L_1951
        inc     eax
        inc     dword ptr [ecx]
L_1951:
        inc     dword ptr [ecx]
L_1953:
        inc     eax
        jmp     L_18b1
L_1959:
        test    esi, esi
        jz      L_1961
        and     byte ptr [esi], 0
        inc     esi
L_1961:
        inc     dword ptr [ecx]
        jmp     L_187f
L_1968:
        test    edi, edi
        jz      L_196f
        and     dword ptr [edi], 0
L_196f:
        mov     eax, dword ptr [ebp + 0x14]
        pop     edi
        pop     esi
        pop     ebx
        inc     dword ptr [eax]
        pop     ebp
        ret
    }
}
