/* auto-transcribed gap function 0x5E0035A5 (139 B); review against reference; stepping stone */
__declspec(naked) void FUN_5e0035a5(void)
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
            mov eax, dword ptr [esp + 4]
            mov eax, dword ptr [eax + 0x41e8]
            test eax, eax
            je lbl_5e0035cc
            mov edx, dword ptr [esp + 8]
            mov ecx, dword ptr [eax]
            push edx
            push eax
            call dword ptr [ecx + 0x18]
            ret 8
        lbl_5e0035cc:
            mov eax, 0x80004001
            ret 8
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
            mov eax, dword ptr [eax + 0x41e8]
            test eax, eax
            je lbl_5e003606
            mov edx, dword ptr [esp + 0x10]
            mov ecx, dword ptr [eax]
            push edx
            mov edx, dword ptr [esp + 0x10]
            push edx
            mov edx, dword ptr [esp + 0x10]
            push edx
            push eax
            call dword ptr [ecx + 0x1c]
            ret 0x10
        lbl_5e003606:
            mov eax, 0x80004001
            ret 0x10
            nop
            nop
            mov eax, dword ptr [esp + 4]
            mov ecx, dword ptr [esp + 8]
            mov eax, dword ptr [eax + 0x41e0]
            push eax
            mov dword ptr [ecx], eax
            mov edx, dword ptr [eax]
            call dword ptr [edx + 4]
            xor eax, eax
            ret 8
            nop
            nop
            nop
            nop
            nop
    }
}
