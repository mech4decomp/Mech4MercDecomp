/*
 * FUN_006C66F0 (3814 B) - __thiscall (ECX = this), RET 8 (two stack params).
 *
 * Large render/transform routine. Guards on a set of globals and on
 * this+0x30/0x34/0x38 == 0x76C5B0, then walks a linked list of objects
 * (this+0x44 -> +4), transforming each via FPU math, calling the
 * matrix/vector helpers FUN_006ceae0..FUN_006cec00, and writing into a
 * framebuffer via the 0x85A028/0x85A03C pointers. Two big paths: a
 * "fast" path (all angles zero) and a "slow" path (rotation applied).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_85a254;      /* DAT_0085a254 */
extern int g_858950;      /* DAT_00858950 */
extern int g_87c59c;      /* DAT_0087c59c */
extern char g_85a1df;     /* DAT_0085a1df */
extern char g_7b60a4;     /* DAT_007b60a4 */
extern float g_76c5b0;    /* DAT_0076c5b0 */
extern int g_858940;      /* DAT_00858940 */
extern int g_858944;      /* DAT_00858944 */
extern int g_85a028;      /* DAT_0085a028 */
extern int g_85a03c;      /* DAT_0085a03c */
extern char g_82e2d8;     /* DAT_0082e2d8 */
extern double g_76e3e8;   /* DAT_0076e3e8 */
extern float g_775980;    /* DAT_00775980 */
extern float g_79e17c;    /* DAT_0079e17c */
extern float g_76d064;    /* DAT_0076d064 */

extern void __cdecl FUN_006bf4a0(void);
extern void __cdecl FUN_00713cc0(int a, int b);
extern int __stdcall FUN_00704a80(int a, int b, int c, int d);
extern int __cdecl FUN_0075db4a(void);          /* _ftol */
extern char __fastcall FUN_006c7820(void);      /* __thiscall */
extern void __cdecl FUN_007358e0(void);
extern void __cdecl FUN_00735440(void);
extern void __cdecl FUN_007353f0(void);
extern void __cdecl FUN_00713de0(void);
extern void __stdcall FUN_00713ae0(void *p, int n);
extern int __cdecl FUN_00707e70(int a);
extern void __cdecl FUN_006ceae0(void);
extern void __cdecl FUN_006ceb10(void);
extern void __cdecl FUN_006ceb30(void);
extern void __cdecl FUN_006ceb40(void);
extern void __cdecl FUN_006ceb60(void);
extern void __cdecl FUN_006ceb80(void);
extern void __cdecl FUN_006ceba0(void);
extern void __stdcall FUN_006cec00(void *a, void *b, void *c);
extern void __cdecl FUN_006ceaf0(void);

