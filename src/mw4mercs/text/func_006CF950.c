/*
 * FUN_006CF950 (1952 B) — util: object/table constructor with multiple
 * sub-buffer allocations (0x7c/0xa4/0xac/0xb4/0x84/0x8c/0x94 families).
 * __thiscall (this=ECX), RET 0x14.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006cf340(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_006e04d0(void);
extern void __cdecl FUN_0041de80(void);
extern void __cdecl FUN_006e0620(void);
extern void __cdecl FUN_006d4770(void);
extern void __cdecl FUN_0041e010(void);
extern void __cdecl FUN_006d2980(void);
extern void __cdecl FUN_006d2760(void);
extern void __cdecl FUN_006d2720(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00406c90(void);
extern void __cdecl FUN_00429930(void);
extern void __cdecl FUN_006d28f0(void);
extern void __cdecl FUN_006d27d0(void);
extern void __cdecl FUN_006d2860(void);
extern void __cdecl FUN_0048f9e0(void);
extern void __cdecl FUN_0041dec0(void);

extern unsigned int g_007da848;
extern void* g_0076b420;

__declspec(naked) void FUN_006CF950(void)
{
    __asm {
        sub     esp, 0x150
        mov     eax, dword ptr [esp + 0x154]
        mov     edx, dword ptr [esp + 0x15c]
        push    ebx
        mov     ebx, ecx
        mov     ecx, dword ptr [esp + 0x15c]
        push    ebp
        mov     dword ptr [ebx], eax
        mov     eax, dword ptr [esp + 0x168]
        push    esi
        mov     dword ptr [ebx + 4], ecx
        mov     dword ptr [ebx + 0xc], eax
        push    edi
        mov     dword ptr [esp + 0x2c], ebx
        mov     dword ptr [ebx + 8], edx
        lea     eax, [ebx + 0x2c]
        mov     ecx, 5
        xor     ebp, ebp
L_6cf991:
        mov     dword ptr [eax], ebp
        mov     dword ptr [eax + 4], ebp
        add     eax, 8
        dec     ecx
        jne     L_6cf991
        lea     eax, [ebx + 0x54]
        mov     ecx, 5
L_6cf9a4:
        mov     dword ptr [eax], ebp
        mov     dword ptr [eax + 4], ebp
        add     eax, 8
        dec     ecx
        jne     L_6cf9a4
        mov     dword ptr [ebx + 0x7c], ebp
        mov     dword ptr [ebx + 0x80], ebp
        lea     eax, [ebx + 0x84]
        mov     ecx, 4
L_6cf9c3:
        mov     dword ptr [eax], ebp
        mov     dword ptr [eax + 4], ebp
        add     eax, 8
        dec     ecx
        jne     L_6cf9c3
        lea     eax, [ebx + 0xa4]
        mov     ecx, 3
L_6cf9d9:
        mov     dword ptr [eax], ebp
        mov     dword ptr [eax + 4], ebp
        add     eax, 8
        dec     ecx
        jne     L_6cf9d9
        lea     ecx, [ebx + 0xc4]
        call    FUN_006cf340
        push    0x118
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, ebp
        je      L_6cfa0b
        mov     ecx, eax
        call    FUN_006e04d0
        mov     esi, eax
        jmp     L_6cfa0d
L_6cfa0b:
        xor     esi, esi
L_6cfa0d:
        mov     ecx, dword ptr [esp + 0x174]
        push    ebp
        push    ecx
        lea     ecx, [esp + 0x38]
        mov     dword ptr [ebx + 0xc0], esi
        call    FUN_0041de80
        lea     edx, [esp + 0x30]
        push    edx
        mov     ecx, esi
        call    FUN_006e0620
        push    0x130
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, ebp
        je      L_6cfa51
        push    esi
        lea     ecx, [esp + 0x34]
        push    ecx
        mov     ecx, eax
        call    FUN_006d4770
        jmp     L_6cfa53
L_6cfa51:
        xor     eax, eax
L_6cfa53:
        lea     ecx, [esp + 0x30]
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [ebx + 0xbc], eax
        call    FUN_0041e010
        mov     esi, dword ptr [ebx + 4]
        imul    esi, dword ptr [ebx]
        mov     edi, dword ptr [ebx + 0x80]
        cmp     esi, edi
        mov     dword ptr [esp + 0x10], esi
        je      L_6cfb24
        cmp     esi, ebp
        jbe     L_6cfb0d
        lea     edx, [esi*8 + 4]
        push    edx
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, ebp
        je      L_6cfaba
        lea     ecx, [esi - 1]
        cmp     ecx, ebp
        lea     edx, [eax + 4]
        mov     dword ptr [eax], esi
        mov     eax, edx
        jl      L_6cfab4
        inc     ecx
L_6cfaa9:
        mov     dword ptr [eax], ebp
        mov     dword ptr [eax + 4], ebp
        add     eax, 8
        dec     ecx
        jne     L_6cfaa9
L_6cfab4:
        mov     dword ptr [esp + 0x14], edx
        jmp     L_6cfabe
L_6cfaba:
        mov     dword ptr [esp + 0x14], ebp
L_6cfabe:
        cmp     dword ptr [ebx + 0x7c], ebp
        je      L_6cfb04
        cmp     esi, edi
        jae     L_6cfac9
        mov     edi, esi
L_6cfac9:
        mov     eax, edi
        dec     edi
        test    eax, eax
        je      L_6cfaf6
        mov     eax, dword ptr [esp + 0x14]
        mov     ebp, dword ptr [ebx + 0x7c]
        lea     esi, [eax + edi*8]
        sub     ebp, eax
        inc     edi
L_6cfadd:
        lea     ecx, [esi + ebp]
        push    ecx
        mov     ecx, esi
        call    FUN_006d2980
        dec     edi
        sub     esi, 8
        test    edi, edi
        ja      L_6cfadd
        mov     esi, dword ptr [esp + 0x10]
        xor     ebp, ebp
L_6cfaf6:
        mov     ecx, dword ptr [ebx + 0x7c]
        cmp     ecx, ebp
        je      L_6cfb04
        push    3
        call    FUN_006d2760
L_6cfb04:
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [ebx + 0x7c], edx
        jmp     L_6cfb1e
L_6cfb0d:
        mov     ecx, dword ptr [ebx + 0x7c]
        cmp     ecx, ebp
        je      L_6cfb1b
        push    3
        call    FUN_006d2760
L_6cfb1b:
        mov     dword ptr [ebx + 0x7c], ebp
L_6cfb1e:
        mov     dword ptr [ebx + 0x80], esi
L_6cfb24:
        mov     ebp, dword ptr [ebx + 4]
        imul    ebp, dword ptr [ebx]
        cmp     ebp, dword ptr [ebx + 0xa8]
        je      L_6cfc0a
        test    ebp, ebp
        jbe     L_6cfbeb
        lea     eax, [ebp + ebp*2]
        lea     ecx, [ebp + eax*4]
        shl     ecx, 2
        push    ecx
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 4
        test    edi, edi
        je      L_6cfb7f
        lea     eax, [ebp - 1]
        test    eax, eax
        mov     esi, edi
        jl      L_6cfb7b
        inc     eax
        mov     dword ptr [esp + 0x10], eax
L_6cfb66:
        mov     ecx, esi
        call    FUN_006d2720
        mov     eax, dword ptr [esp + 0x10]
        add     esi, 0x34
        dec     eax
        mov     dword ptr [esp + 0x10], eax
        jne     L_6cfb66
L_6cfb7b:
        mov     esi, edi
        jmp     L_6cfb81
L_6cfb7f:
        xor     esi, esi
L_6cfb81:
        mov     edx, dword ptr [ebx + 0xa4]
        test    edx, edx
        mov     dword ptr [esp + 0x10], esi
        mov     dword ptr [esp + 0x1c], edx
        je      L_6cfbe3
        mov     eax, dword ptr [ebx + 0xa8]
        cmp     ebp, eax
        mov     ecx, ebp
        jb      L_6cfba1
        mov     ecx, eax
L_6cfba1:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        je      L_6cfbda
        lea     eax, [ecx + ecx*2]
        sub     edx, esi
        lea     eax, [ecx + eax*4]
        mov     dword ptr [esp + 0x14], edx
        lea     eax, [esi + eax*4]
        lea     edx, [ecx + 1]
L_6cfbba:
        mov     ecx, dword ptr [esp + 0x14]
        lea     esi, [ecx + eax]
        mov     edi, eax
        dec     edx
        mov     ecx, 0xd
        sub     eax, 0x34
        test    edx, edx
        rep     movsd
        ja      L_6cfbba
        mov     edx, dword ptr [esp + 0x1c]
        mov     esi, dword ptr [esp + 0x10]
L_6cfbda:
        push    edx
        call    FUN_004084e0
        add     esp, 4
L_6cfbe3:
        mov     dword ptr [ebx + 0xa4], esi
        jmp     L_6cfc04
L_6cfbeb:
        mov     edx, dword ptr [ebx + 0xa4]
        push    edx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [ebx + 0xa4], 0
L_6cfc04:
        mov     dword ptr [ebx + 0xa8], ebp
L_6cfc0a:
        mov     esi, dword ptr [ebx + 4]
        imul    esi, dword ptr [ebx]
        cmp     esi, dword ptr [ebx + 0xb0]
        mov     dword ptr [esp + 0x1c], esi
        je      L_6cfcea
        test    esi, esi
        jbe     L_6cfccb
        lea     eax, [esi + esi*2]
        lea     ecx, [esi + eax*4]
        shl     ecx, 2
        push    ecx
        call    FUN_004084d0
        mov     ebp, eax
        add     esp, 4
        test    ebp, ebp
        je      L_6cfc67
        lea     eax, [esi - 1]
        test    eax, eax
        mov     edi, ebp
        jl      L_6cfc63
        inc     eax
        mov     dword ptr [esp + 0x10], eax
L_6cfc4e:
        mov     ecx, edi
        call    FUN_006d2720
        mov     eax, dword ptr [esp + 0x10]
        add     edi, 0x34
        dec     eax
        mov     dword ptr [esp + 0x10], eax
        jne     L_6cfc4e
L_6cfc63:
        mov     edi, ebp
        jmp     L_6cfc69
L_6cfc67:
        xor     edi, edi
L_6cfc69:
        mov     ebp, dword ptr [ebx + 0xac]
        test    ebp, ebp
        mov     dword ptr [esp + 0x10], edi
        je      L_6cfcc3
        mov     ecx, dword ptr [ebx + 0xb0]
        cmp     esi, ecx
        jae     L_6cfc83
        mov     ecx, esi
L_6cfc83:
        mov     edx, ecx
        dec     ecx
        test    edx, edx
        je      L_6cfcb4
        lea     eax, [ecx + ecx*2]
        lea     edx, [ecx + eax*4]
        lea     eax, [edi + edx*4]
        sub     ebp, edi
        lea     edx, [ecx + 1]
L_6cfc98:
        lea     esi, [eax + ebp]
        mov     edi, eax
        dec     edx
        mov     ecx, 0xd
        sub     eax, 0x34
        test    edx, edx
        rep     movsd
        ja      L_6cfc98
        mov     edi, dword ptr [esp + 0x10]
        mov     esi, dword ptr [esp + 0x1c]
L_6cfcb4:
        mov     eax, dword ptr [ebx + 0xac]
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_6cfcc3:
        mov     dword ptr [ebx + 0xac], edi
        jmp     L_6cfce4
L_6cfccb:
        mov     eax, dword ptr [ebx + 0xac]
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [ebx + 0xac], 0
L_6cfce4:
        mov     dword ptr [ebx + 0xb0], esi
L_6cfcea:
        mov     ecx, dword ptr [esp + 0x18]
        cmp     dword ptr [ecx], 0x100
        jle     L_6cfdc3
        mov     esi, dword ptr [ebx + 4]
        imul    esi, dword ptr [ebx]
        mov     ebp, dword ptr [ebx + 0xb8]
        cmp     esi, ebp
        mov     dword ptr [esp + 0x1c], esi
        je      L_6cfdc3
        test    esi, esi
        jbe     L_6cfda4
        lea     edx, [esi + esi*2]
        lea     eax, [esi + edx*4]
        shl     eax, 2
        push    eax
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 4
        test    edi, edi
        je      L_6cfd42
        push    0x6d2720
        push    esi
        push    0x34
        push    edi
        call    FUN_00406c90
        jmp     L_6cfd44
L_6cfd42:
        xor     edi, edi
L_6cfd44:
        mov     edx, dword ptr [ebx + 0xb4]
        test    edx, edx
        mov     dword ptr [esp + 0x18], edi
        je      L_6cfd9c
        cmp     esi, ebp
        mov     ecx, esi
        jb      L_6cfd5a
        mov     ecx, ebp
L_6cfd5a:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        je      L_6cfd8d
        lea     eax, [ecx + ecx*2]
        mov     ebp, edx
        lea     eax, [ecx + eax*4]
        lea     eax, [edi + eax*4]
        sub     ebp, edi
        lea     edx, [ecx + 1]
L_6cfd71:
        lea     esi, [eax + ebp]
        mov     edi, eax
        dec     edx
        mov     ecx, 0xd
        sub     eax, 0x34
        test    edx, edx
        rep     movsd
        ja      L_6cfd71
        mov     edi, dword ptr [esp + 0x18]
        mov     esi, dword ptr [esp + 0x1c]
L_6cfd8d:
        mov     eax, dword ptr [ebx + 0xb4]
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_6cfd9c:
        mov     dword ptr [ebx + 0xb4], edi
        jmp     L_6cfdbd
L_6cfda4:
        mov     ecx, dword ptr [ebx + 0xb4]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [ebx + 0xb4], 0
L_6cfdbd:
        mov     dword ptr [ebx + 0xb8], esi
L_6cfdc3:
        mov     esi, dword ptr [ebx + 4]
        imul    esi, dword ptr [ebx]
        cmp     esi, dword ptr [ebx + 0x88]
        je      L_6cfe3a
        test    esi, esi
        jbe     L_6cfe1b
        push    esi
        call    FUN_004084d0
        mov     edi, dword ptr [ebx + 0x84]
        add     esp, 4
        test    edi, edi
        mov     ebp, eax
        je      L_6cfe13
        mov     eax, dword ptr [ebx + 0x88]
        cmp     esi, eax
        jae     L_6cfdf6
        mov     eax, esi
L_6cfdf6:
        mov     edx, eax
        dec     eax
        test    edx, edx
        je      L_6cfe0a
L_6cfdfd:
        mov     cl, byte ptr [edi + eax]
        mov     edx, eax
        mov     byte ptr [eax + ebp], cl
        dec     eax
        test    edx, edx
        jne     L_6cfdfd
L_6cfe0a:
        push    edi
        call    FUN_004084e0
        add     esp, 4
L_6cfe13:
        mov     dword ptr [ebx + 0x84], ebp
        jmp     L_6cfe34
L_6cfe1b:
        mov     eax, dword ptr [ebx + 0x84]
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [ebx + 0x84], 0
L_6cfe34:
        mov     dword ptr [ebx + 0x88], esi
L_6cfe3a:
        mov     esi, dword ptr [ebx + 4]
        imul    esi, dword ptr [ebx]
        cmp     esi, dword ptr [ebx + 0x90]
        je      L_6cfeb1
        test    esi, esi
        jbe     L_6cfe92
        push    esi
        call    FUN_004084d0
        mov     edi, dword ptr [ebx + 0x8c]
        add     esp, 4
        test    edi, edi
        mov     ebp, eax
        je      L_6cfe8a
        mov     eax, dword ptr [ebx + 0x90]
        cmp     esi, eax
        jae     L_6cfe6d
        mov     eax, esi
L_6cfe6d:
        mov     ecx, eax
        dec     eax
        test    ecx, ecx
        je      L_6cfe81
L_6cfe74:
        mov     dl, byte ptr [edi + eax]
        mov     ecx, eax
        mov     byte ptr [eax + ebp], dl
        dec     eax
        test    ecx, ecx
        jne     L_6cfe74
L_6cfe81:
        push    edi
        call    FUN_004084e0
        add     esp, 4
L_6cfe8a:
        mov     dword ptr [ebx + 0x8c], ebp
        jmp     L_6cfeab
L_6cfe92:
        mov     edx, dword ptr [ebx + 0x8c]
        push    edx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [ebx + 0x8c], 0
L_6cfeab:
        mov     dword ptr [ebx + 0x90], esi
L_6cfeb1:
        mov     esi, dword ptr [ebx + 4]
        imul    esi, dword ptr [ebx]
        cmp     esi, dword ptr [ebx + 0x98]
        je      L_6cff28
        test    esi, esi
        jbe     L_6cff09
        push    esi
        call    FUN_004084d0
        mov     edi, dword ptr [ebx + 0x94]
        add     esp, 4
        test    edi, edi
        mov     ebp, eax
        je      L_6cff01
        mov     eax, dword ptr [ebx + 0x98]
        cmp     esi, eax
        jae     L_6cfee4
        mov     eax, esi
L_6cfee4:
        mov     ecx, eax
        dec     eax
        test    ecx, ecx
        je      L_6cfef8
L_6cfeeb:
        mov     dl, byte ptr [edi + eax]
        mov     ecx, eax
        mov     byte ptr [eax + ebp], dl
        dec     eax
        test    ecx, ecx
        jne     L_6cfeeb
L_6cfef8:
        push    edi
        call    FUN_004084e0
        add     esp, 4
L_6cff01:
        mov     dword ptr [ebx + 0x94], ebp
        jmp     L_6cff22
L_6cff09:
        mov     edx, dword ptr [ebx + 0x94]
        push    edx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [ebx + 0x94], 0
L_6cff22:
        mov     dword ptr [ebx + 0x98], esi
L_6cff28:
        mov     eax, dword ptr [ebx + 4]
        imul    eax, dword ptr [ebx]
        lea     ecx, [ebx + 0x9c]
        push    eax
        call    FUN_00429930
        mov     eax, dword ptr [ebx + 4]
        imul    eax, dword ptr [ebx]
        xor     edi, edi
        test    eax, eax
        mov     dword ptr [esp + 0x10], eax
        jle     L_6cffbf
        mov     eax, dword ptr [ebx + 0xac]
        mov     ecx, dword ptr [ebx + 0x7c]
        mov     ebp, dword ptr [ebx + 0xa4]
        mov     edx, dword ptr [ebx + 0x9c]
        mov     esi, dword ptr [ebx + 0x94]
        add     eax, 8
        mov     dword ptr [esp + 0x14], ecx
        mov     dword ptr [esp + 0x18], eax
        add     ebp, 8
        mov     dword ptr [esp + 0x1c], edx
L_6cff77:
        mov     ecx, dword ptr [esp + 0x14]
        push    0
        call    FUN_006d28f0
        mov     eax, dword ptr [ebx + 0x8c]
        mov     edx, dword ptr [esp + 0x14]
        mov     byte ptr [eax + edi], 0
        mov     eax, dword ptr [esp + 0x1c]
        mov     byte ptr [esi], 0
        mov     byte ptr [eax + edi], 0
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [ebp], esi
        mov     dword ptr [eax], esi
        add     eax, 0x34
        add     edx, 8
        inc     edi
        mov     dword ptr [esp + 0x18], eax
        mov     eax, dword ptr [esp + 0x10]
        inc     esi
        add     ebp, 0x34
        cmp     edi, eax
        mov     dword ptr [esp + 0x14], edx
        jl      L_6cff77
L_6cffbf:
        mov     ecx, dword ptr [ebx + 0xbc]
        mov     esi, dword ptr [ecx]
        xor     eax, eax
        cmp     esi, 0x100
        setg    al
        add     eax, 4
        cmp     eax, 2
        mov     dword ptr [esp + 0x24], eax
        jle     L_6d00d5
        mov     eax, 0xffffffe8
        lea     edi, [ebx + 0x64]
        sub     eax, ebx
        lea     esi, [ebx + 0x1a]
        mov     dword ptr [esp + 0x14], 3
        mov     dword ptr [esp + 0x10], edi
        mov     dword ptr [esp + 0x18], eax
L_6cffff:
        mov     ecx, dword ptr [esp + 0x14]
        mov     dl, 6
        shl     dl, cl
        xor     eax, eax
        lea     ecx, [edi - 0x28]
        mov     byte ptr [esi], dl
        mov     byte ptr [esi + 5], 0
        mov     byte ptr [esi + 0xa], 0
        mov     byte ptr [esi + 0xf], 1
        mov     al, byte ptr [esi]
        push    eax
        call    FUN_006d27d0
        xor     ecx, ecx
        mov     cl, byte ptr [esi]
        push    ecx
        mov     ecx, edi
        call    FUN_006d2860
        mov     al, byte ptr [esi]
        xor     ebp, ebp
        test    al, al
        jbe     L_6d00b2
        mov     edx, dword ptr [esp + 0x18]
        lea     ebx, [edx + esi]
        mov     ecx, ebx
        mov     eax, 0x20
        shl     eax, cl
        xor     ecx, ecx
        mov     cl, byte ptr [esi]
        mov     dword ptr [esp + 0x1c], eax
        mov     eax, dword ptr [esp + 0x10]
        mov     edi, dword ptr [eax]
        add     eax, -0x28
        mov     eax, dword ptr [eax]
        sub     eax, edi
        mov     dword ptr [esp + 0x28], ecx
        mov     dword ptr [esp + 0x20], eax
L_6d0063:
        push    ebp
        push    ebx
        lea     edx, [esp + 0x68]
        push    0x79e970
        push    edx
        call    dword ptr [g_0076b420]
        mov     eax, dword ptr [esp + 0x2c]
        add     esp, 0x10
        push    2
        push    eax
        push    0
        lea     ecx, [esp + 0x6c]
        push    ecx
        mov     ecx, dword ptr [g_007da848]
        call    FUN_0048f9e0
        mov     edx, dword ptr [esp + 0x20]
        mov     dword ptr [edx + edi], eax
        mov     eax, dword ptr [esp + 0x28]
        mov     dword ptr [edi], 0
        inc     ebp
        add     edi, 4
        cmp     ebp, eax
        jl      L_6d0063
        mov     edi, dword ptr [esp + 0x10]
        mov     ebx, dword ptr [esp + 0x2c]
L_6d00b2:
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x24]
        dec     eax
        mov     dword ptr [esp + 0x14], eax
        mov     eax, dword ptr [esp + 0x18]
        inc     esi
        add     edi, 8
        add     eax, esi
        cmp     eax, ecx
        mov     dword ptr [esp + 0x10], edi
        jl      L_6cffff
L_6d00d5:
        lea     ecx, [esp + 0x30]
        call    FUN_0041dec0
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 0x150
        ret     0x14
    }
}
