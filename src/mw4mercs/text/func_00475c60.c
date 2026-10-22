/*
 * FUN_00475c60 (2259 B) — MLR render/geometry setup (RET, no args cleanup).
 * Heavy FPU vertex packing + buffer realloc loops. Calls many helpers.
 *
 * CFLAGS: /O1
 */

extern int g_007b9578;
extern int g_007da724;
extern int g_007b958c;
extern double g_0076e3e8;
extern int g_007da5f0;
extern int g_007d9998;
extern void *g_0076b2ec;
extern int g_007b2314[];
extern char g_007b2284[];
extern int g_007b220c;
extern float g_0076d064;
extern float g_0076d070;
extern float g_0076f29c;
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00487830(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_0075db86(void);
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_00472bc0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040ccd0(void);
extern void __cdecl FUN_00406c90(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0047f1b0(void);
extern void __cdecl FUN_0041c540(void);
extern void __cdecl FUN_0040c2e0(void);
extern void __cdecl FUN_00487ce0(void);

__declspec(naked) void FUN_00475c60(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x84
        mov     eax, dword ptr [g_007b9578]
        push    ebx
        push    esi
        push    edi
        push    eax
        call    FUN_006f4950
        push    0x20
        call    FUN_004084d0
        xor     edi, edi
        add     esp, 0x4
        cmp     eax, edi
        jz      L_5c9c
        mov     ecx, dword ptr [g_007da724]
        push    ecx
        push    0x14
        mov     ecx, eax
        call    FUN_00487830
        mov     dword ptr [ebp - 0x28], eax
        jmp     L_5c9f
L_5c9c:
        mov     dword ptr [ebp - 0x28], edi
L_5c9f:
        call    FUN_006f49a0
        mov     edx, dword ptr [g_007b958c]
        push    edx
        call    FUN_006f4950
        fld     qword ptr [g_0076e3e8]
        mov     esi, dword ptr [ebp + 0x8]
        fild    dword ptr [esi + 0x4]
        call    FUN_0075db86
        fmul    dword ptr [esi + 0x10]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        call    dword ptr [g_0076b2ec]
        add     esp, 0x8
        call    FUN_0075db4a
        mov     dword ptr [ebp - 0x24], eax
        lea     eax, [eax + eax*2]
        cmp     eax, 0x100
        jl      L_5cec
        mov     dword ptr [ebp - 0x24], 0x55
L_5cec:
        mov     dword ptr [ebp - 0x2c], edi
L_5cef:
        xor     edi, edi
        push    0x7c
        mov     dword ptr [g_007da5f0], edi
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, edi
        jz      L_5d18
        mov     ecx, dword ptr [g_007d9998]
        push    ecx
        mov     ecx, eax
        call    FUN_00472bc0
        mov     dword ptr [ebp - 0x1c], eax
        jmp     L_5d1b
L_5d18:
        mov     dword ptr [ebp - 0x1c], edi
L_5d1b:
        mov     edx, dword ptr [ebp - 0x1c]
        mov     ebx, dword ptr [edx + 0xc]
        mov     eax, dword ptr [ebx + 0xc]
        mov     esi, dword ptr [ebp - 0x24]
        cmp     esi, eax
        mov     dword ptr [ebp - 0x10], ebx
        jz      L_5d8a
        cmp     esi, edi
        jbe     L_5d76
        push    esi
        call    FUN_004084d0
        mov     edi, dword ptr [ebx + 0x8]
        add     esp, 0x4
        test    edi, edi
        mov     dword ptr [ebp - 0x14], eax
        jz      L_5d6e
        mov     eax, dword ptr [ebx + 0xc]
        cmp     esi, eax
        jnc     L_5d4e
        mov     eax, esi
L_5d4e:
        mov     ecx, eax
        dec     eax
        test    ecx, ecx
        jz      L_5d65
        mov     ecx, dword ptr [ebp - 0x14]
L_5d58:
        mov     dl, byte ptr [edi + eax]
        mov     byte ptr [eax + ecx], dl
        mov     edx, eax
        dec     eax
        test    edx, edx
        jnz     L_5d58
L_5d65:
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L_5d6e:
        mov     eax, dword ptr [ebp - 0x14]
        mov     dword ptr [ebx + 0x8], eax
        jmp     L_5d85
L_5d76:
        mov     ecx, dword ptr [ebx + 0x8]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx + 0x8], edi
L_5d85:
        mov     dword ptr [ebx + 0xc], esi
        xor     edi, edi
L_5d8a:
        cmp     esi, edi
        jle     L_5da6
        mov     edi, dword ptr [ebx + 0x8]
        mov     ecx, esi
        mov     edx, ecx
        shr     ecx, 0x2
        mov     eax, 0x3030303
        rep     stosd
        mov     ecx, edx
        and     ecx, 0x3
        rep     stosb
L_5da6:
        lea     eax, [ebx + 0x10]
        lea     edi, [esi + esi*2]
        mov     esi, dword ptr [eax + 0x4]
        cmp     edi, esi
        mov     dword ptr [ebp - 0x8], eax
        jz      L_5e56
        test    edi, edi
        jbe     L_5e3c
        lea     eax, [edi + edi*2]
        shl     eax, 0x2
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_5ddc
        lea     ecx, [edi - 1]
        mov     dword ptr [ebp - 0x18], ecx
        mov     dword ptr [ebp - 0x4], eax
        jmp     L_5de3
L_5ddc:
        mov     dword ptr [ebp - 0x4], 0x0
L_5de3:
        mov     edx, dword ptr [ebp - 0x8]
        cmp     dword ptr [edx], 0x0
        jz      L_5e32
        cmp     edi, esi
        jnc     L_5df1
        mov     esi, edi
L_5df1:
        mov     eax, esi
        dec     esi
        test    eax, eax
        jz      L_5e24
        mov     eax, dword ptr [ebp - 0x8]
        mov     ecx, dword ptr [ebp - 0x4]
        mov     eax, dword ptr [eax]
        lea     edx, [esi + esi*2]
        sub     eax, ecx
        lea     ebx, [ecx + edx*4]
        mov     dword ptr [ebp - 0xc], eax
        inc     esi
L_5e0c:
        mov     ecx, dword ptr [ebp - 0xc]
        add     ecx, ebx
        push    ecx
        mov     ecx, ebx
        call    FUN_0040ccd0
        dec     esi
        sub     ebx, 0xc
        test    esi, esi
        ja      L_5e0c
        mov     ebx, dword ptr [ebp - 0x10]
L_5e24:
        mov     edx, dword ptr [ebp - 0x8]
        mov     eax, dword ptr [edx]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_5e32:
        mov     eax, dword ptr [ebp - 0x4]
        mov     ecx, dword ptr [ebp - 0x8]
        mov     dword ptr [ecx], eax
        jmp     L_5e50
L_5e3c:
        mov     esi, dword ptr [ebp - 0x8]
        mov     edx, dword ptr [esi]
        push    edx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi], 0x0
L_5e50:
        mov     eax, dword ptr [ebp - 0x8]
        mov     dword ptr [eax + 0x4], edi
L_5e56:
        cmp     edi, dword ptr [ebx + 0x4]
        jz      L_5eb4
        test    edi, edi
        jbe     L_5ea0
        push    edi
        call    FUN_004084d0
        mov     esi, dword ptr [ebx]
        add     esp, 0x4
        test    esi, esi
        mov     ecx, eax
        mov     dword ptr [ebp - 0xc], ecx
        jz      L_5e9c
        mov     eax, dword ptr [ebx + 0x4]
        cmp     edi, eax
        jnc     L_5e7c
        mov     eax, edi
L_5e7c:
        mov     edx, eax
        dec     eax
        test    edx, edx
        jz      L_5e90
L_5e83:
        mov     dl, byte ptr [esi + eax]
        mov     byte ptr [eax + ecx], dl
        mov     edx, eax
        dec     eax
        test    edx, edx
        jnz     L_5e83
L_5e90:
        push    esi
        call    FUN_004084e0
        mov     ecx, dword ptr [ebp - 0xc]
        add     esp, 0x4
L_5e9c:
        mov     dword ptr [ebx], ecx
        jmp     L_5eb1
L_5ea0:
        mov     eax, dword ptr [ebx]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx], 0x0
