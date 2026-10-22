/*
 * FUN_00468040 (1254 B) — MLR PMesh mesh-build routine (__thiscall, RET 0x14).
 * Builds/transforms vertex data, writes buffers, builds index lists. Falls
 * back to FUN_0046fcd0 when buffers are uninitialized. FPU-heavy.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_007b9574;
extern int   g_007da848;
extern int   g_007da864;
extern int   g_007da600;
extern int   g_007da5f4;
extern int   g_007d997c;
extern int   g_007da5e8;

extern void __cdecl FUN_00491cd0(void);
extern void __cdecl FUN_0043e0e0(void);
extern void __cdecl FUN_00421f00(void);
extern void __cdecl FUN_0046fcd0(void);

__declspec(naked) void FUN_00468040(void)
{
    __asm {
        sub     esp, 0x20
        push    ebp
        mov     ebp, ecx
        mov     eax, dword ptr [ebp + 0x98]
        push    edi
        xor     edi, edi
        cmp     eax, edi
        jz      L_4684fe
        cmp     dword ptr [eax + 0x4], edi
        jz      L_4684fe
        cmp     dword ptr [g_007b9574], edi
        ja      L_4684fe
        mov     eax, dword ptr [ebp + 0x24]
        and     eax, 0x3fff
        push    ebx
        push    esi
        mov     byte ptr [esp + 0x40], 0x0
        mov     dword ptr [esp + 0x18], edi
        mov     dword ptr [esp + 0x1c], edi
        jz      L_468141
        cmp     eax, edi
        jle     L_468141
        mov     ecx, dword ptr [g_007da848]
        mov     esi, dword ptr [ecx + eax*4 + 0x24]
        cmp     esi, edi
        jz      L_468141
        mov     edx, dword ptr [esi]
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        mov     ecx, eax
        call    FUN_00491cd0
        cmp     eax, 0x100
        jl      L_4680c5
        mov     dword ptr [g_007da864], 0x1
        jmp     L_468120
L_4680c5:
        cmp     eax, 0x80
        jl      L_4680d8
        mov     dword ptr [g_007da864], 0x2
        jmp     L_468120
L_4680d8:
        cmp     eax, 0x40
        jl      L_4680e9
        mov     dword ptr [g_007da864], 0x4
        jmp     L_468120
L_4680e9:
        cmp     eax, 0x20
        jl      L_4680fa
        mov     dword ptr [g_007da864], 0x8
        jmp     L_468120
L_4680fa:
        cmp     eax, 0x10
        jl      L_46810b
        mov     dword ptr [g_007da864], 0x10
        jmp     L_468120
L_46810b:
        xor     ecx, ecx
        cmp     eax, 0x8
        setl    cl
        dec     ecx
        and     ecx, 0xffffffe0
        add     ecx, 0x40
        mov     dword ptr [g_007da864], ecx
L_468120:
        mov     al, byte ptr [esi + 0x24]
        test    al, al
        jnz     L_468174
        mov     esi, dword ptr [esi + 0x28]
        cmp     esi, edi
        jz      L_468174
        mov     edx, dword ptr [esi + 0xc]
        mov     eax, dword ptr [esi + 0x1c]
        mov     byte ptr [esp + 0x40], 0x1
        mov     dword ptr [esp + 0x18], edx
        mov     dword ptr [esp + 0x1c], eax
L_468141:
        mov     esi, dword ptr [ebp + 0x18]
        cmp     esi, 0x100
        mov     ecx, dword ptr [ebp + 0x64]
        mov     dword ptr [esp + 0x2c], ecx
        mov     dword ptr [esp + 0x20], esi
        jle     L_468163
        mov     dword ptr [esp + 0x20], 0x100
        mov     esi, dword ptr [esp + 0x20]
L_468163:
        mov     al, byte ptr [esp + 0x44]
        test    al, al
        jz      L_46817b
        mov     ebx, dword ptr [esp + 0x38]
        mov     eax, dword ptr [ebx + 0x30]
        jmp     L_46818b
L_468174:
        mov     byte ptr [esp + 0x40], 0x0
        jmp     L_468141
L_46817b:
        mov     ecx, dword ptr [esp + 0x38]
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [ecx + 0x10]
        shl     eax, 0x5
        add     eax, edx
        mov     ebx, ecx
L_46818b:
        cmp     word ptr [ebp + 0x56], di
        mov     dword ptr [ebp + 0x44], eax
        mov     word ptr [ebp + 0xa], di
        jnz     L_4681a3
        mov     edx, dword ptr [ebp]
        mov     ecx, ebp
        call    dword ptr [edx + 0x98]
L_4681a3:
        xor     ecx, ecx
        cmp     esi, ecx
        mov     dword ptr [esp + 0x10], ecx
        jle     L_4682e9
        lea     eax, [esi*8]
        mov     dword ptr [esp + 0x14], ecx
        mov     dword ptr [esp + 0x28], ecx
        mov     dword ptr [esp + 0x24], eax
L_4681c4:
        mov     ecx, dword ptr [g_007da600]
        mov     edx, dword ptr [ecx]
        cmp     byte ptr [edx + edi], 0x0
        jnz     L_4681db
        inc     dword ptr [esp + 0x10]
        jmp     L_4682c8
L_4681db:
        mov     edx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [g_007da5f4]
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
        shl     eax, 0x5
        lea     esi, [eax + ecx]
        mov     eax, dword ptr [esp + 0x18]
        add     eax, edx
        push    eax
        mov     ecx, esi
        call    FUN_0043e0e0
        mov     ecx, dword ptr [ebx]
        mov     edx, dword ptr [ebx + 0x4]
        mov     eax, dword ptr [ebp + 0x98]
        mov     dword ptr [esi + 0x18], ecx
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esi + 0x1c], edx
        mov     edx, dword ptr [ecx + edi*4]
        mov     ecx, dword ptr [esp + 0x3c]
        test    ecx, ecx
        mov     dword ptr [esi + 0x10], edx
        jz      L_468256
        mov     eax, dword ptr [esp + 0x14]
        add     eax, dword ptr [ebp + 0x14]
        push    eax
        call    FUN_00421f00
        mov     edx, dword ptr [ebp + 0x44]
        xor     ecx, ecx
        mov     cx, word ptr [ebp + 0xa]
        shl     ecx, 0x5
        mov     byte ptr [ecx + edx + 0x17], al
L_468256:
        mov     al, byte ptr [esp + 0x40]
        test    al, al
        jz      L_468292
        mov     ecx, dword ptr [ebp + 0x44]
        fld     dword ptr [esp + 0x18]
        xor     eax, eax
        mov     ax, word ptr [ebp + 0xa]
        xor     edx, edx
        shl     eax, 0x5
        fadd    dword ptr [eax + ecx + 0x18]
        lea     eax, [eax + ecx + 0x18]
        fstp    dword ptr [eax]
        mov     dx, word ptr [ebp + 0xa]
        mov     eax, dword ptr [ebp + 0x44]
        fld     dword ptr [esp + 0x1c]
        shl     edx, 0x5
        fadd    dword ptr [edx + eax + 0x1c]
        lea     eax, [edx + eax + 0x1c]
        fstp    dword ptr [eax]
L_468292:
        mov     ecx, dword ptr [esp + 0x28]
        mov     edx, dword ptr [ebp + 0x1c]
        mov     ebx, dword ptr [esp + 0x38]
        mov     eax, ecx
        add     ecx, 0x8
        mov     dword ptr [esp + 0x28], ecx
        mov     ecx, dword ptr [g_007d997c]
        mov     esi, dword ptr [ecx]
        mov     ecx, dword ptr [esp + 0x24]
        add     eax, esi
        mov     esi, dword ptr [edx + ecx]
        mov     edx, dword ptr [edx + ecx + 0x4]
        inc     word ptr [ebp + 0xa]
        mov     dword ptr [eax], esi
        mov     esi, dword ptr [esp + 0x20]
        mov     dword ptr [eax + 0x4], edx
L_4682c8:
        mov     edx, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [esp + 0x14]
        inc     edi
        add     edx, 0x8
        add     ecx, 0xc
        cmp     edi, esi
        mov     dword ptr [esp + 0x24], edx
        mov     dword ptr [esp + 0x14], ecx
        jl      L_4681c4
        xor     ecx, ecx
L_4682e9:
        test    dword ptr [ebp + 0x68], 0x3fff
        jz      L_46832f
        mov     eax, dword ptr [ebp + 0x24]
        and     eax, 0x3fff
        jg      L_468300
        xor     eax, eax
        jmp     L_46830a
L_468300:
        mov     edx, dword ptr [g_007da848]
        mov     eax, dword ptr [edx + eax*4 + 0x24]
L_46830a:
        mov     dl, byte ptr [eax + 0x24]
        test    dl, dl
        jnz     L_468397
        mov     eax, dword ptr [eax + 0x28]
        cmp     eax, ecx
        jz      L_468397
        mov     ecx, dword ptr [eax + 0xc]
        mov     edx, dword ptr [eax + 0x1c]
        mov     byte ptr [esp + 0x40], 0x1
        mov     dword ptr [esp + 0x18], ecx
        mov     dword ptr [esp + 0x1c], edx
L_46832f:
        mov     esi, dword ptr [ebp + 0x44]
        xor     ecx, ecx
        mov     cx, word ptr [ebp + 0xa]
        shl     ecx, 0x5
        lea     edi, [esi + ecx]
        mov     eax, ecx
        shr     ecx, 0x2
        rep movsd
        mov     ecx, eax
        mov     al, byte ptr [esp + 0x40]
        and     ecx, 0x3
        test    al, al
        rep movsb
        jz      L_46839e
        xor     edx, edx
        mov     dx, word ptr [ebp + 0xa]
        and     edx, 0xffff
        jle     L_4683d4
        mov     ecx, dword ptr [g_007d997c]
        mov     eax, dword ptr [ecx]
        mov     esi, dword ptr [ebp + 0x44]
        mov     ecx, edx
        shl     ecx, 0x5
        lea     ecx, [ecx + esi + 0x1c]
        mov     esi, edx
L_468378:
        fld     dword ptr [esp + 0x18]
        add     eax, 0x8
        fadd    dword ptr [eax - 0x8]
        add     ecx, 0x20
        dec     esi
        fstp    dword ptr [ecx - 0x24]
        fld     dword ptr [esp + 0x1c]
        fadd    dword ptr [eax - 0x4]
        fstp    dword ptr [ecx - 0x20]
        jnz     L_468378
        jmp     L_4683d4
L_468397:
        mov     byte ptr [esp + 0x40], 0x0
        jmp     L_46832f
L_46839e:
        xor     edx, edx
        mov     dx, word ptr [ebp + 0xa]
        and     edx, 0xffff
        jle     L_4683d4
        mov     esi, dword ptr [ebp + 0x44]
        mov     eax, dword ptr [g_007d997c]
        mov     eax, dword ptr [eax]
        mov     ecx, edx
        shl     ecx, 0x5
        lea     ecx, [ecx + esi + 0x1c]
        mov     esi, edx
L_4683c1:
        mov     edi, dword ptr [eax]
        mov     dword ptr [ecx - 0x4], edi
        mov     edi, dword ptr [eax + 0x4]
        mov     dword ptr [ecx], edi
        add     eax, 0x8
        add     ecx, 0x20
        dec     esi
        jnz     L_4683c1
L_4683d4:
        mov     al, byte ptr [esp + 0x44]
        test    al, al
        jnz     L_4684f6
        mov     eax, dword ptr [ebx]
        mov     ecx, dword ptr [ebx + 0x28]
        add     edx, edx
        add     eax, edx
        mov     dword ptr [ebx], eax
        mov     eax, dword ptr [ebx + 0xc]
        lea     eax, [ecx + eax*2]
L_4683f1:
        mov     ecx, dword ptr [esp + 0x2c]
        xor     esi, esi
        xor     edi, edi
        cmp     ecx, esi
        mov     dword ptr [esp + 0x40], eax
        mov     dword ptr [ebp + 0x50], eax
        mov     word ptr [ebp + 0x54], si
        mov     dword ptr [esp + 0x28], edi
        mov     dword ptr [esp + 0x3c], esi
        jle     L_4684c7
        mov     edx, dword ptr [g_007da5e8]
        mov     ecx, dword ptr [edx]
        mov     edx, dword ptr [g_007da5f4]
        mov     dword ptr [esp + 0x24], ecx
        mov     ecx, dword ptr [ebp + 0x60]
L_468426:
        movzx   cx, byte ptr [ecx + edi]
        mov     ebx, dword ptr [esp + 0x24]
        cmp     byte ptr [ebx + edi], 0x0
        mov     dword ptr [esp + 0x10], ecx
        jz      L_4684a2
        mov     ebx, ecx
        and     ebx, 0xffff
        dec     ebx
        cmp     ebx, 0x1
        jle     L_4684a2
        mov     ecx, dword ptr [ebp + 0x48]
        mov     edi, dword ptr [esp + 0x3c]
        add     edi, ecx
        dec     ebx
        lea     eax, [eax + esi*2]
        lea     ecx, [edi + 0x1]
        mov     dword ptr [esp + 0x34], ebx
        xor     ebx, ebx
L_46845e:
        mov     bl, byte ptr [edi]
        add     eax, 0x2
        inc     esi
        add     eax, 0x2
        add     eax, 0x2
        mov     bx, word ptr [edx + ebx*2]
        mov     word ptr [eax - 0x6], bx
        xor     ebx, ebx
        mov     bl, byte ptr [ecx + 0x1]
        inc     esi
        mov     bx, word ptr [edx + ebx*2]
        mov     word ptr [eax - 0x4], bx
        xor     ebx, ebx
        mov     bl, byte ptr [ecx]
        inc     esi
        inc     ecx
        mov     bx, word ptr [edx + ebx*2]
        mov     word ptr [eax - 0x2], bx
        dec     dword ptr [esp + 0x34]
        /* __emit: MSVC6 miscomputes backward jnz rel8 (off-by-2: 0xCA vs ref 0xC8) */
        __emit 0x75
        __emit 0xC8
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x40]
        mov     edi, dword ptr [esp + 0x28]