__declspec(naked) void __fastcall FUN_006c66f0(void)
{
    __asm {
        sub     esp, 0x280
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebp, ecx
        call    FUN_006bf4a0
        mov     eax, dword ptr [g_85a254]
        test    eax, eax
        jz      loc_6717
        cmp     dword ptr [g_858950], 3
        jnz     loc_6eb9
loc_6717:
        mov     eax, dword ptr [g_87c59c]
        test    eax, eax
        jnz     loc_6eb9
        mov     al, byte ptr [g_85a1df]
        test    al, al
        jnz     loc_6eb9
        mov     al, byte ptr [g_7b60a4]
        test    al, al
        jz      loc_6eb9
        fld     dword ptr [g_76c5b0]
        fcomp   dword ptr [ebp + 0x30]
        __emit 0xDF   /* fnstsw ax: MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x40: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x40
        jz      loc_6eb9
        fld     dword ptr [g_76c5b0]
        fcomp   dword ptr [ebp + 0x34]
        __emit 0xDF   /* fnstsw ax: no-WAIT form */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x40 */
        __emit 0xC4
        __emit 0x40
        jz      loc_6eb9
        fld     dword ptr [g_76c5b0]
        fcomp   dword ptr [ebp + 0x38]
        __emit 0xDF   /* fnstsw ax: no-WAIT form */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x40 */
        __emit 0xC4
        __emit 0x40
        jz      loc_6eb9
        mov     eax, dword ptr [ebp + 0x8]
        or      esi, 0xffffffff
        cmp     eax, esi
        jnz     loc_6ebc
        mov     edi, dword ptr [ebp + 0xc]
        cmp     edi, 1
        jz      loc_6799
        cmp     edi, 3
        jnz     loc_6ebc
loc_6799:
        mov     ecx, dword ptr [ebp + 0x10]
        mov     eax, 0x3f800000
        cmp     ecx, eax
        jnz     loc_6ebc
        cmp     dword ptr [ebp + 0x14], eax
        jnz     loc_6ebc
        push    1
        push    7
        call    FUN_00713cc0
        push    0
        push    8
        call    FUN_00713cc0
        push    0
        push    9
        call    FUN_00713cc0
        push    0
        push    0xa
        call    FUN_00713cc0
        push    1
        push    4
        call    FUN_00713cc0
        push    0
        push    0xb
        call    FUN_00713cc0
        push    0
        push    6
        call    FUN_00713cc0
        push    0
        push    5
        call    FUN_00713cc0
        push    0
        push    0xc
        call    FUN_00713cc0
        push    1
        push    0xf
        call    FUN_00713cc0
        push    0
        push    0x12
        call    FUN_00713cc0
        push    edi
        push    0xd
        call    FUN_00713cc0
        cmp     edi, 1
        jnz     loc_6825
        push    edi
        jmp     loc_6827
loc_6825:
        push    2
loc_6827:
        push    0x10
        call    FUN_00713cc0
        push    0
        push    0
        push    0
        push    2
        call    FUN_00704a80
        test    eax, eax
        mov     dword ptr [esp + 0x1c], 0
        jnz     loc_684f
        mov     dword ptr [esp + 0x1c], 0x3f000000
loc_684f:
        fild    dword ptr [esp + 0x298]
        fsub    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x10]
        fild    dword ptr [esp + 0x294]
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        fsub    dword ptr [esp + 0x20]
        fstp    dword ptr [esp + 0x30]
        mov     ecx, dword ptr [esp + 0x30]
        push    ecx
        mov     ecx, ebp
        call    FUN_006c7820
        test    al, al
        jz      loc_688b
        push    2
        push    0xb
        call    FUN_00713cc0
loc_688b:
        mov     edx, dword ptr [ebp + 0x44]
        xor     eax, eax
        mov     ecx, 0x1f
        lea     edi, [esp + 0x1d4]
        rep stosd
        mov     ebx, dword ptr [edx + 4]
        test    ebx, ebx
        mov     dword ptr [esp + 0x30], esi
        mov     dword ptr [esp + 0x28], esi
        mov     dword ptr [esp + 0x18], ebx
        jz      loc_75c9
loc_68b5:
        fld     dword ptr [ebx]
        fsub    dword ptr [ebp + 0x18]
        fmul    dword ptr [ebp + 0x10]
        call    FUN_0075db4a
        fld     dword ptr [ebx + 4]
        fsub    dword ptr [ebp + 0x1c]
        mov     ecx, dword ptr [esp + 0x294]
        mov     esi, eax
        add     esi, ecx
        fmul    dword ptr [ebp + 0x14]
        mov     dword ptr [esp + 0x14], esi
        call    FUN_0075db4a
        fld     dword ptr [ebx + 0x40]
        fsub    dword ptr [ebp + 0x18]
        mov     edi, eax
        add     edi, dword ptr [esp + 0x298]
        fmul    dword ptr [ebp + 0x10]
        call    FUN_0075db4a
        fld     dword ptr [ebx + 0x44]
        fsub    dword ptr [ebp + 0x1c]
        mov     ecx, dword ptr [esp + 0x294]
        sub     eax, esi
        add     eax, ecx
        fmul    dword ptr [ebp + 0x14]
        mov     dword ptr [esp + 0x24], eax
        call    FUN_0075db4a
        mov     edx, dword ptr [esp + 0x298]
        mov     esi, eax
        mov     eax, dword ptr [esp + 0x14]
        sub     esi, edi
        add     esi, edx
        test    eax, eax
        jl      loc_6bdc
        mov     ecx, dword ptr [esp + 0x24]
        add     ecx, eax
        cmp     ecx, dword ptr [g_858940]
        jg      loc_6bdc
        test    edi, edi
        jl      loc_6bdc
        cmp     edi, dword ptr [g_858944]
        jge     loc_6bdc
        mov     eax, dword ptr [ebx + 0x84]
        test    eax, eax
        jz      loc_6bdc
        mov     dl, byte ptr [eax + 4]
        shr     dl, 3
        test    dl, 1
        jnz     loc_6bdc
        mov     ecx, dword ptr [esp + 0x28]
        mov     dword ptr [esp + 0x1d4], 0x7c
        mov     eax, dword ptr [ebx + 0x84]
        cmp     ecx, eax
        jz      loc_69f0
        mov     eax, dword ptr [esp + 0x30]
        test    eax, eax
        jz      loc_69aa
        push    0
        push    1
        call    FUN_00713cc0
        mov     dword ptr [esp + 0x30], 0
        call    FUN_00713de0
        mov     ecx, dword ptr [esp + 0x28]
loc_69aa:
        cmp     ecx, -1
        jz      loc_69c0
        push    0
        push    0
        push    1
        call    FUN_007358e0
        push    eax
        call    FUN_00735440
loc_69c0:
        mov     ecx, dword ptr [ebx + 0x84]
        push    0
        push    0x811
        lea     eax, [esp + 0x1dc]
        push    eax
        push    0
        push    0
        push    1
        call    FUN_007358e0
        push    eax
        call    FUN_007353f0
        mov     eax, dword ptr [ebx + 0x84]
        mov     dword ptr [esp + 0x28], eax
loc_69f0:
        mov     ecx, dword ptr [esp + 0x1dc]
        mov     dword ptr [esp + 0x144], ecx
        mov     dword ptr [esp + 0x148], 0
        fild    qword ptr [esp + 0x144]
        fmul    dword ptr [ebx + 0x1c]
        call    FUN_0075db4a
        mov     edx, eax
        imul    edx, dword ptr [esp + 0x1e4]
        mov     eax, dword ptr [esp + 0x1e0]
        mov     dword ptr [esp + 0x14c], eax
        mov     dword ptr [esp + 0x150], 0
        shr     edx, 1
        mov     dword ptr [esp + 0x20], edx
        fild    qword ptr [esp + 0x14c]
        fmul    dword ptr [ebx + 0x18]
        call    FUN_0075db4a
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0x1f8]
        mov     ebx, dword ptr [esp + 0x14]
        add     ecx, eax
        lea     eax, [edx + ecx*2]
        mov     ecx, dword ptr [g_85a028]
        mov     edx, dword ptr [g_85a03c]
        imul    ecx, edi
        sar     ecx, 1
        add     ecx, ebx
        mov     dword ptr [esp + 0x20], eax
        mov     eax, dword ptr [g_858944]
        lea     ebx, [edx + ecx*2]
        lea     ecx, [esi + edi]
        cmp     ecx, eax
        jle     loc_6a8e
        mov     esi, eax
        sub     esi, edi
