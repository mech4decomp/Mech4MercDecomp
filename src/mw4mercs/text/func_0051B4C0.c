/*
 * FUN_0051B4C0 (66 bytes) - .text data block, capstone disasm authoritative.
 */
#pragma warning(disable : 4035 4793)

extern int g_007dab44;
extern int g_007dab40;
extern void __cdecl FUN_0059CFA0(void);

__declspec(naked) void FUN_0051B4C0(void)
{
    __asm {
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [ecx]
        xor    ecx, edx
        mov    edx, dword ptr [ecx + 0x44]
        xor    eax, eax
        xor    edx, 0x85739531
        je     L1
        mov    edx, dword ptr [ecx + 0x44]
        xor    edx, 0x85739531
        push   esi
        mov    esi, dword ptr [edx + 0x1c]
        test   esi, esi
        pop    esi
        je     L1
        mov    eax, dword ptr [ecx + 0x44]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x1c]
        call   FUN_0059CFA0
    L1:
        ret    0xc
    }
}
