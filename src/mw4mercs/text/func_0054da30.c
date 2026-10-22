/*
 * FUN_0054da30 (3695 B) — terrain/geometry update routine (__thiscall,
 * RET 0x8, one double arg). Heavy FPU: clamps/accumulates heading/pitch
 * (0x2d4/0x2d8/0x2dc/0x2e0), integrates 0x418/0x420 double accumulators,
 * and does a large tail that resolves a target vector against a list
 * (0x384+0x40c/0x410) with virtual calls (vtable+0xc0, +0x110) and
 * FUN_005eaf00.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0077d094;   /* 0x0077d094 */
extern float g_0076d064;   /* 0x0076d064 */
extern float g_0076d598;   /* 0x0076d598 */
extern float g_0077d090;   /* 0x0077d090 */
extern double g_0076d968;  /* 0x0076d968 */
extern double g_0076d588;  /* 0x0076d588 */
extern float g_0076c5b0;   /* 0x0076c5b0 */
extern float g_0076ed00;   /* 0x0076ed00 */
extern double g_0077d088;  /* 0x0077d088 */
extern float g_007704c0;   /* 0x007704c0 */
extern float g_0077d084;   /* 0x0077d084 */
extern int g_007b46c4;     /* 0x007b46c4 */
extern float g_0077b990;   /* 0x0077b990 */

extern void __cdecl FUN_005eaf00(void);

