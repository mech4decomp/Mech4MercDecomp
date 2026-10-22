/*
 * FUN_004897A0 (40 bytes) - .text data block.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00713AA0(void);
extern void __cdecl FUN_006FAB90(void);

__declspec(naked) void FUN_004897A0(void)
{
    __asm {
        mov    eax, dword ptr [ecx + 8]
        test   eax, eax
        jne    L_4897b5
        mov    eax, dword ptr [ecx + 0x10]
        mov    ecx, dword ptr [ecx + 0xc]
        push   eax
        push   ecx
        call   FUN_00713AA0
        ret
L_4897b5:
        push   0x76fd58
        call   FUN_006FAB90
        add    esp, 4
        test   eax, eax
        je     L_4897c7
        int    3
L_4897c7:
        ret
    }
}
