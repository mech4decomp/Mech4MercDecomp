/*
 * FUN_10037F30 (254 B) - __cdecl, 3 args. Optimized bounded string copy
 * (strncpy-like): dest=arg1, src=arg2, count=arg3, returns dest. Uses a
 * word-at-a-time copy with the 0x7efefeff null-byte detection trick when
 * src is 4-byte aligned, with byte fallback and zero-fill of the
 * remainder.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __cdecl FUN_10037F30(void)
{
    __asm {
        mov     ecx, dword ptr [esp+0xc]
        push    edi
        test    ecx, ecx
        je      L_ret0
        push    esi
        push    ebx
        mov     ebx, ecx
        mov     esi, dword ptr [esp+0x14]
        test    esi, 3
        mov     edi, dword ptr [esp+0x10]
        jne     L_unaligned
        shr     ecx, 2
        jne     L_wordloop
        jmp     L_bytecopy
L_unaligned:
        mov     al, byte ptr [esi]
        inc     esi
        mov     byte ptr [edi], al
        inc     edi
        dec     ecx
        je      L_ret1
        test    al, al
        je      L_zerofill
        test    esi, 3
        jne     L_unaligned
        mov     ebx, ecx
        shr     ecx, 2
        jne     L_wordloop
L_bytecopy2:
        and     ebx, 3
        je      L_ret1
L_bytecopy:
        mov     al, byte ptr [esi]
        inc     esi
        mov     byte ptr [edi], al
        inc     edi
        test    al, al
        je      L_zfdec
        dec     ebx
        jne     L_bytecopy
L_ret1:
        mov     eax, dword ptr [esp+0x10]
        pop     ebx
        pop     esi
        pop     edi
        ret
L_zerofill:
        test    edi, 3
        je      L_zf2
L_zf1:
        mov     byte ptr [edi], al
        inc     edi
        dec     ecx
        je      L_ret2
        test    edi, 3
        jne     L_zf1
L_zf2:
        mov     ebx, ecx
        shr     ecx, 2
        jne     L_zfword
L_zfbyte:
        mov     byte ptr [edi], al
        inc     edi
L_zfdec:
        dec     ebx
        jne     L_zfbyte
        pop     ebx
        pop     esi
L_ret0:
        mov     eax, dword ptr [esp+8]
        pop     edi
        ret
L_wordstore:
        mov     dword ptr [edi], edx
        add     edi, 4
        dec     ecx
        je      L_bytecopy2
L_wordloop:
        mov     edx, 0x7efefeff
        mov     eax, dword ptr [esi]
        add     edx, eax
        xor     eax, 0xffffffff
        xor     eax, edx
        mov     edx, dword ptr [esi]
        add     esi, 4
        test    eax, 0x81010100
        je      L_wordstore
        test    dl, dl
        je      L_w0
        test    dh, dh
        je      L_w1
        test    edx, 0xff0000
        je      L_w2
        test    edx, 0xff000000
        jne     L_wordstore
        mov     dword ptr [edi], edx
        jmp     L_wdone
L_w2:
        and     edx, 0xffff
        mov     dword ptr [edi], edx
        jmp     L_wdone
L_w1:
        and     edx, 0xff
        mov     dword ptr [edi], edx
        jmp     L_wdone
L_w0:
        xor     edx, edx
        mov     dword ptr [edi], edx
L_wdone:
        add     edi, 4
        xor     eax, eax
        dec     ecx
        je      L_wend
L_zfword:
        xor     eax, eax
L_zfstore:
        mov     dword ptr [edi], eax
        add     edi, 4
        dec     ecx
        jne     L_zfstore
L_wend:
        and     ebx, 3
        jne     L_zfbyte
L_ret2:
        mov     eax, dword ptr [esp+0x10]
        pop     ebx
        pop     esi
        pop     edi
        ret
    }
}