L_4684a2:
        mov     ebx, dword ptr [esp + 0x3c]
        and     ecx, 0xffff
        add     ebx, ecx
        mov     ecx, dword ptr [esp + 0x2c]
        inc     edi
        cmp     edi, ecx
        mov     dword ptr [esp + 0x3c], ebx
        mov     dword ptr [esp + 0x28], edi
        /* __emit: MSVC6 miscomputes backward jl rel32 (off-by-3: 0x66 vs ref 0x63) */
        __emit 0x0F
        __emit 0x8C
        __emit 0x63
        __emit 0xFF
        __emit 0xFF
        __emit 0xFF
        mov     ebx, dword ptr [esp + 0x38]
L_4684c7:
        mov     al, byte ptr [esp + 0x44]
        test    al, al
        mov     word ptr [ebp + 0x54], si
        jnz     L_4684e1
        mov     eax, dword ptr [ebx + 0xc]
        and     esi, 0xffff
        add     eax, esi
        mov     dword ptr [ebx + 0xc], eax
L_4684e1:
        cmp     word ptr [ebp + 0xa], 0x0
        pop     esi
        pop     ebx
        setnz   dl
        pop     edi
        mov     byte ptr [ebp + 0x10], dl
        pop     ebp
        add     esp, 0x20
        ret     0x14
L_4684f6:
        mov     eax, dword ptr [ebx + 0x48]
        jmp     L_4683f1
L_4684fe:
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
    }
}
