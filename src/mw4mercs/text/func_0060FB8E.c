/*
 * FUN_0060FB8E (42 bytes) - .text data block.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void FUN_0060FB8E(void)
{
    __asm {
        nop
        nop
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [esp + 8]
        mov    eax, dword ptr [eax + 0x18]
        mov    ecx, dword ptr [ecx + 0x18]
        cmp    eax, ecx
        jne    L_60fba7
        xor    eax, eax
        ret    8
L_60fba7:
        xor    edx, edx
        cmp    eax, ecx
        setle  dl
        dec    edx
        and    edx, 2
        dec    edx
        mov    eax, edx
        ret    8
    }
}
