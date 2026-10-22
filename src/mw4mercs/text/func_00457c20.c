/*
 * FUN_00457c20 (1540 B) — MLR (MidLevelRenderer) mesh buffer-resize +
 * render setup. __thiscall-style (arg in [esp+4] after prologue).
 *
 * Resizes several vector<type> buffers (0xc/1/8-byte elements) on the
 * mesh object, builds a 3-entry matrix table from globals, then drives
 * the render pipeline via virtual calls (vtable +0xc/+0x14/+0x24/+0x88/
 * +0x94/+0x2c) and FPU vertex transforms. Outer loop over a global table
 * (0x7b2314..0x7b2404).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int    g_7b9590;    /* 0x007b9590 */
extern int    g_7da724;    /* 0x007da724 */
extern int    g_7b958c;    /* 0x007b958c */
extern double g_76e3e8;    /* 0x0076e3e8 */
extern void  *g_76b2ec;    /* IAT 0x0076b2ec (ceil) */
extern int    g_7da5f0;    /* 0x007da5f0 */
extern int    g_7b98e0;    /* 0x007b98e0 */
extern int    g_7b2284;    /* 0x007b2284 */
extern int    g_7b2288;    /* 0x007b2288 */
extern int    g_7b228c;    /* 0x007b228c */
extern int    g_7b220c;    /* 0x007b220c */
extern float  g_76d064;    /* 0x0076d064 */
extern float  g_76d070;    /* 0x0076d070 */
extern char   g_7b2314;    /* 0x007b2314 */
extern char   g_7b2404;    /* 0x007b2404 */

extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00487830(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_0075db86(void);   /* _CIpow */
extern void __cdecl FUN_0075db4a(void);   /* _ftol */
extern void __cdecl FUN_00455070(void);
extern void __cdecl FUN_0040ccd0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0047f1b0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0041c540(void);
extern void __cdecl FUN_0040c2e0(void);
extern void __cdecl FUN_004555e0(void);
extern void __cdecl FUN_00487ce0(void);

__declspec(naked) void FUN_00457c20(void)
{
    __asm {
        mov     eax, dword ptr [g_7b9590]
        sub     esp, 0x68
        push    eax
        call    FUN_006f4950
        push    0x20
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_457c52
        mov     ecx, dword ptr [g_7da724]
        push    ecx
        push    0x14
        mov     ecx, eax
        call    FUN_00487830
        mov     dword ptr [esp+0x14], eax
        jmp     L_457c5a
    L_457c52:
        mov     dword ptr [esp+0x14], 0x0
    L_457c5a:
        push    ebx
        push    ebp
        push    esi
        push    edi
        call    FUN_006f49a0
        mov     edx, dword ptr [g_7b958c]
        push    edx
        call    FUN_006f4950
        fld     qword ptr [g_76e3e8]
        mov     esi, dword ptr [esp+0x7c]
        mov     eax, dword ptr [esi+0x4]
        mov     dword ptr [esp+0x2c], eax
        fild    dword ptr [esp+0x2c]
        call    FUN_0075db86
        fmul    dword ptr [esi+0x10]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        call    dword ptr [g_76b2ec]
        add     esp, 0x8
        call    FUN_0075db4a
        lea     ecx, [eax+eax*2]
        cmp     ecx, 0x100
        mov     dword ptr [esp+0x28], eax
        jl      L_457cb8
        mov     eax, 0x55
        mov     dword ptr [esp+0x28], eax
    L_457cb8:
        lea     edx, [eax+eax*2]
        mov     dword ptr [esp+0x18], edx
        mov     dword ptr [esp+0x30], offset g_7b2314
    L_457cc7:
        xor     edi, edi
        push    0xa8
        mov     dword ptr [g_7da5f0], edi
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, edi
        jz      L_457cf0
        mov     ecx, dword ptr [g_7b98e0]
        push    ecx
        mov     ecx, eax
        call    FUN_00455070
        mov     edi, eax
    L_457cf0:
        mov     ebp, dword ptr [edi+0xc]
        mov     esi, dword ptr [ebp+0x14]
        mov     ebx, dword ptr [esp+0x18]
        cmp     ebx, esi
        mov     dword ptr [esp+0x20], edi
        mov     dword ptr [esp+0x10], ebp
        jz      L_457dae
        test    ebx, ebx
        jbe     L_457d98
        lea     edx, [ebx+ebx*2]
        shl     edx, 0x2
        push    edx
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_457d32
        lea     ecx, [ebx-1]
        mov     dword ptr [esp+0x38], ecx
        mov     dword ptr [esp+0x1c], eax
        jmp     L_457d3a
    L_457d32:
        mov     dword ptr [esp+0x1c], 0x0
    L_457d3a:
        mov     ecx, dword ptr [ebp+0x10]
        test    ecx, ecx
        mov     dword ptr [esp+0x14], ecx
        jz      L_457d8f
        cmp     ebx, esi
        mov     eax, ebx
        jc      L_457d4d
        mov     eax, esi
    L_457d4d:
        mov     edx, eax
        dec     eax
        test    edx, edx
        jz      L_457d82
        mov     ecx, dword ptr [esp+0x1c]
        mov     ebp, dword ptr [esp+0x14]
        lea     edx, [eax+eax*2]
        lea     esi, [ecx+edx*4]
        sub     ebp, ecx
        lea     ebx, [eax+1]
    L_457d67:
        lea     eax, [esi+ebp]
        push    eax
        mov     ecx, esi
        call    FUN_0040ccd0
        dec     ebx
        sub     esi, 0xc
        test    ebx, ebx
        ja      L_457d67
        mov     ecx, dword ptr [esp+0x14]
        mov     ebx, dword ptr [esp+0x18]
    L_457d82:
        push    ecx
        call    FUN_004084e0
        mov     ebp, dword ptr [esp+0x14]
        add     esp, 0x4
    L_457d8f:
        mov     ecx, dword ptr [esp+0x1c]
        mov     dword ptr [ebp+0x10], ecx
        jmp     L_457dab
    L_457d98:
        mov     edx, dword ptr [ebp+0x10]
        push    edx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebp+0x10], 0x0
    L_457dab:
        mov     dword ptr [ebp+0x14], ebx
    L_457dae:
        cmp     ebx, dword ptr [ebp+0x4]
        jz      L_457e14
        test    ebx, ebx
        jbe     L_457dfe
        push    ebx
        call    FUN_004084d0
        mov     esi, dword ptr [ebp]
        add     esp, 0x4
        test    esi, esi
        mov     dword ptr [esp+0x1c], eax
        jz      L_457df5
        mov     eax, dword ptr [ebp+0x4]
        cmp     ebx, eax
        jnc     L_457dd4
        mov     eax, ebx
    L_457dd4:
        mov     ecx, eax
        dec     eax
        test    ecx, ecx
        jz      L_457dec
        mov     ecx, dword ptr [esp+0x1c]
    L_457ddf:
        mov     dl, byte ptr [esi+eax]
        mov     byte ptr [eax+ecx], dl
        mov     edx, eax
        dec     eax
        test    edx, edx
        jnz     L_457ddf
    L_457dec:
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
    L_457df5:
        mov     eax, dword ptr [esp+0x1c]
        mov     dword ptr [ebp], eax
        jmp     L_457e11
    L_457dfe:
        mov     ecx, dword ptr [ebp]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebp], 0x0
    L_457e11:
        mov     dword ptr [ebp+0x4], ebx
    L_457e14:
        cmp     ebx, dword ptr [ebp+0x1c]
        jz      L_457ea2
        test    ebx, ebx
        jbe     L_457e8c
        lea     edx, [ebx*8+0]
        push    edx
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_457e40
        lea     ecx, [ebx-1]
        mov     dword ptr [esp+0x38], ecx
        mov     esi, eax
        jmp     L_457e42
    L_457e40:
        xor     esi, esi
    L_457e42:
        mov     ecx, dword ptr [ebp+0x18]
        test    ecx, ecx
        mov     dword ptr [esp+0x1c], esi
        jz      L_457e87
        mov     edx, dword ptr [ebp+0x1c]
        cmp     ebx, edx
        jnc     L_457e56
        mov     edx, ebx
    L_457e56:
        mov     eax, edx
        dec     edx
        test    eax, eax
        jz      L_457e7b
        lea     eax, [esi+edx*8]
        sub     ecx, esi
        inc     edx
    L_457e63:
        mov     esi, dword ptr [ecx+eax]
        mov     dword ptr [eax], esi
        mov     esi, dword ptr [ecx+eax+4]
        mov     dword ptr [eax+4], esi
        dec     edx
        sub     eax, 0x8
        test    edx, edx
        ja      L_457e63
        mov     esi, dword ptr [esp+0x1c]
    L_457e7b:
        mov     eax, dword ptr [ebp+0x18]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_457e87:
        mov     dword ptr [ebp+0x18], esi
        jmp     L_457e9f
    L_457e8c:
        mov     ecx, dword ptr [ebp+0x18]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebp+0x18], 0x0
    L_457e9f:
        mov     dword ptr [ebp+0x1c], ebx
    L_457ea2:
        mov     ebp, dword ptr [esp+0x30]
        lea     ecx, [esp+0x58]
        mov     edx, 0x3
    L_457eaf:
        mov     eax, dword ptr [ebp]
        lea     eax, [eax+eax*2]
        shl     eax, 0x2
        mov     esi, dword ptr [eax+g_7b2284]
        mov     dword ptr [ecx-4], esi
        mov     esi, dword ptr [eax+g_7b2288]
        mov     eax, dword ptr [eax+g_7b228c]
        mov     dword ptr [ecx], esi
        mov     dword ptr [ecx+4], eax
        add     ebp, 0x4
        add     ecx, 0xc
        dec     edx
        jnz     L_457eaf
        mov     ecx, dword ptr [esp+0x7c]
        mov     edx, dword ptr [ecx+0xc]
        mov     eax, dword ptr [esp+0x2c]
        mov     esi, dword ptr [esp+0x10]
        push    edx
        mov     dword ptr [esp+0x3c], ebp
        mov     ebp, dword ptr [esp+0x2c]
        push    ebp
        push    eax
        lea     ecx, [esp+0x78]
        push    ecx
        mov     ecx, dword ptr [esi+0x10]
        lea     edx, [esp+0x70]
        push    edx
        lea     eax, [esp+0x68]
        push    eax
        lea     eax, [esi+0x10]
        push    ecx
        mov     dword ptr [esp+0x38], eax
        call    FUN_0047f1b0
        mov     edx, dword ptr [edi]
        add     esp, 0x1c
        push    0x1
        push    ebp
        push    0x0
        mov     ecx, edi
        call    dword ptr [edx+0xc]
        mov     eax, dword ptr [esp+0x7c]
        cmp     byte ptr [eax+0x8], 0x1
        jnz     L_45806c
        lea     ecx, [ebx+ebx*2]
        shl     ecx, 0x2
        push    ecx
        mov     ebp, 0x1
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_457f56
        lea     edx, [ebx-1]
        mov     dword ptr [esp+0x34], edx
        mov     dword ptr [esp+0x14], eax
        jmp     L_457f5e
    L_457f56:
        mov     dword ptr [esp+0x14], 0x0
    L_457f5e:
        mov     eax, dword ptr [esp+0x1c]
        mov     esi, dword ptr [eax]
        mov     ecx, dword ptr [esp+0x14]
        push    esi
        call    FUN_0040c410
        mov     ecx, dword ptr [esp+0x10]
        mov     edx, dword ptr [ecx]
        mov     ecx, 0x1
        cmp     ebx, ecx
        mov     dword ptr [esp+0x34], edx
        mov     byte ptr [edx], 0x0
        mov     dword ptr [esp+0x30], ecx
        jle     L_457ffe
        mov     eax, dword ptr [esp+0x14]
        add     eax, 0xc
        mov     dword ptr [esp+0x1c], eax
        add     esi, 0xc
        xor     ebx, ebx
    L_457f96:
        test    ebp, ebp
        jle     L_457fc5
        mov     edi, dword ptr [esp+0x14]
    L_457fa0:
        mov     ecx, dword ptr [g_7b220c]
        push    ecx
        push    edi
        push    esi
        call    FUN_0041c540
        add     esp, 0xc
        test    al, al
        jnz     L_457fbd
        inc     ebx
        add     edi, 0xc
        cmp     ebx, ebp
        jl      L_457fa0
    L_457fbd:
        mov     edx, dword ptr [esp+0x34]
        mov     ecx, dword ptr [esp+0x30]
    L_457fc5:
        cmp     ebx, ebp
        jnz     L_457fe7
        mov     edi, dword ptr [esp+0x1c]
        mov     eax, edi
        inc     ebp
        add     edi, 0xc
        mov     dword ptr [esp+0x1c], edi
        mov     edi, dword ptr [esi]
        mov     dword ptr [eax], edi
        mov     edi, dword ptr [esi+0x4]
        mov     dword ptr [eax+0x4], edi
        mov     edi, dword ptr [esi+0x8]
        mov     dword ptr [eax+0x8], edi
    L_457fe7:
        mov     eax, dword ptr [esp+0x18]
        mov     byte ptr [edx+ecx], bl
        inc     ecx
        add     esi, 0xc
        cmp     ecx, eax
        mov     dword ptr [esp+0x30], ecx
        __emit 0x7C   /* __emit: MSVC6 miscomputes backward jl rel8 (off-by-2) when a call-reloc sits between branch and target */
        __emit 0x9C
        mov     edi, dword ptr [esp+0x20]
    L_457ffe:
        mov     edx, dword ptr [esp+0x10]
        lea     esi, [edx+0x10]
        push    ebp
        mov     ecx, esi
        call    FUN_0040c2e0
        mov     eax, dword ptr [esi+0x4]
        test    eax, eax
        jbe     L_458040
        mov     esi, dword ptr [esi]
        mov     ebx, dword ptr [esp+0x14]
        sub     ebx, esi
        mov     edi, eax
    L_45801e:
        lea     eax, [ebx+esi]
        push    eax
        mov     ecx, esi
        call    FUN_0040c410
        add     esi, 0xc
        dec     edi
        jnz     L_45801e
        mov     esi, dword ptr [esp+0x80]
        mov     ebx, dword ptr [esp+0x10]
        mov     edi, dword ptr [esp+0x20]
        jmp     L_45804b
    L_458040:
        mov     esi, dword ptr [esp+0x80]
        mov     ebx, dword ptr [esp+0x10]
    L_45804b:
        mov     edx, dword ptr [edi]
        lea     eax, [ebx+0x10]
        mov     dword ptr [esp+0x1c], eax
        mov     eax, dword ptr [eax]
        push    ebp
        push    eax
        mov     ecx, edi
        call    dword ptr [edx+0x24]
        mov     ecx, dword ptr [esp+0x14]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        jmp     L_45809c
    L_45806c:
        xor     eax, eax
        test    ebx, ebx
        mov     ebp, ebx
        jle     L_45807e
        mov     ecx, dword ptr [esi]
    L_458076:
        mov     byte ptr [ecx+eax], al
        inc     eax
        cmp     eax, ebx
        jl      L_458076
    L_45807e:
        mov     eax, dword ptr [esi+0x10]
        mov     edx, dword ptr [edi]
        add     esi, 0x10
        push    ebx
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp+0x24], esi
        call    dword ptr [edx+0x24]
        mov     esi, dword ptr [esp+0x80]
        mov     ebx, dword ptr [esp+0x10]
    L_45809c:
        mov     eax, dword ptr [esp+0x18]
        mov     ecx, dword ptr [ebx]
        mov     edx, dword ptr [edi]
        push    eax
        push    ecx
        mov     ecx, edi
        call    dword ptr [edx+0x88]
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx+0x94]
        test    esi, esi
        jnz     L_4580e3
        test    ebp, ebp
        jle     L_4581a3
        mov     eax, dword ptr [ebx+0x18]
        mov     dword ptr [esp+0x3c], esi
        mov     dword ptr [esp+0x40], esi
        mov     ecx, ebp
        mov     edx, esi
    L_4580d3:
        mov     dword ptr [eax], edx
        mov     dword ptr [eax+0x4], esi
        add     eax, 0x8
        dec     ecx
        jnz     L_4580d3
        jmp     L_4581a3
    L_4580e3:
        mov     eax, dword ptr [esi+0x4]
        mov     edx, dword ptr [esi+0x10]
        or      edx, 0x3c00
        and     eax, 0xffffd3ff
        push    0x0
        or      eax, 0x1000
        mov     dword ptr [esi+0x10], edx
        mov     edx, dword ptr [edi]
        push    esi
        mov     ecx, edi
        mov     dword ptr [esi+0x4], eax
        call    dword ptr [edx+0x14]
        mov     edx, dword ptr [esi+0x4]
        mov     ecx, dword ptr [esi+0x10]
        mov     eax, dword ptr [esi]
        and     edx, 0xffffc3ff
        or      ecx, 0x3c00
        test    eax, 0x3fff
        mov     dword ptr [esi+0x4], edx
        mov     dword ptr [esi+0x10], ecx
        jbe     L_458177
        test    ebp, ebp
        jle     L_4581a3
        mov     eax, dword ptr [esp+0x1c]
        mov     ecx, dword ptr [ebx+0x18]
        mov     eax, dword ptr [eax]
        mov     edx, ebp
    L_458139:
        fld     dword ptr [eax]
        add     eax, 0xc
        fadd    dword ptr [g_76d064]
        add     ecx, 0x8
        dec     edx
        fmul    dword ptr [g_76d070]
        fstp    dword ptr [esp+0x44]
        fld     dword ptr [eax-8]
        mov     esi, dword ptr [esp+0x44]
        fadd    dword ptr [g_76d064]
        mov     dword ptr [ecx-8], esi
        fmul    dword ptr [g_76d070]
        fstp    dword ptr [esp+0x48]
        mov     esi, dword ptr [esp+0x48]
        mov     dword ptr [ecx-4], esi
        jnz     L_458139
        jmp     L_4581a3
    L_458177:
        test    ebp, ebp
        jle     L_4581a3
        mov     eax, dword ptr [ebx+0x18]
        mov     dword ptr [esp+0x4c], 0x0
        mov     edx, dword ptr [esp+0x4c]
        mov     dword ptr [esp+0x50], 0x0
        mov     esi, dword ptr [esp+0x50]
        mov     ecx, ebp
    L_458198:
        mov     dword ptr [eax], edx
        mov     dword ptr [eax+0x4], esi
        add     eax, 0x8
        dec     ecx
        jnz     L_458198
    L_4581a3:
        mov     eax, dword ptr [ebx+0x18]
        mov     edx, dword ptr [edi]
        push    ebp
        push    eax
        mov     ecx, edi
        call    dword ptr [edx+0x2c]
        push    0x428c0000
        push    0x42480000
        push    0x3f800000
        push    0x3f800000
        push    0x0
        push    0x0
        mov     ecx, edi
        call    FUN_004555e0
        mov     eax, dword ptr [esp+0x84]
        mov     edx, dword ptr [edi]
        push    0x1
        push    eax
        mov     ecx, edi
        call    dword ptr [edx+0x14]
        mov     ecx, dword ptr [esp+0x24]
        push    edi
        call    FUN_00487ce0
        dec     word ptr [edi+0x8]
        cmp     word ptr [edi+0x8], 0x0
        jnz     L_458200
        test    edi, edi
        jz      L_458200
        mov     edx, dword ptr [edi]
        push    0x1
        mov     ecx, edi
        call    dword ptr [edx]
    L_458200:
        mov     eax, dword ptr [esp+0x38]
        cmp     eax, offset g_7b2404
        mov     dword ptr [esp+0x30], eax
        jl      L_457cc7
        call    FUN_006f49a0
        mov     eax, dword ptr [esp+0x24]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x68
        ret
    }
}