L_5eb1:
        mov     dword ptr [ebx + 0x4], edi
L_5eb4:
        cmp     edi, dword ptr [ebx + 0x1c]
        jz      L_5f47
        test    edi, edi
        jbe     L_5f31
        lea     ecx, [edi*8 + 0x0]
        push    ecx
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_5ee7
        push    0x423b70
        push    edi
        push    0x8
        push    esi
        call    FUN_00406c90
        jmp     L_5ee9
L_5ee7:
        xor     esi, esi
L_5ee9:
        mov     ecx, dword ptr [ebx + 0x18]
        test    ecx, ecx
        mov     dword ptr [ebp - 0x14], esi
        jz      L_5f2c
        mov     edx, dword ptr [ebx + 0x1c]
        cmp     edi, edx
        jnc     L_5efc
        mov     edx, edi
L_5efc:
        mov     eax, edx
        dec     edx
        test    eax, eax
        jz      L_5f20
        lea     eax, [esi + edx*8]
        sub     ecx, esi
        inc     edx
L_5f09:
        mov     esi, dword ptr [ecx + eax]
        mov     dword ptr [eax], esi
        mov     esi, dword ptr [ecx + eax + 0x4]
        mov     dword ptr [eax + 0x4], esi
        dec     edx
        sub     eax, 0x8
        test    edx, edx
        ja      L_5f09
        mov     esi, dword ptr [ebp - 0x14]