loc_6a8e:
        mov     al, byte ptr [g_82e2d8]
        test    al, al
        jz      loc_6b82
        push    1
        call    FUN_00707e70
        fadd    st(0), st(0)
        call    FUN_0075db4a
        test    al, 1
        jz      loc_6b82
        push    1
        call    FUN_00707e70
        fmul    qword ptr [g_76e3e8]
        call    FUN_0075db4a
        and     al, 1
        neg     al
        sbb     al, al
        and     eax, 0xff
        test    esi, esi
        mov     byte ptr [esp + 0x13c], al
        jle     loc_6b43
        mov     edx, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [g_85a028]
        lea     eax, [edx + edx]
        mov     dword ptr [esp + 0x24], eax
        mov     eax, dword ptr [esp + 0x13c]
        and     eax, 0xff
        sar     ecx, 1
        shl     ecx, 1
        mov     dword ptr [esp + 0x20], eax
        mov     dword ptr [esp + 0x140], ecx
        mov     dword ptr [esp + 0x14], esi
        jmp     loc_6b0f
loc_6b0b:
        mov     eax, dword ptr [esp + 0x20]
loc_6b0f:
        mov     ecx, dword ptr [esp + 0x24]
        mov     dl, al
        mov     dh, dl
        mov     esi, ecx
        shr     ecx, 2
        mov     edi, ebx
        mov     eax, edx
        shl     eax, 0x10
        mov     ax, dx
        rep stosd
        mov     ecx, esi
        and     ecx, 3
        rep stosb
        mov     ecx, dword ptr [esp + 0x140]
        mov     eax, dword ptr [esp + 0x14]
        add     ebx, ecx
        dec     eax
        mov     dword ptr [esp + 0x14], eax
        jnz     loc_6b0b
loc_6b43:
        mov     ebx, dword ptr [esp + 0x18]
loc_6b47:
        mov     ebx, dword ptr [ebx + 0x80]
        test    ebx, ebx
        mov     dword ptr [esp + 0x18], ebx
        jnz     loc_68b5
        mov     ecx, dword ptr [esp + 0x28]
        cmp     ecx, -1
        jz      loc_75c9
        push    ebx
        push    ebx
        push    1
        call    FUN_007358e0
        push    eax
        call    FUN_00735440
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x280
        ret     8
loc_6b82:
        test    esi, esi
        jle     loc_6b43
        mov     eax, dword ptr [esp + 0x24]
        lea     ecx, [eax + eax]
        mov     eax, dword ptr [g_85a028]
        sar     eax, 1
        mov     dword ptr [esp + 0x24], ecx
        shl     eax, 1
        mov     dword ptr [esp + 0x14], esi
loc_6b9e:
        mov     ecx, dword ptr [esp + 0x24]
        mov     esi, dword ptr [esp + 0x20]
        mov     edx, ecx
        shr     ecx, 2
        mov     edi, ebx
        rep movsd
        mov     ecx, edx
        mov     edx, dword ptr [esp + 0x20]
        and     ecx, 3
        rep movsb
        mov     ecx, dword ptr [esp + 0x1e4]
        sar     ecx, 1
        lea     ecx, [edx + ecx*2]
        mov     dword ptr [esp + 0x20], ecx
        mov     ecx, dword ptr [esp + 0x14]
        add     ebx, eax
        dec     ecx
        mov     dword ptr [esp + 0x14], ecx
        jnz     loc_6b9e
        jmp     loc_6b43