__declspec(naked) void FUN_0054da30(void)
{
    __asm {
        push    ecx
        fld     qword ptr [esp + 0x8]
        push    ebx
        push    ebp
        fld     st(0)
        push    esi
        mov     esi, ecx
        fsub    qword ptr [esi + 0xe4]
        mov     eax, dword ptr [esi + 0x3d4]
        xor     ebx, ebx
        cmp     eax, ebx
        fstp    dword ptr [esp + 0xc]
        push    edi
        mov     ebp, 0x3e4ccccd
        jle     L54dade
        mov     ecx, dword ptr [esi + 0x384]
        mov     al, byte ptr [ecx + 0x2f8]
        test    al, al
        jnz     L54dade
        mov     eax, dword ptr [ecx]
        fstp    st(0)
        call    dword ptr [eax + 0xc0]
        test    al, al
        jnz     L54dada
        fld     dword ptr [esi + 0x5a4]
        fcomp   dword ptr [g_0077d094]
        fnstsw  ax
        test    ah, 0x1
        jz      L54da95
        mov     dword ptr [esi + 0x5a4], ebp
        jmp     L54dab2
L54da95:
        fld     dword ptr [esi + 0x5a4]
        fcomp   dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L54dab2
        mov     dword ptr [esi + 0x5a4], 0x3f800000
L54dab2:
        fld     dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esi + 0x5a4]
        fadd    dword ptr [esi + 0x5a4]
        mov     dword ptr [esi + 0x2d8], ecx
        mov     dword ptr [esi + 0x5a0], ebx
        fstp    dword ptr [esi + 0x5a4]
        fld     qword ptr [esp + 0x18]
        jmp     L54dae4
L54dada:
        fld     qword ptr [esp + 0x18]
L54dade:
        mov     dword ptr [esi + 0x5a4], ebx
L54dae4:
        cmp     dword ptr [esi + 0x3d8], ebx
        jle     L54db76
        mov     ecx, dword ptr [esi + 0x384]
        mov     al, byte ptr [ecx + 0x2f8]
        test    al, al
        jnz     L54db76
        mov     edx, dword ptr [ecx]
        fstp    st(0)
        call    dword ptr [edx + 0xc0]
        test    al, al
        jnz     L54db72
        fld     dword ptr [esi + 0x5a0]
        fcomp   dword ptr [g_0076d598]
        fnstsw  ax
        test    ah, 0x1
        jz      L54db2d
        mov     dword ptr [esi + 0x5a0], 0xbf800000
        jmp     L54db4a
L54db2d:
        fld     dword ptr [esi + 0x5a0]
        fcomp   dword ptr [g_0077d090]
        fnstsw  ax
        test    ah, 0x41
        jnz     L54db4a
        mov     dword ptr [esi + 0x5a0], 0xbe4ccccd
L54db4a:
        fld     dword ptr [esi + 0x5a0]
        mov     eax, dword ptr [esi + 0x5a0]
        fsub    dword ptr [esp + 0x10]
        mov     dword ptr [esi + 0x2d8], eax
        mov     dword ptr [esi + 0x5a4], ebx
        fstp    dword ptr [esi + 0x5a0]
        fld     qword ptr [esp + 0x18]
        jmp     L54db7c
L54db72:
        fld     qword ptr [esp + 0x18]
L54db76:
        mov     dword ptr [esi + 0x5a0], ebx
L54db7c:
        cmp     dword ptr [esi + 0x3a8], ebx
        mov     edi, 0x3f000000
        jle     L54db94
        mov     dword ptr [esi + 0x2d4], ebx
        jmp     L54dc5b
L54db94:
        cmp     dword ptr [esi + 0x3ac], ebx
        jle     L54dbab
        mov     dword ptr [esi + 0x2d4], 0x3dcccccd
        jmp     L54dc5b
L54dbab:
        cmp     dword ptr [esi + 0x3b0], ebx
        jle     L54dbbe
        mov     dword ptr [esi + 0x2d4], ebp
        jmp     L54dc5b
L54dbbe:
        cmp     dword ptr [esi + 0x3b4], ebx
        jle     L54dbd5
        mov     dword ptr [esi + 0x2d4], 0x3e99999a
        jmp     L54dc5b
L54dbd5:
        cmp     dword ptr [esi + 0x3b8], ebx
        jle     L54dbe9
        mov     dword ptr [esi + 0x2d4], 0x3ecccccd
        jmp     L54dc5b
L54dbe9:
        cmp     dword ptr [esi + 0x3bc], ebx
        jle     L54dbf9
        mov     dword ptr [esi + 0x2d4], edi
        jmp     L54dc5b
L54dbf9:
        cmp     dword ptr [esi + 0x3c0], ebx
        jle     L54dc0d
        mov     dword ptr [esi + 0x2d4], 0x3f19999a
        jmp     L54dc5b
L54dc0d:
        cmp     dword ptr [esi + 0x3c4], ebx
        jle     L54dc21
        mov     dword ptr [esi + 0x2d4], 0x3f333333
        jmp     L54dc5b
L54dc21:
        cmp     dword ptr [esi + 0x3c8], ebx
        jle     L54dc35
        mov     dword ptr [esi + 0x2d4], 0x3f4ccccd
        jmp     L54dc5b
L54dc35:
        cmp     dword ptr [esi + 0x3cc], ebx
        jle     L54dc49
        mov     dword ptr [esi + 0x2d4], 0x3f666666
        jmp     L54dc5b
L54dc49:
        cmp     dword ptr [esi + 0x3d0], ebx
        jle     L54dc5b
        mov     dword ptr [esi + 0x2d4], 0x3f800000
L54dc5b:
        mov     al, byte ptr [esi + 0x5ac]
        test    al, al
        jz      L54dd85
        cmp     dword ptr [esi + 0x5b8], 0x1
        jz      L54dc7f
        fstp    st(0)
        mov     dword ptr [esi + 0x2d4], ebx
        jmp     L54e00e
L54dc7f:
        mov     ecx, dword ptr [esi + 0x3dc]
        cmp     ecx, ebx
        jnz     L54dca2
        fcom    qword ptr [esi + 0x418]
        fnstsw  ax
        test    ah, 0x1
        jz      L54dca2
        fst     qword ptr [esi + 0x418]
        mov     dword ptr [esi + 0x2d4], ebx
L54dca2:
        mov     edx, dword ptr [esi + 0x3e0]
        cmp     edx, ebx
        jnz     L54dcc5
        fcom    qword ptr [esi + 0x420]
        fnstsw  ax
        test    ah, 0x1
        jz      L54dcc5
        fst     qword ptr [esi + 0x420]
        mov     dword ptr [esi + 0x2d4], ebx
L54dcc5:
        cmp     ecx, ebx
        jle     L54dd16
        fld     st(0)
        fsub    qword ptr [g_0076d968]
        fcom    qword ptr [esi + 0x418]
        fnstsw  ax
        test    ah, 0x41
        jnz     L54dce6
        fstp    qword ptr [esi + 0x418]
        jmp     L54dce8
L54dce6:
        fstp    st(0)
L54dce8:
        fcom    qword ptr [esi + 0x418]
        fnstsw  ax
        test    ah, 0x41
        jnz     L54dd16
L54dcf5:
        fld     qword ptr [esi + 0x418]
        mov     dword ptr [esi + 0x2d4], edi
        fadd    qword ptr [g_0076d588]
        fst     qword ptr [esi + 0x418]
        fcomp
        fnstsw  ax
        test    ah, 0x1
        jnz     L54dcf5
L54dd16:
        cmp     edx, ebx
        jle     L54e00c
        fld     st(0)
        fsub    qword ptr [g_0076d968]
        fcom    qword ptr [esi + 0x420]
        fnstsw  ax
        test    ah, 0x41
        jnz     L54dd3b
        fstp    qword ptr [esi + 0x420]
        jmp     L54dd3d
L54dd3b:
        fstp    st(0)
L54dd3d:
        fcom    qword ptr [esi + 0x420]
        fnstsw  ax
        test    ah, 0x41
        jnz     L54e00c
        fld     qword ptr [esi + 0x420]
        mov     edx, dword ptr [esi + 0x2d4]
        mov     ecx, 0xbf000000
L54dd5f:
        fadd    qword ptr [g_0076d588]
        mov     edx, ecx
        fld     st(0)
        fxch
        fcomp   st(2)
        fnstsw  ax
        test    ah, 0x1
        jnz     L54dd5f
        fstp    qword ptr [esi + 0x420]
        mov     dword ptr [esi + 0x2d4], edx
        jmp     L54e00c
L54dd85:
        cmp     dword ptr [esi + 0x3dc], ebx
        jle     L54dec9
        fld     st(0)
        fsub    qword ptr [g_0076d968]
        fcom    qword ptr [esi + 0x418]
        fnstsw  ax
        test    ah, 0x41
        jnz     L54ddae
        fstp    qword ptr [esi + 0x418]
        jmp     L54ddb0
L54ddae:
        fstp    st(0)
L54ddb0:
        fcom    qword ptr [esi + 0x418]
        fnstsw  ax
        test    ah, 0x41
        jnz     L54dec9
        mov     ecx, 0x3f800000
L54ddc6:
        fld     dword ptr [esi + 0x2d4]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      L54dde0
        mov     eax, 0x1
        jmp     L54ddfd
L54dde0:
        fld     dword ptr [esi + 0x2d4]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        mov     eax, 0x2
        jnz     L54ddfd
        mov     eax, 0x3
L54ddfd:
        dec     eax
        jz      L54de66
        dec     eax
        jz      L54de38
        dec     eax
        jnz     L54de91
        fld     dword ptr [esi + 0x2d4]
        fadd    dword ptr [g_0076ed00]
        fcom    dword ptr [g_0076c5b0]
        fst     dword ptr [esi + 0x2d4]
        fnstsw  ax
        test    ah, 0x41
        jnz     L54de8f
        fcomp   dword ptr [esi + 0x63c]
        fnstsw  ax
        test    ah, 0x1
        jz      L54de91
        jmp     L54de66
L54de38:
        fld     dword ptr [esi + 0x2d4]
        fadd    dword ptr [g_0076ed00]
        fcom    dword ptr [g_0076c5b0]
        fst     dword ptr [esi + 0x2d4]
        fnstsw  ax
        test    ah, 0x41
        jnz     L54de7a
        fcom    dword ptr [esi + 0x63c]
        fnstsw  ax
        test    ah, 0x1
        jz      L54de7a
        fstp    st(0)
L54de66:
        fld     dword ptr [esi + 0x63c]
        fadd    dword ptr [g_0076ed00]
        fstp    dword ptr [esi + 0x2d4]
        jmp     L54de91
L54de7a:
        fcomp   dword ptr [esi + 0x640]
        fnstsw  ax
        test    ah, 0x41
        jnz     L54de91
        mov     dword ptr [esi + 0x2d4], ebx
        jmp     L54de91
L54de8f:
        fstp    st(0)
L54de91:
        fld     dword ptr [esi + 0x2d4]
        fcomp   dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L54deaa
        mov     dword ptr [esi + 0x2d4], ecx
L54deaa:
        fld     qword ptr [esi + 0x418]
        fadd    qword ptr [g_0077d088]
        fst     qword ptr [esi + 0x418]
        fcomp
        fnstsw  ax
        test    ah, 0x1
        jnz     L54ddc6
L54dec9:
        cmp     dword ptr [esi + 0x3e0], ebx
        jle     L54e00c
        fld     st(0)
        fsub    qword ptr [g_0076d968]
        fcom    qword ptr [esi + 0x420]
        fnstsw  ax
        test    ah, 0x41
        jnz     L54def2
        fstp    qword ptr [esi + 0x420]
        jmp     L54def4
L54def2:
        fstp    st(0)
L54def4:
        fcom    qword ptr [esi + 0x420]
        fnstsw  ax
        test    ah, 0x41
        jnz     L54e00c
L54df05:
        fld     dword ptr [esi + 0x2d4]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      L54df1f
        mov     eax, 0x1
        jmp     L54df3c
L54df1f:
        fld     dword ptr [esi + 0x2d4]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        mov     eax, 0x2
        jnz     L54df3c
        mov     eax, 0x3
L54df3c:
        dec     eax
        jz      L54df77
        dec     eax
        jz      L54dfa0
        dec     eax
        jnz     L54dfd0
        fld     dword ptr [esi + 0x2d4]
        fsub    dword ptr [g_0076ed00]
        fcom    dword ptr [g_0076c5b0]
        fst     dword ptr [esi + 0x2d4]
        fnstsw  ax
        test    ah, 0x1
        jz      L54df8b
        fcom    dword ptr [esi + 0x640]
        fnstsw  ax
        test    ah, 0x41
        jnz     L54df8b
        fstp    st(0)
L54df77:
        fld     dword ptr [esi + 0x640]
        fsub    dword ptr [g_0076ed00]
        fstp    dword ptr [esi + 0x2d4]
        jmp     L54dfd0
L54df8b:
        fcomp   dword ptr [esi + 0x63c]
        fnstsw  ax
        test    ah, 0x1
        jz      L54dfd0
        mov     dword ptr [esi + 0x2d4], ebx
        jmp     L54dfd0
L54dfa0:
        fld     dword ptr [esi + 0x2d4]
        fsub    dword ptr [g_0076ed00]
        fcom    dword ptr [g_0076c5b0]
        fst     dword ptr [esi + 0x2d4]
        fnstsw  ax
        test    ah, 0x1
        jz      L54dfce
        fcomp   dword ptr [esi + 0x640]
        fnstsw  ax
        test    ah, 0x41
        jnz     L54dfd0
        jmp     L54df77
L54dfce:
        fstp    st(0)
L54dfd0:
        fld     dword ptr [esi + 0x2d4]
        fcomp   dword ptr [g_0076d598]
        fnstsw  ax
        test    ah, 0x1
        jz      L54dfed
        mov     dword ptr [esi + 0x2d4], 0xbf800000
L54dfed:
        fld     qword ptr [esi + 0x420]
        fadd    qword ptr [g_0077d088]
        fst     qword ptr [esi + 0x420]
        fcomp
        fnstsw  ax
        test    ah, 0x1
        jnz     L54df05
L54e00c:
        fstp    st(0)
L54e00e:
        mov     eax, dword ptr [esi + 0x45c]
        cmp     eax, ebx
        jg      L54e051
        cmp     dword ptr [esi + 0x460], ebx
        jg      L54e04d
        cmp     dword ptr [esi + 0x464], ebx
        jg      L54e04d
        cmp     dword ptr [esi + 0x468], ebx
        jg      L54e04d
        mov     dword ptr [esi + 0x590], ebx
        mov     dword ptr [esi + 0x594], ebx
        mov     dword ptr [esi + 0x59c], ebx
        mov     dword ptr [esi + 0x598], ebx
        jmp     L54e239
L54e04d:
        cmp     eax, ebx
        jle     L54e0c1
L54e051:
        mov     ecx, dword ptr [esi + 0x384]
        mov     al, byte ptr [ecx + 0x2f8]
        test    al, al
        jnz     L54e0c1
        fld     dword ptr [esi + 0x590]
        fcomp   dword ptr [g_0076d598]
        fnstsw  ax
        test    ah, 0x1
        jz      L54e080
        mov     dword ptr [esi + 0x590], 0xbf800000
        jmp     L54e09d
L54e080:
        fld     dword ptr [esi + 0x590]
        fcomp   dword ptr [g_0077d090]
        fnstsw  ax
        test    ah, 0x41
        jnz     L54e09d
        mov     dword ptr [esi + 0x590], 0xbe4ccccd
L54e09d:
        fld     dword ptr [esi + 0x590]
        mov     edx, dword ptr [esi + 0x590]
        fsub    dword ptr [esp + 0x10]
        mov     dword ptr [esi + 0x2e0], edx
        mov     dword ptr [esi + 0x594], ebx
        fstp    dword ptr [esi + 0x590]
        jmp     L54e0c7
L54e0c1:
        mov     dword ptr [esi + 0x590], ebx
L54e0c7:
        cmp     dword ptr [esi + 0x460], ebx
        jle     L54e13b
        mov     eax, dword ptr [esi + 0x384]
        mov     cl, byte ptr [eax + 0x2f8]
        test    cl, cl
        jnz     L54e13b
        fld     dword ptr [esi + 0x594]
        fcomp   dword ptr [g_0077d094]
        fnstsw  ax
        test    ah, 0x1
        jz      L54e0fa
        mov     dword ptr [esi + 0x594], ebp
        jmp     L54e117
L54e0fa:
        fld     dword ptr [esi + 0x594]
        fcomp   dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L54e117
        mov     dword ptr [esi + 0x594], 0x3f800000
L54e117:
        fld     dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esi + 0x594]
        fadd    dword ptr [esi + 0x594]
        mov     dword ptr [esi + 0x2e0], ecx
        mov     dword ptr [esi + 0x590], ebx
        fstp    dword ptr [esi + 0x594]
        jmp     L54e141
