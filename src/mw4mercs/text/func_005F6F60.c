/*
 * FUN_005F6F60 (54 bytes) - .text data block.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void FUN_005F6F60(void)
{
    __asm {
        mov    eax, dword ptr [ecx + 0x10]
        shr    eax, 0x13
        test   al, 1
        jne    L_5f6f93
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [eax + 0x20]
        mov    dword ptr [ecx + 0x16c], edx
        mov    edx, dword ptr [eax + 0x24]
        mov    dword ptr [ecx + 0x170], edx
        mov    edx, dword ptr [eax + 0x28]
        movsx  eax, byte ptr [eax + 0x1c]
        mov    dword ptr [ecx + 0x174], edx
        mov    dword ptr [ecx + 0x178], eax
L_5f6f93:
        ret    8
    }
}
