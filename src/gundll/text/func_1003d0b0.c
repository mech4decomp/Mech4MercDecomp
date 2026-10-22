/*
 * FUN_1003d0b0 (128 B) - __cdecl.  strstr-like: returns pointer to first
 * occurrence of substring arg2 in string arg1, or NULL.  Tail-merges into the
 * strchr scan loop at FUN_1003cff6 (inside func_1003cfe0).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1003cff6(void);   /* shared scan loop in func_1003cfe0 */

__declspec(naked) void FUN_1003d0b0(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 8]
        push    edi
        push    ebx
        push    esi
        mov     dl, byte ptr [ecx]
        mov     edi, dword ptr [esp + 0x10]
        test    dl, dl
        je      L_d12a
        mov     dh, byte ptr [ecx + 1]
        test    dh, dh
        je      L_d117
L_d0c8:
        mov     esi, edi
        mov     ecx, dword ptr [esp + 0x14]
        mov     al, byte ptr [edi]
        inc     esi
        __emit 0x38   /* cmp al,dl - MSVC6 reverses r8,r8 cmp operands (3A) */
        __emit 0xD0
        je      L_d0ea
        test    al, al
        je      L_d0e4
L_d0d9:
        mov     al, byte ptr [esi]
        inc     esi
L_d0dc:
        __emit 0x38   /* cmp al,dl - MSVC6 reverses r8,r8 cmp operands (3A) */
        __emit 0xD0
        je      L_d0ea
        test    al, al
        jne     L_d0d9
L_d0e4:
        pop     esi
        pop     ebx
        pop     edi
        xor     eax, eax
        ret
L_d0ea:
        mov     al, byte ptr [esi]
        inc     esi
        __emit 0x38   /* cmp al,dh - MSVC6 reverses r8,r8 cmp operands (3A) */
        __emit 0xF0
        jne     L_d0dc
        lea     edi, [esi - 1]
L_d0f4:
        mov     ah, byte ptr [ecx + 2]
        test    ah, ah
        je      L_d123
        mov     al, byte ptr [esi]
        add     esi, 2
        __emit 0x38   /* cmp al,ah - MSVC6 reverses r8,r8 cmp operands (3A) */
        __emit 0xE0
        jne     L_d0c8
        mov     al, byte ptr [ecx + 3]
        test    al, al
        je      L_d123
        mov     ah, byte ptr [esi - 1]
        add     ecx, 2
        __emit 0x38   /* cmp al,ah - MSVC6 reverses r8,r8 cmp operands (3A) */
        __emit 0xE0
        je      L_d0f4
        jmp     L_d0c8
L_d117:
        xor     eax, eax
        pop     esi
        pop     ebx
        pop     edi
        mov     al, dl
        jmp     FUN_1003cff6
L_d123:
        lea     eax, [edi - 1]
        pop     esi
        pop     ebx
        pop     edi
        ret
L_d12a:
        mov     eax, edi
        pop     esi
        pop     ebx
        pop     edi
        ret
    }
}