L54e13b:
        mov     dword ptr [esi + 0x594], ebx
L54e141:
        cmp     dword ptr [esi + 0x464], ebx
        jle     L54e1b5
        mov     edx, dword ptr [esi + 0x384]
        mov     al, byte ptr [edx + 0x2f8]
        test    al, al
        jnz     L54e1b5
        fld     dword ptr [esi + 0x598]
        fcomp   dword ptr [g_0077d094]
        fnstsw  ax
        test    ah, 0x1
        jz      L54e174
        mov     dword ptr [esi + 0x598], ebp
        jmp     L54e191
L54e174:
        fld     dword ptr [esi + 0x598]
        fcomp   dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L54e191
        mov     dword ptr [esi + 0x598], 0x3f800000
L54e191:
        fld     dword ptr [esp + 0x10]
        mov     eax, dword ptr [esi + 0x598]
        fadd    dword ptr [esi + 0x598]
        mov     dword ptr [esi + 0x2dc], eax
        mov     dword ptr [esi + 0x59c], ebx
        fstp    dword ptr [esi + 0x598]
        jmp     L54e1bb
L54e1b5:
        mov     dword ptr [esi + 0x598], ebx
L54e1bb:
        cmp     dword ptr [esi + 0x468], ebx
        jle     L54e233
        mov     ecx, dword ptr [esi + 0x384]
        mov     al, byte ptr [ecx + 0x2f8]
        test    al, al
        jnz     L54e233
        fld     dword ptr [esi + 0x59c]
        fcomp   dword ptr [g_0076d598]
        fnstsw  ax
        test    ah, 0x1
        jz      L54e1f2
        mov     dword ptr [esi + 0x59c], 0xbf800000
        jmp     L54e20f
