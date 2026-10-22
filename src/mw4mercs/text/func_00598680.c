/*
 * FUN_00598680 (40 bytes) - .text data block.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void FUN_00598680(void)
{
    __asm {
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [esp + 8]
        mov    eax, dword ptr [eax + 0x18]
        mov    ecx, dword ptr [ecx + 0x18]
        cmp    eax, ecx
        jne    L_598697
        xor    eax, eax
        ret    8
L_598697:
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
