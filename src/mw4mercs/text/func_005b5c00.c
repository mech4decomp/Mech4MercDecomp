/*
 * FUN_005b5c00 (689 B) — __thiscall, RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float DAT_0076d064;
extern float DAT_0076c5b0;
extern float DAT_0076d598;

__declspec(naked) void __stdcall FUN_005b5c00(int a)
{
    __asm {
        sub     esp, 0x14
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        push    edi
        call    dword ptr [eax + 0x4]
        mov     edx, dword ptr [esi]
        mov     edi, eax
        mov     ecx, dword ptr [edi + 0x2b4]
        mov     dword ptr [esp + 0x14], ecx
        fld     dword ptr [esp + 0x14]
        mov     ecx, esi
        fmul    dword ptr [edi + 0x304]
        fstp    dword ptr [esp + 0x8]
        call    dword ptr [edx + 0x114]
        fst     dword ptr [esp + 0x18]
        mov     dword ptr [esi + 0x56c], 0x0
        fmul    dword ptr [edi + 0x308]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [edi + 0x2b4]
        fmul    dword ptr [esi + 0x430]
        fst     dword ptr [esp + 0xc]
        fcomp   dword ptr [esp + 0x8]
        /* __emit: MSVC6 inserts 9B WAIT prefix before fstsw ax */
        __emit 0xDF
        __emit 0xE0
        test    ah, 0x41
        jz      L_5c7c
        fld     dword ptr [esp + 0x8]
        fchs
        fcomp   dword ptr [esp + 0xc]
        /* __emit: MSVC6 inserts 9B WAIT prefix before fstsw ax */
        __emit 0xDF
        __emit 0xE0
        test    ah, 0x41
        jnz     L_5d31
L_5c7c:
        fld     dword ptr [esi + 0x440]
        fcomp   dword ptr [esp + 0x10]
        /* __emit: MSVC6 inserts 9B WAIT prefix before fstsw ax */
        __emit 0xDF
        __emit 0xE0
        test    ah, 0x41
        jnz     L_5d31
        fld     dword ptr [esi + 0x440]
        fsub    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x18]
        fsub    dword ptr [esp + 0x10]
        fdivp   st(1), st(0)
        fcom    dword ptr [DAT_0076d064]
        /* __emit: MSVC6 inserts 9B WAIT prefix before fstsw ax */
        __emit 0xDF
        __emit 0xE0
        test    ah, 0x41
        jnz     L_5cba
        fstp    st(0)
        fld     dword ptr [DAT_0076d064]
L_5cba:
        fld     dword ptr [esi + 0x430]
        fcomp   dword ptr [DAT_0076c5b0]
        fld     dword ptr [esp + 0xc]
        /* __emit: MSVC6 inserts 9B WAIT prefix before fstsw ax */
        __emit 0xDF
        __emit 0xE0
        test    ah, 0x41
        jnz     L_5cf6
        fsub    dword ptr [esp + 0x8]
        fld     dword ptr [esp + 0x14]
        fsub    dword ptr [esp + 0x8]
        fdivp   st(1), st(0)
        fcom    dword ptr [DAT_0076d064]
        /* __emit: MSVC6 inserts 9B WAIT prefix before fstsw ax */
        __emit 0xDF
        __emit 0xE0
        test    ah, 0x41
        jnz     L_5d1d
        fstp    st(0)
        fld     dword ptr [DAT_0076d064]
        jmp     L_5d1d
L_5cf6:
        fchs
        fsub    dword ptr [esp + 0x8]
        fld     dword ptr [esp + 0x14]
        fsub    dword ptr [esp + 0x8]
        fdivp   st(1), st(0)
        fchs
        fcom    dword ptr [DAT_0076d598]
        /* __emit: MSVC6 inserts 9B WAIT prefix before fstsw ax */
        __emit 0xDF
        __emit 0xE0
        test    ah, 0x1
        jz      L_5d1d
        fstp    st(0)
        fld     dword ptr [DAT_0076d598]
L_5d1d:
        fld     dword ptr [edi + 0x300]
        fmul    st(0), st(1)
        fmul    st(0), st(2)
        fstp    dword ptr [esi + 0x56c]
        fstp    st(0)
        fstp    st(0)
