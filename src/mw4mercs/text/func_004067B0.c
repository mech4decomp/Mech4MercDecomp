/*
 * FUN_004067B0 (31 bytes true extent) - .text data block.
 */
#pragma warning(disable : 4035 4793)

extern int g_007b7e9c;
extern void __cdecl FUN_006FE2B0(void);

__declspec(naked) void FUN_004067B0(void)
{
    __asm {
        cmp    dword ptr [g_007b7e9c], 0x64
        jge    L_4067ca
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [ecx]
        push   edx
        call   FUN_006FE2B0
        ret    0xc
L_4067ca:
        xor    eax, eax
        ret    0xc
    }
}
