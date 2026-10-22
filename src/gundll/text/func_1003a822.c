/*
 * FUN_1003a822 (1837 B) - __cdecl. Wide-char (16-bit) printf-style format
 * parser. Jump table at 0x1003af4f (just past function end at 0x1003af4e) -
 * only the dispatch instruction is needed, not the table data.
 *
 * CFLAGS: /O1
 */

extern char g_1004beb8[];
extern char g_1004bed8[];
extern unsigned int g_10051984;
extern unsigned int g_100549a0;
extern unsigned int g_100549a4;
extern unsigned int g_10051b90;
extern void *g_10051db8;
extern void *g_10051dc4;
extern void *g_10051dbc;
extern int g_1003af4f[];

extern void FUN_1003aff9(void);
extern void FUN_1003b006(void);
extern void FUN_1003c5f0(void);
extern void FUN_1003af6f(void);
extern void FUN_1003af8f(void);
extern void FUN_1003afc0(void);
extern void FUN_1004153c(void);
extern void FUN_100416e0(void);
extern void FUN_10041670(void);

__declspec(naked) void FUN_1003a822(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x450
        mov     eax, dword ptr [ebp + 0xc]
        add     dword ptr [ebp + 0xc], 0x2
        push    ebx
        xor     ecx, ecx
        mov     bx, word ptr [eax]
        push    esi
        cmp     bx, cx
        push    edi
        mov     dword ptr [ebp - 0x8], ecx
        mov     dword ptr [ebp - 0x14], ecx
        jz      L_1003af47
        xor     esi, esi
        jmp     L_1003a850
    L_1003a84d:
        mov     ecx, dword ptr [ebp - 0x38]
    L_1003a850:
        cmp     dword ptr [ebp - 0x14], esi
        jl      L_1003af47
        push    0x20
        pop     edi
        cmp     bx, di
        jc      L_1003a875
        cmp     bx, 0x78
        ja      L_1003a875
        movzx   eax, bx
        mov     al, byte ptr [eax + g_1004beb8]
        and     eax, 0xf
        jmp     L_1003a877
    L_1003a875:
        xor     eax, eax
    L_1003a877:
        movsx   eax, byte ptr [ecx + eax*0x8 + g_1004bed8]
        push    0x7
        sar     eax, 0x4
        pop     ecx
        mov     dword ptr [ebp - 0x38], eax
        cmp     eax, ecx
        ja      L_1003af32
        jmp     dword ptr [eax*0x4 + g_1003af4f]
    L_1003a897:
        or      dword ptr [ebp - 0x10], 0xffffffff
        mov     dword ptr [ebp - 0x34], esi
        mov     dword ptr [ebp - 0x30], esi
        mov     dword ptr [ebp - 0x28], esi
        mov     dword ptr [ebp - 0x18], esi
        mov     dword ptr [ebp - 0x4], esi
        mov     dword ptr [ebp - 0x1c], esi
        jmp     L_1003af32
    L_1003a8b2:
        movzx   eax, bx
        sub     eax, edi
        jz      L_1003a8f4
        sub     eax, 0x3
        jz      L_1003a8eb
        sub     eax, 0x8
        jz      L_1003a8e2
        dec     eax
        dec     eax
        jz      L_1003a8d9
        sub     eax, 0x3
        jnz     L_1003af32
        or      dword ptr [ebp - 0x4], 0x8
        jmp     L_1003af32
    L_1003a8d9:
        or      dword ptr [ebp - 0x4], 0x4
        jmp     L_1003af32
    L_1003a8e2:
        or      dword ptr [ebp - 0x4], 0x1
        jmp     L_1003af32
    L_1003a8eb:
        or      byte ptr [ebp - 0x4], 0x80
        jmp     L_1003af32
    L_1003a8f4:
        or      dword ptr [ebp - 0x4], 0x2
        jmp     L_1003af32
    L_1003a8fd:
        cmp     bx, 0x2a
        jnz     L_1003a926
        lea     eax, [ebp + 0x10]
        push    eax
        call    FUN_1003aff9
        cmp     eax, esi
        pop     ecx
        mov     dword ptr [ebp - 0x28], eax
        jge     L_1003af32
        or      dword ptr [ebp - 0x4], 0x4
        neg     eax
    L_1003a91e:
        mov     dword ptr [ebp - 0x28], eax
        jmp     L_1003af32
    L_1003a926:
        mov     eax, dword ptr [ebp - 0x28]
        movzx   ecx, bx
        lea     eax, [eax + eax*0x4]
        lea     eax, [ecx + eax*0x2 + -0x30]
        jmp     L_1003a91e
    L_1003a935:
        mov     dword ptr [ebp - 0x10], esi
        jmp     L_1003af32
    L_1003a93d:
        cmp     bx, 0x2a
        jnz     L_1003a961
        lea     eax, [ebp + 0x10]
        push    eax
        call    FUN_1003aff9
        cmp     eax, esi
        pop     ecx
        mov     dword ptr [ebp - 0x10], eax
        jge     L_1003af32
        or      dword ptr [ebp - 0x10], 0xffffffff
        jmp     L_1003af32
    L_1003a961:
        mov     eax, dword ptr [ebp - 0x10]
        movzx   ecx, bx
        lea     eax, [eax + eax*0x4]
        lea     eax, [ecx + eax*0x2 + -0x30]
        mov     dword ptr [ebp - 0x10], eax
        jmp     L_1003af32
    L_1003a976:
        movzx   eax, bx
        cmp     eax, 0x49
        jz      L_1003a99d
        cmp     eax, 0x68
        jz      L_1003a995
        cmp     eax, 0x77
        jnz     L_1003af32
        or      byte ptr [ebp - 0x3], 0x8
        jmp     L_1003af32
    L_1003a995:
        or      dword ptr [ebp - 0x4], edi
        jmp     L_1003af32
    L_1003a99d:
        mov     eax, dword ptr [ebp + 0xc]
        cmp     word ptr [eax], 0x36
        jnz     L_1003a9ba
        cmp     word ptr [eax + 0x2], 0x34
        jnz     L_1003a9ba
        add     dword ptr [ebp + 0xc], 0x4
        or      byte ptr [ebp - 0x3], 0x80
        jmp     L_1003af32
    L_1003a9ba:
        mov     dword ptr [ebp - 0x38], esi
        lea     eax, [ebp - 0x14]
        mov     dword ptr [ebp - 0x1c], 0x1
        push    eax
        push    dword ptr [ebp + 0x8]
        push    ebx
        call    FUN_1003af6f
        add     esp, 0xc
        jmp     L_1003af32
    L_1003a9d9:
        movzx   eax, bx
        cmp     eax, 0x67
        jg      L_1003ac1e
        cmp     eax, 0x65
        jge     L_1003aa98
        cmp     eax, 0x58
        jg      L_1003ab07
        jz      L_1003ac96
        sub     eax, 0x43
        jz      L_1003aaba
        dec     eax
        dec     eax
        jz      L_1003aa8f
        dec     eax
        dec     eax
        jz      L_1003aa8f
        sub     eax, 0xc
        jnz     L_1003ae28
        test    word ptr [ebp - 0x4], 0x830
        jnz     L_1003aa27
        or      dword ptr [ebp - 0x4], 0x20
    L_1003aa27:
        mov     esi, dword ptr [ebp - 0x10]
        cmp     esi, -0x1
        jnz     L_1003aa34
        mov     esi, 0x7fffffff
    L_1003aa34:
        lea     eax, [ebp + 0x10]
        push    eax
        call    FUN_1003aff9
        test    byte ptr [ebp - 0x4], 0x20
        pop     ecx
        mov     ecx, eax
        mov     dword ptr [ebp - 0xc], ecx
        jz      L_1003ac5f
        test    ecx, ecx
        jnz     L_1003aa5a
        mov     ecx, dword ptr [g_100549a0]
        mov     dword ptr [ebp - 0xc], ecx
    L_1003aa5a:
        and     dword ptr [ebp - 0x8], 0x0
        test    esi, esi
        jle     L_1003ae28
    L_1003aa66:
        mov     al, byte ptr [ecx]
        test    al, al
        jz      L_1003ae28
        mov     edx, dword ptr [g_10051984]
        movzx   eax, al
        test    byte ptr [edx + eax*0x2 + 0x1], 0x80
        jz      L_1003aa81
        inc     ecx
    L_1003aa81:
        inc     ecx
        inc     dword ptr [ebp - 0x8]
        cmp     dword ptr [ebp - 0x8], esi
        jl      L_1003aa66
        jmp     L_1003ae28
    L_1003aa8f:
        mov     dword ptr [ebp - 0x34], 0x1
        add     ebx, edi
    L_1003aa98:
        or      dword ptr [ebp - 0x4], 0x40
        cmp     dword ptr [ebp - 0x10], esi
        lea     edi, [ebp + 0xfffffbb0]
        mov     dword ptr [ebp - 0xc], edi
        jge     L_1003ab89
        mov     dword ptr [ebp - 0x10], 0x6
        jmp     L_1003ab98
    L_1003aaba:
        test    word ptr [ebp - 0x4], 0x830
        jnz     L_1003aac5
        or      dword ptr [ebp - 0x4], edi
    L_1003aac5:
        push    0x1
        lea     eax, [ebp + 0x10]
        pop     esi
        push    eax
        mov     dword ptr [ebp - 0x1c], esi
        call    FUN_1003aff9
        test    byte ptr [ebp - 0x4], 0x20
        pop     ecx
        mov     dword ptr [ebp - 0x3c], eax
        jz      L_1003ab1d
        push    dword ptr [g_10051b90]
        and     byte ptr [ebp - 0x21], 0x0
        mov     byte ptr [ebp - 0x22], al
        lea     eax, [ebp - 0x22]
        push    eax
        lea     eax, [ebp + 0xfffffbb0]
        push    eax
        call    FUN_1004153c
        add     esp, 0xc
        test    eax, eax
        jge     L_1003ab24
        mov     dword ptr [ebp - 0x30], esi
        jmp     L_1003ab24
    L_1003ab07:
        sub     eax, 0x5a
        jz      L_1003ab35
        sub     eax, 0x9
        jz      L_1003aac5
        dec     eax
        jz      L_1003acfc
        jmp     L_1003ae28
    L_1003ab1d:
        mov     word ptr [ebp + 0xfffffbb0], ax
    L_1003ab24:
        lea     eax, [ebp + 0xfffffbb0]
        mov     dword ptr [ebp - 0x8], esi
        mov     dword ptr [ebp - 0xc], eax
        jmp     L_1003ae28
    L_1003ab35:
        lea     eax, [ebp + 0x10]
        push    eax
        call    FUN_1003aff9
        cmp     eax, esi
        pop     ecx
        jz      L_1003ab78
        mov     ecx, dword ptr [eax + 0x4]
        cmp     ecx, esi
        jz      L_1003ab78
        test    byte ptr [ebp - 0x3], 0x8
        jz      L_1003ab67
        movsx   eax, word ptr [eax]
        shr     eax, 0x1
        mov     dword ptr [ebp - 0xc], ecx
        mov     dword ptr [ebp - 0x8], eax
        mov     dword ptr [ebp - 0x1c], 0x1
        jmp     L_1003ae28
    L_1003ab67:
        movsx   eax, word ptr [eax]
        mov     dword ptr [ebp - 0x1c], esi
        mov     dword ptr [ebp - 0xc], ecx
    L_1003ab70:
        mov     dword ptr [ebp - 0x8], eax
        jmp     L_1003ae28
    L_1003ab78:
        mov     eax, dword ptr [g_100549a0]
        mov     dword ptr [ebp - 0xc], eax
        push    eax
    L_1003ab81:
        call    FUN_1003c5f0
        pop     ecx
        jmp     L_1003ab70
    L_1003ab89:
        jnz     L_1003ab98
        cmp     bx, 0x67
        jnz     L_1003ab98
        mov     dword ptr [ebp - 0x10], 0x1
    L_1003ab98:
        mov     eax, dword ptr [ebp + 0x10]
        push    dword ptr [ebp - 0x34]
        add     eax, 0x8
        mov     dword ptr [ebp + 0x10], eax
        push    dword ptr [ebp - 0x10]
        mov     ecx, dword ptr [eax - 0x8]
        mov     dword ptr [ebp - 0x50], ecx
        mov     eax, dword ptr [eax - 0x4]
        mov     dword ptr [ebp - 0x4c], eax
        movsx   eax, bl
        push    eax
        lea     eax, [ebp + 0xfffffbb0]
        push    eax
        lea     eax, [ebp - 0x50]
        push    eax
        call    dword ptr [g_10051db8]
        mov     esi, dword ptr [ebp - 0x4]
        add     esp, 0x14
        and     esi, 0x80
        jz      L_1003abea
        cmp     dword ptr [ebp - 0x10], 0x0
        jnz     L_1003abea
        lea     eax, [ebp + 0xfffffbb0]
        push    eax
        call    dword ptr [g_10051dc4]
        pop     ecx
    L_1003abea:
        cmp     bx, 0x67
        jnz     L_1003ac02
        test    esi, esi
        jnz     L_1003ac02
        lea     eax, [ebp + 0xfffffbb0]
        push    eax
        call    dword ptr [g_10051dbc]
        pop     ecx
    L_1003ac02:
        cmp     byte ptr [ebp + 0xfffffbb0], 0x2d
        jnz     L_1003ac18
        or      byte ptr [ebp - 0x3], 0x1
        lea     edi, [ebp + 0xfffffbb1]
        mov     dword ptr [ebp - 0xc], edi
    L_1003ac18:
        push    edi
        jmp     L_1003ab81
    L_1003ac1e:
        sub     eax, 0x69
        jz      L_1003acfc
        sub     eax, 0x5
        jz      L_1003acd2
        dec     eax
        jz      L_1003acbf
        dec     eax
        jz      L_1003ac8f
        sub     eax, 0x3
        jz      L_1003aa27
        dec     eax
        dec     eax
        jz      L_1003ad00
        sub     eax, 0x3
        jnz     L_1003ae28
        mov     dword ptr [ebp - 0x2c], 0x27
        xor     esi, esi
        jmp     L_1003ac99
    L_1003ac5f:
        test    ecx, ecx
        jnz     L_1003ac6c
        mov     ecx, dword ptr [g_100549a4]
        mov     dword ptr [ebp - 0xc], ecx
    L_1003ac6c:
        mov     dword ptr [ebp - 0x1c], 0x1
        mov     eax, ecx
    L_1003ac75:
        mov     edx, esi
        dec     esi
        test    edx, edx
        jz      L_1003ac86
        cmp     word ptr [eax], 0x0
        jz      L_1003ac86
        inc     eax
        inc     eax
        jmp     L_1003ac75
    L_1003ac86:
        sub     eax, ecx
        sar     eax, 0x1
        jmp     L_1003ab70
    L_1003ac8f:
        mov     dword ptr [ebp - 0x10], 0x8
    L_1003ac96:
        mov     dword ptr [ebp - 0x2c], ecx
    L_1003ac99:
        test    byte ptr [ebp - 0x4], 0x80
        mov     dword ptr [ebp - 0x8], 0x10
        jz      L_1003ad07
        mov     eax, dword ptr [ebp - 0x2c]
        mov     word ptr [ebp - 0x20], 0x30
        add     eax, 0x51
        mov     dword ptr [ebp - 0x18], 0x2
        mov     word ptr [ebp - 0x1e], ax
        jmp     L_1003ad07
    L_1003acbf:
        test    byte ptr [ebp - 0x4], 0x80
        mov     dword ptr [ebp - 0x8], 0x8
        jz      L_1003ad07
        or      byte ptr [ebp - 0x3], 0x2
        jmp     L_1003ad07
    L_1003acd2:
        lea     eax, [ebp + 0x10]
        push    eax
        call    FUN_1003aff9
        test    byte ptr [ebp - 0x4], 0x20
        pop     ecx
        jz      L_1003aceb
        mov     cx, word ptr [ebp - 0x14]
        mov     word ptr [eax], cx
        jmp     L_1003acf0
    L_1003aceb:
        mov     ecx, dword ptr [ebp - 0x14]
        mov     dword ptr [eax], ecx
    L_1003acf0:
        mov     dword ptr [ebp - 0x30], 0x1
        jmp     L_1003af32
    L_1003acfc:
        or      dword ptr [ebp - 0x4], 0x40
    L_1003ad00:
        mov     dword ptr [ebp - 0x8], 0xa
    L_1003ad07:
        test    byte ptr [ebp - 0x3], 0x80
        jz      L_1003ad19
        lea     eax, [ebp + 0x10]
        push    eax
        call    FUN_1003b006
        pop     ecx
        jmp     L_1003ad5a
    L_1003ad19:
        test    byte ptr [ebp - 0x4], 0x20
        jz      L_1003ad40
        test    byte ptr [ebp - 0x4], 0x40
        lea     eax, [ebp + 0x10]
        push    eax
        jz      L_1003ad35
        call    FUN_1003aff9
        pop     ecx
        movsx   eax, ax
    L_1003ad32:
        cdq
        jmp     L_1003ad5a
    L_1003ad35:
        call    FUN_1003aff9
        pop     ecx
        movzx   eax, ax
        jmp     L_1003ad32
    L_1003ad40:
        test    byte ptr [ebp - 0x4], 0x40
        lea     eax, [ebp + 0x10]
        push    eax
        jz      L_1003ad52
        call    FUN_1003aff9
        pop     ecx
        jmp     L_1003ad32
    L_1003ad52:
        call    FUN_1003aff9
        pop     ecx
        xor     edx, edx
    L_1003ad5a:
        test    byte ptr [ebp - 0x4], 0x40
        jz      L_1003ad7b
        cmp     edx, esi
        jg      L_1003ad7b
        jl      L_1003ad6a
        cmp     eax, esi
        jnc     L_1003ad7b
    L_1003ad6a:
        neg     eax
        adc     edx, 0x0
        mov     esi, eax
        neg     edx
        or      byte ptr [ebp - 0x3], 0x1
        mov     edi, edx
        jmp     L_1003ad7f
    L_1003ad7b:
        mov     esi, eax
        mov     edi, edx
    L_1003ad7f:
        test    byte ptr [ebp - 0x3], 0x80
        jnz     L_1003ad88
        and     edi, 0x0
    L_1003ad88:
        cmp     dword ptr [ebp - 0x10], 0x0
        jge     L_1003ad97
        mov     dword ptr [ebp - 0x10], 0x1
        jmp     L_1003ad9b
    L_1003ad97:
        and     dword ptr [ebp - 0x4], 0xfffffff7
    L_1003ad9b:
        mov     eax, esi
        or      eax, edi
        jnz     L_1003ada5
        and     dword ptr [ebp - 0x18], 0x0
    L_1003ada5:
        lea     eax, [ebp + 0xfffffdaf]
        mov     dword ptr [ebp - 0xc], eax
    L_1003adae:
        mov     eax, dword ptr [ebp - 0x10]
        dec     dword ptr [ebp - 0x10]
        test    eax, eax
        jg      L_1003adbe
        mov     eax, esi
        or      eax, edi
        jz      L_1003adf9
    L_1003adbe:
        mov     eax, dword ptr [ebp - 0x8]
        cdq
        push    edx
        push    eax
        push    edi
        push    esi
        mov     dword ptr [ebp - 0x48], eax
        mov     dword ptr [ebp - 0x44], edx
        call    FUN_100416e0
        push    dword ptr [ebp - 0x44]
        mov     ebx, eax
        add     ebx, 0x30
        push    dword ptr [ebp - 0x48]
        push    edi
        push    esi
        call    FUN_10041670
        cmp     ebx, 0x39
        mov     esi, eax
        mov     edi, edx
        jle     L_1003adef
        add     ebx, dword ptr [ebp - 0x2c]
    L_1003adef:
        mov     eax, dword ptr [ebp - 0xc]
        dec     dword ptr [ebp - 0xc]
        mov     byte ptr [eax], bl
        jmp     L_1003adae
    L_1003adf9:
        lea     eax, [ebp + 0xfffffdaf]
        sub     eax, dword ptr [ebp - 0xc]
        inc     dword ptr [ebp - 0xc]
        test    byte ptr [ebp - 0x3], 0x2
        mov     dword ptr [ebp - 0x8], eax
        jz      L_1003ae28
        mov     eax, dword ptr [ebp - 0xc]
        cmp     byte ptr [eax], 0x30
        jnz     L_1003ae1c
        cmp     dword ptr [ebp - 0x8], 0x0
        jnz     L_1003ae28
    L_1003ae1c:
        dec     dword ptr [ebp - 0xc]
        inc     dword ptr [ebp - 0x8]
        mov     eax, dword ptr [ebp - 0xc]
        mov     byte ptr [eax], 0x30
    L_1003ae28:
        cmp     dword ptr [ebp - 0x30], 0x0
        jnz     L_1003af32
        mov     ebx, dword ptr [ebp - 0x4]
        test    bl, 0x40
        jz      L_1003ae66
        test    bh, 0x1
        jz      L_1003ae47
        mov     word ptr [ebp - 0x20], 0x2d
        jmp     L_1003ae5f
    L_1003ae47:
        test    bl, 0x1
        jz      L_1003ae54
        mov     word ptr [ebp - 0x20], 0x2b
        jmp     L_1003ae5f
    L_1003ae54:
        test    bl, 0x2
        jz      L_1003ae66
        mov     word ptr [ebp - 0x20], 0x20
    L_1003ae5f:
        mov     dword ptr [ebp - 0x18], 0x1
    L_1003ae66:
        mov     esi, dword ptr [ebp - 0x28]
        sub     esi, dword ptr [ebp - 0x18]
        sub     esi, dword ptr [ebp - 0x8]
        test    bl, 0xc
        jnz     L_1003ae86
        lea     eax, [ebp - 0x14]
        push    eax
        push    dword ptr [ebp + 0x8]
        push    esi
        push    0x20
        call    FUN_1003af8f
        add     esp, 0x10
    L_1003ae86:
        lea     eax, [ebp - 0x14]
        push    eax
        lea     eax, [ebp - 0x20]
        push    dword ptr [ebp + 0x8]
        push    dword ptr [ebp - 0x18]
        push    eax
        call    FUN_1003afc0
        add     esp, 0x10
        test    bl, 0x8
        jz      L_1003aeb8
        test    bl, 0x4
        jnz     L_1003aeb8
        lea     eax, [ebp - 0x14]
        push    eax
        push    dword ptr [ebp + 0x8]
        push    esi
        push    0x30
        call    FUN_1003af8f
        add     esp, 0x10
    L_1003aeb8:
        cmp     dword ptr [ebp - 0x1c], 0x0
        jnz     L_1003af05
        cmp     dword ptr [ebp - 0x8], 0x0
        jle     L_1003af05
        mov     eax, dword ptr [ebp - 0x8]
        mov     edi, dword ptr [ebp - 0xc]
        lea     ebx, [eax - 0x1]
    L_1003aecd:
        push    dword ptr [g_10051b90]
        lea     eax, [ebp - 0x3c]
        push    edi
        push    eax
        call    FUN_1004153c
        add     esp, 0xc
        mov     dword ptr [ebp - 0x40], eax
        test    eax, eax
        jle     L_1003af1a
        lea     eax, [ebp - 0x14]
        push    eax
        push    dword ptr [ebp + 0x8]
        push    dword ptr [ebp - 0x3c]
        call    FUN_1003af6f
        add     edi, dword ptr [ebp - 0x40]
        add     esp, 0xc
        mov     eax, ebx
        dec     ebx
        test    eax, eax
        jg      L_1003aecd
        jmp     L_1003af1a
    L_1003af05:
        lea     eax, [ebp - 0x14]
        push    eax
        push    dword ptr [ebp + 0x8]
        push    dword ptr [ebp - 0x8]
        push    dword ptr [ebp - 0xc]
        call    FUN_1003afc0
        add     esp, 0x10
    L_1003af1a:
        test    byte ptr [ebp - 0x4], 0x4
        jz      L_1003af32
        lea     eax, [ebp - 0x14]
        push    eax
        push    dword ptr [ebp + 0x8]
        push    esi
        push    0x20
        call    FUN_1003af8f
        add     esp, 0x10
    L_1003af32:
        mov     eax, dword ptr [ebp + 0xc]
        add     dword ptr [ebp + 0xc], 0x2
        xor     esi, esi
        mov     bx, word ptr [eax]
        cmp     bx, si
        jnz     L_1003a84d
    L_1003af47:
        mov     eax, dword ptr [ebp - 0x14]
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
