/* FUN_007277f0 (0x007277F0, 1355 B)
 * Force-feedback effect update / clamping loop.
 * Iterates over a per-index (iVar10*32) table of float fields, clamps each
 * axis against the DAT_008816xx bounds, applies a global offset (add or
 * subtract depending on DAT_008b2520 bit 0x40), and optionally copies the
 * previous row forward. __stdcall, RET 0x4.
 */

extern int g_8806a4;      /* DAT_008806a4 */
extern int g_8806a0;      /* DAT_008806a0 */
extern char g_8b2520;     /* DAT_008b2520 */
extern int g_858940;      /* DAT_00858940 */
extern int g_858944;      /* DAT_00858944 */
extern int g_858950;      /* DAT_00858950 */
extern int g_87c21c;      /* DAT_0087c21c */
extern float g_8816a8;
extern float g_8816ac;
extern float g_8816b0;
extern float g_8816b4;
extern float g_8816b8;
extern float g_7b7110;
extern float g_76d070;
extern float g_76d064;
extern float g_76c5b0;

__declspec(naked) void __stdcall FUN_007277f0(char param_1)
{
    __asm {
        sub esp, 8
        push ebp
        mov ebp, dword ptr [g_8806a4]
        mov ecx, ebp
        shl ecx, 5

    L_top:                              /* 0x7277FF */
        fld dword ptr [ecx+0x8806c8]
        fcomp dword ptr [g_8816b8]
        fnstsw ax
        test ah, 1
        jnz L_else                      /* 0x72784F */
        fld dword ptr [ecx+0x880708]
        fcomp dword ptr [g_8816b0]
        fnstsw ax
        test ah, 41h
        jz L_else
        fld dword ptr [ecx+0x88070c]
        fcomp dword ptr [g_8816b4]
        fnstsw ax
        test ah, 1
        jnz L_else
        fld dword ptr [ecx+0x8806cc]
        fcomp dword ptr [g_8816ac]
        fnstsw ax
        test ah, 41h
        jnz L_7a48                      /* 0x727A48 */

    L_else:                             /* 0x72784F */
        fld dword ptr [ecx+0x8806c8]
        fcomp dword ptr [g_8816b0]
        fnstsw ax
        test ah, 41h
        jz L_ret                        /* 0x727D34 */
        fld dword ptr [ecx+0x880708]
        fcomp dword ptr [g_8816b8]
        fnstsw ax
        test ah, 1
        jnz L_ret
        fld dword ptr [ecx+0x88070c]
        fcomp dword ptr [g_8816ac]
        fnstsw ax
        test ah, 41h
        jz L_ret
        fld dword ptr [ecx+0x8806cc]
        fcomp dword ptr [g_8816b4]
        fnstsw ax
        test ah, 1
        jnz L_ret

        /* clamp 1 (0x7278AB) */
        fld dword ptr [ecx+0x880720]
        fsub dword ptr [ecx+0x8806e0]
        fld dword ptr [ecx+0x880724]
        fsub dword ptr [ecx+0x8806e4]
        fstp dword ptr [esp+8]
        fld dword ptr [ecx+0x880708]
        fsub dword ptr [ecx+0x8806c8]
        fld dword ptr [ecx+0x88070c]
        fsub dword ptr [ecx+0x8806cc]
        fstp dword ptr [esp+4]
        fld dword ptr [ecx+0x8806c8]
        fcomp dword ptr [g_8816b8]
        fnstsw ax
        test ah, 1
        jz L_27933                     /* 0x727933 */
        fld dword ptr [g_8816b8]
        mov eax, dword ptr [g_8816b8]
        fsub dword ptr [ecx+0x8806c8]
        mov edx, eax
        fmul st(0), st(2)
        fdiv st(0), st(1)
        fld st(0)
        fadd dword ptr [ecx+0x8806e0]
        fstp dword ptr [ecx+0x8806e0]
        fadd dword ptr [ecx+0x8806c0]
        fstp dword ptr [ecx+0x8806c0]
        mov dword ptr [ecx+0x8806c8], eax
        mov dword ptr [ecx+0x8806a8], edx
    L_27933:                            /* 0x727933 */
        fld dword ptr [ecx+0x88070c]
        fcomp dword ptr [g_8816b4]
        fnstsw ax
        test ah, 1
        jz L_27987                     /* 0x727987 */
        fld dword ptr [g_8816b4]
        mov eax, dword ptr [g_8816b4]
        fsub dword ptr [ecx+0x88070c]
        mov edx, eax
        fmul dword ptr [esp+8]
        fdiv dword ptr [esp+4]
        fld st(0)
        fadd dword ptr [ecx+0x880724]
        fstp dword ptr [ecx+0x880724]
        fadd dword ptr [ecx+0x8806c4]
        fstp dword ptr [ecx+0x8806c4]
        mov dword ptr [ecx+0x88070c], eax
        mov dword ptr [ecx+0x8806ac], edx
    L_27987:                            /* 0x727987 */
        fld dword ptr [ecx+0x880708]
        fcomp dword ptr [g_8816b0]
        fnstsw ax
        test ah, 41h
        jnz L_279e3                     /* 0x7279E3 */
        fld dword ptr [ecx+0x880708]
        mov eax, dword ptr [g_8816b0]
        fsub dword ptr [g_8816b0]
        mov edx, eax
        fmulp st(2), st(0)
        fxch
        fdiv st(0), st(1)
        fxch
        fstp st(0)
        fld dword ptr [ecx+0x880720]
        fsub st(0), st(1)
        fstp dword ptr [ecx+0x880720]
        fld dword ptr [ecx+0x880700]
        fsub st(0), st(1)
        fstp dword ptr [ecx+0x880700]
        mov dword ptr [ecx+0x880708], eax
        mov dword ptr [ecx+0x8806e8], edx
        fstp st(0)
        jmp L_279e7                     /* 0x7279E7 */
    L_279e3:                            /* 0x7279E3 */
        fstp st(0)
        fstp st(0)
    L_279e7:                            /* 0x7279E7 */
        fld dword ptr [ecx+0x8806cc]
        fcomp dword ptr [g_8816ac]
        fnstsw ax
        test ah, 41h
        jnz L_top                       /* 0x7277FF */
        fld dword ptr [ecx+0x8806cc]
        mov eax, dword ptr [g_8816ac]
        fsub dword ptr [g_8816ac]
        mov edx, eax
        fmul dword ptr [esp+8]
        fdiv dword ptr [esp+4]
        fld dword ptr [ecx+0x8806e4]
        fsub st(0), st(1)
        fstp dword ptr [ecx+0x8806e4]
        fld dword ptr [ecx+0x880704]
        fsub st(0), st(1)
        fstp dword ptr [ecx+0x880704]
        mov dword ptr [ecx+0x8806cc], eax
        mov dword ptr [ecx+0x8806ec], edx
        fstp st(0)
        jmp L_top                       /* 0x7277FF */

    L_7a48:                             /* 0x727A48 */
        test byte ptr [g_8b2520], 40h
        jz L_7aea                       /* 0x727AEA */
        fld dword ptr [g_8816a8]
        fadd dword ptr [ecx+0x8806c0]
        fstp dword ptr [ecx+0x8806c0]
        fld dword ptr [g_8816a8]
        fadd dword ptr [ecx+0x8806c4]
        fstp dword ptr [ecx+0x8806c4]
        fld dword ptr [g_8816a8]
        fadd dword ptr [ecx+0x8806e0]
        fstp dword ptr [ecx+0x8806e0]
        fld dword ptr [g_8816a8]
        fadd dword ptr [ecx+0x8806e4]
        fstp dword ptr [ecx+0x8806e4]
        fld dword ptr [g_8816a8]
        fadd dword ptr [ecx+0x880700]
        fstp dword ptr [ecx+0x880700]
        fld dword ptr [g_8816a8]
        fadd dword ptr [ecx+0x880704]
        fstp dword ptr [ecx+0x880704]
        fld dword ptr [g_8816a8]
        fadd dword ptr [ecx+0x880720]
        fstp dword ptr [ecx+0x880720]
        fld dword ptr [g_8816a8]
        fadd dword ptr [ecx+0x880724]
        fstp dword ptr [ecx+0x880724]
        jmp L_7b7a                      /* 0x727B7A */
    L_7aea:                             /* 0x727AEA */
        fld dword ptr [ecx+0x8806a8]
        fsub dword ptr [g_7b7110]
        fstp dword ptr [ecx+0x8806a8]
        fld dword ptr [ecx+0x8806ac]
        fsub dword ptr [g_7b7110]
        fstp dword ptr [ecx+0x8806ac]
        fld dword ptr [ecx+0x8806c8]
        fsub dword ptr [g_7b7110]
        fstp dword ptr [ecx+0x8806c8]
        fld dword ptr [ecx+0x8806cc]
        fsub dword ptr [g_7b7110]
        fstp dword ptr [ecx+0x8806cc]
        fld dword ptr [ecx+0x8806e8]
        fsub dword ptr [g_7b7110]
        fstp dword ptr [ecx+0x8806e8]
        fld dword ptr [ecx+0x8806ec]
        fsub dword ptr [g_7b7110]
        fstp dword ptr [ecx+0x8806ec]
        fld dword ptr [ecx+0x880708]
        fsub dword ptr [g_7b7110]
        fstp dword ptr [ecx+0x880708]
        fld dword ptr [ecx+0x88070c]
        fsub dword ptr [g_7b7110]
        fstp dword ptr [ecx+0x88070c]
    L_7b7a:                             /* 0x727B7A */
        fild dword ptr [g_858940]
        mov eax, dword ptr [g_858950]
        cmp eax, 3
        fstp dword ptr [esp+4]
        fild dword ptr [g_858944]
        fstp dword ptr [esp+8]
        jnz L_7bbe                      /* 0x727BBE */
        mov eax, dword ptr [g_87c21c]
        test ah, 1
        jz L_7bbe
        fld dword ptr [esp+4]
        fmul dword ptr [g_76d070]
        fstp dword ptr [esp+4]
        fld dword ptr [esp+8]
        fmul dword ptr [g_76d070]
        fstp dword ptr [esp+8]
    L_7bbe:                             /* 0x727BBE */
        fld dword ptr [ecx+0x8806c8]
        fadd dword ptr [g_76d064]
        fcomp dword ptr [esp+4]
        fnstsw ax
        test ah, 1
        jz L_ret                        /* 0x727D34 */
        fld dword ptr [ecx+0x880708]
        fcomp dword ptr [g_76c5b0]
        fnstsw ax
        test ah, 41h
        jnz L_ret
        fld dword ptr [ecx+0x88070c]
        fcomp dword ptr [esp+8]
        fnstsw ax
        test ah, 1
        jz L_ret
        fld dword ptr [ecx+0x8806cc]
        fcomp dword ptr [g_76c5b0]
        fnstsw ax
        test ah, 41h
        jnz L_ret
        fld dword ptr [ecx+0x8806c8]
        fcomp dword ptr [g_76c5b0]
        fnstsw ax
        test ah, 1
        jnz L_7c6a                      /* 0x727C6A */
        fld dword ptr [ecx+0x880708]
        fadd dword ptr [g_76d064]
        fcomp dword ptr [esp+4]
        fnstsw ax
        test ah, 41h
        jz L_7c6a
        fld dword ptr [ecx+0x88070c]
        fcomp dword ptr [g_76c5b0]
        fnstsw ax
        test ah, 1
        jnz L_7c6a
        fld dword ptr [ecx+0x8806cc]
        fcomp dword ptr [esp+8]
        fnstsw ax
        test ah, 41h
        jnz L_7c74                      /* 0x727C74 */
    L_7c6a:                             /* 0x727C6A */
        mov dword ptr [g_8806a0], 1
    L_7c74:                             /* 0x727C74 */
        mov al, byte ptr [esp+0x10]
        add ebp, 4
        test al, al
        mov dword ptr [g_8806a4], ebp
        jz L_ret                        /* 0x727D34 */
        push ebx
        push esi
        push edi
        mov eax, ebp
        shl eax, 5
        lea edx, [eax+0x8806a8]
        lea esi, [ebp-4]
        shl esi, 5
        add esi, 0x8806a8
        lea ebx, [eax+0x8806c8]
        mov ecx, 8
        mov edi, edx
        rep movsd
        lea esi, [ebp-3]
        shl esi, 5
        add esi, 0x8806a8
        mov edi, ebx
        mov ecx, 8
        rep movsd
        mov ecx, dword ptr [g_8806a4]
        lea esi, [ecx-2]
        lea ebp, [eax+0x8806e8]
        shl esi, 5
        add esi, 0x8806a8
        lea eax, [eax+0x880708]
        mov ecx, 8
        mov edi, ebp
        rep movsd
        mov edi, eax
        lea esi, [edx-0x20]
        mov ecx, 8
        rep movsd
        fld dword ptr [edx]
        fadd dword ptr [g_76d064]
        fstp dword ptr [edx]
        fld dword ptr [ebx]
        fadd dword ptr [g_76d064]
        fstp dword ptr [ebx]
        fld dword ptr [ebp]
        fadd dword ptr [g_76d064]
        pop edi
        pop esi
        pop ebx
        fstp dword ptr [ebp]
        fld dword ptr [eax]
        fadd dword ptr [g_76d064]
        fstp dword ptr [eax]
        mov eax, dword ptr [g_8806a4]
        add eax, 4
        mov dword ptr [g_8806a4], eax

    L_ret:                              /* 0x727D34 */
        pop ebp
        add esp, 8
        ret 4
    }
}
