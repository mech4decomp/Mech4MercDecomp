/* auto-transcribed gap function 0x5E0021C7 (89 B); review against reference; stepping stone */
extern int g_5e035680;
__declspec(naked) void FUN_5e0021c7(void)
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
            mov eax, dword ptr [esp + 4]
            mov eax, dword ptr [eax + 0x4380]
            test eax, eax
            je lbl_5e0021f8
            mov ecx, dword ptr [esp + 0xc]
            mov edx, dword ptr [eax]
            push ecx
            push offset g_5e035680
            push eax
            mov dword ptr [ecx], 0
            call dword ptr [edx]
            xor eax, eax
            ret 0xc
        lbl_5e0021f8:
            mov eax, dword ptr [esp + 0xc]
            mov dword ptr [eax], 0
            xor eax, eax
            ret 0xc
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            mov eax, 0x80004001
            ret 0xc
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
