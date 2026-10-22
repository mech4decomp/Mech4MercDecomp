/*
 * FUN_00431d00 (1842 B) — MLR __thiscall render/lighting function. Heavy FPU
 * matrix/light math, virtual calls (vtable +0x4, +0x98, +0xb0), and helpers
 * FUN_00491cd0 / FUN_00421f00 / FUN_00455680. Falls back to FUN_00455680 when
 * the object is not initialized.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void  __cdecl FUN_00491cd0(void);
extern void  __cdecl FUN_00421f00(void);
extern void  __cdecl FUN_00455680(void);

extern int    g_007b9574;
extern int    g_007da848;
extern int    g_007da864;
extern int    g_007da5f4;
extern int    g_007da600;
extern char   g_007da86c;
extern int    g_007b2210;
extern int    g_007d98fc;
extern float  g_0076d064;
extern float  g_007da87c;
extern float  g_007da874;
extern float  g_007da878;
extern float  g_007da870;
extern float  g_0076d070;
extern float  g_0076dd60;

__declspec(naked) void FUN_00431d00(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x2c
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx+0xb0]
        push    edi
        xor     edi, edi
        cmp     eax, edi
        jz      L_43240f
        cmp     dword ptr [eax+4], edi
        jz      L_43240f
        cmp     dword ptr [g_007b9574], edi
        ja      L_43240f
        mov     eax, dword ptr [ebx+0x24]
        and     eax, 0x3fff
        push    esi
        mov     byte ptr [ebp+0x17], 0
        mov     dword ptr [ebp-0x10], edi
        mov     dword ptr [ebp-0x14], edi
        jz      L_431dfd
        cmp     eax, edi
        jle     L_431dfd
        mov     ecx, dword ptr [g_007da848]
        mov     esi, dword ptr [ecx+eax*4+0x24]
        cmp     esi, edi
        jz      L_431dfd
        mov     edx, dword ptr [esi]
        push    edi
        mov     ecx, esi
        call    dword ptr [edx+4]
        mov     ecx, eax
        call    FUN_00491cd0
        cmp     eax, 0x100
        jl      L_431d84
        mov     dword ptr [g_007da864], 1
        jmp     L_431ddf
L_431d84:
        cmp     eax, 0x80
        jl      L_431d97
        mov     dword ptr [g_007da864], 2
        jmp     L_431ddf
L_431d97:
        cmp     eax, 0x40
        jl      L_431da8
        mov     dword ptr [g_007da864], 4
        jmp     L_431ddf
L_431da8:
        cmp     eax, 0x20
        jl      L_431db9
        mov     dword ptr [g_007da864], 8
        jmp     L_431ddf
L_431db9:
        cmp     eax, 0x10
        jl      L_431dca
        mov     dword ptr [g_007da864], 0x10
        jmp     L_431ddf
L_431dca:
        xor     ecx, ecx
        cmp     eax, 8
        setl    cl
        dec     ecx
        and     ecx, 0xffffffe0
        add     ecx, 0x40
        mov     dword ptr [g_007da864], ecx
L_431ddf:
        mov     al, byte ptr [esi+0x24]
        test    al, al
        jnz     L_431e0c
        mov     esi, dword ptr [esi+0x28]
        cmp     esi, edi
        jz      L_431e0c
        mov     edx, dword ptr [esi+0xc]
        mov     eax, dword ptr [esi+0x1c]
        mov     byte ptr [ebp+0x17], 1
        mov     dword ptr [ebp-0x10], edx
        mov     dword ptr [ebp-0x14], eax
L_431dfd:
        mov     dl, byte ptr [ebp+0x18]
        test    dl, dl
        jz      L_431e12
        mov     esi, dword ptr [ebp+0xc]
        mov     eax, dword ptr [esi+0x38]
        jmp     L_431e24
L_431e0c:
        mov     byte ptr [ebp+0x17], 0
        jmp     L_431dfd
L_431e12:
        mov     ecx, dword ptr [ebp+0xc]
        mov     eax, dword ptr [ecx+4]
        mov     ecx, dword ptr [ecx+0x18]
        mov     esi, dword ptr [ebp+0xc]
        lea     eax, [eax+eax*4]
        lea     eax, [ecx+eax*8]
L_431e24:
        mov     dword ptr [ebx+0xa4], eax
        mov     eax, dword ptr [ebx+0x68]
        and     eax, 0x3fff
        mov     dword ptr [ebp-0x18], 0
        mov     dword ptr [ebp-0x1c], 0
        jz      L_431e6e
        cmp     eax, edi
        jle     L_431e6e
        mov     ecx, dword ptr [g_007da848]
        mov     eax, dword ptr [ecx+eax*4+0x24]
        cmp     eax, edi
        jz      L_431e6e
        mov     cl, byte ptr [eax+0x24]
        test    cl, cl
        jnz     L_431e6e
        mov     eax, dword ptr [eax+0x28]
        cmp     eax, edi
        jz      L_431e6e
        mov     ecx, dword ptr [eax+0xc]
        mov     eax, dword ptr [eax+0x1c]
        mov     dword ptr [ebp-0x18], ecx
        mov     dword ptr [ebp-0x1c], eax
L_431e6e:
        mov     eax, dword ptr [ebx+0x18]
        cmp     eax, 0x100
        mov     dword ptr [ebp-0xc], eax
        jle     L_431e82
        mov     dword ptr [ebp-0xc], 0x100
L_431e82:
        test    dl, dl
        jz      L_431e8b
        mov     eax, dword ptr [esi+0x30]
        jmp     L_431e95
L_431e8b:
        mov     eax, dword ptr [esi]
        mov     ecx, dword ptr [esi+0x10]
        shl     eax, 5
        add     eax, ecx
L_431e95:
        test    dl, dl
        mov     dword ptr [ebx+0x44], eax
        jz      L_431ea1
        mov     eax, dword ptr [esi+0x38]
        jmp     L_431ead
L_431ea1:
        mov     eax, dword ptr [esi+4]
        lea     ecx, [eax+eax*4]
        mov     eax, dword ptr [esi+0x18]
        lea     eax, [eax+ecx*8]
L_431ead:
        cmp     word ptr [ebx+0x56], di
        mov     dword ptr [ebx+0xa4], eax
        mov     word ptr [ebx+0xa], di
        jnz     L_431eca
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [edx+0x98]
        mov     dl, byte ptr [ebp+0x18]
L_431eca:
        mov     ecx, dword ptr [ebp-0xc]
        xor     eax, eax
        cmp     ecx, eax
        mov     dword ptr [ebp-4], eax
        jle     L_4321fe
        mov     dword ptr [ebp-8], eax
L_431edd:
        mov     eax, dword ptr [g_007da600]
        mov     ecx, dword ptr [eax]
        cmp     byte ptr [ecx+edi], 0
        jnz     L_431ef2
        inc     dword ptr [ebp-4]
        jmp     L_4321e9
L_431ef2:
        mov     ecx, dword ptr [ebp-4]
        mov     eax, dword ptr [g_007da5f4]
        mov     edx, edi
        sub     edx, ecx
        mov     dword ptr [eax+edi*2], edx
        test    byte ptr [g_007da86c], 2
        jle     L_432072
        mov     eax, dword ptr [ebx+0x28]
        __emit 0xF6 /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x3C
        jz      L_432072
        cmp     dword ptr [g_007b2210], 1
        jnz     L_432072
        mov     ecx, dword ptr [ebx+0x1c]
        fld     dword ptr [ebx+0x9c]
        fmul    dword ptr [ecx+edi*8]
        mov     eax, dword ptr [ebp-8]
        mov     edx, dword ptr [ebx+0x14]
        lea     esi, [ecx+edi*8]
        fadd    dword ptr [ebx+0x94]
        mov     ecx, dword ptr [ebx+0xa4]
        add     edx, eax
        xor     eax, eax
        mov     ax, word ptr [ebx+0xa]
        fstp    dword ptr [ebp-0x2c]
        fld     dword ptr [esi+4]
        mov     dword ptr [ebp-0x24], edx
        fmul    dword ptr [ebx+0xa0]
        fadd    dword ptr [ebx+0x98]
        lea     eax, [eax+eax*4]
        lea     ecx, [ecx+eax*8]
        fstp    dword ptr [ebp-0x28]
        mov     dword ptr [ebp-0x20], ecx
        mov     edx, dword ptr [ebp+8]
        mov     eax, dword ptr [ebp-0x24]
        fld     dword ptr [eax]
        fld     dword ptr [eax+4]
        fld     dword ptr [eax+8]
        mov     eax, dword ptr [ebp-0x20]
        fld     dword ptr [edx+0x34]
        fmul    st(0), st(2)
        fld     dword ptr [edx+0x38]
        fmul    st(0), st(2)
        fxch
        fadd    dword ptr [edx+0x3c]
        fld     dword ptr [edx+0x30]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x14]
        fmul    st(0), st(4)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x18]
        fmul    st(0), st(3)
        fxch
        fstp    dword ptr [eax+0xc]
        fadd    dword ptr [edx+0x1c]
        fld     dword ptr [edx+0x10]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x24]
        fmul    st(0), st(4)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x28]
        fmul    st(0), st(3)
        fxch
        fstp    dword ptr [eax+4]
        fadd    dword ptr [edx+0x2c]
        fld     dword ptr [edx+0x20]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+4]
        fmul    st(0), st(4)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+8]
        fmul    st(0), st(3)
        fxch
        fstp    dword ptr [eax+8]
        fadd    dword ptr [edx+0xc]
        fld     dword ptr [edx]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fstp    st(1)
        fstp    st(1)
        fstp    st(1)
        fstp    dword ptr [eax]
        fld     dword ptr [g_0076d064]
        fdiv    dword ptr [ecx+0xc]
        mov     edx, dword ptr [esi]
        mov     eax, dword ptr [esi+4]
        mov     dword ptr [ecx+0x1c], eax
        mov     eax, dword ptr [ebp-0x28]
        mov     dword ptr [ecx+0x24], eax
        mov     dword ptr [ecx+0x18], edx
        mov     edx, dword ptr [ebp-0x2c]
        xor     eax, eax
        mov     ax, word ptr [ebx+0xa]
        mov     dword ptr [ecx+0x20], edx
        lea     eax, [eax+eax*4]
        fst     dword ptr [ecx+0xc]
        fld     st(0)
        fmul    dword ptr [ecx+8]
        fstp    dword ptr [ecx+8]
        fld     st(0)
        fmul    dword ptr [ecx]
        fmul    dword ptr [g_007da87c]
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [ecx]
        fmul    dword ptr [ecx+4]
        fmul    dword ptr [g_007da878]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [ecx+4]
        mov     ecx, dword ptr [ebx+0xb0]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [ebx+0xa4]
        mov     edx, dword ptr [edx+edi*4]
        mov     dword ptr [ecx+eax*8+0x10], edx
        jmp     L_432181
L_432072:
        mov     edx, dword ptr [ebp-8]
        mov     ecx, dword ptr [ebx+0x14]
        mov     eax, dword ptr [ebx+0x1c]
        add     ecx, edx
        mov     edx, dword ptr [ebx+0x44]
        mov     dword ptr [ebp-0x20], ecx
        xor     ecx, ecx
        mov     cx, word ptr [ebx+0xa]
        lea     esi, [eax+edi*8]
        shl     ecx, 5
        add     ecx, edx
        mov     dword ptr [ebp-0x24], ecx
        mov     edx, dword ptr [ebp+8]
        mov     eax, dword ptr [ebp-0x20]
        fld     dword ptr [eax]
        fld     dword ptr [eax+4]
        fld     dword ptr [eax+8]
        mov     eax, dword ptr [ebp-0x24]
        fld     dword ptr [edx+0x34]
        fmul    st(0), st(2)
        fld     dword ptr [edx+0x38]
        fmul    st(0), st(2)
        fxch
        fadd    dword ptr [edx+0x3c]
        fld     dword ptr [edx+0x30]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x14]
        fmul    st(0), st(4)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x18]
        fmul    st(0), st(3)
        fxch
        fstp    dword ptr [eax+0xc]
        fadd    dword ptr [edx+0x1c]
        fld     dword ptr [edx+0x10]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x24]
        fmul    st(0), st(4)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x28]
        fmul    st(0), st(3)
        fxch
        fstp    dword ptr [eax+4]
        fadd    dword ptr [edx+0x2c]
        fld     dword ptr [edx+0x20]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+4]
        fmul    st(0), st(4)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+8]
        fmul    st(0), st(3)
        fxch
        fstp    dword ptr [eax+8]
        fadd    dword ptr [edx+0xc]
        fld     dword ptr [edx]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fstp    st(1)
        fstp    st(1)
        fstp    st(1)
        fstp    dword ptr [eax]
        fld     dword ptr [g_0076d064]
        fdiv    dword ptr [ecx+0xc]
        fst     dword ptr [ecx+0xc]
        fld     st(0)
        fmul    dword ptr [ecx+8]
        fstp    dword ptr [ecx+8]
        fld     st(0)
        fmul    dword ptr [ecx]
        fmul    dword ptr [g_007da87c]
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [ecx]
        mov     edx, dword ptr [esi]
        mov     dword ptr [ecx+0x18], edx
        fmul    dword ptr [ecx+4]
        fmul    dword ptr [g_007da878]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [ecx+4]
        mov     eax, dword ptr [esi+4]
        mov     dword ptr [ecx+0x1c], eax
        mov     ecx, dword ptr [ebx+0xb0]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [ebx+0x44]
        mov     edx, dword ptr [edx+edi*4]
        xor     eax, eax
        mov     ax, word ptr [ebx+0xa]
        shl     eax, 5
        mov     dword ptr [eax+ecx+0x10], edx
L_432181:
        mov     al, byte ptr [ebp+0x17]
        test    al, al
        jz      L_4321ba
        mov     ecx, dword ptr [ebx+0x44]
        fld     dword ptr [ebp-0x10]
        xor     eax, eax
        mov     ax, word ptr [ebx+0xa]
        xor     edx, edx
        shl     eax, 5
        fadd    dword ptr [eax+ecx+0x18]
        lea     eax, [eax+ecx+0x18]
        fstp    dword ptr [eax]
        mov     dx, word ptr [ebx+0xa]
        mov     eax, dword ptr [ebx+0x44]
        fld     dword ptr [ebp-0x14]
        shl     edx, 5
        fadd    dword ptr [edx+eax+0x1c]
        lea     eax, [edx+eax+0x1c]
        fstp    dword ptr [eax]
L_4321ba:
        mov     ecx, dword ptr [ebp+0x10]
        test    ecx, ecx
        jz      L_4321df
        mov     eax, dword ptr [ebp-8]
        mov     edx, dword ptr [ebx+0x14]
        add     edx, eax
        push    edx
        call    FUN_00421f00
        mov     edx, dword ptr [ebx+0x44]
        xor     ecx, ecx
        mov     cx, word ptr [ebx+0xa]
        shl     ecx, 5
        mov     byte ptr [ecx+edx+0x17], al
L_4321df:
        inc     word ptr [ebx+0xa]
        mov     esi, dword ptr [ebp+0xc]
        mov     dl, byte ptr [ebp+0x18]
L_4321e9:
        mov     ecx, dword ptr [ebp-8]
        mov     eax, dword ptr [ebp-0xc]
        inc     edi
        add     ecx, 0xc
        cmp     edi, eax
        mov     dword ptr [ebp-8], ecx
        jl      L_431edd
L_4321fe:
        cmp     dword ptr [g_007b2210], 1
        jnz     L_4323ef
        test    byte ptr [g_007da86c], 2
        jle     L_4322f1
        mov     eax, dword ptr [ebx+0x28]
        __emit 0xF6 /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x3C
        jz      L_4322f1
        test    dl, dl
        jnz     L_432407
        mov     ecx, dword ptr [esi+4]
        xor     eax, eax
        mov     ax, word ptr [ebx+0xa]
        add     ecx, eax
        mov     dword ptr [esi+4], ecx
L_43223a:
        mov     eax, dword ptr [esi+0xc]
        mov     ecx, dword ptr [esi+0x28]
        lea     eax, [ecx+eax*2]
L_432243:
        mov     ecx, dword ptr [ebx+0x58]
        xor     edx, edx
        xor     esi, esi
        cmp     ecx, edx
        mov     dword ptr [ebx+0x50], eax
        mov     word ptr [ebx+0x54], si
        mov     dword ptr [ebp+0x10], edx
        mov     dword ptr [ebp+8], edx
        jle     L_4322c1
        mov     ecx, dword ptr [g_007d98fc]
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [ebp+0x14], ecx
        mov     ecx, dword ptr [g_007da5f4]
L_43226c:
        mov     edi, dword ptr [ebp+0x14]
        cmp     byte ptr [edi+edx], 0
        jz      L_4322b2
        mov     edx, dword ptr [ebx+0x48]
        mov     edi, dword ptr [ebp+8]
        add     edi, edx
        xor     edx, edx
        mov     dl, byte ptr [edi]
        add     eax, 2
        inc     esi
        add     eax, 2
        mov     dx, word ptr [ecx+edx*2]
        mov     word ptr [eax-4], dx
        xor     edx, edx
        mov     dl, byte ptr [edi+2]
        inc     esi
        mov     dx, word ptr [ecx+edx*2]
        mov     word ptr [eax-2], dx
        xor     edx, edx
        mov     dl, byte ptr [edi+1]
        inc     esi
        add     eax, 2
        mov     dx, word ptr [ecx+edx*2]
        mov     word ptr [eax-2], dx
        mov     edx, dword ptr [ebp+0x10]
L_4322b2:
        add     dword ptr [ebp+8], 3
        mov     edi, dword ptr [ebx+0x58]
        inc     edx
        cmp     edx, edi
        mov     dword ptr [ebp+0x10], edx
        jl      L_43226c
L_4322c1:
        mov     al, byte ptr [ebp+0x18]
        test    al, al
        mov     word ptr [ebx+0x54], si
        jnz     L_4322dd
        mov     eax, dword ptr [ebp+0xc]
        mov     ecx, dword ptr [eax+0xc]
        and     esi, 0xffff
        add     ecx, esi
        mov     dword ptr [eax+0xc], ecx
L_4322dd:
        cmp     word ptr [ebx+0xa], 0
        pop     esi
        setnz   al
        pop     edi
        mov     byte ptr [ebx+0x10], al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x14
L_4322f1:
        mov     esi, dword ptr [ebx+0x44]
        xor     ecx, ecx
        mov     cx, word ptr [ebx+0xa]
        mov     dword ptr [ebp-4], 0
        shl     ecx, 5
        lea     edi, [esi+ecx]
        mov     edx, ecx
        shr     ecx, 2
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        xor     edx, edx
        rep movsb
        mov     dx, word ptr [ebx+0xa]
        test    edx, edx
        jle     L_4323cf
        mov     eax, dword ptr [ebx+0x44]
        mov     ecx, edx
        shl     ecx, 5
        lea     ecx, [ecx+eax+0xc]
        lea     esi, [eax+0x1c]
        mov     edi, edx
L_432334:
        fld     dword ptr [esi-4]
        fmul    dword ptr [ebx+0x9c]
        fadd    dword ptr [ebx+0x94]
        fadd    dword ptr [ebp-0x18]
        fstp    dword ptr [ecx+0xc]
        fld     dword ptr [ebx+0xa0]
        fmul    dword ptr [esi]
        fadd    dword ptr [ebx+0x98]
        fadd    dword ptr [ebp-0x1c]
        fstp    dword ptr [ecx+0x10]
        fld     dword ptr [ecx]
        fcomp   dword ptr [ebx+0x8c]
        __emit 0xDF /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax */
        __emit 0xE0
        __emit 0xF6 /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L_432375
        and     dword ptr [ecx+4], 0xffffff
        jmp     L_4323bb
