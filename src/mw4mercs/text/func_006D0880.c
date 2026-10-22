/*
 * FUN_006D0880 (1929 B) — util: object/table constructor with multiple
 * sub-buffer allocations (0x7c/0xa4/0xac/0xb4/0x84/0x8c/0x94 families).
 * __thiscall (this=ECX), RET 0x14.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006cf340(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_006e04d0(void);
extern void __cdecl FUN_006e0760(void);
extern void __cdecl FUN_006d47b0(void);
extern void __cdecl FUN_006d2980(void);
extern void __cdecl FUN_006d2760(void);
extern void __cdecl FUN_006d2720(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00406c90(void);
extern void __cdecl FUN_00429930(void);
extern void __cdecl FUN_006d28f0(void);
extern void __cdecl FUN_006d27d0(void);
extern void __cdecl FUN_006d2860(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_0048f9e0(void);

extern unsigned int g_007b95a4;
extern unsigned int g_007da848;
extern void* g_0076b420;

__declspec(naked) void FUN_006D0880(void)
{
    __asm {
        sub     esp, 0x120
        mov     eax, dword ptr [esp + 0x124]
        mov     edx, dword ptr [esp + 0x12c]
        push    ebx
        mov     ebx, ecx
        mov     ecx, dword ptr [esp + 0x12c]
        push    ebp
        mov     dword ptr [ebx], eax
        mov     eax, dword ptr [esp + 0x138]
        push    esi
        mov     dword ptr [ebx + 4], ecx
        mov     dword ptr [ebx + 0xc], eax
        push    edi
        mov     dword ptr [esp + 0x24], ebx
        mov     dword ptr [ebx + 8], edx
        lea     eax, [ebx + 0x2c]
        mov     ecx, 5
        xor     ebp, ebp
L_6d08c1:
        mov     dword ptr [eax], ebp
        mov     dword ptr [eax + 4], ebp
        add     eax, 8
        dec     ecx
        jne     L_6d08c1
        lea     eax, [ebx + 0x54]
        mov     ecx, 5
L_6d08d4:
        mov     dword ptr [eax], ebp
        mov     dword ptr [eax + 4], ebp
        add     eax, 8
        dec     ecx
        jne     L_6d08d4
        mov     dword ptr [ebx + 0x7c], ebp
        mov     dword ptr [ebx + 0x80], ebp
        lea     eax, [ebx + 0x84]
        mov     ecx, 4
L_6d08f3:
        mov     dword ptr [eax], ebp
        mov     dword ptr [eax + 4], ebp
        add     eax, 8
        dec     ecx
        jne     L_6d08f3
        lea     eax, [ebx + 0xa4]
        mov     ecx, 3
L_6d0909:
        mov     dword ptr [eax], ebp
        mov     dword ptr [eax + 4], ebp
        add     eax, 8
        dec     ecx
        jne     L_6d0909
        lea     ecx, [ebx + 0xc4]
        call    FUN_006cf340
        push    0x118
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, ebp
        je      L_6d093b
        mov     ecx, eax
        call    FUN_006e04d0
        mov     esi, eax
        jmp     L_6d093d
L_6d093b:
        xor     esi, esi
L_6d093d:
        mov     edi, dword ptr [esp + 0x144]
        push    edi
        mov     ecx, esi
        mov     dword ptr [ebx + 0xc0], esi
        call    FUN_006e0760
        push    0x130
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, ebp
        je      L_6d096e
        push    esi
        push    edi
        mov     ecx, eax
        call    FUN_006d47b0
        jmp     L_6d0970
L_6d096e:
        xor     eax, eax
L_6d0970:
        mov     esi, dword ptr [ebx + 4]
        imul    esi, dword ptr [ebx]
        mov     edi, dword ptr [ebx + 0x80]
        cmp     esi, edi
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [ebx + 0xbc], eax
        mov     dword ptr [esp + 0x10], esi
        je      L_6d0a38
        cmp     esi, ebp
        jbe     L_6d0a21
        lea     ecx, [esi*8 + 4]
        push    ecx
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, ebp
        je      L_6d09ce
        lea     ecx, [esi - 1]
        cmp     ecx, ebp
        lea     edx, [eax + 4]
        mov     dword ptr [eax], esi
        mov     eax, edx
        jl      L_6d09c8
        inc     ecx
L_6d09bd:
        mov     dword ptr [eax], ebp
        mov     dword ptr [eax + 4], ebp
        add     eax, 8
        dec     ecx
        jne     L_6d09bd
L_6d09c8:
        mov     dword ptr [esp + 0x14], edx
        jmp     L_6d09d2
L_6d09ce:
        mov     dword ptr [esp + 0x14], ebp
L_6d09d2:
        cmp     dword ptr [ebx + 0x7c], ebp
        je      L_6d0a18
        cmp     esi, edi
        jae     L_6d09dd
        mov     edi, esi
L_6d09dd:
        mov     edx, edi
        dec     edi
        test    edx, edx
        je      L_6d0a0a
        mov     eax, dword ptr [esp + 0x14]
        mov     ebp, dword ptr [ebx + 0x7c]
        lea     esi, [eax + edi*8]
        sub     ebp, eax
        inc     edi
L_6d09f1:
        lea     eax, [esi + ebp]
        push    eax
        mov     ecx, esi
        call    FUN_006d2980
        dec     edi
        sub     esi, 8
        test    edi, edi
        ja      L_6d09f1
        mov     esi, dword ptr [esp + 0x10]
        xor     ebp, ebp
L_6d0a0a:
        mov     ecx, dword ptr [ebx + 0x7c]
        cmp     ecx, ebp
        je      L_6d0a18
        push    3
        call    FUN_006d2760
L_6d0a18:
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [ebx + 0x7c], ecx
        jmp     L_6d0a32
L_6d0a21:
        mov     ecx, dword ptr [ebx + 0x7c]
        cmp     ecx, ebp
        je      L_6d0a2f
        push    3
        call    FUN_006d2760
L_6d0a2f:
        mov     dword ptr [ebx + 0x7c], ebp
L_6d0a32:
        mov     dword ptr [ebx + 0x80], esi
L_6d0a38:
        mov     ebp, dword ptr [ebx + 4]
        imul    ebp, dword ptr [ebx]
        cmp     ebp, dword ptr [ebx + 0xa8]
        je      L_6d0b1e
        test    ebp, ebp
        jbe     L_6d0aff
        lea     edx, [ebp + ebp*2]
        lea     eax, [ebp + edx*4]
        shl     eax, 2
        push    eax
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 4
        test    edi, edi
        je      L_6d0a93
        lea     eax, [ebp - 1]
        test    eax, eax
        mov     esi, edi
        jl      L_6d0a8f
        inc     eax
        mov     dword ptr [esp + 0x10], eax
L_6d0a7a:
        mov     ecx, esi
        call    FUN_006d2720
        mov     eax, dword ptr [esp + 0x10]
        add     esi, 0x34
        dec     eax
        mov     dword ptr [esp + 0x10], eax
        jne     L_6d0a7a
L_6d0a8f:
        mov     esi, edi
        jmp     L_6d0a95
L_6d0a93:
        xor     esi, esi
L_6d0a95:
        mov     edx, dword ptr [ebx + 0xa4]
        test    edx, edx
        mov     dword ptr [esp + 0x10], esi
        mov     dword ptr [esp + 0x1c], edx
        je      L_6d0af7
        mov     eax, dword ptr [ebx + 0xa8]
        cmp     ebp, eax
        mov     ecx, ebp
        jb      L_6d0ab5
        mov     ecx, eax
L_6d0ab5:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        je      L_6d0aee
        lea     eax, [ecx + ecx*2]
        sub     edx, esi
        lea     eax, [ecx + eax*4]
        mov     dword ptr [esp + 0x14], edx
        lea     eax, [esi + eax*4]
        lea     edx, [ecx + 1]
L_6d0ace:
        mov     ecx, dword ptr [esp + 0x14]
        lea     esi, [ecx + eax]
        mov     edi, eax
        dec     edx
        mov     ecx, 0xd
        sub     eax, 0x34
        test    edx, edx
        rep     movsd
        ja      L_6d0ace
        mov     edx, dword ptr [esp + 0x1c]
        mov     esi, dword ptr [esp + 0x10]
L_6d0aee:
        push    edx
        call    FUN_004084e0
        add     esp, 4
L_6d0af7:
        mov     dword ptr [ebx + 0xa4], esi
        jmp     L_6d0b18
L_6d0aff:
        mov     edx, dword ptr [ebx + 0xa4]
        push    edx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [ebx + 0xa4], 0
L_6d0b18:
        mov     dword ptr [ebx + 0xa8], ebp
L_6d0b1e:
        mov     esi, dword ptr [ebx + 4]
        imul    esi, dword ptr [ebx]
        cmp     esi, dword ptr [ebx + 0xb0]
        mov     dword ptr [esp + 0x1c], esi
        je      L_6d0bfe
        test    esi, esi
        jbe     L_6d0bdf
        lea     eax, [esi + esi*2]
        lea     ecx, [esi + eax*4]
        shl     ecx, 2
        push    ecx
        call    FUN_004084d0
        mov     ebp, eax
        add     esp, 4
        test    ebp, ebp
        je      L_6d0b7b
        lea     eax, [esi - 1]
        test    eax, eax
        mov     edi, ebp
        jl      L_6d0b77
        inc     eax
        mov     dword ptr [esp + 0x10], eax
L_6d0b62:
        mov     ecx, edi
        call    FUN_006d2720
        mov     eax, dword ptr [esp + 0x10]
        add     edi, 0x34
        dec     eax
        mov     dword ptr [esp + 0x10], eax
        jne     L_6d0b62
L_6d0b77:
        mov     edi, ebp
        jmp     L_6d0b7d
L_6d0b7b:
        xor     edi, edi
L_6d0b7d:
        mov     ebp, dword ptr [ebx + 0xac]
        test    ebp, ebp
        mov     dword ptr [esp + 0x10], edi
        je      L_6d0bd7
        mov     ecx, dword ptr [ebx + 0xb0]
        cmp     esi, ecx
        jae     L_6d0b97
        mov     ecx, esi
L_6d0b97:
        mov     edx, ecx
        dec     ecx
        test    edx, edx
        je      L_6d0bc8
        lea     eax, [ecx + ecx*2]
        lea     edx, [ecx + eax*4]
        lea     eax, [edi + edx*4]
        sub     ebp, edi
        lea     edx, [ecx + 1]
L_6d0bac:
        lea     esi, [eax + ebp]
        mov     edi, eax
        dec     edx
        mov     ecx, 0xd
        sub     eax, 0x34
        test    edx, edx
        rep     movsd
        ja      L_6d0bac
        mov     edi, dword ptr [esp + 0x10]
        mov     esi, dword ptr [esp + 0x1c]
L_6d0bc8:
        mov     eax, dword ptr [ebx + 0xac]
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_6d0bd7:
        mov     dword ptr [ebx + 0xac], edi
        jmp     L_6d0bf8
L_6d0bdf:
        mov     eax, dword ptr [ebx + 0xac]
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [ebx + 0xac], 0
L_6d0bf8:
        mov     dword ptr [ebx + 0xb0], esi
L_6d0bfe:
        mov     ecx, dword ptr [esp + 0x18]
        cmp     dword ptr [ecx], 0x100
        jle     L_6d0cd7
        mov     esi, dword ptr [ebx + 4]
        imul    esi, dword ptr [ebx]
        mov     ebp, dword ptr [ebx + 0xb8]
        cmp     esi, ebp
        mov     dword ptr [esp + 0x1c], esi
        je      L_6d0cd7
        test    esi, esi
        jbe     L_6d0cb8
        lea     edx, [esi + esi*2]
        lea     eax, [esi + edx*4]
        shl     eax, 2
        push    eax
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 4
        test    edi, edi
        je      L_6d0c56
        push    0x6d2720
        push    esi
        push    0x34
        push    edi
        call    FUN_00406c90
        jmp     L_6d0c58
L_6d0c56:
        xor     edi, edi
L_6d0c58:
        mov     edx, dword ptr [ebx + 0xb4]
        test    edx, edx
        mov     dword ptr [esp + 0x18], edi
        je      L_6d0cb0
        cmp     esi, ebp
        mov     ecx, esi
        jb      L_6d0c6e
        mov     ecx, ebp
L_6d0c6e:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        je      L_6d0ca1
        lea     eax, [ecx + ecx*2]
        mov     ebp, edx
        lea     eax, [ecx + eax*4]
        lea     eax, [edi + eax*4]
        sub     ebp, edi
        lea     edx, [ecx + 1]
L_6d0c85:
        lea     esi, [eax + ebp]
        mov     edi, eax
        dec     edx
        mov     ecx, 0xd
        sub     eax, 0x34
        test    edx, edx
        rep     movsd
        ja      L_6d0c85
        mov     edi, dword ptr [esp + 0x18]
        mov     esi, dword ptr [esp + 0x1c]
L_6d0ca1:
        mov     eax, dword ptr [ebx + 0xb4]
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_6d0cb0:
        mov     dword ptr [ebx + 0xb4], edi
        jmp     L_6d0cd1
L_6d0cb8:
        mov     ecx, dword ptr [ebx + 0xb4]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [ebx + 0xb4], 0
L_6d0cd1:
        mov     dword ptr [ebx + 0xb8], esi
L_6d0cd7:
        mov     esi, dword ptr [ebx + 4]
        imul    esi, dword ptr [ebx]
        cmp     esi, dword ptr [ebx + 0x88]
        je      L_6d0d4e
        test    esi, esi
        jbe     L_6d0d2f
        push    esi
        call    FUN_004084d0
        mov     edi, dword ptr [ebx + 0x84]
        add     esp, 4
        test    edi, edi
        mov     ebp, eax
        je      L_6d0d27
        mov     eax, dword ptr [ebx + 0x88]
        cmp     esi, eax
        jae     L_6d0d0a
        mov     eax, esi
L_6d0d0a:
        mov     edx, eax
        dec     eax
        test    edx, edx
        je      L_6d0d1e
L_6d0d11:
        mov     cl, byte ptr [edi + eax]
        mov     edx, eax
        mov     byte ptr [eax + ebp], cl
        dec     eax
        test    edx, edx
        jne     L_6d0d11
L_6d0d1e:
        push    edi
        call    FUN_004084e0
        add     esp, 4
L_6d0d27:
        mov     dword ptr [ebx + 0x84], ebp
        jmp     L_6d0d48
L_6d0d2f:
        mov     eax, dword ptr [ebx + 0x84]
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [ebx + 0x84], 0
L_6d0d48:
        mov     dword ptr [ebx + 0x88], esi
L_6d0d4e:
        mov     esi, dword ptr [ebx + 4]
        imul    esi, dword ptr [ebx]
        cmp     esi, dword ptr [ebx + 0x90]
        je      L_6d0dc5
        test    esi, esi
        jbe     L_6d0da6
        push    esi
        call    FUN_004084d0
        mov     edi, dword ptr [ebx + 0x8c]
        add     esp, 4
        test    edi, edi
        mov     ebp, eax
        je      L_6d0d9e
        mov     eax, dword ptr [ebx + 0x90]
        cmp     esi, eax
        jae     L_6d0d81
        mov     eax, esi
L_6d0d81:
        mov     ecx, eax
        dec     eax
        test    ecx, ecx
        je      L_6d0d95
L_6d0d88:
        mov     dl, byte ptr [edi + eax]
        mov     ecx, eax
        mov     byte ptr [eax + ebp], dl
        dec     eax
        test    ecx, ecx
        jne     L_6d0d88
L_6d0d95:
        push    edi
        call    FUN_004084e0
        add     esp, 4
L_6d0d9e:
        mov     dword ptr [ebx + 0x8c], ebp
        jmp     L_6d0dbf
L_6d0da6:
        mov     edx, dword ptr [ebx + 0x8c]
        push    edx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [ebx + 0x8c], 0
L_6d0dbf:
        mov     dword ptr [ebx + 0x90], esi
L_6d0dc5:
        mov     esi, dword ptr [ebx + 4]
        imul    esi, dword ptr [ebx]
        cmp     esi, dword ptr [ebx + 0x98]
        je      L_6d0e3c
        test    esi, esi
        jbe     L_6d0e1d
        push    esi
        call    FUN_004084d0
        mov     edi, dword ptr [ebx + 0x94]
        add     esp, 4
        test    edi, edi
        mov     ebp, eax
        je      L_6d0e15
        mov     eax, dword ptr [ebx + 0x98]
        cmp     esi, eax
        jae     L_6d0df8
        mov     eax, esi
L_6d0df8:
        mov     ecx, eax
        dec     eax
        test    ecx, ecx
        je      L_6d0e0c
L_6d0dff:
        mov     dl, byte ptr [edi + eax]
        mov     ecx, eax
        mov     byte ptr [eax + ebp], dl
        dec     eax
        test    ecx, ecx
        jne     L_6d0dff
L_6d0e0c:
        push    edi
        call    FUN_004084e0
        add     esp, 4
L_6d0e15:
        mov     dword ptr [ebx + 0x94], ebp
        jmp     L_6d0e36
L_6d0e1d:
        mov     edx, dword ptr [ebx + 0x94]
        push    edx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [ebx + 0x94], 0
L_6d0e36:
        mov     dword ptr [ebx + 0x98], esi
L_6d0e3c:
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
        jle     L_6d0ed3
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
L_6d0e8b:
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
        jl      L_6d0e8b
L_6d0ed3:
        mov     ecx, dword ptr [ebx + 0xbc]
        mov     esi, dword ptr [ecx]
        xor     eax, eax
        cmp     esi, 0x100
        setg    al
        add     eax, 4
        cmp     eax, 2
        mov     dword ptr [esp + 0x28], eax
        jle     L_6d0ffa
        mov     eax, 0xffffffe8
        lea     edi, [ebx + 0x64]
        sub     eax, ebx
        lea     esi, [ebx + 0x1a]
        mov     dword ptr [esp + 0x14], 3
        mov     dword ptr [esp + 0x10], edi
        mov     dword ptr [esp + 0x18], eax
L_6d0f13:
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
        mov     edx, dword ptr [g_007b95a4]
        push    edx
        call    FUN_006f4950
        mov     al, byte ptr [esi]
        xor     ebp, ebp
        test    al, al
        jbe     L_6d0fd2
        mov     eax, dword ptr [esp + 0x18]
        lea     ebx, [eax + esi]
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
        mov     dword ptr [esp + 0x2c], ecx
        mov     dword ptr [esp + 0x20], eax
L_6d0f83:
        push    ebp
        push    ebx
        lea     edx, [esp + 0x38]
        push    0x79e980
        push    edx
        call    dword ptr [g_0076b420]
        mov     eax, dword ptr [esp + 0x2c]
        add     esp, 0x10
        push    0x42
        push    eax
        push    0
        lea     ecx, [esp + 0x3c]
        push    ecx
        mov     ecx, dword ptr [g_007da848]
        call    FUN_0048f9e0
        mov     edx, dword ptr [esp + 0x20]
        mov     dword ptr [edx + edi], eax
        mov     eax, dword ptr [esp + 0x2c]
        mov     dword ptr [edi], 0
        inc     ebp
        add     edi, 4
        cmp     ebp, eax
        jl      L_6d0f83
        mov     ebx, dword ptr [esp + 0x24]
        mov     edi, dword ptr [esp + 0x10]
L_6d0fd2:
        call    FUN_006f49a0
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x28]
        dec     eax
        mov     dword ptr [esp + 0x14], eax
        mov     eax, dword ptr [esp + 0x18]
        inc     esi
        add     edi, 8
        add     eax, esi
        cmp     eax, ecx
        mov     dword ptr [esp + 0x10], edi
        jl      L_6d0f13
L_6d0ffa:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 0x120
        ret     0x14
    }
}
