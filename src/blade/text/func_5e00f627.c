/* auto-transcribed gap function 0x5E00F627 (41 B); review against reference; stepping stone */
__declspec(naked) void FUN_5e00f627(void)
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
            mov edx, dword ptr [esp + 0x10]
            mov eax, dword ptr [esp + 4]
            push edx
            mov edx, dword ptr [esp + 0x10]
            mov eax, dword ptr [eax + 0x20]
            push edx
            mov edx, dword ptr [esp + 0x10]
            mov ecx, dword ptr [eax]
            push edx
            push eax
            call dword ptr [ecx + 0x54]
            ret 0x10
            nop
    }
}