L54e1f2:
        fld     dword ptr [esi + 0x59c]
        fcomp   dword ptr [g_0077d090]
        fnstsw  ax
        test    ah, 0x41
        jnz     L54e20f
        mov     dword ptr [esi + 0x59c], 0xbe4ccccd
L54e20f:
        fld     dword ptr [esi + 0x59c]
        mov     edx, dword ptr [esi + 0x59c]
        fsub    dword ptr [esp + 0x10]
        mov     dword ptr [esi + 0x2dc], edx
        mov     dword ptr [esi + 0x598], ebx
        fstp    dword ptr [esi + 0x59c]
        jmp     L54e239
L54e233:
        mov     dword ptr [esi + 0x59c], ebx
L54e239:
        cmp     dword ptr [esi + 0x408], ebx
        jle     L54e24d
        mov     dword ptr [esi + 0x2e4], 0x1
        jmp     L54e28f
L54e24d:
        cmp     dword ptr [esi + 0x40c], ebx
        jle     L54e261
        mov     dword ptr [esi + 0x2e4], 0x2
        jmp     L54e28f
L54e261:
        cmp     dword ptr [esi + 0x410], ebx
        jle     L54e275
        mov     dword ptr [esi + 0x2e4], 0x3
        jmp     L54e28f
L54e275:
        cmp     dword ptr [esi + 0x414], ebx
        jle     L54e289
        mov     dword ptr [esi + 0x2e4], 0x4
        jmp     L54e28f