L_432375:
        fld     dword ptr [ecx]
        mov     eax, dword ptr [ebp-4]
        fcomp   dword ptr [ebx+0x88]
        inc     eax
        mov     dword ptr [ebp-4], eax
        __emit 0xDF /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax */
        __emit 0xE0
        __emit 0xF6 /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L_4323bb
        fld     dword ptr [ecx]
        fsub    dword ptr [ebx+0x8c]
        fmul    dword ptr [ebx+0x90]
        fsub    dword ptr [g_0076d070]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp+8]
        mov     eax, dword ptr [ebp+8]
        and     eax, 0xffff
        shl     eax, 0x18
        or      eax, 0xffffff
        and     dword ptr [ecx+4], eax
L_4323bb:
        add     esi, 0x20
        add     ecx, 0x20
        dec     edi
        jnz     L_432334
        mov     eax, dword ptr [ebp-4]
        test    eax, eax
        jnz     L_4323d5
L_4323cf:
        mov     byte ptr [ebx+0x64], 0
        jmp     L_4323d9
L_4323d5:
        mov     byte ptr [ebx+0x64], 1
L_4323d9:
        mov     al, byte ptr [ebp+0x18]
        test    al, al
        jnz     L_432404
        mov     eax, dword ptr [ebp+0xc]
        lea     ecx, [edx+edx]
        add     dword ptr [eax], ecx
        mov     esi, eax
        jmp     L_43223a
L_4323ef:
        test    dl, dl
        jnz     L_432407
        mov     eax, dword ptr [esi]
        xor     edx, edx
        mov     dx, word ptr [ebx+0xa]
        add     eax, edx
        mov     dword ptr [esi], eax
        jmp     L_43223a
L_432404:
        mov     esi, dword ptr [ebp+0xc]
L_432407:
        mov     eax, dword ptr [esi+0x48]
        jmp     L_432243
L_43240f:
        mov     ecx, dword ptr [ebp+0x18]
        mov     edx, dword ptr [ebp+0x14]
        mov     eax, dword ptr [ebp+0x10]
        push    ecx
        mov     ecx, dword ptr [ebp+0xc]
        push    edx
        mov     edx, dword ptr [ebp+8]
        push    eax
        push    ecx
        push    edx
        mov     ecx, ebx
        call    FUN_00455680
        pop     edi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x14
    }
}
