/*
 * FUN_005C7F70 (224 B) — __thiscall, void.
 * Iterates a range [obj+0x40c, obj+0x410) of pointers; for each entry
 * clamps two float fields (0x198->0x1c8, 0x19c->0x1cc) using FPU math
 * against globals 0x0076d598 / 0x0076d978 / 0x0076d064 / 0x007b220c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_005c7f70(void *param_1)
{
    
__asm {
mov     eax, [ecx + 0x170]
        mov     ecx, [eax + 0x40c]
        push    esi
        mov     esi, [eax + 0x410]
        cmp     ecx, esi
        jz      l_done

    l_loop:
        mov     edx, [ecx]
        fld     dword ptr [edx + 0x198]
        fabs
        _emit   0xD9            /* __emit: fld dword ptr [imm32] -> FPU mem operand w/ abs addr */
        _emit   0x05
        _emit   0x0C
        _emit   0x22
        _emit   0x7B
        _emit   0x00
        fcompp
        _emit   0xDF            /* __emit: fnstsw ax -> MSVC6 inserts 9B WAIT prefix */
        _emit   0xE0
        test    ah, 1
        jz      l_skip1
        fld     dword ptr [edx + 0x198]
        _emit   0xD8            /* __emit: fmul dword ptr [imm32] -> FPU mem operand w/ abs addr */
        _emit   0x0D
        _emit   0x98
        _emit   0xD5
        _emit   0x76
        _emit   0x00
        _emit   0xD8            /* __emit: fmul dword ptr [imm32] -> FPU mem operand w/ abs addr */
        _emit   0x0D
        _emit   0x78
        _emit   0xD9
        _emit   0x76
        _emit   0x00
        _emit   0xD8            /* __emit: fcom dword ptr [imm32] -> FPU mem operand w/ abs addr */
        _emit   0x15
        _emit   0x64
        _emit   0xD0
        _emit   0x76
        _emit   0x00
        _emit   0xDF            /* __emit: fnstsw ax -> MSVC6 inserts 9B WAIT prefix */
        _emit   0xE0
        test    ah, 0x41
        jnz     l_clamp2
        fstp    st(0)
        _emit   0xD9            /* __emit: fld dword ptr [imm32] -> FPU mem operand w/ abs addr */
        _emit   0x05
        _emit   0x64
        _emit   0xD0
        _emit   0x76
        _emit   0x00
        jmp     l_store1
    l_clamp2:
        _emit   0xD8            /* __emit: fcom dword ptr [imm32] -> FPU mem operand w/ abs addr */
        _emit   0x15
        _emit   0x98
        _emit   0xD5
        _emit   0x76
        _emit   0x00
        _emit   0xDF            /* __emit: fnstsw ax -> MSVC6 inserts 9B WAIT prefix */
        _emit   0xE0
        test    ah, 1
        jz      l_store1
        fstp    st(0)
        _emit   0xD9            /* __emit: fld dword ptr [imm32] -> FPU mem operand w/ abs addr */
        _emit   0x05
        _emit   0x98
        _emit   0xD5
        _emit   0x76
        _emit   0x00
    l_store1:
        fstp    dword ptr [edx + 0x1c8]

    l_skip1:
        fld     dword ptr [edx + 0x19c]
        fabs
        _emit   0xD9            /* __emit: fld dword ptr [imm32] -> FPU mem operand w/ abs addr */
        _emit   0x05
        _emit   0x0C
        _emit   0x22
        _emit   0x7B
        _emit   0x00
        fcompp
        _emit   0xDF            /* __emit: fnstsw ax -> MSVC6 inserts 9B WAIT prefix */
        _emit   0xE0
        test    ah, 1
        jz      l_next
        fld     dword ptr [edx + 0x19c]
        _emit   0xD8            /* __emit: fmul dword ptr [imm32] -> FPU mem operand w/ abs addr */
        _emit   0x0D
        _emit   0x98
        _emit   0xD5
        _emit   0x76
        _emit   0x00
        _emit   0xD8            /* __emit: fmul dword ptr [imm32] -> FPU mem operand w/ abs addr */
        _emit   0x0D
        _emit   0x78
        _emit   0xD9
        _emit   0x76
        _emit   0x00
        _emit   0xD8            /* __emit: fcom dword ptr [imm32] -> FPU mem operand w/ abs addr */
        _emit   0x15
        _emit   0x64
        _emit   0xD0
        _emit   0x76
        _emit   0x00
        _emit   0xDF            /* __emit: fnstsw ax -> MSVC6 inserts 9B WAIT prefix */
        _emit   0xE0
        test    ah, 0x41
        jnz     l_clamp4
        fstp    st(0)
        _emit   0xD9            /* __emit: fld dword ptr [imm32] -> FPU mem operand w/ abs addr */
        _emit   0x05
        _emit   0x64
        _emit   0xD0
        _emit   0x76
        _emit   0x00
        jmp     l_store2
    l_clamp4:
        _emit   0xD8            /* __emit: fcom dword ptr [imm32] -> FPU mem operand w/ abs addr */
        _emit   0x15
        _emit   0x98
        _emit   0xD5
        _emit   0x76
        _emit   0x00
        _emit   0xDF            /* __emit: fnstsw ax -> MSVC6 inserts 9B WAIT prefix */
        _emit   0xE0
        test    ah, 1
        jz      l_store2
        fstp    st(0)
        _emit   0xD9            /* __emit: fld dword ptr [imm32] -> FPU mem operand w/ abs addr */
        _emit   0x05
        _emit   0x98
        _emit   0xD5
        _emit   0x76
        _emit   0x00
    l_store2:
        fstp    dword ptr [edx + 0x1cc]

    l_next:
        add     ecx, 4
        cmp     ecx, esi
        jnz     l_loop

    l_done:
        pop     esi
        ret
    }


}