L_5f20:
        mov     eax, dword ptr [ebx + 0x18]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_5f2c:
        mov     dword ptr [ebx + 0x18], esi
        jmp     L_5f44
L_5f31:
        mov     ecx, dword ptr [ebx + 0x18]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx + 0x18], 0x0
L_5f44:
        mov     dword ptr [ebx + 0x1c], edi
L_5f47:
        cmp     edi, dword ptr [ebx + 0x24]
        jz      L_5fb9
        test    edi, edi
        jbe     L_5fa3
        lea     edx, [edi*4 + 0x0]
        push    edx
        call    FUN_004084d0
        mov     edx, dword ptr [ebx + 0x20]
        add     esp, 0x4
        test    edx, edx
        mov     esi, eax
        mov     dword ptr [ebp - 0xc], esi
        jz      L_5f9e
        mov     ecx, dword ptr [ebx + 0x24]
        cmp     edi, ecx
        jnc     L_5f75
        mov     ecx, edi
L_5f75:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        jz      L_5f92
        lea     eax, [esi + ecx*4]
        sub     edx, esi
        inc     ecx
L_5f82:
        mov     esi, dword ptr [edx + eax]
        mov     dword ptr [eax], esi
        dec     ecx
        sub     eax, 0x4
        test    ecx, ecx
        ja      L_5f82
        mov     esi, dword ptr [ebp - 0xc]
L_5f92:
        mov     eax, dword ptr [ebx + 0x20]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_5f9e:
        mov     dword ptr [ebx + 0x20], esi
        jmp     L_5fb6
L_5fa3:
        mov     ecx, dword ptr [ebx + 0x20]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx + 0x20], 0x0
L_5fb6:
        mov     dword ptr [ebx + 0x24], edi
