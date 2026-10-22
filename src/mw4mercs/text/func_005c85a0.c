/*
 * FUN_005C85A0 (105 B) — __thiscall, RET 4, returns bool in AL.
 * Iterates 12-byte elements from [ecx+0x5c4] to [ecx+0x5c8], computing a
 * squared-distance against param_1; returns 1 if any distance <= (0x00787900^2).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __cdecl FUN_005c85a0(void *param_1, void *param_2)
{
    
__asm {
mov     edx, [ecx + 0x5c4]
        mov     ecx, [ecx + 0x5c8]
        cmp     edx, ecx
        push    esi
        jz      l_ret0
        _emit   0xD9            /* __emit: fld dword ptr [imm32] -> FPU mem operand w/ abs addr */
        _emit   0x05
        _emit   0x00
        _emit   0x79
        _emit   0x78
        _emit   0x00
        mov     esi, [esp + 8]
        _emit   0xD8            /* __emit: fmul dword ptr [imm32] -> FPU mem operand w/ abs addr */
        _emit   0x0D
        _emit   0x00
        _emit   0x79
        _emit   0x78
        _emit   0x00
        fstp    dword ptr [esp + 8]
    l_loop:
        fld     dword ptr [esi]
        fsub    dword ptr [edx]
        fld     dword ptr [esi + 4]
        fsub    dword ptr [edx + 4]
        fld     dword ptr [esi + 8]
        fsub    dword ptr [edx + 8]
        fld     st(2)
        fmul    st(0), st(3)
        fld     st(1)
        fmul    st(0), st(2)
        faddp   st(1), st(0)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fcomp   dword ptr [esp + 8]
        fstp    st(0)
        _emit   0xDF            /* __emit: fnstsw ax -> MSVC6 inserts 9B WAIT prefix */
        _emit   0xE0
        fstp    st(0)
        test    ah, 0x41
        fstp    st(0)
        jnz     l_ret1
        add     edx, 0xc
        cmp     edx, ecx
        jnz     l_loop
    l_ret0:
        xor     al, al
        pop     esi
        ret     4
    l_ret1:
        mov     al, 1
        pop     esi
        ret     4
    }


}
