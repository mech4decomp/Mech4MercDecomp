/* auto-transcribed gap function 0x5E010CD1 (95 B); review against reference; stepping stone */
__declspec(naked) void FUN_5e010cd1(void)
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
            nop
            nop
            mov eax, dword ptr [esp + 4]
            mov ecx, dword ptr [eax + 0x18]
            test ecx, ecx
            je lbl_5e010d1a
            mov eax, dword ptr [esp + 0xc]
            test eax, eax
            je lbl_5e010cf8
            mov eax, dword ptr [eax + 0x18]
            jmp lbl_5e010cfa
        lbl_5e010cf8:
            xor eax, eax
        lbl_5e010cfa:
            push esi
            mov esi, dword ptr [esp + 0x1c]
            push esi
            mov esi, dword ptr [esp + 0x1c]
            mov edx, dword ptr [ecx]
            push esi
            mov esi, dword ptr [esp + 0x1c]
            push esi
            push eax
            mov eax, dword ptr [esp + 0x1c]
            push eax
            push ecx
            call dword ptr [edx + 0x14]
            pop esi
            ret 0x18
        lbl_5e010d1a:
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
            nop
    }
}