L_5fb9:
        mov     eax, dword ptr [ebx + 0x2c]
        cmp     edi, eax
        mov     dword ptr [ebp - 0xc], eax
        jz      L_606f
        test    edi, edi
        jbe     L_6059
        lea     edx, [edi + edi*2]
        shl     edx, 0x2
        push    edx
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_5ff7
        push    0x435c30
        push    edi
        push    0xc
        push    esi
        call    FUN_00406c90
        mov     dword ptr [ebp - 0x4], esi
        jmp     L_5ffe
L_5ff7:
        mov     dword ptr [ebp - 0x4], 0x0
L_5ffe:
        mov     eax, dword ptr [ebx + 0x28]
        test    eax, eax
        jz      L_6051
        mov     esi, dword ptr [ebp - 0xc]
        cmp     edi, esi
        jnc     L_600e
        mov     esi, edi
L_600e:
        mov     eax, esi
        dec     esi
        test    eax, eax
        jz      L_603f
        mov     eax, dword ptr [ebp - 0x10]
        mov     ecx, dword ptr [ebp - 0x4]
        mov     eax, dword ptr [eax + 0x28]
        lea     edx, [esi + esi*2]
        sub     eax, ecx
        lea     ebx, [ecx + edx*4]
        mov     dword ptr [ebp - 0xc], eax
        inc     esi
L_602a:
        mov     ecx, dword ptr [ebp - 0xc]
        add     ecx, ebx
        push    ecx
        mov     ecx, ebx
        call    FUN_0040c410
        dec     esi
        sub     ebx, 0xc
        test    esi, esi
        ja      L_602a
L_603f:
        mov     edx, dword ptr [ebp - 0x10]
        mov     eax, dword ptr [edx + 0x28]
        push    eax
        call    FUN_004084e0
        mov     ebx, dword ptr [ebp - 0x10]
        add     esp, 0x4
L_6051:
        mov     eax, dword ptr [ebp - 0x4]
        mov     dword ptr [ebx + 0x28], eax
        jmp     L_606c
L_6059:
        mov     ecx, dword ptr [ebx + 0x28]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx + 0x28], 0x0
L_606c:
        mov     dword ptr [ebx + 0x2c], edi
L_606f:
        mov     eax, dword ptr [ebp - 0x2c]
        lea     edx, [eax + eax*2]
        lea     ecx, [ebp - 0x80]
        lea     edx, [edx*4 + g_007b2314]
        mov     dword ptr [ebp - 0x14], 0x3
L_6086:
        mov     eax, dword ptr [edx]
        lea     eax, [eax + eax*2]
        shl     eax, 0x2
        mov     esi, dword ptr [eax + g_007b2284]
        mov     dword ptr [ecx - 0x4], esi
        mov     esi, dword ptr [eax + g_007b2284 + 0x4]
        mov     eax, dword ptr [eax + g_007b2284 + 0x8]
        mov     dword ptr [ecx], esi
        mov     dword ptr [ecx + 0x4], eax
        mov     eax, dword ptr [ebp - 0x14]
        add     edx, 0x4
        add     ecx, 0xc
        dec     eax
        mov     dword ptr [ebp - 0x14], eax
        jnz     L_6086
        mov     esi, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [esi + 0xc]
        mov     edx, dword ptr [ebp - 0x24]
        mov     eax, dword ptr [esi + 0x4]
        push    ecx
        push    edx
        push    eax
        lea     ecx, [ebp - 0x6c]
        push    ecx
        mov     ecx, dword ptr [ebp - 0x8]
        lea     edx, [ebp - 0x78]
        push    edx
        mov     edx, dword ptr [ecx]
        lea     eax, [ebp - 0x84]
        push    eax
        push    edx
        call    FUN_0047f1b0
        mov     edx, dword ptr [ebp - 0x24]
        mov     ecx, dword ptr [ebp - 0x1c]
        mov     eax, dword ptr [ecx]
        add     esp, 0x1c
        push    0x1
        push    edx
        mov     edx, dword ptr [ebx + 0x8]
        push    edx
        call    dword ptr [eax + 0xc]
        cmp     byte ptr [esi + 0x8], 0x1
        jnz     L_6223
        lea     eax, [edi + edi*2]
        shl     eax, 0x2
        mov     esi, 0x1
        push    eax
        mov     dword ptr [ebp - 0x4], esi
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_6125
        lea     ecx, [edi - 1]
        mov     dword ptr [ebp - 0x18], ecx
        mov     dword ptr [ebp - 0x20], eax
        jmp     L_612c
