/*
 * In-.text data block at 0x648910 (1734 B). __cdecl function (no params).
 * A config/script tokenizer: reads a token from a global input buffer
 * (0x8058b0), compares it against a table of keyword strings (0x7929xx /
 * 0x76d184), and sets global flags (0x8058e4, 0x80595a/b, 0x7b5a2c/d)
 * accordingly. Handles quoted strings, <...> tags, and #-prefixed
 * directives.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00648FE0(void);
extern void __cdecl FUN_00649AE0(void);
extern void __cdecl FUN_00562F40(void);

extern void *g_76b304;   /* IAT fn ptr */
extern unsigned char g_8058e4;
extern unsigned char g_8058b0;
extern unsigned char g_80595a;
extern unsigned char g_80595b;
extern unsigned char g_7b5a2c;
extern unsigned char g_7b5a2d;
extern unsigned int g_8058ac;

__declspec(naked) void func_00648910(void)
{
    __asm {
        sub     esp, 0x1c0
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     byte ptr [g_8058e4], 1
        call    FUN_00648FE0
        mov     al, byte ptr [g_8058b0]
        xor     ebx, ebx
        xor     esi, esi
        cmp     al, 0x20
        je      L_648953
    L_648933:
        cmp     al, 0xa
        je      L_648953
        cmp     al, 0xd
        je      L_648953
        cmp     esi, 0x1f
        jge     L_648953
        mov     byte ptr [esp + esi + 0x10], al
        inc     esi
        call    FUN_00648FE0
        mov     al, byte ptr [g_8058b0]
        cmp     al, 0x20
        jne     L_648933
    L_648953:
        lea     eax, [esp + 0x10]
        push    eax
        mov     byte ptr [esp + esi + 0x14], bl
        call    dword ptr [g_76b304]
        add     esp, 4
        mov     esi, 0x76d184
        lea     eax, [esp + 0x10]
    L_64896e:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jne     L_648992
        cmp     cl, bl
        je      L_64898e
        mov     dl, byte ptr [eax + 1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 1]
        jne     L_648992
        add     eax, 2
        add     esi, 2
        cmp     cl, bl
        jne     L_64896e
    L_64898e:
        xor     eax, eax
        jmp     L_648997
    L_648992:
        sbb     eax, eax
        sbb     eax, -1
    L_648997:
        cmp     eax, ebx
        jne     L_6489e9
        call    FUN_00648FE0
        cmp     byte ptr [g_8058b0], 0x22
        jne     L_648b83
        call    FUN_00648FE0
        mov     al, byte ptr [g_8058b0]
        xor     esi, esi
        cmp     al, 0x22
        je      L_6489d5
    L_6489bd:
        cmp     esi, 0x7f
        jge     L_6489d5
        mov     byte ptr [esp + esi + 0x50], al
        inc     esi
        call    FUN_00648FE0
        mov     al, byte ptr [g_8058b0]
        cmp     al, 0x22
        jne     L_6489bd
    L_6489d5:
        lea     eax, [esp + 0x50]
        mov     byte ptr [esp + esi + 0x50], bl
        mov     byte ptr [g_8058e4], bl
        push    eax
        jmp     L_648b6c
    L_6489e9:
        mov     esi, 0x7929a0
        lea     eax, [esp + 0x10]
    L_6489f2:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jne     L_648a16
        cmp     cl, bl
        je      L_648a12
        mov     dl, byte ptr [eax + 1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 1]
        jne     L_648a16
        add     eax, 2
        add     esi, 2
        cmp     cl, bl
        jne     L_6489f2
    L_648a12:
        xor     eax, eax
        jmp     L_648a1b
    L_648a16:
        sbb     eax, eax
        sbb     eax, -1
    L_648a1b:
        cmp     eax, ebx
        jne     L_648b8a
        call    FUN_00648FE0
        mov     al, byte ptr [g_8058b0]
        cmp     al, 0x22
        jne     L_648b31
        call    FUN_00648FE0
        mov     al, byte ptr [g_8058b0]
        xor     esi, esi
        cmp     al, 0x22
        je      L_648a5d
    L_648a45:
        cmp     esi, 0x7f
        jge     L_648a5d
        mov     byte ptr [esp + esi + 0x50], al
        inc     esi
        call    FUN_00648FE0
        mov     al, byte ptr [g_8058b0]
        cmp     al, 0x22
        jne     L_648a45
    L_648a5d:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7f50a0
        repne scasb
        not     ecx
        dec     ecx
        mov     edx, ecx
        cmp     edx, -1
        mov     byte ptr [esp + esi + 0x50], bl
        mov     byte ptr [g_8058e4], bl
        jle     L_648a90
        mov     al, 0x5c
    L_648a7f:
        cmp     byte ptr [edx + 0x7f50a0], al
        je      L_648a8d
        dec     edx
        cmp     edx, -1
        jg      L_648a7f
    L_648a8d:
        cmp     edx, -1
    L_648a90:
        jne     L_648ac7
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp + 0x50]
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        lea     edx, [esp + 0xd0]
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        lea     eax, [esp + 0xd0]
        rep movsb
        push    eax
        jmp     L_648b6c
    L_648ac7:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7f50a0
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        lea     ebp, [esp + 0xd0]
        mov     edi, ebp
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp + 0x50]
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     byte ptr [esp + edx + 0xd1], bl
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        lea     edx, [esp + 0xd0]
        mov     edi, edx
        repne scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep movsd
        mov     ecx, ebx
        and     ecx, 3
        lea     eax, [esp + 0xd0]
        rep movsb
        push    eax
        jmp     L_648b6c
    L_648b31:
        cmp     al, 0x3c
        jne     L_648b83
        call    FUN_00648FE0
        mov     al, byte ptr [g_8058b0]
        xor     esi, esi
        cmp     al, 0x3e
        je      L_648b5d
    L_648b45:
        cmp     esi, 0x7f
        jge     L_648b5d
        mov     byte ptr [esp + esi + 0x50], al
        inc     esi
        call    FUN_00648FE0
        mov     al, byte ptr [g_8058b0]
        cmp     al, 0x3e
        jne     L_648b45
    L_648b5d:
        lea     ecx, [esp + 0x50]
        mov     byte ptr [esp + esi + 0x50], bl
        mov     byte ptr [g_8058e4], bl
        push    ecx
    L_648b6c:
        call    FUN_00649AE0
        add     esp, 4
        test    eax, eax
        je      L_648fcb
        push    3
        jmp     L_648fb9
    L_648b83:
        push    0x3c
        jmp     L_648fb9
    L_648b8a:
        mov     esi, 0x792994
        lea     eax, [esp + 0x10]
    L_648b93:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jne     L_648bb7
        cmp     cl, bl
        je      L_648bb3
        mov     dl, byte ptr [eax + 1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 1]
        jne     L_648bb7
        add     eax, 2
        add     esi, 2
        cmp     cl, bl
        jne     L_648b93
    L_648bb3:
        xor     eax, eax
        jmp     L_648bbc
    L_648bb7:
        sbb     eax, eax
        sbb     eax, -1
    L_648bbc:
        cmp     eax, ebx
        jne     L_648bdf
        pop     edi
        pop     esi
        pop     ebp
        mov     byte ptr [g_8058e4], bl
        mov     byte ptr [g_8058b0], 0x20
        mov     byte ptr [g_80595a], 1
        pop     ebx
        add     esp, 0x1c0
        ret
    L_648bdf:
        mov     esi, 0x792988
        lea     eax, [esp + 0x10]
    L_648be8:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jne     L_648c0c
        cmp     cl, bl
        je      L_648c08
        mov     dl, byte ptr [eax + 1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 1]
        jne     L_648c0c
        add     eax, 2
        add     esi, 2
        cmp     cl, bl
        jne     L_648be8
    L_648c08:
        xor     eax, eax
        jmp     L_648c11
    L_648c0c:
        sbb     eax, eax
        sbb     eax, -1
    L_648c11:
        cmp     eax, ebx
        jne     L_648c33
        pop     edi
        pop     esi
        pop     ebp
        mov     byte ptr [g_8058e4], bl
        mov     byte ptr [g_80595a], bl
        mov     byte ptr [g_8058b0], 0x20
        pop     ebx
        add     esp, 0x1c0
        ret
    L_648c33:
        mov     esi, 0x79297c
        lea     eax, [esp + 0x10]
    L_648c3c:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jne     L_648c60
        cmp     cl, bl
        je      L_648c5c
        mov     dl, byte ptr [eax + 1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 1]
        jne     L_648c60
        add     eax, 2
        add     esi, 2
        cmp     cl, bl
        jne     L_648c3c
    L_648c5c:
        xor     eax, eax
        jmp     L_648c65
    L_648c60:
        sbb     eax, eax
        sbb     eax, -1
    L_648c65:
        cmp     eax, ebx
        jne     L_648c88
        pop     edi
        pop     esi
        pop     ebp
        mov     byte ptr [g_8058e4], bl
        mov     byte ptr [g_8058b0], 0x20
        mov     byte ptr [g_7b5a2c], 1
        pop     ebx
        add     esp, 0x1c0
        ret
    L_648c88:
        mov     esi, 0x792970
        lea     eax, [esp + 0x10]
    L_648c91:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jne     L_648cb5
        cmp     cl, bl
        je      L_648cb1
        mov     dl, byte ptr [eax + 1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 1]
        jne     L_648cb5
        add     eax, 2
        add     esi, 2
        cmp     cl, bl
        jne     L_648c91
    L_648cb1:
        xor     eax, eax
        jmp     L_648cba
    L_648cb5:
        sbb     eax, eax
        sbb     eax, -1
    L_648cba:
        cmp     eax, ebx
        jne     L_648cdc
        pop     edi
        pop     esi
        pop     ebp
        mov     byte ptr [g_8058e4], bl
        mov     byte ptr [g_7b5a2c], bl
        mov     byte ptr [g_8058b0], 0x20
        pop     ebx
        add     esp, 0x1c0
        ret
    L_648cdc:
        mov     esi, 0x792960
        lea     eax, [esp + 0x10]
    L_648ce5:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jne     L_648d09
        cmp     cl, bl
        je      L_648d05
        mov     dl, byte ptr [eax + 1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 1]
        jne     L_648d09
        add     eax, 2
        add     esi, 2
        cmp     cl, bl
        jne     L_648ce5
    L_648d05:
        xor     eax, eax
        jmp     L_648d0e
    L_648d09:
        sbb     eax, eax
        sbb     eax, -1
    L_648d0e:
        cmp     eax, ebx
        jne     L_648d31
        pop     edi
        pop     esi
        pop     ebp
        mov     byte ptr [g_8058e4], bl
        mov     byte ptr [g_8058b0], 0x20
        mov     byte ptr [g_7b5a2d], 1
        pop     ebx
        add     esp, 0x1c0
        ret
    L_648d31:
        mov     esi, 0x792950
        lea     eax, [esp + 0x10]
    L_648d3a:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jne     L_648d5e
        cmp     cl, bl
        je      L_648d5a
        mov     dl, byte ptr [eax + 1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 1]
        jne     L_648d5e
        add     eax, 2
        add     esi, 2
        cmp     cl, bl
        jne     L_648d3a
    L_648d5a:
        xor     eax, eax
        jmp     L_648d63
    L_648d5e:
        sbb     eax, eax
        sbb     eax, -1
    L_648d63:
        cmp     eax, ebx
        jne     L_648d85
        pop     edi
        pop     esi
        pop     ebp
        mov     byte ptr [g_8058e4], bl
        mov     byte ptr [g_7b5a2d], bl
        mov     byte ptr [g_8058b0], 0x20
        pop     ebx
        add     esp, 0x1c0
        ret
    L_648d85:
        mov     esi, 0x792944
        lea     eax, [esp + 0x10]
    L_648d8e:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jne     L_648db2
        cmp     cl, bl
        je      L_648dae
        mov     dl, byte ptr [eax + 1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 1]
        jne     L_648db2
        add     eax, 2
        add     esi, 2
        cmp     cl, bl
        jne     L_648d8e
    L_648dae:
        xor     eax, eax
        jmp     L_648db7
    L_648db2:
        sbb     eax, eax
        sbb     eax, -1
    L_648db7:
        cmp     eax, ebx
        jne     L_648dda
        pop     edi
        pop     esi
        pop     ebp
        mov     byte ptr [g_8058e4], bl
        mov     byte ptr [g_8058b0], 0x20
        mov     byte ptr [g_80595b], 1
        pop     ebx
        add     esp, 0x1c0
        ret
    L_648dda:
        mov     esi, 0x792938
        lea     eax, [esp + 0x10]
    L_648de3:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jne     L_648e07
        cmp     cl, bl
        je      L_648e03
        mov     dl, byte ptr [eax + 1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 1]
        jne     L_648e07
        add     eax, 2
        add     esi, 2
        cmp     cl, bl
        jne     L_648de3
    L_648e03:
        xor     eax, eax
        jmp     L_648e0c
    L_648e07:
        sbb     eax, eax
        sbb     eax, -1
    L_648e0c:
        cmp     eax, ebx
        jne     L_648e2e
        pop     edi
        pop     esi
        pop     ebp
        mov     byte ptr [g_8058e4], bl
        mov     byte ptr [g_80595b], bl
        mov     byte ptr [g_8058b0], 0x20
        pop     ebx
        add     esp, 0x1c0
        ret
    L_648e2e:
        mov     esi, 0x79292c
        lea     eax, [esp + 0x10]
    L_648e37:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jne     L_648e5b
        cmp     cl, bl
        je      L_648e57
        mov     dl, byte ptr [eax + 1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 1]
        jne     L_648e5b
        add     eax, 2
        add     esi, 2
        cmp     cl, bl
        jne     L_648e37
    L_648e57:
        xor     eax, eax
        jmp     L_648e60
    L_648e5b:
        sbb     eax, eax
        sbb     eax, -1
    L_648e60:
        cmp     eax, ebx
        jne     L_648f69
        cmp     byte ptr [g_80595b], bl
        jne     L_648f9f
        mov     edi, 1
        call    FUN_00648FE0
        mov     ebp, 0x19
    L_648e83:
        mov     al, byte ptr [g_8058b0]
        cmp     al, 0x23
        je      L_648ea2
    L_648e8c:
        cmp     al, 4
        je      L_648f54
        call    FUN_00648FE0
        mov     al, byte ptr [g_8058b0]
        cmp     al, 0x23
        jne     L_648e8c
    L_648ea2:
        xor     esi, esi
    L_648ea4:
        cmp     al, 0xa
        je      L_648ec4
        cmp     al, 0xd
        je      L_648ec4
        cmp     esi, 0x1f
        jge     L_648ec4
        mov     byte ptr [esp + esi + 0x30], al
        inc     esi
        call    FUN_00648FE0
        mov     al, byte ptr [g_8058b0]
        cmp     al, 0x20
        jne     L_648ea4
    L_648ec4:
        lea     eax, [esp + 0x30]
        push    eax
        mov     byte ptr [esp + esi + 0x34], bl
        call    dword ptr [g_76b304]
        add     esp, 4
        mov     esi, 0x79291c
        lea     eax, [esp + 0x30]
    L_648edf:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jne     L_648f03
        cmp     cl, bl
        je      L_648eff
        mov     dl, byte ptr [eax + 1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 1]
        jne     L_648f03
        add     eax, 2
        add     esi, 2
        cmp     cl, bl
        jne     L_648edf
    L_648eff:
        xor     eax, eax
        jmp     L_648f08
    L_648f03:
        sbb     eax, eax
        sbb     eax, -1
    L_648f08:
        cmp     eax, ebx
        jne     L_648f12
        inc     edi
        jmp     L_648e83
    L_648f12:
        mov     esi, 0x792910
        lea     eax, [esp + 0x30]
    L_648f1b:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jne     L_648f3f
        cmp     cl, bl
        je      L_648f3b
        mov     dl, byte ptr [eax + 1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 1]
        jne     L_648f3f
        add     eax, 2
        add     esi, 2
        cmp     cl, bl
        jne     L_648f1b
    L_648f3b:
        xor     eax, eax
        jmp     L_648f44
    L_648f3f:
        sbb     eax, eax
        sbb     eax, -1
    L_648f44:
        cmp     eax, ebx
        jne     L_648e83
        dec     edi
        je      L_648f9f
        jmp     L_648e83
    L_648f54:
        push    4
        call    FUN_00562F40
        add     esp, 4
        mov     dword ptr [g_8058ac], ebp
        jmp     L_648e83
    L_648f69:
        mov     esi, 0x792904
        lea     eax, [esp + 0x10]
    L_648f72:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jne     L_648f96
        cmp     cl, bl
        je      L_648f92
        mov     dl, byte ptr [eax + 1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 1]
        jne     L_648f96
        add     eax, 2
        add     esi, 2
        cmp     cl, bl
        jne     L_648f72
    L_648f92:
        xor     eax, eax
        jmp     L_648f9b
    L_648f96:
        sbb     eax, eax
        sbb     eax, -1
    L_648f9b:
        cmp     eax, ebx
        jne     L_648fb7
    L_648f9f:
        pop     edi
        pop     esi
        pop     ebp
        mov     byte ptr [g_8058e4], bl
        mov     byte ptr [g_8058b0], 0x20
        pop     ebx
        add     esp, 0x1c0
        ret
    L_648fb7:
        push    0x3d
    L_648fb9:
        call    FUN_00562F40
        add     esp, 4
        mov     dword ptr [g_8058ac], 0x19
    L_648fcb:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1c0
        ret
    }
}