L54e289:
        mov     dword ptr [esi + 0x2e4], ebx
L54e28f:
        fld     dword ptr [esi + 0x36c]
        mov     eax, dword ptr [esi + 0x2d4]
        fcomp   dword ptr [g_0076c5b0]
        mov     dword ptr [esi + 0x558], eax
        fnstsw  ax
        test    ah, 0x41
        jnz     L54e2f2
        fld     dword ptr [esi + 0x378]
        fadd    dword ptr [esi + 0x2dc]
        fcom    dword ptr [g_0076d598]
        fst     dword ptr [esi + 0x2dc]
        fnstsw  ax
        test    ah, 0x1
        jz      L54e2db
        fstp    st(0)
        mov     dword ptr [esi + 0x2dc], 0xbf800000
        jmp     L54e2f2
L54e2db:
        fcomp   dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L54e2f2
        mov     dword ptr [esi + 0x2dc], 0x3f800000
L54e2f2:
        fld     dword ptr [esi + 0x370]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jnz     L54e349
        fld     dword ptr [esi + 0x37c]
        fadd    dword ptr [esi + 0x2e0]
        fcom    dword ptr [g_0076d598]
        fst     dword ptr [esi + 0x2e0]
        fnstsw  ax
        test    ah, 0x1
        jz      L54e332
        fstp    st(0)
        mov     dword ptr [esi + 0x2e0], 0xbf800000
        jmp     L54e349
