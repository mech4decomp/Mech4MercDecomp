/*
 * FUN_00489970 (40 bytes) - .text data block.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00713AE0(void);
extern void __cdecl FUN_006FAB90(void);

__declspec(naked) void FUN_00489970(void)
{
    __asm {
        mov    eax, dword ptr [ecx + 8]
        test   eax, eax
        jne    L_489985
        mov    eax, dword ptr [ecx + 0x10]
        mov    ecx, dword ptr [ecx + 0xc]
        push   eax
        push   ecx
        call   FUN_00713AE0
        ret
L_489985:
        push   0x76fd9c
        call   FUN_006FAB90
        add    esp, 4
        test   eax, eax
        je     L_489997
        int    3
L_489997:
        ret
    }
}