loc_6bdc:
        mov     ecx, dword ptr [esp + 0x28]
        cmp     ecx, -1
        jz      loc_6bfe
        push    0
        push    0
        push    1
        call    FUN_007358e0
        push    eax
        call    FUN_00735440
        mov     dword ptr [esp + 0x28], 0xffffffff
loc_6bfe:
        mov     esi, dword ptr [ebx + 0x84]
        cmp     dword ptr [esp + 0x30], esi
        jz      loc_6c16
        push    esi
        push    1
        call    FUN_00713cc0
        mov     dword ptr [esp + 0x30], esi
loc_6c16:
        mov     eax, dword ptr [ebp + 8]
        mov     ecx, 8
        mov     esi, ebx
        lea     edi, [esp + 0xbc]
        rep movsd
        fld     dword ptr [esp + 0xbc]
        fsub    dword ptr [ebp + 0x18]
        mov     dword ptr [esp + 0x12c], eax
        fmul    dword ptr [ebp + 0x10]
        mov     dword ptr [esp + 0x10c], eax
        mov     dword ptr [esp + 0xec], eax
        fstp    dword ptr [esp + 0xbc]
        mov     dword ptr [esp + 0xcc], eax
        fld     dword ptr [esp + 0xc0]
        lea     esi, [ebx + 0x20]
        fsub    dword ptr [ebp + 0x1c]
        mov     ecx, 8
        lea     edi, [esp + 0xdc]
        fmul    dword ptr [ebp + 0x14]
        fstp    dword ptr [esp + 0xc0]
        fld     dword ptr [esp + 0xc4]
        fsub    dword ptr [ebp + 0x20]
        fstp    dword ptr [esp + 0xc4]
        rep movsd
        fld     dword ptr [esp + 0xdc]
        fsub    dword ptr [ebp + 0x18]
        mov     ecx, 8
        fmul    dword ptr [ebp + 0x10]
        lea     esi, [ebx + 0x40]
        lea     edi, [esp + 0xfc]
        fstp    dword ptr [esp + 0xdc]
        fld     dword ptr [esp + 0xe0]
        fsub    dword ptr [ebp + 0x1c]
        fmul    dword ptr [ebp + 0x14]
        fstp    dword ptr [esp + 0xe0]
        fld     dword ptr [esp + 0xe4]
        fsub    dword ptr [ebp + 0x20]
        fstp    dword ptr [esp + 0xe4]
        rep movsd
        fld     dword ptr [esp + 0xfc]
        fsub    dword ptr [ebp + 0x18]
        lea     esi, [ebx + 0x60]
        fmul    dword ptr [ebp + 0x10]
        mov     ecx, 8
        lea     edi, [esp + 0x11c]
        fstp    dword ptr [esp + 0xfc]
        fld     dword ptr [esp + 0x100]
        fsub    dword ptr [ebp + 0x1c]
        fmul    dword ptr [ebp + 0x14]
        fstp    dword ptr [esp + 0x100]
        fld     dword ptr [esp + 0x104]
        fsub    dword ptr [ebp + 0x20]
        fstp    dword ptr [esp + 0x104]
        rep movsd
        fld     dword ptr [esp + 0x11c]
        fsub    dword ptr [ebp + 0x18]
        fmul    dword ptr [ebp + 0x10]
        fld     dword ptr [esp + 0x120]
        fsub    dword ptr [ebp + 0x1c]
        fmul    dword ptr [ebp + 0x14]
        fstp    dword ptr [esp + 0x120]
        fld     dword ptr [esp + 0x124]
        fsub    dword ptr [ebp + 0x20]
        fstp    dword ptr [esp + 0x124]
        fld     dword ptr [esp + 0x2c]
        fadd    dword ptr [esp + 0xbc]
        fstp    dword ptr [esp + 0xbc]
        fld     dword ptr [esp + 0x10]
        fadd    dword ptr [esp + 0xc0]
        fstp    dword ptr [esp + 0xc0]
        fld     dword ptr [esp + 0x2c]
        fadd    dword ptr [esp + 0xdc]
        fstp    dword ptr [esp + 0xdc]
        fld     dword ptr [esp + 0x10]
        fadd    dword ptr [esp + 0xe0]
        fstp    dword ptr [esp + 0xe0]
        fld     dword ptr [esp + 0x2c]
        fadd    dword ptr [esp + 0xfc]
        fstp    dword ptr [esp + 0xfc]
        fld     dword ptr [esp + 0x10]
        fadd    dword ptr [esp + 0x100]
        fstp    dword ptr [esp + 0x100]
        fld     dword ptr [esp + 0x2c]
        fadd    st(0), st(1)
        fstp    dword ptr [esp + 0x11c]
        fstp    st(0)
        fld     dword ptr [esp + 0x10]
        fadd    dword ptr [esp + 0x120]
        fstp    dword ptr [esp + 0x120]
        fld     dword ptr [g_76c5b0]
        fcomp   dword ptr [esp + 0x1c]
        __emit 0xDF   /* fnstsw ax: no-WAIT form */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x40 */
        __emit 0xC4
        __emit 0x40
        jz      loc_6ea5
        push    0
        push    0
        push    0
        push    3
        call    FUN_00704a80
        mov     dword ptr [esp + 0xb4], eax
        mov     dword ptr [esp + 0xb8], 0
        fild    qword ptr [esp + 0xb4]
        fdivr   dword ptr [g_775980]
        fld     dword ptr [esp + 0xd4]
        fadd    st(0), st(1)
        fstp    dword ptr [esp + 0xd4]
        fld     dword ptr [esp + 0xd8]
        fadd    st(0), st(1)
        fstp    dword ptr [esp + 0xd8]
        fld     dword ptr [esp + 0xf4]
        fadd    st(0), st(1)
        fstp    dword ptr [esp + 0xf4]
        fld     dword ptr [esp + 0xf8]
        fadd    st(0), st(1)
        fstp    dword ptr [esp + 0xf8]
        fld     dword ptr [esp + 0x114]
        fadd    st(0), st(1)
        fstp    dword ptr [esp + 0x114]
        fld     dword ptr [esp + 0x118]
        fadd    st(0), st(1)
        fstp    dword ptr [esp + 0x118]
        fld     dword ptr [esp + 0x134]
        fadd    st(0), st(1)
        fstp    dword ptr [esp + 0x134]
        fld     dword ptr [esp + 0x138]
        fadd    st(0), st(1)
        fstp    dword ptr [esp + 0x138]
        fstp    st(0)