L_6125:
        mov     dword ptr [ebp - 0x20], 0x0
L_612c:
        mov     edx, dword ptr [ebp - 0x8]
        mov     ebx, dword ptr [edx]
        mov     ecx, dword ptr [ebp - 0x20]
        push    ebx
        call    FUN_0040c410
        cmp     edi, 0x1
        mov     eax, dword ptr [ebp - 0x10]
        mov     eax, dword ptr [eax]
        mov     dword ptr [ebp - 0x18], eax
        mov     byte ptr [eax], 0x0
        mov     dword ptr [ebp - 0xc], 0x1
        jle     L_61ca
        mov     ecx, dword ptr [ebp - 0x20]
        add     ebx, 0xc
        add     ecx, 0xc
        mov     dword ptr [ebp - 0x4], ebx
        mov     dword ptr [ebp - 0x30], ecx
L_6160:
        xor     ebx, ebx
        test    esi, esi
        jle     L_6194
        mov     edx, dword ptr [ebp - 0x20]
        mov     dword ptr [ebp - 0x14], edx
L_616c:
        mov     eax, dword ptr [g_007b220c]
        mov     ecx, dword ptr [ebp - 0x14]
        mov     edx, dword ptr [ebp - 0x4]
        push    eax
        push    ecx
        push    edx
        call    FUN_0041c540
        add     esp, 0xc
        test    al, al
        jnz     L_6194
        mov     ecx, dword ptr [ebp - 0x14]
        inc     ebx
        add     ecx, 0xc
        cmp     ebx, esi
        mov     dword ptr [ebp - 0x14], ecx
        jl      L_616c
L_6194:
        cmp     ebx, esi
        jnz     L_61ad
        mov     eax, dword ptr [ebp - 0x30]
        mov     ecx, eax
        add     eax, 0xc
        mov     dword ptr [ebp - 0x30], eax
        mov     eax, dword ptr [ebp - 0x4]
        push    eax
        inc     esi
        call    FUN_0040c410
L_61ad:
        mov     eax, dword ptr [ebp - 0xc]
        mov     ecx, dword ptr [ebp - 0x18]
        mov     edx, dword ptr [ebp - 0x4]
        mov     byte ptr [ecx + eax], bl
        inc     eax
        add     edx, 0xc
        cmp     eax, edi
        mov     dword ptr [ebp - 0xc], eax
        mov     dword ptr [ebp - 0x4], edx
        jl      L_6160
        mov     dword ptr [ebp - 0x4], esi
L_61ca:
        mov     ebx, dword ptr [ebp - 0x8]
        push    esi
        mov     ecx, ebx
        call    FUN_0040c2e0
        mov     eax, dword ptr [ebx + 0x4]
        test    eax, eax
        jbe     L_6204
        mov     ecx, dword ptr [ebp - 0x20]
        mov     edx, ebx
        mov     ebx, dword ptr [edx]
        sub     ecx, ebx
        mov     dword ptr [ebp - 0x18], ecx
        mov     dword ptr [ebp - 0xc], eax
L_61eb:
        mov     eax, dword ptr [ebp - 0x18]
        add     eax, ebx
        push    eax
        mov     ecx, ebx
        call    FUN_0040c410
        mov     eax, dword ptr [ebp - 0xc]
        add     ebx, 0xc
        dec     eax
        mov     dword ptr [ebp - 0xc], eax
        jnz     L_61eb
