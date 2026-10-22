/* auto-transcribed gap function 0x5E01E786 (42 B); review against reference; stepping stone */
__declspec(naked) void FUN_5e01e786(void)
{
    __asm {
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            mov eax, dword ptr [esp + 4]
            mov edx, dword ptr [esp + 8]
            mov dword ptr [ecx + 0x1c], eax
            mov eax, dword ptr [esp + 0xc]
            mov dword ptr [ecx + 0x24], eax
            mov eax, dword ptr [ecx]
            or al, 2
            mov dword ptr [ecx + 0x20], edx
            mov dword ptr [ecx], eax
            ret 0xc
            nop
            nop
    }
}