L54e332:
        fcomp   dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L54e349
        mov     dword ptr [esi + 0x2e0], 0x3f800000
L54e349:
        fld     dword ptr [esi + 0x374]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jnz     L54e3a0
        fld     dword ptr [esi + 0x380]
        fadd    dword ptr [esi + 0x2d8]
        fcom    dword ptr [g_0076d598]
        fst     dword ptr [esi + 0x2d8]
        fnstsw  ax
        test    ah, 0x1
        jz      L54e389
        fstp    st(0)
        mov     dword ptr [esi + 0x2d8], 0xbf800000
        jmp     L54e3a0
L54e389:
        fcomp   dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L54e3a0
        mov     dword ptr [esi + 0x2d8], 0x3f800000
L54e3a0:
        fld     dword ptr [esp + 0x10]
        fadd    dword ptr [esi + 0x6c4]
        fstp    dword ptr [esi + 0x6c4]
        fld     dword ptr [esi + 0x2e0]
        fcomp   dword ptr [g_007704c0]
        fnstsw  ax
        test    ah, 0x41
        jz      L54e3d6
        fld     dword ptr [esi + 0x2e0]
        fcomp   dword ptr [g_0077d084]
        fnstsw  ax
        test    ah, 0x1
        jz      L54e3ea
L54e3d6:
        cmp     dword ptr [esi + 0x4b4], ebx
        mov     dword ptr [esi + 0x6c4], ebx
        jnz     L54e3ea
        mov     dword ptr [esi + 0x6c0], ebx
L54e3ea:
        fld     dword ptr [esi + 0x2d8]
        fcomp   dword ptr [g_007704c0]
        fnstsw  ax
        test    ah, 0x41
        jz      L54e410
        fld     dword ptr [esi + 0x2d8]
        fcomp   dword ptr [g_0077d084]
        fnstsw  ax
        test    ah, 0x1
        jz      L54e43b
L54e410:
        mov     ecx, dword ptr [esi + 0x6c0]
        mov     eax, 0x2
        cmp     ecx, eax
        jz      L54e427
        cmp     dword ptr [g_007b46c4], eax
        jnz     L54e43b
L54e427:
        cmp     dword ptr [esi + 0x4b4], ebx
        mov     dword ptr [esi + 0x6c4], ebx
        jnz     L54e43b
        mov     dword ptr [esi + 0x6c0], ebx
L54e43b:
        mov     edx, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [edx + 0x4]
        mov     edi, dword ptr [esi + 0x384]
        mov     edx, dword ptr [edi + 0x40c]
        mov     ebp, eax
        mov     eax, dword ptr [edi + 0x410]
        sub     eax, edx
        sar     eax, 0x2
        jz      L54e897
        mov     ecx, edx
        cmp     dword ptr [ecx], ebx
        jz      L54e897
        mov     eax, dword ptr [g_007b46c4]
        cmp     eax, 0x1
        jz      L54e754
        mov     ecx, dword ptr [esi + 0x6c0]
        cmp     ecx, 0x1
        jz      L54e754
        cmp     eax, 0x2
        jz      L54e4a2
        cmp     ecx, 0x2
        jz      L54e4a2
