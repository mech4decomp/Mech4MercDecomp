/*
 * FUN_0046BEE0 (1555 B) — mlr data-block function (block 0x46BEA5).
 * The block contains THREE functions plus padding:
 *   - FUN_0046BEE0 (0x46BEE0..0x46BEF8): __thiscall ret 8, reads two
 *     dwords from this and stores to two out-params.
 *   - 0x46BEF9..0x46BEFF: 7 nops (pad)
 *   - FUN_0046BF00 (0x46BF00..0x46C01C): __thiscall ret 4, resizes a
 *     dword buffer and copies via vtable +0xa4/+0xa8.
 *   - 0x46C01D..0x46C01F: 3 nops (pad)
 *   - FUN_0046C020 (0x46C020..0x46C4F2): __thiscall ret 0x14, decodes a
 *     run-length pixel stream (0x235/0x613/0x115c formats) into a buffer.
 * Transcribed verbatim so the block bytes match exactly.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0046fca0(void);
extern void *__cdecl FUN_004084d0(int);
extern void __cdecl FUN_004084e0(void *);
extern void __cdecl FUN_0046fcd0(void);
extern void __cdecl FUN_00491cd0(void);
extern void __cdecl FUN_0043e0e0(void);
extern void __cdecl FUN_00421f00(void);

extern unsigned int g_7da848;
extern unsigned int g_7da864;
extern unsigned int g_7da600;
extern unsigned int g_7da5f4;
extern unsigned int g_7d997c;
extern unsigned int g_7da5e8;

__declspec(naked) void FUN_0046BEE0(void)
{
    __asm {
        /* ---- FUN_0046BEE0 ---- */
        mov     eax, dword ptr [ecx + 0x88]
        mov     edx, dword ptr [esp + 4]
        mov     dword ptr [edx], eax
        mov     eax, dword ptr [ecx + 0x8c]
        mov     ecx, dword ptr [esp + 8]
        mov     dword ptr [ecx], eax
        ret     8
        /* ---- pad ---- */
        nop
        nop
        nop
        nop
        nop
        /* ---- FUN_0046BF00 ---- */
        sub     esp, 0xc
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x18]
        mov     ebx, ecx
        push    esi
        mov     dword ptr [esp + 0x14], ebx
        call    FUN_0046fca0
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        je      L_bfed
        mov     ecx, dword ptr [eax + 0x24]
        test    ecx, ecx
        jbe     L_bfed
        mov     eax, dword ptr [esi]
        push    edi
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     edx, [esp + 0x10]
        push    edx
        mov     ecx, esi
        call    dword ptr [eax + 0xa8]
        mov     esi, dword ptr [ebx + 0xc]
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edi, dword ptr [esi + 0x24]
        cmp     ecx, edi
        mov     dword ptr [esp + 0x10], ecx
        je      L_bfc7
        test    ecx, ecx
        jbe     L_bfa9
        lea     eax, [ecx*4]
        push    ebp
        push    eax
        call    FUN_004084d0
        mov     ebp, dword ptr [esi + 0x20]
        add     esp, 4
        test    ebp, ebp
        mov     ebx, eax
        je      L_bf9f
        mov     ecx, dword ptr [esp + 0x14]
        cmp     ecx, edi
        jb      L_bf7a
        mov     ecx, edi
    L_bf7a:
        mov     edx, ecx
        dec     ecx
        test    edx, edx
        je      L_bf96
        mov     edx, ebp
        lea     eax, [ebx + ecx*4]
        sub     edx, ebx
        inc     ecx
    L_bf89:
        mov     edi, dword ptr [edx + eax]
        mov     dword ptr [eax], edi
        dec     ecx
        sub     eax, 4
        test    ecx, ecx
        ja      L_bf89
    L_bf96:
        push    ebp
        call    FUN_004084e0
        add     esp, 4
    L_bf9f:
        mov     dword ptr [esi + 0x20], ebx
        mov     ebx, dword ptr [esp + 0x18]
        pop     ebp
        jmp     L_bfbc
    L_bfa9:
        mov     eax, dword ptr [esi + 0x20]
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi + 0x20], 0
    L_bfbc:
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [esi + 0x24], ecx
        mov     ecx, dword ptr [esp + 0x1c]
    L_bfc7:
        mov     eax, dword ptr [esi + 0x20]
        mov     esi, dword ptr [esp + 0xc]
        mov     edx, dword ptr [ebx]
        mov     edi, eax
        rep     movsd
        mov     ecx, dword ptr [esp + 0x1c]
        push    ecx
        push    eax
        mov     ecx, ebx
        call    dword ptr [edx + 0xa4]
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        add     esp, 0xc
        ret     4
    L_bfed:
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0xc]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0xa8]
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 8]
        mov     edx, dword ptr [ebx]
        push    eax
        push    ecx
        mov     ecx, ebx
        call    dword ptr [edx + 0xa4]
        pop     esi
        mov     al, 1
        pop     ebx
        add     esp, 0xc
        ret     4
        /* ---- pad ---- */
        nop
        /* ---- FUN_0046C020 ---- */
        sub     esp, 0x20
        push    ebp
        mov     ebp, ecx
        mov     eax, dword ptr [ebp + 0x8c]
        push    edi
        xor     edi, edi
        cmp     eax, edi
        jne     L_c05b
        mov     eax, dword ptr [esp + 0x3c]
        mov     ecx, dword ptr [esp + 0x38]
        mov     edx, dword ptr [esp + 0x34]
        push    eax
        mov     eax, dword ptr [esp + 0x34]
        push    ecx
        mov     ecx, dword ptr [esp + 0x34]
        push    edx
        push    eax
        push    ecx
        mov     ecx, ebp
        call    FUN_0046fcd0
        pop     edi
        pop     ebp
        add     esp, 0x20
        ret     0x14
    L_c05b:
        mov     eax, dword ptr [ebp + 0x24]
        and     eax, 0x3fff
        push    ebx
        push    esi
        mov     byte ptr [esp + 0x40], 0
        mov     dword ptr [esp + 0x18], 0
        mov     dword ptr [esp + 0x1c], 0
        je      L_c138
        cmp     eax, edi
        jle     L_c138
        mov     edx, dword ptr [g_7da848]
        mov     esi, dword ptr [edx + eax*4 + 0x24]
        cmp     esi, edi
        je      L_c138
        mov     eax, dword ptr [esi]
        push    edi
        mov     ecx, esi
        call    dword ptr [eax + 4]
        mov     ecx, eax
        call    FUN_00491cd0
        cmp     eax, 0x100
        jl      L_c0bc
        mov     dword ptr [g_7da864], 1
        jmp     L_c117
    L_c0bc:
        cmp     eax, 0x80
        jl      L_c0cf
        mov     dword ptr [g_7da864], 2
        jmp     L_c117
    L_c0cf:
        cmp     eax, 0x40
        jl      L_c0e0
        mov     dword ptr [g_7da864], 4
        jmp     L_c117
    L_c0e0:
        cmp     eax, 0x20
        jl      L_c0f1
        mov     dword ptr [g_7da864], 8
        jmp     L_c117
    L_c0f1:
        cmp     eax, 0x10
        jl      L_c102
        mov     dword ptr [g_7da864], 0x10
        jmp     L_c117
    L_c102:
        xor     ecx, ecx
        cmp     eax, 8
        setl    cl
        dec     ecx
        and     ecx, 0xffffffe0
        add     ecx, 0x40
        mov     dword ptr [g_7da864], ecx
    L_c117:
        mov     al, byte ptr [esi + 0x24]
        test    al, al
        jne     L_c16b
        mov     esi, dword ptr [esi + 0x28]
        cmp     esi, edi
        je      L_c16b
        mov     edx, dword ptr [esi + 0xc]
        mov     eax, dword ptr [esi + 0x1c]
        mov     byte ptr [esp + 0x40], 1
        mov     dword ptr [esp + 0x18], edx
        mov     dword ptr [esp + 0x1c], eax
    L_c138:
        mov     esi, dword ptr [ebp + 0x18]
        cmp     esi, 0x100
        mov     ecx, dword ptr [ebp + 0x64]
        mov     dword ptr [esp + 0x2c], ecx
        mov     dword ptr [esp + 0x20], esi
        jle     L_c15a
        mov     dword ptr [esp + 0x20], 0x100
        mov     esi, dword ptr [esp + 0x20]
    L_c15a:
        mov     al, byte ptr [esp + 0x44]
        test    al, al
        je      L_c172
        mov     ebx, dword ptr [esp + 0x38]
        mov     eax, dword ptr [ebx + 0x30]
        jmp     L_c182
    L_c16b:
        mov     byte ptr [esp + 0x40], 0
        jmp     L_c138
    L_c172:
        mov     ecx, dword ptr [esp + 0x38]
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [ecx + 0x10]
        shl     eax, 5
        add     eax, edx
        mov     ebx, ecx
    L_c182:
        cmp     word ptr [ebp + 0x56], di
        mov     dword ptr [ebp + 0x44], eax
        mov     word ptr [ebp + 0xa], di
        jne     L_c19a
        mov     edx, dword ptr [ebp]
        mov     ecx, ebp
        call    dword ptr [edx + 0x98]
    L_c19a:
        xor     ecx, ecx
        cmp     esi, ecx
        mov     dword ptr [esp + 0x10], ecx
        jle     L_c2de
        lea     eax, [esi*8]
        mov     dword ptr [esp + 0x14], ecx
        mov     dword ptr [esp + 0x28], ecx
        mov     dword ptr [esp + 0x24], eax
    L_c1bb:
        mov     ecx, dword ptr [g_7da600]
        mov     edx, dword ptr [ecx]
        cmp     byte ptr [edx + edi], 0
        jne     L_c1d2
        inc     dword ptr [esp + 0x10]
        jmp     L_c2bd
    L_c1d2:
        mov     edx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [g_7da5f4]
        mov     eax, edi
        sub     eax, edx
        mov     edx, dword ptr [ebp + 0x1c]
        mov     word ptr [ecx + edi*2], ax
        mov     ecx, dword ptr [ebp + 0x44]
        xor     eax, eax
        mov     ax, word ptr [ebp + 0xa]
        lea     ebx, [edx + edi*8]
        mov     edx, dword ptr [esp + 0x34]
        push    edx
        mov     edx, dword ptr [ebp + 0x14]
        shl     eax, 5
        lea     esi, [eax + ecx]
        mov     eax, dword ptr [esp + 0x18]
        add     eax, edx
        push    eax
        mov     ecx, esi
        call    FUN_0043e0e0
        mov     ecx, dword ptr [ebx]
        mov     edx, dword ptr [ebx + 4]
        mov     eax, dword ptr [ebp + 0x88]
        mov     dword ptr [esi + 0x18], ecx
        mov     dword ptr [esi + 0x1c], edx
        mov     ecx, dword ptr [eax + edi*4]
        mov     dword ptr [esi + 0x10], ecx
        mov     ecx, dword ptr [esp + 0x3c]
        test    ecx, ecx
        je      L_c24b
        mov     edx, dword ptr [esp + 0x14]
        add     edx, dword ptr [ebp + 0x14]
        push    edx
        call    FUN_00421f00
        mov     edx, dword ptr [ebp + 0x44]
        xor     ecx, ecx
        mov     cx, word ptr [ebp + 0xa]
        shl     ecx, 5
        mov     byte ptr [ecx + edx + 0x17], al
    L_c24b:
        mov     al, byte ptr [esp + 0x40]
        test    al, al
        je      L_c287
        mov     ecx, dword ptr [ebp + 0x44]
        fld     dword ptr [esp + 0x18]
        xor     eax, eax
        mov     ax, word ptr [ebp + 0xa]
        xor     edx, edx
        shl     eax, 5
        fadd    dword ptr [eax + ecx + 0x18]
        lea     eax, [eax + ecx + 0x18]
        fstp    dword ptr [eax]
        mov     dx, word ptr [ebp + 0xa]
        mov     eax, dword ptr [ebp + 0x44]
        fld     dword ptr [esp + 0x1c]
        shl     edx, 5
        fadd    dword ptr [edx + eax + 0x1c]
        lea     eax, [edx + eax + 0x1c]
        fstp    dword ptr [eax]
    L_c287:
        mov     ecx, dword ptr [esp + 0x28]
        mov     edx, dword ptr [ebp + 0x1c]
        mov     ebx, dword ptr [esp + 0x38]
        mov     eax, ecx
        add     ecx, 8
        mov     dword ptr [esp + 0x28], ecx
        mov     ecx, dword ptr [g_7d997c]
        mov     esi, dword ptr [ecx]
        mov     ecx, dword ptr [esp + 0x24]
        add     eax, esi
        mov     esi, dword ptr [edx + ecx]
        mov     edx, dword ptr [edx + ecx + 4]
        inc     word ptr [ebp + 0xa]
        mov     dword ptr [eax], esi
        mov     esi, dword ptr [esp + 0x20]
        mov     dword ptr [eax + 4], edx
    L_c2bd:
        mov     edx, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [esp + 0x14]
        inc     edi
        add     edx, 8
        add     ecx, 0xc
        cmp     edi, esi
        mov     dword ptr [esp + 0x24], edx
        mov     dword ptr [esp + 0x14], ecx
        jl      L_c1bb
        xor     ecx, ecx
    L_c2de:
        test    dword ptr [ebp + 0x68], 0x3fff
        je      L_c324
        mov     eax, dword ptr [ebp + 0x24]
        and     eax, 0x3fff
        jg      L_c2f5
        xor     eax, eax
        jmp     L_c2ff
    L_c2f5:
        mov     edx, dword ptr [g_7da848]
        mov     eax, dword ptr [edx + eax*4 + 0x24]
    L_c2ff:
        mov     dl, byte ptr [eax + 0x24]
        test    dl, dl
        jne     L_c38c
        mov     eax, dword ptr [eax + 0x28]
        cmp     eax, ecx
        je      L_c38c
        mov     ecx, dword ptr [eax + 0xc]
        mov     edx, dword ptr [eax + 0x1c]
        mov     byte ptr [esp + 0x40], 1
        mov     dword ptr [esp + 0x18], ecx
        mov     dword ptr [esp + 0x1c], edx
    L_c324:
        mov     esi, dword ptr [ebp + 0x44]
        xor     ecx, ecx
        mov     cx, word ptr [ebp + 0xa]
        shl     ecx, 5
        lea     edi, [esi + ecx]
        mov     eax, ecx
        shr     ecx, 2
        rep     movsd
        mov     ecx, eax
        mov     al, byte ptr [esp + 0x40]
        and     ecx, 3
        test    al, al
        rep     movsb
        je      L_c393
        xor     edx, edx
        mov     dx, word ptr [ebp + 0xa]
        and     edx, 0xffff
        jle     L_c3c9
        mov     ecx, dword ptr [g_7d997c]
        mov     eax, dword ptr [ecx]
        mov     esi, dword ptr [ebp + 0x44]
        mov     ecx, edx
        shl     ecx, 5
        lea     ecx, [ecx + esi + 0x1c]
        mov     esi, edx
    L_c36d:
        fld     dword ptr [esp + 0x18]
        add     eax, 8
        fadd    dword ptr [eax - 8]
        add     ecx, 0x20
        dec     esi
        fstp    dword ptr [ecx - 0x24]
        fld     dword ptr [esp + 0x1c]
        fadd    dword ptr [eax - 4]
        fstp    dword ptr [ecx - 0x20]
        jne     L_c36d
        jmp     L_c3c9
    L_c38c:
        mov     byte ptr [esp + 0x40], 0
        jmp     L_c324
    L_c393:
        xor     edx, edx
        mov     dx, word ptr [ebp + 0xa]
        and     edx, 0xffff
        jle     L_c3c9
        mov     esi, dword ptr [ebp + 0x44]
        mov     eax, dword ptr [g_7d997c]
        mov     eax, dword ptr [eax]
        mov     ecx, edx
        shl     ecx, 5
        lea     ecx, [ecx + esi + 0x1c]
        mov     esi, edx
    L_c3b6:
        mov     edi, dword ptr [eax]
        mov     dword ptr [ecx - 4], edi
        mov     edi, dword ptr [eax + 4]
        mov     dword ptr [ecx], edi
        add     eax, 8
        add     ecx, 0x20
        dec     esi
        jne     L_c3b6
    L_c3c9:
        mov     al, byte ptr [esp + 0x44]
        test    al, al
        jne     L_c4eb
        mov     eax, dword ptr [ebx]
        mov     ecx, dword ptr [ebx + 0x28]
        add     edx, edx
        add     eax, edx
        mov     dword ptr [ebx], eax
        mov     eax, dword ptr [ebx + 0xc]
        lea     eax, [ecx + eax*2]
    L_c3e6:
        mov     ecx, dword ptr [esp + 0x2c]
        xor     esi, esi
        xor     edi, edi
        cmp     ecx, esi
        mov     dword ptr [esp + 0x40], eax
        mov     dword ptr [ebp + 0x50], eax
        mov     word ptr [ebp + 0x54], si
        mov     dword ptr [esp + 0x28], edi
        mov     dword ptr [esp + 0x34], esi
        jle     L_c4bc
        mov     edx, dword ptr [g_7da5e8]
        mov     ecx, dword ptr [edx]
        mov     edx, dword ptr [g_7da5f4]
        mov     dword ptr [esp + 0x24], ecx
    L_c41b:
        mov     ecx, dword ptr [ebp + 0x60]
        movzx   cx, byte ptr [ecx + edi]
        mov     ebx, dword ptr [esp + 0x24]
        cmp     byte ptr [ebx + edi], 0
        mov     dword ptr [esp + 0x10], ecx
        je      L_c497
        mov     ebx, ecx
        and     ebx, 0xffff
        dec     ebx
        cmp     ebx, 1
        jle     L_c497
        mov     ecx, dword ptr [ebp + 0x48]
        mov     edi, dword ptr [esp + 0x34]
        add     edi, ecx
        dec     ebx
        lea     eax, [eax + esi*2]
        lea     ecx, [edi + 1]
        mov     dword ptr [esp + 0x3c], ebx
        xor     ebx, ebx
    L_c453:
        mov     bl, byte ptr [edi]
        add     eax, 2
        inc     esi
        add     eax, 2
        add     eax, 2
        mov     bx, word ptr [edx + ebx*2]
        mov     word ptr [eax - 6], bx
        xor     ebx, ebx
        mov     bl, byte ptr [ecx + 1]
        inc     esi
        mov     bx, word ptr [edx + ebx*2]
        mov     word ptr [eax - 4], bx
        xor     ebx, ebx
        mov     bl, byte ptr [ecx]
        inc     esi
        inc     ecx
        mov     bx, word ptr [edx + ebx*2]
        mov     word ptr [eax - 2], bx
        dec     dword ptr [esp + 0x3c]
        /* __emit: MSVC6 miscomputes backward jne rel8 (off-by-2) */
        __emit 0x75
        __emit 0xC8
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x40]
        mov     edi, dword ptr [esp + 0x28]
    L_c497:
        mov     ebx, dword ptr [esp + 0x34]
        and     ecx, 0xffff
        add     ebx, ecx
        mov     ecx, dword ptr [esp + 0x2c]
        inc     edi
        cmp     edi, ecx
        mov     dword ptr [esp + 0x34], ebx
        mov     dword ptr [esp + 0x28], edi
        jl      L_c41b
        mov     ebx, dword ptr [esp + 0x38]
    L_c4bc:
        mov     al, byte ptr [esp + 0x44]
        test    al, al
        mov     word ptr [ebp + 0x54], si
        jne     L_c4d6
        mov     eax, dword ptr [ebx + 0xc]
        and     esi, 0xffff
        add     eax, esi
        mov     dword ptr [ebx + 0xc], eax
    L_c4d6:
        cmp     word ptr [ebp + 0xa], 0
        pop     esi
        pop     ebx
        setne   dl
        pop     edi
        mov     byte ptr [ebp + 0x10], dl
        pop     ebp
        add     esp, 0x20
        ret     0x14
    L_c4eb:
        mov     eax, dword ptr [ebx + 0x48]
        jmp     L_c3e6
    }
}
