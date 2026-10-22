/*
 * FUN_0061DE70 (29 bytes true extent) - .text data block.
 */
#pragma warning(disable : 4035 4793)

extern int g_0080d96c;
extern int g_0080d974;

__declspec(naked) void FUN_0061DE70(void)
{
    __asm {
        mov    eax, dword ptr [esp + 4]
        test   eax, eax
        jl     L_61de8a
        cmp    eax, dword ptr [g_0080d96c]
        jge    L_61de8a
        mov    ecx, dword ptr [g_0080d974]
        mov    eax, dword ptr [ecx + eax*4]
        ret
L_61de8a:
        xor    eax, eax
        ret
    }
}
