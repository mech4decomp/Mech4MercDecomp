/*
 * FUN_00767B60 (65 bytes) - .text data block, capstone disasm authoritative.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084E0(void);

__declspec(naked) void FUN_00767B60(void)
{
    __asm {
        mov    eax, dword ptr [esp + 4]
        push   esi
        lea    esi, [eax - 8]
        mov    eax, dword ptr [ecx + 4]
        xor    edx, edx
        test   eax, eax
        je     L1
    L2:
        cmp    eax, esi
        je     L3
        mov    edx, eax
        mov    eax, dword ptr [eax]
        test   eax, eax
        jne    L2
    L3:
        test   edx, edx
        jne    L4
    L1:
        mov    eax, dword ptr [esi]
        mov    dword ptr [ecx + 4], eax
        jmp    L5
    L4:
        mov    eax, dword ptr [esi]
        mov    dword ptr [edx], eax
    L5:
        cmp    esi, dword ptr [ecx + 8]
        jne    L6
        mov    dword ptr [ecx + 8], edx
    L6:
        push   esi
        call   FUN_004084E0
        add    esp, 4
        pop    esi
        ret    4
    }
}
