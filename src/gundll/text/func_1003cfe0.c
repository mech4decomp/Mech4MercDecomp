/*
 * FUN_1003cfe0 (204 B) - __cdecl.  strchr-like: returns pointer to first
 * occurrence of char arg2 in string arg1, or NULL.  Fast 4-byte scan with
 * 0x7efefeff trick; cold return path at 0x1003cfe0 is a branch target of the
 * main body (entry at 0x1003cff0 after alignment NOPs).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void FUN_1003cfe0(void)
{
    __asm {
        /* 0x1003cfe0 - cold return path (branch target) */
retpath_cfe0:
        lea     eax, [edx - 1]
        pop     ebx
        ret
        /* 0x1003cfe5 - alignment NOPs (lea esp,[esp]) */
        __emit 0x8D   /* lea esp,[esp] SIB NOP - MSVC6 drops the 00 disp byte */
        __emit 0xA4
        __emit 0x24
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x8D   /* lea esp,[esp] NOP - MSVC6 drops the 00 disp byte */
        __emit 0x64
        __emit 0x24
        __emit 0x00
        /* 0x1003cff0 - entry */
        xor     eax, eax
        mov     al, byte ptr [esp + 8]
        push    ebx
        mov     ebx, eax
        shl     eax, 8
        mov     edx, dword ptr [esp + 8]
        test    edx, 3
        je      L_d01b
L_d008:
        mov     cl, byte ptr [edx]
        inc     edx
        __emit 0x38   /* cmp bl,cl - MSVC6 reverses r8,r8 cmp operands (3A) */
        __emit 0xD9
        je      retpath_cfe0
        test    cl, cl
        je      L_d064
        test    edx, 3
        jne     L_d008
L_d01b:
        or      ebx, eax
        push    edi
        mov     eax, ebx
        shl     ebx, 0x10
        push    esi
        or      ebx, eax
L_d026:
        mov     ecx, dword ptr [edx]
        mov     edi, 0x7efefeff
        mov     eax, ecx
        mov     esi, edi
        xor     ecx, ebx
        add     esi, eax
        add     edi, ecx
        xor     ecx, 0xffffffff
        xor     eax, 0xffffffff
        xor     ecx, edi
        xor     eax, esi
        add     edx, 4
        and     ecx, 0x81010100
        jne     L_d068
        and     eax, 0x81010100
        je      L_d026
        and     eax, 0x1010100
        jne     L_d062
        and     esi, 0x80000000
        jne     L_d026
L_d062:
        pop     esi
        pop     edi
L_d064:
        pop     ebx
        xor     eax, eax
        ret
L_d068:
        mov     eax, dword ptr [edx - 4]
        __emit 0x38   /* cmp bl,al - MSVC6 reverses r8,r8 cmp operands (3A) */
        __emit 0xD8
        je      L_d0a5
        test    al, al
        je      L_d062
        __emit 0x38   /* cmp bl,ah - MSVC6 reverses r8,r8 cmp operands (3A) */
        __emit 0xDC
        je      L_d09e
        test    ah, ah
        je      L_d062
        shr     eax, 0x10
        __emit 0x38   /* cmp bl,al - MSVC6 reverses r8,r8 cmp operands (3A) */
        __emit 0xD8
        je      L_d097
        test    al, al
        je      L_d062
        __emit 0x38   /* cmp bl,ah - MSVC6 reverses r8,r8 cmp operands (3A) */
        __emit 0xDC
        je      L_d090
        test    ah, ah
        je      L_d062
        jmp     L_d026
L_d090:
        pop     esi
        pop     edi
        lea     eax, [edx - 1]
        pop     ebx
        ret
L_d097:
        lea     eax, [edx - 2]
        pop     esi
        pop     edi
        pop     ebx
        ret
L_d09e:
        lea     eax, [edx - 3]
        pop     esi
        pop     edi
        pop     ebx
        ret
L_d0a5:
        lea     eax, [edx - 4]
        pop     esi
        pop     edi
        pop     ebx
        ret
    }
}
