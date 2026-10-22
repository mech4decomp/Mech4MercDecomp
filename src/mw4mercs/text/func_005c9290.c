/*
 * FUN_005c9290 (212 B) - FPU-heavy math routine. Calls a virtual method on
 * [param_1+0x78], reads a float at [ret+0x7c], and computes an angle via
 * acos (CALL 0x0075db50 = _CIacos). Result stored back to [esp+0x14].
 *
 * CFLAGS: /O1
 */

extern void __cdecl CIacos(void);

__declspec(naked) void __cdecl FUN_005c9290(void)
{
    
__asm {
sub     esp, 0xc
        mov     eax, [esp + 0x10]
        mov     edx, [eax + 0x78]
        lea     ecx, [eax + 0x78]
        call    dword ptr [edx + 4]
        fld     dword ptr [eax + 0x7c]
        _emit   0xD9            /* __emit: fld dword ptr [imm32] -> FPU mem operand w/ abs addr */
        _emit   0x05
        _emit   0x84
        _emit   0x43
        _emit   0x7B
        _emit   0x00
        fld     st(1)
        fmul    st, st(2)
        fst     dword ptr [esp + 0x4]
        fmul    st, st(2)
        fmul    st, st(2)
        _emit   0xD9            /* __emit: fstp dword ptr [esp] -> MSVC6 drops disp8=0 (D9 1C 24) */
        _emit   0x5C
        _emit   0x24
        _emit   0x00
        fld     st(0)
        fmul    st, st(1)
        fstp    dword ptr [esp + 0x8]
        fstp    st(0)
        fld     dword ptr [esp + 0x8]
        fmul    dword ptr [esp + 0x14]
        fmul    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x10]
        _emit   0xD9            /* __emit: fld dword ptr [esp] -> MSVC6 drops disp8=0 (D9 04 24) */
        _emit   0x44
        _emit   0x24
        _emit   0x00
        fsub    dword ptr [esp + 0x10]
        _emit   0xD8            /* __emit: fcom dword ptr [imm32] -> FPU mem operand w/ abs addr */
        _emit   0x15
        _emit   0xB0
        _emit   0xC5
        _emit   0x76
        _emit   0x00
        _emit   0xDF            /* __emit: fnstsw ax -> MSVC6 inserts 9B WAIT prefix */
        _emit   0xE0
        test    ah, 0x1
        jz      l_92f2
        fstp    st(0)
        fld     dword ptr [esp + 0x10]
        _emit   0xD8            /* __emit: fadd dword ptr [esp] -> MSVC6 drops disp8=0 (D8 04 24) */
        _emit   0x44
        _emit   0x24
        _emit   0x00
    l_92f2:
        fld     dword ptr [esp + 0x4]
        fadd    st, st(0)
        fxch
        fsqrt
        fxch
        fxch
        fadd    st, st(0)
        fsubp   st(1), st(0)
        fdiv    dword ptr [esp + 0x8]
        fabs
        fsqrt
        fmul    st, st(1)
        _emit   0xD8            /* __emit: fdivr dword ptr [esp+0x14] -> MSVC6 rejects fdivr w/ mem operand */
        _emit   0x7C
        _emit   0x24
        _emit   0x14
        fstp    dword ptr [esp + 0x14]
        fstp    st(0)
        fld     dword ptr [esp + 0x14]
        _emit   0xD8            /* __emit: fcomp dword ptr [imm32] -> FPU mem operand w/ abs addr */
        _emit   0x1D
        _emit   0xB0
        _emit   0xC5
        _emit   0x76
        _emit   0x00
        _emit   0xDF            /* __emit: fnstsw ax -> MSVC6 inserts 9B WAIT prefix */
        _emit   0xE0
        test    ah, 0x1
        jz      l_933e
        mov     dword ptr [esp + 0x14], 0x0
        fld     dword ptr [esp + 0x14]
        call    CIacos
        add     esp, 0xc
        ret
    l_933e:
        fld     dword ptr [esp + 0x14]
        _emit   0xD8            /* __emit: fcomp dword ptr [imm32] -> FPU mem operand w/ abs addr */
        _emit   0x1D
        _emit   0x64
        _emit   0xD0
        _emit   0x76
        _emit   0x00
        _emit   0xDF            /* __emit: fnstsw ax -> MSVC6 inserts 9B WAIT prefix */
        _emit   0xE0
        test    ah, 0x41
        jnz     l_9357
        mov     dword ptr [esp + 0x14], 0x3f800000
    l_9357:
        fld     dword ptr [esp + 0x14]
        call    CIacos
        add     esp, 0xc
        ret
    }


}
