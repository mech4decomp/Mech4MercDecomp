/*
 * FUN_0073D750 (2153 B) — gameplay: HUD/overlay text rendering routine with
 * string-table lookups and color/format handling. __cdecl, RET 0x8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_007539e0(void);
extern void __cdecl FUN_0073d430(void);
extern void __cdecl FUN_00713cc0(void);
extern void __cdecl FUN_0073d3b0(void);
extern void __cdecl FUN_0073d4d0(void);

extern unsigned int g_008b287c;
extern unsigned char g_007b7069;
extern unsigned int g_008b2880;
extern unsigned int g_008aaf3c;
extern unsigned int g_008ab9d4;
extern unsigned int g_008ab9d8;
extern unsigned int g_008aaf2c;
extern unsigned int g_008aaf30;
extern unsigned int g_008aaf1c;
extern unsigned int g_008b28d4;
extern unsigned int g_008aaf40;
extern unsigned int g_008aaf38;
extern unsigned int g_008aaf34;
extern unsigned int g_008ab9d0;
extern unsigned int g_008b7b28;
extern unsigned int g_008b7b34;
extern unsigned int g_0076b420;

__declspec(naked) void FUN_0073D750(void)
{
    __asm {
        sub     esp, 0xa0
        push    ebx
        mov     ebx, dword ptr [esp + 0xac]
        push    ebp
        xor     ebp, ebp
        mov     eax, ebx
        push    esi
        mov     esi, dword ptr [g_008b287c]
        shr     eax, 2
        and     eax, 3
        and     ebx, 3
        cmp     esi, ebp
        push    edi
        mov     dword ptr [esp + 0x1c], ebp
        mov     dword ptr [esp + 0x20], ebp
        mov     dword ptr [esp + 0x28], ebp
        mov     dword ptr [esp + 0x18], ebp
        mov     dword ptr [esp + 0x24], ebp
        mov     dword ptr [esp + 0x2c], eax
        mov     dword ptr [esp + 0xb8], ebx
        je      L_73dfac
L_73d79b:
        mov     al, byte ptr [g_007b7069]
        test    al, al
        je      L_73d845
        mov     ecx, dword ptr [esp + 0xb4]
        xor     eax, eax
        mov     ax, word ptr [esi]
        cmp     eax, ecx
        jne     L_73d845
        xor     ecx, ecx
        mov     cx, word ptr [esi + 4]
        shr     ecx, 0xd
        test    cl, 1
        jne     L_73d845
        mov     eax, dword ptr [esp + 0x20]
        push    3
        inc     eax
        push    1
        mov     ecx, esi
        mov     dword ptr [esp + 0x28], eax
        call    FUN_007539e0
        push    0
        push    1
        mov     ecx, esi
        mov     edi, eax
        call    FUN_007539e0
        mov     edx, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [g_008b2880]
        sub     eax, edi
        add     edx, eax
        add     ebp, edi
        cmp     ebx, 1
        mov     dword ptr [esp + 0x28], edx
        jne     L_73d80b
        cmp     dword ptr [esi + 0x24], ecx
        je      L_73d828
        jmp     L_73d845
L_73d80b:
        test    ebx, ebx
        jne     L_73d816
        cmp     dword ptr [esi + 0x24], ecx
        jne     L_73d828
        jmp     L_73d845
L_73d816:
        cmp     ebx, 2
        jne     L_73d823
        test    byte ptr [esi + 4], 1
        jne     L_73d828
        jmp     L_73d845
L_73d823:
        cmp     ebx, 3
        jne     L_73d845
L_73d828:
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x24]
        inc     ecx
        mov     dword ptr [esp + 0x1c], ecx
        mov     ecx, dword ptr [esp + 0x18]
        add     edx, edi
        add     ecx, eax
        mov     dword ptr [esp + 0x24], edx
        mov     dword ptr [esp + 0x18], ecx
L_73d845:
        xor     eax, eax
        mov     ax, word ptr [esi + 0x1a]
        test    ax, ax
        je      L_73d869
        and     eax, 0xffff
        lea     edx, [eax*8]
        sub     edx, eax
        lea     esi, [esi + edx*8]
        test    esi, esi
        jne     L_73d79b
L_73d869:
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        je      L_73dfac
        mov     ebx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [g_008aaf3c]
        mov     esi, dword ptr [esp + 0x28]
        mov     edi, dword ptr [esp + 0x24]
        mov     edx, dword ptr [g_008ab9d4]
        shr     ebx, 0xa
        lea     ecx, [eax + 0x14c]
        shr     ebp, 0xa
        shr     esi, 0xa
        shr     edi, 0xa
        cmp     edx, ecx
        mov     dword ptr [esp + 0x18], ebx
        mov     ebx, dword ptr [g_0076b420]
        jg      L_73d9b4
        call    FUN_0073d430
        push    3
        push    0xd
        call    FUN_00713cc0
        mov     eax, dword ptr [g_008ab9d4]
        mov     edx, dword ptr [g_008ab9d8]
        add     eax, 2
        mov     dword ptr [g_008aaf2c], eax
        mov     eax, dword ptr [esp + 0xb8]
        cmp     eax, 1
        mov     dword ptr [g_008aaf30], edx
        jne     L_73d909
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x1c]
        push    ebp
        push    edi
        push    esi
        push    ecx
        mov     ecx, dword ptr [esp + 0xc4]
        push    edx
        push    eax
        push    ecx
        push    0x7a7344
        lea     edx, [esp + 0x50]
        push    edx
        jmp     L_73d97c
L_73d909:
        cmp     eax, 2
        jne     L_73d934
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0x1c]
        push    ebp
        push    edi
        push    esi
        push    eax
        mov     eax, dword ptr [esp + 0xc4]
        push    ecx
        push    edx
        push    eax
        push    0x7a72fc
        lea     ecx, [esp + 0x50]
        push    ecx
        jmp     L_73d97c
L_73d934:
        cmp     eax, 3
        push    ebp
        jne     L_73d959
        mov     edx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0xb8]
        push    esi
        push    edx
        push    eax
        lea     ecx, [esp + 0x40]
        push    0x7a72cc
        push    ecx
        call    ebx
        add     esp, 0x18
        jmp     L_73d981
L_73d959:
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [esp + 0x20]
        push    edi
        push    esi
        push    edx
        mov     edx, dword ptr [esp + 0xc4]
        push    eax
        push    ecx
        push    edx
        push    0x7a7284
        lea     eax, [esp + 0x50]
        push    eax
L_73d97c:
        call    ebx
        add     esp, 0x24
L_73d981:
        mov     eax, dword ptr [g_008aaf3c]
        mov     ecx, dword ptr [g_008ab9d4]
        lea     edx, [eax + 0x12]
        cmp     ecx, edx
        jl      L_73d9b4
        lea     edx, [eax + 0x14c]
        add     ecx, 0xe
        cmp     ecx, edx
        jge     L_73d9b4
        lea     eax, [esp + 0x30]
        push    eax
        push    0xf0f0f0
        call    FUN_0073d3b0
        mov     eax, dword ptr [g_008aaf3c]
L_73d9b4:
        mov     ecx, dword ptr [g_008ab9d4]
        add     ecx, 0xe
        add     eax, 0x14c
        cmp     ecx, eax
        mov     dword ptr [g_008ab9d4], ecx
        jg      L_73da02
        push    0
        push    0x11
        call    FUN_00713cc0
        push    1
        push    4
        call    FUN_00713cc0
        push    2
        push    0xb
        call    FUN_00713cc0
        push    1
        push    0xf
        call    FUN_00713cc0
        push    3
        push    0x10
        call    FUN_00713cc0
        push    3
        push    0xd
        call    FUN_00713cc0
L_73da02:
        mov     eax, dword ptr [esp + 0x2c]
        test    eax, eax
        mov     esi, dword ptr [g_008b287c]
        je      L_73de4e
        test    esi, esi
        je      L_73de1b
L_73da1c:
        mov     al, byte ptr [g_007b7069]
        test    al, al
        je      L_73ddf7
        mov     eax, dword ptr [esp + 0xb4]
        xor     ecx, ecx
        mov     cx, word ptr [esi]
        cmp     ecx, eax
        jne     L_73ddf7
        xor     edx, edx
        mov     dx, word ptr [esi + 4]
        shr     edx, 0xd
        test    dl, 1
        jne     L_73ddf7
        mov     eax, dword ptr [esp + 0xb8]
        cmp     eax, 1
        jne     L_73da6a
        mov     eax, dword ptr [g_008b2880]
        cmp     dword ptr [esi + 0x24], eax
        je      L_73da97
        jmp     L_73ddf7
L_73da6a:
        test    eax, eax
        jne     L_73da7e
        mov     ecx, dword ptr [g_008b2880]
        cmp     dword ptr [esi + 0x24], ecx
        jne     L_73da97
        jmp     L_73ddf7
L_73da7e:
        cmp     eax, 2
        jne     L_73da8e
        test    byte ptr [esi + 4], 1
        jne     L_73da97
        jmp     L_73ddf7
L_73da8e:
        cmp     eax, 3
        jne     L_73ddf7
L_73da97:
        mov     eax, dword ptr [esp + 0xb4]
        xor     edi, edi
        mov     di, word ptr [esi + 2]
        mov     ebp, 0x40
        mov     ecx, ebp
        cmp     edi, eax
        je      L_73dacc
        jbe     L_73dabc
        shl     eax, 6
        xor     edx, edx
        div     edi
        mov     ebp, eax
        jmp     L_73dacc
L_73dabc:
        mov     eax, edi
        shl     eax, 6
        xor     edx, edx
        div     dword ptr [esp + 0xb4]
        mov     ecx, eax
L_73dacc:
        cmp     dword ptr [esp + 0x2c], 1
        je      L_73dad9
        test    byte ptr [esi + 4], 1
        je      L_73dae1
L_73dad9:
        push    ecx
        push    ebp
        push    esi
        call    FUN_0073d4d0
L_73dae1:
        mov     eax, dword ptr [g_008aaf3c]
        mov     ecx, dword ptr [g_008ab9d4]
        lea     edx, [eax + 0xa]
        cmp     ecx, edx
        jl      L_73ddb2
        add     eax, 0x12c
        cmp     ecx, eax
        jg      L_73ddb2
        mov     eax, dword ptr [g_008aaf1c]
        mov     dword ptr [esp + 0x24], eax
        sub     eax, 0x16
        mov     dword ptr [g_008aaf1c], eax
        mov     eax, dword ptr [g_008b28d4]
        push    eax
        push    1
        call    FUN_00713cc0
        push    1
        push    7
        call    FUN_00713cc0
        mov     ecx, dword ptr [g_008aaf40]
        mov     eax, dword ptr [esi + 0x14]
        mov     edx, dword ptr [g_008ab9d4]
        add     ecx, 0x8c
        push    eax
        mov     dword ptr [g_008aaf30], ecx
        lea     ecx, [esp + 0x34]
        xor     ebp, ebp
        add     edx, 0xf
        push    0x78acac
        push    ecx
        mov     dword ptr [g_008aaf38], ebp
        mov     dword ptr [g_008aaf34], ebp
        mov     dword ptr [g_008aaf2c], edx
        call    ebx
        add     esp, 0xc
        lea     edx, [esp + 0x30]
        push    edx
        push    0xffffff
        call    FUN_0073d3b0
        mov     eax, dword ptr [g_008aaf40]
        mov     ecx, dword ptr [g_008ab9d4]
        lea     edx, [esp + 0x30]
        add     eax, 0x8c
        add     ecx, 0x19
        push    0x7a7254
        push    edx
        mov     dword ptr [g_008aaf30], eax
        mov     dword ptr [g_008aaf2c], ecx
        call    ebx
        add     esp, 8
        lea     eax, [esp + 0x30]
        push    eax
        push    0x808080
        call    FUN_0073d3b0
        mov     ecx, dword ptr [g_008aaf40]
        mov     eax, dword ptr [esp + 0xb4]
        mov     edx, dword ptr [g_008ab9d4]
        push    edi
        add     ecx, 0x8c
        push    eax
        mov     dword ptr [g_008aaf30], ecx
        lea     ecx, [esp + 0x38]
        add     edx, 0x23
        push    0x7a7248
        push    ecx
        mov     dword ptr [g_008aaf2c], edx
        call    ebx
        add     esp, 0x10
        lea     edx, [esp + 0x30]
        push    edx
        push    0xc0c0c0
        call    FUN_0073d3b0
        xor     eax, eax
        mov     ax, word ptr [esi + 6]
        xor     ecx, ecx
        mov     cx, word ptr [esi + 4]
        mov     edx, eax
        shr     edx, 7
        shr     ecx, 0xa
        and     ecx, 7
        shr     eax, 0xe
        and     edx, 1
        lea     ecx, [edx + ecx*2]
        lea     ecx, [eax + ecx*4]
        mov     eax, ecx
        shl     eax, 5
        sub     eax, ecx
        shl     eax, 2
        mov     ecx, dword ptr [eax + g_008b7b28]
        cmp     ecx, 0xf800
        ja      L_73dc62
        je      L_73dc5b
        cmp     ecx, 0xf00
        je      L_73dc54
        cmp     ecx, 0x7c00
        jne     L_73dc6a
        push    0x7a7240
        jmp     L_73dc85
L_73dc54:
        push    0x7a7238
        jmp     L_73dc85
L_73dc5b:
        push    0x7a7230
        jmp     L_73dc85
L_73dc62:
        cmp     ecx, 0xff0000
        je      L_73dc71
L_73dc6a:
        push    0x7a7228
        jmp     L_73dc85
L_73dc71:
        cmp     dword ptr [eax + g_008b7b34], ebp
        jne     L_73dc80
        push    0x7a7220
        jmp     L_73dc85
L_73dc80:
        push    0x7a7218
L_73dc85:
        push    0xc0c0c0
        call    FUN_0073d3b0
        push    1
        push    1
        mov     ecx, esi
        xor     edi, edi
        xor     ebp, ebp
        mov     byte ptr [esp + 0x1f], 0x4e
        mov     byte ptr [esp + 0x1d], 0x4e
        mov     byte ptr [esp + 0x1b], 0x4e
        mov     byte ptr [esp + 0x1a], 0x4e
        mov     byte ptr [esp + 0x1c], 0x4e
        mov     byte ptr [esp + 0x1e], 0x4e
        call    FUN_007539e0
        test    eax, eax
        je      L_73dcd2
        test    byte ptr [esi + 7], 8
        mov     edi, eax
        mov     byte ptr [esp + 0x17], 0x59
        je      L_73dcd2
        mov     byte ptr [esp + 0x15], 0x59
L_73dcd2:
        push    2
        push    1
        mov     ecx, esi
        call    FUN_007539e0
        test    eax, eax
        je      L_73dcf3
        add     edi, eax
        test    byte ptr [esi + 6], 1
        mov     byte ptr [esp + 0x13], 0x59
        jne     L_73dcf3
        mov     byte ptr [esp + 0x12], 0x59
L_73dcf3:
        push    3
        push    1
        mov     ecx, esi
        call    FUN_007539e0
        test    eax, eax
        je      L_73dd14
        mov     ebp, eax
        test    byte ptr [esi + 6], 1
        mov     byte ptr [esp + 0x14], 0x59
        jne     L_73dd14
        mov     byte ptr [esp + 0x16], 0x59
L_73dd14:
        mov     al, byte ptr [esi + 6]
        shr     edi, 0xa
        shr     ebp, 0xa
        test    al, 8
        je      L_73dd2d
        push    0x7a7210
        push    0xffff00
        jmp     L_73dd4a
L_73dd2d:
        mov     eax, dword ptr [esi + 0x1c]
        test    eax, eax
        je      L_73dd40
        push    0x7a7208
        push    0xff00
        jmp     L_73dd4a
L_73dd40:
        push    0x7a7200
        push    0xff0000
L_73dd4a:
        call    FUN_0073d3b0
        mov     dl, byte ptr [esi + 4]
        shr     dl, 1
        test    dl, 1
        mov     eax, 0x770080
        jne     L_73dd63
        mov     eax, 0x76b768
L_73dd63:
        movsx   ecx, byte ptr [esp + 0x14]
        movsx   edx, byte ptr [esp + 0x12]
        push    eax
        movsx   eax, byte ptr [esp + 0x1a]
        push    eax
        movsx   eax, byte ptr [esp + 0x1b]
        push    ecx
        movsx   ecx, byte ptr [esp + 0x21]
        push    ebp
        push    edx
        movsx   edx, byte ptr [esp + 0x2b]
        push    eax
        push    ecx
        push    edx
        push    edi
        lea     eax, [esp + 0x54]
        push    0x7a71e0
        push    eax
        call    ebx
        add     esp, 0x2c
        lea     ecx, [esp + 0x30]
        push    ecx
        push    0xc0c0c0
        call    FUN_0073d3b0
        mov     edx, dword ptr [esp + 0x24]
        mov     dword ptr [g_008aaf1c], edx
L_73ddb2:
        mov     ebp, dword ptr [g_008ab9d8]
        mov     edi, dword ptr [g_008ab9d4]
        mov     eax, dword ptr [g_008ab9d0]
        add     ebp, 0x45
        add     edi, 0x25
        inc     eax
        cmp     eax, 2
        mov     dword ptr [g_008ab9d8], ebp
        mov     dword ptr [g_008ab9d4], edi
        mov     dword ptr [g_008ab9d0], eax
        jne     L_73ddf7
        mov     eax, dword ptr [g_008aaf40]
        add     eax, 4
        mov     dword ptr [g_008ab9d8], eax
        mov     dword ptr [g_008ab9d0], 0
L_73ddf7:
        xor     eax, eax
        mov     ax, word ptr [esi + 0x1a]
        test    ax, ax
        je      L_73de1b
        and     eax, 0xffff
        lea     ecx, [eax*8]
        sub     ecx, eax
        lea     esi, [esi + ecx*8]
        test    esi, esi
        jne     L_73da1c
L_73de1b:
        mov     edx, dword ptr [g_008aaf40]
        mov     eax, dword ptr [g_008ab9d4]
        pop     edi
        pop     esi
        add     edx, 4
        add     eax, 0x25
        pop     ebp
        mov     dword ptr [g_008ab9d0], 0
        mov     dword ptr [g_008ab9d8], edx
        mov     dword ptr [g_008ab9d4], eax
        pop     ebx
        add     esp, 0xa0
        ret     8
L_73de4e:
        test    esi, esi
        mov     ecx, dword ptr [g_008ab9d0]
        je      L_73df8a
L_73de5c:
        mov     al, byte ptr [g_007b7069]
        test    al, al
        je      L_73df66
        mov     edx, dword ptr [esp + 0xb4]
        xor     eax, eax
        mov     ax, word ptr [esi]
        cmp     eax, edx
        jne     L_73df66
        xor     edx, edx
        mov     dx, word ptr [esi + 4]
        shr     edx, 0xd
        test    dl, 1
        jne     L_73df66
        mov     eax, dword ptr [esp + 0xb8]
        cmp     eax, 1
        jne     L_73deaa
        mov     eax, dword ptr [g_008b2880]
        cmp     dword ptr [esi + 0x24], eax
        je      L_73ded7
        jmp     L_73df66
L_73deaa:
        test    eax, eax
        jne     L_73debe
        mov     edx, dword ptr [g_008b2880]
        cmp     dword ptr [esi + 0x24], edx
        jne     L_73ded7
        jmp     L_73df66
L_73debe:
        cmp     eax, 2
        jne     L_73dece
        test    byte ptr [esi + 4], 1
        jne     L_73ded7
        jmp     L_73df66
L_73dece:
        cmp     eax, 3
        jne     L_73df66
L_73ded7:
        mov     ebp, dword ptr [esp + 0xb4]
        xor     ecx, ecx
        mov     cx, word ptr [esi + 2]
        mov     ebx, 0x40
        mov     edi, ebx
        cmp     ecx, ebp
        je      L_73df09
        jbe     L_73defe
        mov     eax, ebp
        shl     eax, 6
        xor     edx, edx
        div     ecx
        mov     ebx, eax
        jmp     L_73df09
L_73defe:
        mov     eax, ecx
        shl     eax, 6
        xor     edx, edx
        div     ebp
        mov     edi, eax
L_73df09:
        push    edi
        push    ebx
        push    esi
        call    FUN_0073d4d0
        mov     ecx, dword ptr [g_008ab9d8]
        mov     edx, 0x45
        add     ecx, edx
        mov     dword ptr [g_008ab9d8], ecx
        mov     ecx, dword ptr [g_008ab9d0]
        inc     ecx
        lea     eax, [ecx + ecx*2]
        shl     eax, 3
        sub     eax, ecx
        lea     eax, [eax + eax*2]
        cmp     eax, 0x1ce
        mov     dword ptr [g_008ab9d0], ecx
        jle     L_73df66
        mov     ecx, dword ptr [g_008aaf40]
        mov     eax, dword ptr [g_008ab9d4]
        add     ecx, 4
        add     eax, edx
        mov     dword ptr [g_008ab9d8], ecx
        xor     ecx, ecx
        mov     dword ptr [g_008ab9d4], eax
        mov     dword ptr [g_008ab9d0], ecx
L_73df66:
        xor     eax, eax
        mov     ax, word ptr [esi + 0x1a]
        test    ax, ax
        je      L_73df8a
        and     eax, 0xffff
        lea     edx, [eax*8]
        sub     edx, eax
        lea     esi, [esi + edx*8]
        test    esi, esi
        jne     L_73de5c
L_73df8a:
        test    ecx, ecx
        je      L_73dfac
        mov     eax, dword ptr [g_008aaf40]
        add     eax, 4
        mov     dword ptr [g_008ab9d8], eax
        add     dword ptr [g_008ab9d4], 0x45
        mov     dword ptr [g_008ab9d0], 0
L_73dfac:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xa0
        ret     8
    }
}
