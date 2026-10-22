/*
 * FUN_005c9800 (73 B) - __thiscall (this in ECX). Returns bool in AL based on
 * fields at [ecx+0x364] and FPU comparisons of [ecx+0x3b8]/[ecx+0x3d8].
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __cdecl FUN_005c9800(void)
{
    
__asm {
mov     eax, [ecx + 0x364]
        test    eax, eax
        jz      l_9846
        cmp     byte ptr [eax + 0x1a], 0x1
        jz      l_9846
        mov     eax, [eax + 0x8]
        cmp     eax, 0x1
        jz      l_9846
        cmp     eax, 0x5
        jnz     l_9843
        fld     dword ptr [ecx + 0x3b8]
        _emit   0xD8            /* __emit: fcomp dword ptr [imm32] -> FPU mem operand w/ abs addr */
        _emit   0x1D
        _emit   0xB0
        _emit   0xC5
        _emit   0x76
        _emit   0x00
        _emit   0xDF            /* __emit: fnstsw ax -> MSVC6 inserts 9B WAIT prefix */
        _emit   0xE0
        test    ah, 0x40
        jnz     l_9846
        fld     dword ptr [ecx + 0x3d8]
        _emit   0xD8            /* __emit: fcomp dword ptr [imm32] -> FPU mem operand w/ abs addr */
        _emit   0x1D
        _emit   0xF0
        _emit   0xD5
        _emit   0x76
        _emit   0x00
        _emit   0xDF            /* __emit: fnstsw ax -> MSVC6 inserts 9B WAIT prefix */
        _emit   0xE0
        test    ah, 0x41
        jz      l_9846
    l_9843:
        xor     al, al
        ret
    l_9846:
        mov     al, 0x1
        ret
    }


}
