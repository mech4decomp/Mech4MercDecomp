/*
 * FUN_5e028260 (477 B) — __stdcall (RET 0x14), 5 params.
 * Matrix/vector transform loop with FPU comparisons and flag accumulation.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_5e035aa0;
extern float g_5e035aa4;

__declspec(naked) void FUN_5e028260(void)
{
    __asm {
        sub     esp, 0x14
        mov     eax, dword ptr [esp + 0x24]
        push    ebp
        xor     ebp, ebp
        mov     ecx, dword ptr [eax + 0xc]
        mov     dword ptr [esp + 0x14], ebp
        mov     dword ptr [esp + 0x10], ecx
        mov     ecx, dword ptr [eax + 0x10]
        fild    qword ptr [esp + 0x10]
        mov     edx, dword ptr [eax + 0x4]
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0x14], ebp
        mov     eax, dword ptr [eax + 0x8]
        fstp    dword ptr [esp + 0x4]
        fild    qword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x10], edx
        mov     dword ptr [esp + 0x14], ebp
        add     eax, ecx
        fchs
        fstp    dword ptr [esp + 0xc]
        fild    qword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x10], eax
        mov     eax, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x14], ebp
        mov     ecx, eax
        fstp    dword ptr [esp + 0x8]
        fild    qword ptr [esp + 0x10]
        dec     eax
        test    ecx, ecx
        fstp    dword ptr [esp + 0x10]
        jz      L_028436
        mov     edx, dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [esp + 0x1c]
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x30]
        lea     ebx, [eax + 0x1]
    L_0282db:
        fld     dword ptr [ecx + 0x4]
        fmul    dword ptr [edi + 0x10]
        fld     dword ptr [ecx]
        fmul    dword ptr [edi]
        faddp   st(1), st(0)
        fld     dword ptr [edi + 0x20]
        fmul    dword ptr [ecx + 0x8]
        faddp   st(1), st(0)
        fadd    dword ptr [edi + 0x30]
        fld     dword ptr [ecx]
        fmul    dword ptr [edi + 0x4]
        fld     dword ptr [edi + 0x24]
        fmul    dword ptr [ecx + 0x8]
        faddp   st(1), st(0)
        fld     dword ptr [ecx + 0x4]
        fmul    dword ptr [edi + 0x14]
        faddp   st(1), st(0)
        fadd    dword ptr [edi + 0x34]
        fst     dword ptr [esp + 0x30]
        fld     dword ptr [edi + 0x28]
        fmul    dword ptr [ecx + 0x8]
        fld     dword ptr [ecx]
        fmul    dword ptr [edi + 0x8]
        faddp   st(1), st(0)
        fld     dword ptr [ecx + 0x4]
        fmul    dword ptr [edi + 0x18]
        faddp   st(1), st(0)
        fadd    dword ptr [edi + 0x38]
        fstp    dword ptr [esp + 0x2c]
        fld     dword ptr [ecx]
        fmul    dword ptr [edi + 0xc]
        fld     dword ptr [edi + 0x2c]
        fmul    dword ptr [ecx + 0x8]
        faddp   st(1), st(0)
        fld     dword ptr [ecx + 0x4]
        fmul    dword ptr [edi + 0x1c]
        faddp   st(1), st(0)
        fadd    dword ptr [edi + 0x3c]
        fstp    dword ptr [esp + 0x34]
        fld     st(1)
        fcomp   dword ptr [g_5e035aa0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw; ref uses no-WAIT DF E0 */
        fnstsw ax
        /* __emit: MSVC6 rejects test ah,imm8; ref is F6 C4 01 */
        __emit  0xF6
        les eax, dword ptr [ecx]
        jz      L_02835c
        mov     esi, 0x4
        jmp     L_028372
    L_02835c:
        fld     st(1)
        fcomp   dword ptr [esp + 0x34]
        /* __emit: no-WAIT fnstsw ax (DF E0) */
        fnstsw ax
        /* __emit: test ah,imm8 (F6 C4 41) */
        test ah, 0x41
        jnz     L_028370
        mov     esi, 0x8
        jmp     L_028372
    L_028370:
        xor     esi, esi
    L_028372:
        fcom    dword ptr [g_5e035aa0]
        /* __emit: no-WAIT fnstsw ax (DF E0) */
        fnstsw ax
        /* __emit: test ah,imm8 (F6 C4 01) */
        __emit  0xF6
        les eax, dword ptr [ecx]
        jz      L_028384
        or      esi, 0x10
        jmp     L_028392
    L_028384:
        fcom    dword ptr [esp + 0x34]
        /* __emit: no-WAIT fnstsw ax (DF E0) */
        fnstsw ax
        /* __emit: test ah,imm8 (F6 C4 41) */
        test ah, 0x41
        jnz     L_028392
        or      esi, 0x20
    L_028392:
        fld     dword ptr [esp + 0x2c]
        fcomp   dword ptr [g_5e035aa0]
        /* __emit: no-WAIT fnstsw ax (DF E0) */
        fnstsw ax
        /* __emit: test ah,imm8 (F6 C4 01) */
        __emit  0xF6
        les eax, dword ptr [ecx]
        jz      L_0283a8
        or      esi, 0x1
        jmp     L_0283ba
    L_0283a8:
        fld     dword ptr [esp + 0x2c]
        fcomp   dword ptr [esp + 0x34]
        /* __emit: no-WAIT fnstsw ax (DF E0) */
        fnstsw ax
        /* __emit: test ah,imm8 (F6 C4 41) */
        test ah, 0x41
        jnz     L_0283ba
        or      esi, 0x2
    L_0283ba:
        mov     eax, dword ptr [esp + 0x2c]
        cmp     esi, ebp
        fld     st(1)
        mov     dword ptr [edx + 0x2c], eax
        mov     eax, dword ptr [esp + 0x34]
        fstp    dword ptr [edx + 0x24]
        mov     dword ptr [edx + 0x20], esi
        mov     dword ptr [edx + 0x30], eax
        fstp    dword ptr [edx + 0x28]
        jnz     L_02840c
        fld     dword ptr [g_5e035aa4]
        fdiv    dword ptr [esp + 0x34]
        fld     st(0)
        fmul    st(0), st(2)
        fmul    dword ptr [esp + 0x10]
        fadd    dword ptr [esp + 0x14]
        fstp    dword ptr [edx]
        fld     st(0)
        fmul    dword ptr [esp + 0x30]
        fmul    dword ptr [esp + 0x18]
        fadd    dword ptr [esp + 0x1c]
        fstp    dword ptr [edx + 0x4]
        fld     st(0)
        fmul    dword ptr [esp + 0x2c]
        fstp    dword ptr [edx + 0x8]
        fstp    dword ptr [edx + 0xc]
    L_02840c:
        mov     eax, dword ptr [ecx + 0x18]
        add     ecx, 0x20
        mov     dword ptr [edx + 0x18], eax
        mov     eax, dword ptr [ecx - 0x4]
        mov     dword ptr [edx + 0x1c], eax
        mov     eax, dword ptr [ecx - 0x10]
        mov     dword ptr [edx + 0x10], eax
        mov     eax, dword ptr [ecx - 0xc]
        mov     dword ptr [edx + 0x14], eax
        add     edx, 0x34
        dec     ebx
        fstp    st(0)
        jnz     L_0282db
        pop     edi
        pop     esi
        pop     ebx
    L_028436:
        pop     ebp
        add     esp, 0x14
        ret     0x14
    }
}