loc_6ea5:
        push    4
        lea     edx, [esp + 0xc0]
        push    edx
        call    FUN_00713ae0
        jmp     loc_6b47
loc_6eb9:
        or      esi, 0xffffffff
loc_6ebc:
        push    1
        push    7
        call    FUN_00713cc0
        fld     dword ptr [ebp + 0x34]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax: no-WAIT form */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x40 */
        __emit 0xC4
        __emit 0x40
        jnz     loc_6ed9
        push    1
        jmp     loc_6edb
loc_6ed9:
        push    0
loc_6edb:
        push    8
        call    FUN_00713cc0
        push    0
        push    9
        call    FUN_00713cc0
        push    0
        push    0xa
        call    FUN_00713cc0
        push    1
        push    4
        call    FUN_00713cc0
        push    0
        push    0xb
        call    FUN_00713cc0
        push    0
        push    6
        call    FUN_00713cc0
        push    0
        push    5
        call    FUN_00713cc0
        push    0
        push    0xc
        call    FUN_00713cc0
        push    1
        push    0xf
        call    FUN_00713cc0
        push    0
        push    0x12
        call    FUN_00713cc0
        mov     edi, dword ptr [ebp + 0xc]
        push    edi
        push    0xd
        call    FUN_00713cc0
        push    0
        push    0
        push    0
        push    0x1c
        call    FUN_00704a80
        test    eax, eax
        jz      loc_6f6f
        cmp     edi, 1
        jnz     loc_6f5c
        cmp     dword ptr [ebp + 8], esi
        jnz     loc_6f5c
        push    edi
        jmp     loc_6f71
loc_6f5c:
        mov     eax, dword ptr [ebp + 8]
        and     eax, 0xff000000
        cmp     eax, 0xff000000
        jnz     loc_6f6f
        push    2
        jmp     loc_6f71
loc_6f6f:
        push    3
loc_6f71:
        push    0x10
        call    FUN_00713cc0
        push    0
        push    0
        push    0
        push    2
        call    FUN_00704a80
        test    eax, eax
        mov     dword ptr [esp + 0x1c], 0
        jnz     loc_6f99
        mov     dword ptr [esp + 0x1c], 0x3f000000
loc_6f99:
        fild    dword ptr [esp + 0x298]
        fsub    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x10]
        fild    dword ptr [esp + 0x294]
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        mov     ecx, ebp
        fsub    dword ptr [esp + 0x20]
        fstp    dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x1c]
        push    edx
        call    FUN_006c7820
        test    al, al
        jz      loc_6fd5
        push    2
        push    0xb
        call    FUN_00713cc0
loc_6fd5:
        mov     eax, dword ptr [ebp + 0x44]
        mov     ebx, dword ptr [eax + 4]
        test    ebx, ebx
        mov     dword ptr [esp + 0x14], esi
        jz      loc_75c9
