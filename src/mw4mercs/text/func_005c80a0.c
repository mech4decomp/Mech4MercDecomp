/*
 * FUN_005C80A0 (53 B) — __thiscall, returns bool in AL.
 * Compares [ecx+0x1bc] against (0x007878e8 + 0x0076d064); if less, returns 1.
 * Otherwise returns (signed byte [ecx+0x54a] + signed byte [ecx+0x549]) > 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __cdecl FUN_005c80a0(void *param_1)
{
    
__asm {
fld     dword ptr [ecx + 0x1bc]
        _emit   0xD9            /* __emit: fld dword ptr [imm32] -> FPU mem operand w/ abs addr */
        _emit   0x05
        _emit   0xE8
        _emit   0x78
        _emit   0x78
        _emit   0x00
        _emit   0xD8            /* __emit: fadd dword ptr [imm32] -> FPU mem operand w/ abs addr */
        _emit   0x05
        _emit   0x64
        _emit   0xD0
        _emit   0x76
        _emit   0x00
        fcompp
        _emit   0xDF            /* __emit: fnstsw ax -> MSVC6 inserts 9B WAIT prefix */
        _emit   0xE0
        test    ah, 0x41
        jnz     l_else
        mov     al, 1
        ret

    l_else:
        movsx   eax, byte ptr [ecx + 0x54a]
        movsx   ecx, byte ptr [ecx + 0x549]
        add     eax, ecx
        cmp     eax, 1
        setg    al
        ret
    }


}