L_6204:
        mov     eax, dword ptr [ebp - 0x8]
        mov     ecx, dword ptr [eax]
        mov     ebx, dword ptr [ebp - 0x1c]
        mov     edx, dword ptr [ebx]
        push    esi
        push    ecx
        mov     ecx, ebx
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [ebp - 0x20]
        push    edx
        call    FUN_004084e0
        add     esp, 0x4
        jmp     L_624d
L_6223:
        mov     esi, edi
        xor     eax, eax
        test    edi, edi
        mov     dword ptr [ebp - 0x4], esi
        jle     L_623b
        mov     ecx, dword ptr [ebp - 0x10]
        mov     ecx, dword ptr [ecx]
L_6233:
        mov     byte ptr [ecx + eax], al
        inc     eax
        cmp     eax, edi
        jl      L_6233
L_623b:
        mov     eax, dword ptr [ebp - 0x8]
        mov     ecx, dword ptr [ebp - 0x1c]
        mov     eax, dword ptr [eax]
        mov     edx, dword ptr [ecx]
        push    edi
        push    eax
        call    dword ptr [edx + 0x24]
        mov     ebx, dword ptr [ebp - 0x1c]
L_624d:
        mov     eax, dword ptr [ebp - 0x10]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [ebx]
        push    edi
        push    ecx
        mov     ecx, ebx
        call    dword ptr [edx + 0x88]
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [edx + 0x94]
        mov     edi, dword ptr [ebp + 0xc]
        test    edi, edi
        jnz     L_6297
        test    esi, esi
        jle     L_631f
        mov     eax, dword ptr [ebp - 0x10]
        mov     eax, dword ptr [eax + 0x18]
        mov     dword ptr [ebp - 0x4c], edi
        mov     dword ptr [ebp - 0x48], edi
        mov     ecx, esi
        mov     edx, edi
L_6287:
        mov     dword ptr [eax], edx
        mov     dword ptr [eax + 0x4], edi
        add     eax, 0x8
        dec     ecx
        jnz     L_6287
        jmp     L_631f
L_6297:
        mov     edx, dword ptr [ebx]
        push    0x0
        push    edi
        mov     ecx, ebx
        call    dword ptr [edx + 0x14]
        test    dword ptr [edi], 0x3fff
        jbe     L_62f4
        test    esi, esi
        jle     L_631f
        mov     eax, dword ptr [ebp - 0x10]
        mov     edx, dword ptr [ebp - 0x8]
        mov     ecx, dword ptr [eax + 0x18]
        mov     eax, dword ptr [edx]
        mov     edx, esi
L_62ba:
        fld     dword ptr [eax]
        add     eax, 0xc
        fadd    dword ptr [g_0076d064]
        add     ecx, 0x8
        dec     edx
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [ebp - 0x3c]
        fld     dword ptr [eax - 0x8]
        mov     edi, dword ptr [ebp - 0x3c]
        fadd    dword ptr [g_0076d064]
        mov     dword ptr [ecx - 0x8], edi
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [ebp - 0x38]
        mov     edi, dword ptr [ebp - 0x38]
        mov     dword ptr [ecx - 0x4], edi
        jnz     L_62ba
        jmp     L_631f
L_62f4:
        test    esi, esi
        jle     L_631f
        mov     eax, dword ptr [ebp - 0x10]
        mov     eax, dword ptr [eax + 0x18]
        mov     dword ptr [ebp - 0x44], 0x0
L_6305:
        mov     edx, dword ptr [ebp - 0x44]
        mov     dword ptr [ebp - 0x40], 0x0
        mov     edi, dword ptr [ebp - 0x40]
        mov     ecx, esi
L_6314:
        mov     dword ptr [eax], edx
        mov     dword ptr [eax + 0x4], edi
        add     eax, 0x8
        dec     ecx
        jnz     L_6314
