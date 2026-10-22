/*
 * FUN_00598640 (51 bytes) - .text data block.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void FUN_00598640(void)
{
    __asm {
        mov    edx, dword ptr [esp + 4]
        mov    ecx, dword ptr [esp + 8]
        fld    qword ptr [edx]
        fcomp  qword ptr [ecx + 0x18]
        /* __emit: fnstsw ax no-WAIT form (MSVC6 inserts 9B WAIT) */
        __emit 0xDF
        __emit 0xE0
        /* __emit: test ah,imm8 not supported in MSVC6 inline asm */
        __emit 0xF6
        __emit 0xC4
        __emit 0x40
        je     L_598659
        xor    eax, eax
        ret    8
L_598659:
        fld    qword ptr [edx]
        fcomp  qword ptr [ecx + 0x18]
        /* __emit: fnstsw ax no-WAIT form (MSVC6 inserts 9B WAIT) */
        __emit 0xDF
        __emit 0xE0
        /* __emit: test ah,imm8 not supported in MSVC6 inline asm */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jne    L_59866d
        mov    eax, 1
        ret    8
L_59866d:
        or     eax, 0xffffffff
        ret    8
    }
}
