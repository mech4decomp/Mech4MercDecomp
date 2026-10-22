/* auto-transcribed gap function 0x5E0119B4 (156 B); review against reference; stepping stone */
__declspec(naked) void FUN_5e0119b4(void)
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
            mov eax, dword ptr [esp + 0xc]
            xor ecx, ecx
            test eax, eax
            je lbl_5e0119cd
            mov ecx, dword ptr [eax + 0x10]
        lbl_5e0119cd:
            mov eax, dword ptr [esp + 4]
            mov eax, dword ptr [eax + 0x10]
            test eax, eax
            je lbl_5e0119fb
            push esi
            mov esi, dword ptr [esp + 0x1c]
            push esi
            mov esi, dword ptr [esp + 0x1c]
            mov edx, dword ptr [eax]
            push esi
            mov esi, dword ptr [esp + 0x1c]
            push esi
            push ecx
            mov ecx, dword ptr [esp + 0x1c]
            push ecx
            push eax
            call dword ptr [edx + 0x84]
            pop esi
            ret 0x18
        lbl_5e0119fb:
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
            nop
            nop
            nop
            nop
            nop
            mov eax, dword ptr [esp + 0xc]
            xor ecx, ecx
            test eax, eax
            je lbl_5e011a1d
            mov ecx, dword ptr [eax + 0x10]
        lbl_5e011a1d:
            mov eax, dword ptr [esp + 4]
            mov eax, dword ptr [eax + 0x10]
            test eax, eax
            je lbl_5e011a3a
            mov edx, dword ptr [eax]
            push ecx
            mov ecx, dword ptr [esp + 0xc]
            push ecx
            push eax
            call dword ptr [edx + 0x8c]
            ret 0xc
        lbl_5e011a3a:
            mov eax, 0x80004005
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
            nop
            nop
            nop
            nop
            nop
    }
}