loc_6fe7:
        mov     esi, dword ptr [ebx + 0x84]
        cmp     dword ptr [esp + 0x14], esi
        jz      loc_6fff
        push    esi
        push    1
        call    FUN_00713cc0
        mov     dword ptr [esp + 0x14], esi
loc_6fff:
        mov     ecx, 8
        mov     esi, ebx
        lea     edi, [esp + 0x34]
        rep movsd
        fld     dword ptr [esp + 0x34]
        fsub    dword ptr [ebp + 0x18]
        lea     esi, [ebx + 0x20]
        fmul    dword ptr [ebp + 0x10]
        mov     ecx, 8
        lea     edi, [esp + 0x54]
        fstp    dword ptr [esp + 0x34]
        mov     eax, dword ptr [ebp + 8]
        fld     dword ptr [esp + 0x38]
        fsub    dword ptr [ebp + 0x1c]
        fmul    dword ptr [ebp + 0x14]
        fstp    dword ptr [esp + 0x38]
        fld     dword ptr [esp + 0x3c]
        fsub    dword ptr [ebp + 0x20]
        fstp    dword ptr [esp + 0x3c]
        rep movsd
        fld     dword ptr [esp + 0x54]
        fsub    dword ptr [ebp + 0x18]
        lea     esi, [ebx + 0x40]
        fmul    dword ptr [ebp + 0x10]
        mov     ecx, 8
        lea     edi, [esp + 0x74]
        fstp    dword ptr [esp + 0x54]
        fld     dword ptr [esp + 0x58]
        fsub    dword ptr [ebp + 0x1c]
        fmul    dword ptr [ebp + 0x14]
        fstp    dword ptr [esp + 0x58]
        fld     dword ptr [esp + 0x5c]
        fsub    dword ptr [ebp + 0x20]
        fstp    dword ptr [esp + 0x5c]
        rep movsd
        fld     dword ptr [esp + 0x74]
        fsub    dword ptr [ebp + 0x18]
        lea     esi, [ebx + 0x60]
        fmul    dword ptr [ebp + 0x10]
        mov     ecx, 8
        lea     edi, [esp + 0x94]
        fstp    dword ptr [esp + 0x74]
        fld     dword ptr [esp + 0x78]
        fsub    dword ptr [ebp + 0x1c]
        fmul    dword ptr [ebp + 0x14]
        fstp    dword ptr [esp + 0x78]
        fld     dword ptr [esp + 0x7c]
        fsub    dword ptr [ebp + 0x20]
        fstp    dword ptr [esp + 0x7c]
        rep movsd
        fld     dword ptr [esp + 0x94]
        fsub    dword ptr [ebp + 0x18]
        fmul    dword ptr [ebp + 0x10]
        fstp    dword ptr [esp + 0x94]
        fld     dword ptr [esp + 0x98]
        fsub    dword ptr [ebp + 0x1c]
        fmul    dword ptr [ebp + 0x14]
        fstp    dword ptr [esp + 0x98]
        fld     dword ptr [esp + 0x9c]
        fsub    dword ptr [ebp + 0x20]
        fstp    dword ptr [esp + 0x9c]
        lea     ecx, [esp + 0x154]
        mov     dword ptr [esp + 0xa4], eax
        mov     dword ptr [esp + 0x84], eax
        mov     dword ptr [esp + 0x64], eax
        mov     dword ptr [esp + 0x44], eax
        call    FUN_006ceae0
        lea     ecx, [esp + 0x194]
        call    FUN_006ceae0
        lea     ecx, [esp + 0x194]
        call    FUN_006ceb10
        fld     dword ptr [ebp + 0x30]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax: no-WAIT form */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x40 */
        __emit 0xC4
        __emit 0x40
        jnz     loc_71a7
        lea     ecx, [esp + 0x250]
        call    FUN_006ceae0
        lea     ecx, [esp + 0x250]
        call    FUN_006ceb10
        fld     dword ptr [ebp + 0x30]
        fcos
        push    ecx
        fstp    dword ptr [esp]
        fld     dword ptr [ebp + 0x30]
        push    ecx
        fsin
        lea     ecx, [esp + 0x258]
        fstp    dword ptr [esp]
        call    FUN_006ceb40
        lea     ecx, [esp + 0x154]
        push    ecx
        lea     edx, [esp + 0x254]
        push    edx
        lea     eax, [esp + 0x19c]
        push    eax
        call    FUN_006cec00
        lea     ecx, [esp + 0x154]
        push    ecx
        lea     ecx, [esp + 0x198]
        call    FUN_006ceaf0
        lea     ecx, [esp + 0x250]
        call    FUN_006ceb30
