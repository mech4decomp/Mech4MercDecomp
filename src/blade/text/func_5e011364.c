/* auto-transcribed gap function 0x5E011364 (76 B); review against reference; stepping stone */
__declspec(naked) void FUN_5e011364(void)
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
            nop
            nop
            mov eax, dword ptr [esp + 4]
            mov eax, dword ptr [eax + 0x18]
            test eax, eax
            je lbl_5e0113a0
            mov edx, dword ptr [esp + 0x18]
            mov ecx, dword ptr [eax]
            push edx
            mov edx, dword ptr [esp + 0x18]
            push edx
            mov edx, dword ptr [esp + 0x18]
            push edx
            mov edx, dword ptr [esp + 0x18]
            push edx
            mov edx, dword ptr [esp + 0x18]
            push edx
            push eax
            call dword ptr [ecx + 0x84]
            ret 0x18
        lbl_5e0113a0:
            mov eax, 0x80004005
            ret 0x18
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
    }
}
