/*
 * FUN_0073A890 (41 bytes) - .text data block.
 */
#pragma warning(disable : 4035 4793)

extern int g_00856a80;

__declspec(naked) void FUN_0073A890(void)
{
    __asm {
        mov    eax, dword ptr [g_00856a80]
        mov    eax, dword ptr [eax]
        mov    edx, dword ptr [esp + 4]
L_73a89b:
        test   eax, eax
        mov    ecx, eax
        je     L_73a8b4
        mov    ecx, dword ptr [ecx + 0xc]
        test   ecx, ecx
        mov    eax, dword ptr [eax + 4]
        je     L_73a8b4
        cmp    ecx, edx
        jne    L_73a89b
        mov    al, 1
        ret    4
L_73a8b4:
        xor    al, al
        ret    4
    }
}