loc_71a7:
        fld     dword ptr [ebp + 0x34]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax: no-WAIT form */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x40 */
        __emit 0xC4
        __emit 0x40
        jnz     loc_722a
        lea     ecx, [esp + 0xbc]
        call    FUN_006ceae0
        lea     ecx, [esp + 0xbc]
        call    FUN_006ceb10
        fld     dword ptr [ebp + 0x34]
        fcos
        push    ecx
        fstp    dword ptr [esp]
        fld     dword ptr [ebp + 0x34]
        push    ecx
        fsin
        lea     ecx, [esp + 0xc4]
        fstp    dword ptr [esp]
        call    FUN_006ceb60
        lea     edx, [esp + 0x154]
        push    edx
        lea     eax, [esp + 0xc0]
        push    eax
        lea     ecx, [esp + 0x19c]
        push    ecx
        call    FUN_006cec00
        lea     edx, [esp + 0x154]
        push    edx
        lea     ecx, [esp + 0x198]
        call    FUN_006ceaf0
        lea     ecx, [esp + 0xbc]
        call    FUN_006ceb30
loc_722a:
        fld     dword ptr [ebp + 0x38]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax: no-WAIT form */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x40 */
        __emit 0xC4
        __emit 0x40
        jnz     loc_7299
        lea     ecx, [esp + 0x1d4]
        call    FUN_006ceae0
        lea     ecx, [esp + 0x1d4]
        call    FUN_006ceb10
        fld     dword ptr [ebp + 0x38]
        fcos
        push    ecx
        fstp    dword ptr [esp]
        fld     dword ptr [ebp + 0x38]
        push    ecx
        fsin
        lea     ecx, [esp + 0x1dc]
        fstp    dword ptr [esp]
        call    FUN_006ceb80
        lea     eax, [esp + 0x154]
        push    eax
        lea     ecx, [esp + 0x1d8]
        push    ecx
        lea     edx, [esp + 0x19c]
        push    edx
        call    FUN_006cec00
        lea     ecx, [esp + 0x1d4]
        call    FUN_006ceb30
loc_7299:
        fld     dword ptr [ebp + 0x30]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax: no-WAIT form */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x40 */
        __emit 0xC4
        __emit 0x40
        jz      loc_72c9
        fld     dword ptr [ebp + 0x34]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax: no-WAIT form */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x40 */
        __emit 0xC4
        __emit 0x40
        jz      loc_72c9
        fld     dword ptr [ebp + 0x38]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax: no-WAIT form */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x40 */
        __emit 0xC4
        __emit 0x40
        jnz     loc_733e
loc_72c9:
        lea     eax, [esp + 0x3c]
        push    eax
        lea     ecx, [esp + 0x3c]
        push    ecx
        lea     edx, [esp + 0x3c]
        push    edx
        lea     ecx, [esp + 0x160]
        call    FUN_006ceba0
        lea     eax, [esp + 0x5c]
        push    eax
        lea     ecx, [esp + 0x5c]
        push    ecx
        lea     edx, [esp + 0x5c]
        push    edx
        lea     ecx, [esp + 0x160]
        call    FUN_006ceba0
        lea     eax, [esp + 0x7c]
        push    eax
        lea     ecx, [esp + 0x7c]
        push    ecx
        lea     edx, [esp + 0x7c]
        push    edx
        lea     ecx, [esp + 0x160]
        call    FUN_006ceba0
        lea     eax, [esp + 0x9c]
        push    eax
        lea     ecx, [esp + 0x9c]
        push    ecx
        lea     edx, [esp + 0x9c]
        push    edx
        lea     ecx, [esp + 0x160]
        call    FUN_006ceba0
