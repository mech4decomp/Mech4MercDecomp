/*
 * FUN_0075CE10 (2252 B) — .text data-block function. Parses a version/
 * comparison string from a global buffer (0x008BD2CC) using a helper
 * (0x0076B2B0) that reads a length-prefixed field, dispatches on the
 * operator token (==, !=, <=, >=, <, >), parses dotted numeric fields via
 * FUN_0075D710/FUN_0075D760/FUN_0075C990, and compares against a stored
 * version (0x008BC980/0x008BC984) via jump tables at 0x0075D6DC/0x0075D6F4.
 * Returns a boolean or an error-string pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned long g_008bd2cc;
extern unsigned long g_0076b2b0;
extern unsigned long g_008bc9b0;
extern unsigned long g_008bc9ac;
extern unsigned long g_008bc990;
extern unsigned long g_008bc994;
extern unsigned long g_008bc980;
extern unsigned long g_008bc984;
extern unsigned long g_008bc998;
extern void *g_0076b204;

extern char g_007afad4;
extern char g_007afac8;
extern char g_007afabc;
extern char g_007afab0;
extern char g_007afaa8;
extern char g_007afaa0;
extern char g_007afa9c;
extern char g_007afa84;
extern char g_007afa74;
extern char g_007afa5c;
extern char g_007afa54;
extern char g_007afa4c;
extern char g_007afa44;
extern char g_007afa3c;
extern char g_007afa34;
extern char g_007afa2c;
extern char g_007afa20;
extern char g_007afa18;
extern char g_007afa04;
extern char g_007af9f4;
extern char g_0079d0cc;

extern unsigned long g_0075d6dc;
extern unsigned long g_0075d6f4;

extern void __cdecl FUN_0075c8c0(void);
extern void __cdecl FUN_0075cde0(void);
extern void __cdecl FUN_0075d710(void);
extern void __cdecl FUN_0075d760(void);
extern void __cdecl FUN_0075c990(void);

__declspec(naked) void FUN_0075CE10(void)
{
    __asm {
        sub     esp, 0xa4
        push    ebx
        push    ebp
        push    esi
        push    edi
        xor     edi, edi
        xor     esi, esi
        call    FUN_0075c8c0
        mov     eax, dword ptr [g_008bd2cc]
        mov     ebp, dword ptr [g_0076b2b0]
        push    3
        push    offset g_007afad4
        push    eax
        call    ebp
        add     esp, 0xc
        test    eax, eax
        jne     l_ce67
        mov     ecx, dword ptr [g_008bd2cc]
        xor     edx, edx
        mov     dl, byte ptr [ecx + 3]
        push    edx
        call    FUN_0075cde0
        test    al, al
        je      l_ce67
        mov     eax, dword ptr [g_008bd2cc]
        mov     edi, dword ptr [g_008bc9b0]
        add     eax, 3
        jmp     l_d02b
    l_ce67:
        mov     eax, dword ptr [g_008bd2cc]
        mov     ebx, 8
        push    ebx
        push    offset g_007afac8
        push    eax
        call    ebp
        add     esp, 0xc
        test    eax, eax
        jne     l_cea1
        mov     ecx, dword ptr [g_008bd2cc]
        xor     edx, edx
        mov     dl, byte ptr [ecx + 8]
        push    edx
        call    FUN_0075cde0
        test    al, al
        je      l_cea1
        mov     edi, dword ptr [g_008bc9ac]
        jmp     l_d024
    l_cea1:
        mov     eax, dword ptr [g_008bd2cc]
        push    ebx
        push    offset g_007afabc
        push    eax
        call    ebp
        add     esp, 0xc
        test    eax, eax
        jne     l_ced6
        mov     ecx, dword ptr [g_008bd2cc]
        xor     edx, edx
        mov     dl, byte ptr [ecx + 8]
        push    edx
        call    FUN_0075cde0
        test    al, al
        je      l_ced6
        mov     edi, dword ptr [g_008bc990]
        jmp     l_d024
    l_ced6:
        mov     eax, dword ptr [g_008bd2cc]
        push    ebx
        push    offset g_007afab0
        push    eax
        call    ebp
        add     esp, 0xc
        test    eax, eax
        jne     l_cf0b
        mov     ecx, dword ptr [g_008bd2cc]
        xor     edx, edx
        mov     dl, byte ptr [ecx + 8]
        push    edx
        call    FUN_0075cde0
        test    al, al
        je      l_cf0b
        mov     edi, dword ptr [g_008bc994]
        jmp     l_d024
    l_cf0b:
        mov     eax, dword ptr [g_008bd2cc]
        push    4
        push    offset g_007afaa8
        push    eax
        call    ebp
        add     esp, 0xc
        test    eax, eax
        jne     l_cf48
        mov     ecx, dword ptr [g_008bd2cc]
        xor     edx, edx
        mov     dl, byte ptr [ecx + 4]
        push    edx
        call    FUN_0075cde0
        test    al, al
        je      l_cf48
        mov     eax, dword ptr [g_008bd2cc]
        mov     esi, 1
        add     eax, 4
        jmp     l_d02b
    l_cf48:
        mov     eax, dword ptr [g_008bd2cc]
        push    6
        push    offset g_007afaa0
        push    eax
        call    ebp
        add     esp, 0xc
        test    eax, eax
        jne     l_cf85
        mov     ecx, dword ptr [g_008bd2cc]
        xor     edx, edx
        mov     dl, byte ptr [ecx + 6]
        push    edx
        call    FUN_0075cde0
        test    al, al
        je      l_cf85
        mov     eax, dword ptr [g_008bd2cc]
        mov     esi, 2
        add     eax, 6
        jmp     l_d02b
    l_cf85:
        mov     eax, dword ptr [g_008bd2cc]
        mov     ebx, 2
        push    ebx
        push    offset g_007afa9c
        push    eax
        call    ebp
        add     esp, 0xc
        test    eax, eax
        jne     l_d6cb
        mov     ecx, dword ptr [g_008bd2cc]
        xor     edx, edx
        mov     dl, byte ptr [ecx + 2]
        push    edx
        call    FUN_0075cde0
        test    al, al
        je      l_d6cb
        lea     eax, [esp + 0x20]
        push    eax
        mov     dword ptr [esp + 0x24], 0x94
        call    dword ptr [g_0076b204]
        cmp     dword ptr [esp + 0x30], ebx
        jne     l_cff3
        mov     eax, dword ptr [esp + 0x24]
        mov     edi, 5
        cmp     eax, edi
        jne     l_d01f
        cmp     dword ptr [esp + 0x2c], 0xa28
        jae     l_d01f
        mov     edi, 4
        jmp     l_d01f
    l_cff3:
        mov     eax, dword ptr [esp + 0x2c]
        and     eax, 0xffff
        cmp     eax, 0x8ae
        mov     edi, 3
        ja      l_d00a
        mov     edi, ebx
    l_d00a:
        cmp     eax, 0x7ce
        ja      l_d016
        mov     edi, 1
    l_d016:
        cmp     eax, 0x3b6
        ja      l_d01f
        xor     edi, edi
    l_d01f:
        mov     esi, 3
    l_d024:
        mov     eax, dword ptr [g_008bd2cc]
        add     eax, ebx
    l_d02b:
        mov     dword ptr [g_008bd2cc], eax
        call    FUN_0075c8c0
        mov     eax, dword ptr [g_008bd2cc]
        mov     cx, word ptr [eax]
        cmp     cx, 0x3d3d
        jne     l_d053
        add     eax, 2
        mov     dword ptr [g_008bd2cc], eax
        xor     ebx, ebx
        jmp     l_d114
    l_d053:
        cmp     cx, 0x3d21
        jne     l_d06c
        add     eax, 2
        mov     dword ptr [g_008bd2cc], eax
        mov     ebx, 1
        jmp     l_d114
    l_d06c:
        cmp     cx, 0x3e3c
        jne     l_d085
        add     eax, 2
        mov     dword ptr [g_008bd2cc], eax
        mov     ebx, 1
        jmp     l_d114
    l_d085:
        cmp     cx, 0x3e3d
        jne     l_d09b
        add     eax, 2
        mov     dword ptr [g_008bd2cc], eax
        mov     ebx, 4
        jmp     l_d114
    l_d09b:
        cmp     cx, 0x3c3d
        jne     l_d0b1
        add     eax, 2
        mov     dword ptr [g_008bd2cc], eax
        mov     ebx, 5
        jmp     l_d114
    l_d0b1:
        cmp     cx, 0x3d3c
        jne     l_d0c7
        add     eax, 2
        mov     dword ptr [g_008bd2cc], eax
        mov     ebx, 5
        jmp     l_d114
    l_d0c7:
        cmp     cx, 0x3d3e
        jne     l_d0dd
        add     eax, 2
        mov     dword ptr [g_008bd2cc], eax
        mov     ebx, 4
        jmp     l_d114
    l_d0dd:
        mov     cl, byte ptr [eax]
        cmp     cl, 0x3d
        jne     l_d0ee
        inc     eax
        mov     dword ptr [g_008bd2cc], eax
        xor     ebx, ebx
        jmp     l_d114
    l_d0ee:
        cmp     cl, 0x3e
        jne     l_d100
        inc     eax
        mov     dword ptr [g_008bd2cc], eax
        mov     ebx, 2
        jmp     l_d114
    l_d100:
        cmp     cl, 0x3c
        jne     l_d6bb
        inc     eax
        mov     dword ptr [g_008bd2cc], eax
        mov     ebx, 3
    l_d114:
        call    FUN_0075c8c0
        cmp     esi, 1
        jne     l_d30a
        cmp     ebx, esi
        jbe     l_d136
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, offset g_007afa84
        pop     ebx
        add     esp, 0xa4
        ret
    l_d136:
        call    FUN_0075d710
        mov     esi, eax
        cmp     esi, -1
        jne     l_d152
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, offset g_007afa74
        pop     ebx
        add     esp, 0xa4
        ret
    l_d152:
        call    FUN_0075d710
        cmp     eax, -1
        jne     l_d16c
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, offset g_007afa74
        pop     ebx
        add     esp, 0xa4
        ret
    l_d16c:
        shl     esi, 0x10
        add     esi, eax
        mov     eax, dword ptr [g_008bd2cc]
        mov     cl, byte ptr [eax]
        inc     eax
        cmp     cl, 0x2d
        mov     dword ptr [esp + 0x10], esi
        mov     dword ptr [g_008bd2cc], eax
        je      l_d197
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, offset g_007afa74
        pop     ebx
        add     esp, 0xa4
        ret
    l_d197:
        call    FUN_0075d710
        mov     esi, eax
        cmp     esi, -1
        jne     l_d1b3
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, offset g_007afa74
        pop     ebx
        add     esp, 0xa4
        ret
    l_d1b3:
        mov     eax, dword ptr [g_008bd2cc]
        mov     dl, byte ptr [eax]
        inc     eax
        cmp     dl, 0x2d
        mov     dword ptr [g_008bd2cc], eax
        je      l_d1d5
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, offset g_007afa74
        pop     ebx
        add     esp, 0xa4
        ret
    l_d1d5:
        call    FUN_0075d710
        cmp     eax, -1
        jne     l_d1ef
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, offset g_007afa74
        pop     ebx
        add     esp, 0xa4
        ret
    l_d1ef:
        shl     eax, 0x10
        add     eax, esi
        mov     dword ptr [esp + 0x14], eax
        mov     eax, dword ptr [g_008bd2cc]
        mov     cl, byte ptr [eax]
        inc     eax
        cmp     cl, 0x2d
        mov     dword ptr [g_008bd2cc], eax
        je      l_d21a
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, offset g_007afa74
        pop     ebx
        add     esp, 0xa4
        ret
    l_d21a:
        call    FUN_0075d760
        mov     esi, eax
        cmp     esi, -1
        jne     l_d236
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, offset g_007afa74
        pop     ebx
        add     esp, 0xa4
        ret
    l_d236:
        mov     eax, dword ptr [g_008bd2cc]
        mov     dl, byte ptr [eax]
        inc     eax
        cmp     dl, 0x2d
        mov     dword ptr [g_008bd2cc], eax
        je      l_d258
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, offset g_007afa74
        pop     ebx
        add     esp, 0xa4
        ret
    l_d258:
        call    FUN_0075d760
        cmp     eax, -1
        jne     l_d272
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, offset g_007afa74
        pop     ebx
        add     esp, 0xa4
        ret
    l_d272:
        shl     eax, 0x10
        add     eax, esi
        mov     dword ptr [esp + 0x18], eax
        call    FUN_0075d760
        mov     esi, eax
        cmp     esi, -1
        jne     l_d297
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, offset g_007afa74
        pop     ebx
        add     esp, 0xa4
        ret
    l_d297:
        call    FUN_0075d760
        cmp     eax, -1
        jne     l_d2b1
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, offset g_007afa74
        pop     ebx
        add     esp, 0xa4
        ret
    l_d2b1:
        shl     eax, 0x10
        add     eax, esi
        test    ebx, ebx
        mov     dword ptr [esp + 0x1c], eax
        mov     ecx, 0x10
        mov     edi, offset g_008bc998
        lea     esi, [esp + 0x10]
        jne     l_d2eb
        xor     eax, eax
        repe    cmpsb
        je      l_d2d7
        sbb     eax, eax
        sbb     eax, -1
    l_d2d7:
        xor     ecx, ecx
        test    eax, eax
        sete    cl
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     eax, ecx
        add     esp, 0xa4
        ret
    l_d2eb:
        xor     eax, eax
        repe    cmpsb
        je      l_d2f6
        sbb     eax, eax
        sbb     eax, -1
    l_d2f6:
        xor     edx, edx
        test    eax, eax
        setne   dl
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     eax, edx
        add     esp, 0xa4
        ret
    l_d30a:
        cmp     esi, 2
        jne     l_d4b3
        call    FUN_0075c990
        mov     esi, eax
        cmp     esi, -1
        je      l_d4a3
        mov     eax, dword ptr [g_008bd2cc]
        mov     cl, byte ptr [eax]
        inc     eax
        cmp     cl, 0x2e
        mov     dword ptr [g_008bd2cc], eax
        jne     l_d4a3
        call    FUN_0075c990
        mov     edi, eax
        mov     eax, dword ptr [g_008bd2cc]
        mov     dl, byte ptr [eax]
        shl     esi, 0x10
        add     edi, esi
        inc     eax
        cmp     dl, 0x2e
        mov     dword ptr [g_008bd2cc], eax
        jne     l_d4a3
        call    FUN_0075c990
        mov     esi, eax
        cmp     esi, -1
        je      l_d4a3
        mov     eax, dword ptr [g_008bd2cc]
        mov     cl, byte ptr [eax]
        inc     eax
        cmp     cl, 0x2e
        mov     dword ptr [g_008bd2cc], eax
        jne     l_d4a3
        call    FUN_0075c990
        shl     esi, 0x10
        add     eax, esi
        cmp     ebx, 5
        ja      l_d6ab
        jmp     dword ptr [ebx*4 + g_0075d6dc]
    l_d39b:
        mov     edx, dword ptr [g_008bc980]
        cmp     edx, eax
        jne     l_d496
        mov     eax, dword ptr [g_008bc984]
        cmp     eax, edi
        jne     l_d496
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 1
        pop     ebx
        add     esp, 0xa4
        ret
    l_d3c6:
        mov     ecx, dword ptr [g_008bc980]
        cmp     ecx, eax
        jne     l_d486
        mov     edx, dword ptr [g_008bc984]
        cmp     edx, edi
        je      l_d496
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 1
        pop     ebx
        add     esp, 0xa4
        ret
    l_d3f2:
        mov     ecx, dword ptr [g_008bc984]
        cmp     ecx, edi
        jl      l_d496
        jg      l_d486
        mov     edx, dword ptr [g_008bc980]
        cmp     edx, eax
        jbe     l_d496
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 1
        pop     ebx
        add     esp, 0xa4
        ret
    l_d424:
        mov     ecx, dword ptr [g_008bc984]
        cmp     ecx, edi
        jg      l_d496
        jl      l_d486
        mov     edx, dword ptr [g_008bc980]
        cmp     edx, eax
        jae     l_d496
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 1
        pop     ebx
        add     esp, 0xa4
        ret
    l_d44a:
        mov     ecx, dword ptr [g_008bc984]
        cmp     ecx, edi
        jl      l_d496
        jg      l_d460
        mov     edx, dword ptr [g_008bc980]
        cmp     edx, eax
        jb      l_d496
    l_d460:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 1
        pop     ebx
        add     esp, 0xa4
        ret
    l_d470:
        mov     ecx, dword ptr [g_008bc984]
        cmp     ecx, edi
        jg      l_d496
        jl      l_d486
        mov     edx, dword ptr [g_008bc980]
        cmp     edx, eax
        ja      l_d496
    l_d486:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 1
        pop     ebx
        add     esp, 0xa4
        ret
    l_d496:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0xa4
        ret
    l_d4a3:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, offset g_007afa5c
        pop     ebx
        add     esp, 0xa4
        ret
    l_d4b3:
        cmp     esi, 3
        jne     l_d637
        mov     eax, dword ptr [g_008bd2cc]
        mov     esi, 5
        push    esi
        push    offset g_007afa54
        push    eax
        call    ebp
        add     esp, 0xc
        test    eax, eax
        jne     l_d51f
        mov     ecx, dword ptr [g_008bd2cc]
        xor     edx, edx
        mov     dl, byte ptr [ecx + 5]
        push    edx
        call    FUN_0075cde0
        test    al, al
        je      l_d51f
        xor     eax, eax
    l_d4ed:
        mov     ecx, dword ptr [g_008bd2cc]
        add     ecx, esi
    l_d4f5:
        mov     dword ptr [g_008bd2cc], ecx
    l_d4fb:
        cmp     ebx, 5
        ja      l_d6ab
        jmp     dword ptr [ebx*4 + g_0075d6f4]
    l_d50b:
        xor     ecx, ecx
        cmp     edi, eax
        sete    cl
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     eax, ecx
        add     esp, 0xa4
        ret
    l_d51f:
        mov     eax, dword ptr [g_008bd2cc]
        push    esi
        push    offset g_007afa4c
        push    eax
        call    ebp
        add     esp, 0xc
        test    eax, eax
        jne     l_d550
        mov     ecx, dword ptr [g_008bd2cc]
        xor     edx, edx
        mov     dl, byte ptr [ecx + 5]
        push    edx
        call    FUN_0075cde0
        test    al, al
        je      l_d550
        mov     eax, 1
        jmp     l_d4ed
    l_d550:
        mov     eax, dword ptr [g_008bd2cc]
        push    7
        push    offset g_007afa44
        push    eax
        call    ebp
        add     esp, 0xc
        test    eax, eax
        jne     l_d58e
        mov     ecx, dword ptr [g_008bd2cc]
        xor     edx, edx
        mov     dl, byte ptr [ecx + 7]
        push    edx
        call    FUN_0075cde0
        test    al, al
        je      l_d58e
        mov     ecx, dword ptr [g_008bd2cc]
        mov     eax, 2
        add     ecx, 7
        jmp     l_d4f5
    l_d58e:
        mov     eax, dword ptr [g_008bd2cc]
        push    esi
        push    offset g_007afa3c
        push    eax
        call    ebp
        add     esp, 0xc
        test    eax, eax
        jne     l_d5c2
        mov     ecx, dword ptr [g_008bd2cc]
        xor     edx, edx
        mov     dl, byte ptr [ecx + 5]
        push    edx
        call    FUN_0075cde0
        test    al, al
        je      l_d5c2
        mov     eax, 3
        jmp     l_d4ed
    l_d5c2:
        mov     eax, dword ptr [g_008bd2cc]
        push    esi
        push    offset g_007afa34
        push    eax
        call    ebp
        add     esp, 0xc
        test    eax, eax
        jne     l_d5f6
        mov     ecx, dword ptr [g_008bd2cc]
        xor     edx, edx
        mov     dl, byte ptr [ecx + 5]
        push    edx
        call    FUN_0075cde0
        test    al, al
        je      l_d5f6
        mov     eax, 4
        jmp     l_d4ed
    l_d5f6:
        mov     eax, dword ptr [g_008bd2cc]
        push    esi
        push    offset g_007afa2c
        push    eax
        call    ebp
        add     esp, 0xc
        test    eax, eax
        jne     l_d627
        mov     ecx, dword ptr [g_008bd2cc]
        xor     edx, edx
        mov     dl, byte ptr [ecx + 5]
        push    edx
        call    FUN_0075cde0
        test    al, al
        je      l_d627
        mov     eax, esi
        jmp     l_d4ed
    l_d627:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, offset g_007afa20
        pop     ebx
        add     esp, 0xa4
        ret
    l_d637:
        call    FUN_0075c990
        cmp     eax, -1
        jne     l_d4fb
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, offset g_0079d0cc
        pop     ebx
        add     esp, 0xa4
        ret
    l_d655:
        xor     edx, edx
        cmp     edi, eax
        setne   dl
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     eax, edx
        add     esp, 0xa4
        ret
    l_d669:
        cmp     eax, edi
        pop     edi
        pop     esi
        sbb     eax, eax
        pop     ebp
        neg     eax
        pop     ebx
        add     esp, 0xa4
        ret
    l_d67a:
        cmp     edi, eax
        pop     edi
        pop     esi
        sbb     eax, eax
        pop     ebp
        neg     eax
        pop     ebx
        add     esp, 0xa4
        ret
    l_d68b:
        cmp     edi, eax
        pop     edi
        pop     esi
        sbb     eax, eax
        pop     ebp
        inc     eax
        pop     ebx
        add     esp, 0xa4
        ret
    l_d69b:
        cmp     eax, edi
        pop     edi
        pop     esi
        sbb     eax, eax
        pop     ebp
        inc     eax
        pop     ebx
        add     esp, 0xa4
        ret
    l_d6ab:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, offset g_007afa18
        pop     ebx
        add     esp, 0xa4
        ret
    l_d6bb:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, offset g_007afa04
        pop     ebx
        add     esp, 0xa4
        ret
    l_d6cb:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, offset g_007af9f4
        pop     ebx
        add     esp, 0xa4
        ret
    }
}