L_631f:
        mov     eax, dword ptr [ebp - 0x10]
        mov     ecx, dword ptr [eax + 0x18]
        mov     edx, dword ptr [ebx]
        push    esi
        push    ecx
        mov     ecx, ebx
        call    dword ptr [edx + 0x2c]
        xor     edi, edi
        test    esi, esi
        jle     L_64cd
        mov     edx, dword ptr [ebp - 0x8]
        mov     eax, dword ptr [edx]
        lea     ecx, [ebp - 0x60]
        mov     dword ptr [ebp - 0x18], ecx
        xor     edx, edx
L_6345:
        fld     dword ptr [eax + edx + 0x8]
        fadd    dword ptr [g_0076d064]
        fmul    dword ptr [g_0076d070]
        fld     dword ptr [eax + edx + 0x4]
        fadd    dword ptr [g_0076d064]
        fmul    dword ptr [g_0076d070]
        fld     dword ptr [eax + edx]
        mov     dword ptr [ebp - 0x54], 0x3f800000
        fadd    dword ptr [g_0076d064]
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [ebp - 0x60]
        fstp    dword ptr [ebp - 0x5c]
        fstp    dword ptr [ebp - 0x58]
        fld     dword ptr [g_0076f29c]
        mov     esi, dword ptr [ebp - 0x18]
        fld     dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi + 0xc]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x50]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x50]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     dword ptr [ebp - 0x34], ebx
        fld     dword ptr [esi]
        mov     ecx, dword ptr [esi]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x50]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x50]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x34]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x34], ecx
        fld     dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi + 0x4]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x50]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x50]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x34]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x34], ecx
        mov     ecx, dword ptr [esi + 0x8]
        fadd    dword ptr [esi + 0x8]
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x50]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x50]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x34]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x34], ecx
        mov     esi, dword ptr [ebp - 0x10]
        mov     eax, dword ptr [esi + 0x20]
        mov     ecx, dword ptr [ebp - 0x34]
        mov     dword ptr [eax + edi*4], ecx
        mov     eax, dword ptr [ebp - 0x8]
        mov     eax, dword ptr [eax]
        fld     dword ptr [eax + edx + 0x8]
        mov     ebx, dword ptr [esi + 0x28]
        fld     dword ptr [eax + edx + 0x4]
        mov     ecx, edx
        fld     dword ptr [eax + edx]
        add     ecx, ebx
        fld     st(0)
        inc     edi
        fmul    st(0), st(1)
        add     edx, 0xc
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fsqrt
        fstp    st(3)
        fstp    st(0)
        fstp    st(0)
        fdivr   dword ptr [g_0076d064]
        fld     st(0)
        fmul    dword ptr [eax + edx - 0xc]
        fstp    dword ptr [ecx]
        fld     st(0)
        fmul    dword ptr [eax + edx - 0x8]
        fstp    dword ptr [ecx + 0x4]
        fmul    dword ptr [eax + edx - 0x4]
        fstp    dword ptr [ecx + 0x8]
        mov     ecx, dword ptr [ebp - 0x4]
        cmp     edi, ecx
        jl      L_6345
L_64cd:
        mov     edi, dword ptr [ebp - 0x4]
        mov     ebx, dword ptr [ebp - 0x10]
        mov     esi, dword ptr [ebp - 0x1c]
        mov     eax, dword ptr [ebx + 0x20]
        mov     edx, dword ptr [esi]
        push    edi
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0xa4]
        mov     eax, dword ptr [ebx + 0x28]
        mov     edx, dword ptr [esi]
        push    edi
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0xac]
        mov     ecx, dword ptr [ebp - 0x28]
        push    esi
        call    FUN_00487ce0
        dec     word ptr [esi + 0x8]
        cmp     word ptr [esi + 0x8], 0x0
        jnz     L_6514
        test    esi, esi
        jz      L_6514
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx]
L_6514:
        mov     eax, dword ptr [ebp - 0x2c]
        inc     eax
        cmp     eax, 0x14
        mov     dword ptr [ebp - 0x2c], eax
        jl      L_5cef
        call    FUN_006f49a0
        mov     eax, dword ptr [ebp - 0x28]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