loc_733e:
        fld     dword ptr [esp + 0x3c]
        mov     dword ptr [esp + 0x3c], 0
        fadd    dword ptr [g_79e17c]
        fld     dword ptr [esp + 0x5c]
        fadd    dword ptr [g_79e17c]
        fstp    dword ptr [esp + 0x5c]
        fld     dword ptr [esp + 0x7c]
        fadd    dword ptr [g_79e17c]
        fstp    dword ptr [esp + 0x7c]
        fld     dword ptr [esp + 0x9c]
        fadd    dword ptr [g_79e17c]
        fstp    dword ptr [esp + 0x9c]
        fld     dword ptr [g_76d064]
        fdiv    st(0), st(1)
        fstp    dword ptr [esp + 0x40]
        fstp    st(0)
        fld     dword ptr [g_76d064]
        fdiv    dword ptr [esp + 0x5c]
        mov     dword ptr [esp + 0x5c], 0
        fstp    dword ptr [esp + 0x60]
        fld     dword ptr [g_76d064]
        fdiv    dword ptr [esp + 0x7c]
        mov     dword ptr [esp + 0x7c], 0
        fstp    dword ptr [esp + 0x80]
        fld     dword ptr [g_76d064]
        fdiv    dword ptr [esp + 0x9c]
        mov     dword ptr [esp + 0x9c], 0
        fstp    dword ptr [esp + 0xa0]
        fld     dword ptr [esp + 0x40]
        fmul    dword ptr [esp + 0x34]
        fmul    dword ptr [g_79e17c]
        fld     dword ptr [esp + 0x40]
        fmul    dword ptr [esp + 0x38]
        fmul    dword ptr [g_79e17c]
        fstp    dword ptr [esp + 0x38]
        fld     dword ptr [esp + 0x60]
        fmul    dword ptr [esp + 0x54]
        fmul    dword ptr [g_79e17c]
        fstp    dword ptr [esp + 0x54]
        fld     dword ptr [esp + 0x60]
        fmul    dword ptr [esp + 0x58]
        fmul    dword ptr [g_79e17c]
        fstp    dword ptr [esp + 0x58]
        fld     dword ptr [esp + 0x80]
        fmul    dword ptr [esp + 0x74]
        fmul    dword ptr [g_79e17c]
        fstp    dword ptr [esp + 0x74]
        fld     dword ptr [esp + 0x80]
        fmul    dword ptr [esp + 0x78]
        fmul    dword ptr [g_79e17c]
        fstp    dword ptr [esp + 0x78]
        fld     dword ptr [esp + 0xa0]
        fmul    dword ptr [esp + 0x94]
        fmul    dword ptr [g_79e17c]
        fstp    dword ptr [esp + 0x94]
        fld     dword ptr [esp + 0xa0]
        fmul    dword ptr [esp + 0x98]
        fmul    dword ptr [g_79e17c]
        fstp    dword ptr [esp + 0x98]
        fld     dword ptr [esp + 0x18]
        fadd    st(0), st(1)
        fstp    dword ptr [esp + 0x34]
        fstp    st(0)
        fld     dword ptr [esp + 0x10]
        fadd    dword ptr [esp + 0x38]
        fstp    dword ptr [esp + 0x38]
        fld     dword ptr [esp + 0x18]
        fadd    dword ptr [esp + 0x54]
        fstp    dword ptr [esp + 0x54]
        fld     dword ptr [esp + 0x10]
        fadd    dword ptr [esp + 0x58]
        fstp    dword ptr [esp + 0x58]
        fld     dword ptr [esp + 0x18]
        fadd    dword ptr [esp + 0x74]
        fstp    dword ptr [esp + 0x74]
        fld     dword ptr [esp + 0x10]
        fadd    dword ptr [esp + 0x78]
        fstp    dword ptr [esp + 0x78]
        fld     dword ptr [esp + 0x18]
        fadd    dword ptr [esp + 0x94]
        fstp    dword ptr [esp + 0x94]
        fld     dword ptr [esp + 0x10]
        fadd    dword ptr [esp + 0x98]
        fstp    dword ptr [esp + 0x98]
        fld     dword ptr [g_76c5b0]
        fcomp   dword ptr [esp + 0x1c]
        __emit 0xDF   /* fnstsw ax: no-WAIT form */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x40 */
        __emit 0xC4
        __emit 0x40
        jz      loc_7597
        push    0
        push    0
        push    0
        push    3
        call    FUN_00704a80
        mov     dword ptr [esp + 0xb4], eax
        mov     dword ptr [esp + 0xb8], 0
        fild    qword ptr [esp + 0xb4]
        fdivr   dword ptr [g_775980]
        fld     dword ptr [esp + 0x4c]
        fadd    st(0), st(1)
        fstp    dword ptr [esp + 0x4c]
        fld     dword ptr [esp + 0x50]
        fadd    st(0), st(1)
        fstp    dword ptr [esp + 0x50]
        fld     dword ptr [esp + 0x6c]
        fadd    st(0), st(1)
        fstp    dword ptr [esp + 0x6c]
        fld     dword ptr [esp + 0x70]
        fadd    st(0), st(1)
        fstp    dword ptr [esp + 0x70]
        fld     dword ptr [esp + 0x8c]
        fadd    st(0), st(1)
        fstp    dword ptr [esp + 0x8c]
        fld     dword ptr [esp + 0x90]
        fadd    st(0), st(1)
        fstp    dword ptr [esp + 0x90]
        fld     dword ptr [esp + 0xac]
        fadd    st(0), st(1)
        fstp    dword ptr [esp + 0xac]
        fld     dword ptr [esp + 0xb0]
        fadd    st(0), st(1)
        fstp    dword ptr [esp + 0xb0]
        fstp    st(0)
loc_7597:
        push    4
        lea     eax, [esp + 0x38]
        push    eax
        call    FUN_00713ae0
        mov     ebx, dword ptr [ebx + 0x80]
        lea     ecx, [esp + 0x194]
        call    FUN_006ceb30
        lea     ecx, [esp + 0x154]
        call    FUN_006ceb30
        test    ebx, ebx
        jnz     loc_6fe7
loc_75c9:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x280
        ret     8
    }
}