L54e494:
        pop     edi
        mov     dword ptr [esi + 0x6c0], ebx
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x8
L54e4a2:
        fld     dword ptr [esi + 0x6c4]
        fcomp   dword ptr [ebp + 0x8c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L54e4c8
        fld     dword ptr [edi + 0x444]
        fcomp   dword ptr [esi + 0x334]
        fnstsw  ax
        test    ah, 0x1
        jnz     L54e4cd
L54e4c8:
        cmp     ecx, 0x2
        jnz     L54e494
L54e4cd:
        mov     edx, dword ptr [edi + 0x410]
        mov     ecx, dword ptr [edi + 0x40c]
        sub     edx, ecx
        sar     edx, 0x2
        jz      L54e4e6
        mov     eax, ecx
        mov     eax, dword ptr [eax]
        jmp     L54e4e8
L54e4e6:
        xor     eax, eax
L54e4e8:
        fld     dword ptr [eax + 0x198]
        fabs
        fld     dword ptr [g_0077b990]
        fadd    st(0), st(0)
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jz      L54e494
        mov     ecx, dword ptr [edi + 0x410]
        mov     edx, dword ptr [edi + 0x40c]
        sub     ecx, edx
        sar     ecx, 0x2
        jz      L54e518
        mov     ecx, dword ptr [edx]
        jmp     L54e51a
L54e518:
        xor     ecx, ecx
L54e51a:
        call    FUN_005eaf00
        fstp    dword ptr [esp + 0x18]
        mov     al, byte ptr [esi + 0x5ac]
        test    al, al
        jz      L54e535
        mov     dword ptr [esp + 0x18], 0x0
L54e535:
        mov     bl, byte ptr [esi + 0x586]
        test    bl, bl
        jz      L54e54b
        fld     dword ptr [esp + 0x18]
        fmul    dword ptr [ebp + 0x94]
        jmp     L54e55c
L54e54b:
        mov     al, byte ptr [esi + 0x584]
        test    al, al
        jz      L54e560
        fld     dword ptr [esp + 0x18]
        fmul    dword ptr [ebp + 0x68]
L54e55c:
        fstp    dword ptr [esp + 0x18]
L54e560:
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax + 0x110]
        test    bl, bl
        jz      L54e576
        fmul    dword ptr [ebp + 0x98]
        jmp     L54e583
L54e576:
        mov     al, byte ptr [esi + 0x584]
        test    al, al
        jz      L54e583
        fmul    dword ptr [ebp + 0x6c]
L54e583:
        fld     dword ptr [esp + 0x18]
        fcomp
        fnstsw  ax
        test    ah, 0x41
        jnz     L54e675
        fdiv    dword ptr [esp + 0x18]
        mov     ecx, dword ptr [edi + 0x410]
        mov     edx, dword ptr [edi + 0x40c]
        sub     ecx, edx
        sar     ecx, 0x2
        fstp    dword ptr [esp + 0x10]
        jz      L54e5b3
        mov     eax, dword ptr [edx]
        jmp     L54e5b5
L54e5b3:
        xor     eax, eax
L54e5b5:
        fld     dword ptr [eax + 0x198]
        fdiv    dword ptr [esp + 0x18]
        fchs
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      L54e5d0
        fchs
L54e5d0:
        fcom    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L54e5e5
        fstp    st(0)
        fld     dword ptr [g_0076d064]
L54e5e5:
        mov     eax, dword ptr [edi + 0x410]
        mov     edx, dword ptr [edi + 0x40c]
        sub     eax, edx
        sar     eax, 0x2
        jz      L54e5fe
        mov     ecx, edx
        mov     eax, dword ptr [ecx]
        jmp     L54e600
L54e5fe:
        xor     eax, eax
L54e600:
        fld     dword ptr [eax + 0x198]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jnz     L54e627
        fld     st(0)
        fmul    dword ptr [esp + 0x10]
        fchs
        fstp    dword ptr [esi + 0x2e0]
        fst     dword ptr [esi + 0x2d8]
L54e627:
        mov     edx, dword ptr [edi + 0x410]
        mov     ecx, dword ptr [edi + 0x40c]
        sub     edx, ecx
        sar     edx, 0x2
        jz      L54e640
        mov     eax, ecx
        mov     eax, dword ptr [eax]
        jmp     L54e642
L54e640:
        xor     eax, eax
L54e642:
        fld     dword ptr [eax + 0x198]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L54e895
        fld     st(0)
        pop     edi
        fmul    dword ptr [esp + 0xc]
        fstp    dword ptr [esi + 0x2e0]
        fchs
        fstp    dword ptr [esi + 0x2d8]
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x8
L54e675:
        fld     dword ptr [esp + 0x18]
        mov     ecx, dword ptr [edi + 0x410]
        fdiv    st(0), st(1)
        mov     edx, dword ptr [edi + 0x40c]
        sub     ecx, edx
        sar     ecx, 0x2
        fstp    dword ptr [esp + 0x18]
        jz      L54e696
        mov     eax, dword ptr [edx]
        jmp     L54e698
L54e696:
        xor     eax, eax
