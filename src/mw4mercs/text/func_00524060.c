/*
 * FUN_00524060 (66 bytes) - .text data block, capstone disasm authoritative.
 */
#pragma warning(disable : 4035 4793)

extern int g_007dab44;
extern int g_007dab40;

__declspec(naked) void FUN_00524060(void)
{
    __asm {
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [ecx]
        test   eax, eax
        jge    L1
        xor    eax, eax
        ret    0xc
    L1:
        cmp    eax, 0x18
        jl     L2
        xor    eax, eax
        ret    0xc
    L2:
        mov    edx, dword ptr [g_007dab44]
        imul   eax, eax, 0x22ac
        mov    ecx, dword ptr [edx]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0xc]
        xor    edx, 0x85739531
        mov    eax, dword ptr [edx + eax + 0x205f38]
        ret    0xc
    }
}
