/* auto-transcribed gap function 0x5E003683 (205 B); review against reference; stepping stone */
__declspec(naked) void FUN_5e003683(void)
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
            nop
            mov ecx, dword ptr [esp + 4]
            push esi
            mov eax, dword ptr [ecx + 0x41e8]
            test eax, eax
            je lbl_5e0036ae
            mov edx, dword ptr [esp + 0xc]
            mov ecx, dword ptr [eax]
            push edx
            push eax
            call dword ptr [ecx + 0x34]
            pop esi
            ret 8
        lbl_5e0036ae:
            mov esi, dword ptr [ecx + 0x41ec]
            test esi, esi
            je lbl_5e0036ca
            mov eax, dword ptr [esi]
            push esi
            call dword ptr [eax + 4]
            xor eax, eax
            mov ecx, dword ptr [esp + 0xc]
            mov dword ptr [ecx], esi
            pop esi
            ret 8
        lbl_5e0036ca:
            mov eax, 0x80004005
            pop esi
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
            ret 0x10
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
            ret 8
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
