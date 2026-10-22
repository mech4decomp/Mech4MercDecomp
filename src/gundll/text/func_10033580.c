// FUN_10033580 (0x10033580, 149 B, __stdcall)
__declspec(naked) void FUN_10033580(void)
{
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [eax], 0x5c
        mov edx, dword ptr [ecx + 0x4]
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [ecx + 0x8]
        mov dword ptr [eax + 0x8], edx
        mov edx, dword ptr [ecx + 0xc]
        mov dword ptr [eax + 0xc], edx
        mov edx, dword ptr [ecx + 0x10]
        mov dword ptr [eax + 0x10], edx
        mov edx, dword ptr [ecx + 0x14]
        mov dword ptr [eax + 0x14], edx
        mov edx, dword ptr [ecx + 0x18]
        mov dword ptr [eax + 0x18], edx
        mov edx, dword ptr [ecx + 0x1c]
        mov dword ptr [eax + 0x1c], edx
        mov edx, dword ptr [ecx + 0x20]
        mov dword ptr [eax + 0x20], edx
        mov edx, dword ptr [ecx + 0x24]
        mov dword ptr [eax + 0x24], edx
        mov edx, dword ptr [ecx + 0x28]
        mov dword ptr [eax + 0x28], edx
        mov edx, dword ptr [ecx + 0x2c]
        mov dword ptr [eax + 0x2c], edx
        mov edx, dword ptr [ecx + 0x30]
        mov dword ptr [eax + 0x30], edx
        mov edx, dword ptr [ecx + 0x34]
        mov dword ptr [eax + 0x34], edx
        mov edx, dword ptr [ecx + 0x38]
        mov dword ptr [eax + 0x38], edx
        mov edx, dword ptr [ecx + 0x3c]
        mov dword ptr [eax + 0x3c], edx
        mov edx, dword ptr [ecx + 0x40]
        mov dword ptr [eax + 0x40], edx
        mov edx, dword ptr [ecx + 0x44]
        mov dword ptr [eax + 0x44], edx
        mov edx, dword ptr [ecx + 0x48]
        mov dword ptr [eax + 0x48], edx
        mov edx, dword ptr [ecx + 0x4c]
        mov dword ptr [eax + 0x4c], edx
        mov edx, dword ptr [ecx + 0x50]
        mov dword ptr [eax + 0x50], edx
        mov edx, dword ptr [ecx + 0x54]
        mov dword ptr [eax + 0x54], edx
        mov ecx, dword ptr [ecx + 0x58]
        mov dword ptr [eax + 0x58], ecx
        ret 0x8
    }
}
