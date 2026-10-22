/* auto-transcribed gap function 0x5E011DB0 (256 B); review against reference; stepping stone */
__declspec(naked) void FUN_5e011db0(void)
{
    __asm {
            mov eax, dword ptr [esp + 8]
            test eax, eax
            je lbl_5e011dbd
            mov ecx, dword ptr [eax + 0x14]
            jmp lbl_5e011dbf
        lbl_5e011dbd:
            xor ecx, ecx
        lbl_5e011dbf:
            mov eax, dword ptr [esp + 4]
            push esi
            mov esi, dword ptr [esp + 0x10]
            add eax, -4
            push esi
            push ecx
            mov edx, dword ptr [eax]
            push eax
            call dword ptr [edx + 0x2c]
            pop esi
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
            mov eax, dword ptr [esp + 0xc]
            test eax, eax
            je lbl_5e011ded
            mov ecx, dword ptr [eax + 0x14]
            jmp lbl_5e011def
        lbl_5e011ded:
            xor ecx, ecx
        lbl_5e011def:
            push esi
            mov esi, dword ptr [esp + 0x1c]
            mov eax, dword ptr [esp + 8]
            push esi
            mov esi, dword ptr [esp + 0x1c]
            add eax, -4
            push esi
            mov esi, dword ptr [esp + 0x1c]
            mov edx, dword ptr [eax]
            push esi
            push ecx
            mov ecx, dword ptr [esp + 0x1c]
            push ecx
            push eax
            call dword ptr [edx + 0x14]
            pop esi
            ret 0x18
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
            mov eax, dword ptr [esp + 0x10]
            test eax, eax
            je lbl_5e011e2d
            mov ecx, dword ptr [eax + 0x14]
            jmp lbl_5e011e2f
        lbl_5e011e2d:
            xor ecx, ecx
        lbl_5e011e2f:
            push esi
            mov esi, dword ptr [esp + 0x1c]
            mov eax, dword ptr [esp + 8]
            push esi
            mov esi, dword ptr [esp + 0x1c]
            add eax, -4
            push esi
            push ecx
            mov ecx, dword ptr [esp + 0x1c]
            mov edx, dword ptr [eax]
            push ecx
            mov ecx, dword ptr [esp + 0x1c]
            push ecx
            push eax
            call dword ptr [edx + 0x1c]
            pop esi
            ret 0x18
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
            mov eax, 0x80004001
            ret 0x18
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
