/*
 * FUN_00513F80 (66 bytes) - .text data block, capstone disasm authoritative.
 */
#pragma warning(disable : 4035 4793)

extern int g_007dab44;
extern int g_007dab40;
extern void __cdecl FUN_00544080(void);

__declspec(naked) void FUN_00513F80(void)
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
        cmp    eax, 8
        jle    L2
        xor    eax, eax
        ret    0xc
    L2:
        mov    edx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        push   eax
        mov    eax, dword ptr [edx]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0xc]
        xor    ecx, 0x85739531
        call   FUN_00544080
        mov    eax, 1
        ret    0xc
    }
}