L_5d31:
        fld     dword ptr [esi + 0x568]
        fcomp   dword ptr [esi + 0x56c]
        /* __emit: MSVC6 inserts 9B WAIT prefix before fstsw ax */
        __emit 0xDF
        __emit 0xE0
        test    ah, 0x1
        jz      L_5d75
        fld     dword ptr [edi + 0x2fc]
        fmul    dword ptr [esp + 0x20]
        fadd    dword ptr [esi + 0x568]
        fst     dword ptr [esi + 0x568]
        fcomp   dword ptr [esi + 0x56c]
        /* __emit: MSVC6 inserts 9B WAIT prefix before fstsw ax */
        __emit 0xDF
        __emit 0xE0
        test    ah, 0x41
        jnz     L_5db7
        mov     eax, dword ptr [esi + 0x56c]
        mov     dword ptr [esi + 0x568], eax
        jmp     L_5db7
L_5d75:
        fld     dword ptr [esi + 0x568]
        fcomp   dword ptr [esi + 0x56c]
        /* __emit: MSVC6 inserts 9B WAIT prefix before fstsw ax */
        __emit 0xDF
        __emit 0xE0
        test    ah, 0x41
        jnz     L_5db7
        fld     dword ptr [edi + 0x2fc]
        fmul    dword ptr [esp + 0x20]
        fsubr   dword ptr [esi + 0x568]
        fst     dword ptr [esi + 0x568]
        fcomp   dword ptr [esi + 0x56c]
        /* __emit: MSVC6 inserts 9B WAIT prefix before fstsw ax */
        __emit 0xDF
        __emit 0xE0
        test    ah, 0x1
        jz      L_5db7
        mov     ecx, dword ptr [esi + 0x56c]
        mov     dword ptr [esi + 0x568], ecx
L_5db7:
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x114]
        fld     st(0)
        fmul    dword ptr [edi + 0x314]
        mov     dword ptr [esi + 0x574], 0x0
        fld     dword ptr [esi + 0x440]
        fcomp   dword ptr [esp + 0x10]
        /* __emit: MSVC6 inserts 9B WAIT prefix before fstsw ax */
        __emit 0xDF
        __emit 0xE0
        test    ah, 0x41
        jnz     L_5e19
        fld     dword ptr [esi + 0x440]
        fsub    st(0), st(1)
        fxch    st(2)
        fsub    st(0), st(1)
        fdivp   st(2), st(0)
        fstp    st(0)
        fcom    dword ptr [DAT_0076d064]
        /* __emit: MSVC6 inserts 9B WAIT prefix before fstsw ax */
        __emit 0xDF
        __emit 0xE0
        test    ah, 0x41
        jnz     L_5e09
        fstp    st(0)
        fld     dword ptr [DAT_0076d064]
L_5e09:
        fld     dword ptr [edi + 0x310]
        fmul    st(0), st(1)
        fstp    dword ptr [esi + 0x574]
        jmp     L_5e1b
L_5e19:
        fstp    st(0)
L_5e1b:
        fstp    st(0)
        fld     dword ptr [esi + 0x570]
        fcomp   dword ptr [esi + 0x574]
        /* __emit: MSVC6 inserts 9B WAIT prefix before fstsw ax */
        __emit 0xDF
        __emit 0xE0
        test    ah, 0x1
        jz      L_5e67
        fld     dword ptr [edi + 0x30c]
        fmul    dword ptr [esp + 0x20]
        fadd    dword ptr [esi + 0x570]
        fst     dword ptr [esi + 0x570]
        fcomp   dword ptr [esi + 0x574]
        /* __emit: MSVC6 inserts 9B WAIT prefix before fstsw ax */
        __emit 0xDF
        __emit 0xE0
        test    ah, 0x41
        jnz     L_5ea9
        mov     eax, dword ptr [esi + 0x574]
        pop     edi
        mov     dword ptr [esi + 0x570], eax
        pop     esi
        add     esp, 0x14
        ret     0x4
L_5e67:
        fld     dword ptr [esi + 0x570]
        fcomp   dword ptr [esi + 0x574]
        /* __emit: MSVC6 inserts 9B WAIT prefix before fstsw ax */
        __emit 0xDF
        __emit 0xE0
        test    ah, 0x41
        jnz     L_5ea9
        fld     dword ptr [edi + 0x30c]
        fmul    dword ptr [esp + 0x20]
        fsubr   dword ptr [esi + 0x570]
        fst     dword ptr [esi + 0x570]
        fcomp   dword ptr [esi + 0x574]
        /* __emit: MSVC6 inserts 9B WAIT prefix before fstsw ax */
        __emit 0xDF
        __emit 0xE0
        test    ah, 0x1
        jz      L_5ea9
        mov     ecx, dword ptr [esi + 0x574]
        mov     dword ptr [esi + 0x570], ecx
L_5ea9:
        pop     edi
        pop     esi
        add     esp, 0x14
        ret     0x4
    }
}