L54e698:
        fdivr   dword ptr [eax + 0x198]
        fchs
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      L54e6af
        fchs
L54e6af:
        fcom    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L54e6c4
        fstp    st(0)
        fld     dword ptr [g_0076d064]
L54e6c4:
        mov     eax, dword ptr [edi + 0x410]
        mov     edx, dword ptr [edi + 0x40c]
        sub     eax, edx
        sar     eax, 0x2
        jz      L54e6dd
        mov     ecx, edx
        mov     eax, dword ptr [ecx]
        jmp     L54e6df
L54e6dd:
        xor     eax, eax
L54e6df:
        fld     dword ptr [eax + 0x198]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jnz     L54e708
        fld     st(0)
        fchs
        fstp    dword ptr [esi + 0x2e0]
        fld     st(0)
        fmul    dword ptr [esp + 0x18]
        fstp    dword ptr [esi + 0x2d8]
L54e708:
        mov     edx, dword ptr [edi + 0x410]
        mov     ecx, dword ptr [edi + 0x40c]
        sub     edx, ecx
        sar     edx, 0x2
        jz      L54e721
        mov     eax, ecx
        mov     eax, dword ptr [eax]
        jmp     L54e723
L54e721:
        xor     eax, eax
L54e723:
        fld     dword ptr [eax + 0x198]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L54e895
        fst     dword ptr [esi + 0x2e0]
        pop     edi
        fmul    dword ptr [esp + 0x14]
        fchs
        fstp    dword ptr [esi + 0x2d8]
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x8
L54e754:
        fld     dword ptr [esi + 0x6c4]
        fcomp   dword ptr [ebp + 0x8c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L54e77a
        fld     dword ptr [edi + 0x444]
        fcomp   dword ptr [esi + 0x334]
        fnstsw  ax
        test    ah, 0x1
        jnz     L54e787
L54e77a:
        cmp     dword ptr [esi + 0x6c0], 0x1
        jnz     L54e494
L54e787:
        mov     ecx, dword ptr [edi + 0x410]
        mov     edx, dword ptr [edi + 0x40c]
        sub     ecx, edx
        sar     ecx, 0x2
        jz      L54e79e
        mov     eax, dword ptr [edx]
        jmp     L54e7a0
L54e79e:
        xor     eax, eax
L54e7a0:
        fld     dword ptr [eax + 0x198]
        fabs
        fld     dword ptr [g_0077b990]
        fadd    st(0), st(0)
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jz      L54e494
        mov     eax, dword ptr [edi + 0x410]
        mov     edx, dword ptr [edi + 0x40c]
        sub     eax, edx
        sar     eax, 0x2
        jz      L54e7d4
        mov     ecx, edx
        mov     ebx, dword ptr [ecx]
L54e7d4:
        mov     edx, dword ptr [edi + 0x410]
        mov     ecx, dword ptr [edi + 0x40c]
        sub     edx, ecx
        sar     edx, 0x2
        jz      L54e7ed
        mov     eax, ecx
        mov     ecx, dword ptr [eax]
        jmp     L54e7ef
L54e7ed:
        xor     ecx, ecx
L54e7ef:
        call    FUN_005eaf00
        fmul    dword ptr [ebp + 0x68]
        fdivr   dword ptr [ebx + 0x198]
        fchs
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      L54e80e
        fchs
L54e80e:
        fcom    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L54e823
        fstp    st(0)
        fld     dword ptr [g_0076d064]
L54e823:
        mov     ecx, dword ptr [edi + 0x410]
        mov     edx, dword ptr [edi + 0x40c]
        sub     ecx, edx
        sar     ecx, 0x2
        jz      L54e83a
        mov     eax, dword ptr [edx]
        jmp     L54e83c
L54e83a:
        xor     eax, eax
L54e83c:
        fld     dword ptr [eax + 0x198]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jnz     L54e859
        fld     st(0)
        fchs
        fstp    dword ptr [esi + 0x2e0]
L54e859:
        mov     eax, dword ptr [edi + 0x410]
        mov     edx, dword ptr [edi + 0x40c]
        sub     eax, edx
        sar     eax, 0x2
        jz      L54e872
        mov     ecx, edx
        mov     eax, dword ptr [ecx]
        jmp     L54e874
L54e872:
        xor     eax, eax
L54e874:
        fld     dword ptr [eax + 0x198]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L54e895
        pop     edi
        fstp    dword ptr [esi + 0x2e0]
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x8
L54e895:
        fstp    st(0)
L54e897:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x8
    }
}
