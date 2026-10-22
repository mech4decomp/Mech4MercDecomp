/* auto-transcribed gap function 0x5E010C28 (136 B); review against reference; stepping stone */
__declspec(naked) void FUN_5e010c28(void)
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
            push esi
            push edi
            mov edi, dword ptr [esp + 0x10]
            test edi, edi
            je lbl_5e010c68
            test byte ptr [edi + 0x28], 1
            je lbl_5e010c68
            mov esi, dword ptr [esp + 0xc]
            mov eax, dword ptr [esi + 0x24]
            test eax, eax
            je lbl_5e010c58
            mov ecx, dword ptr [eax]
            push eax
            call dword ptr [ecx + 8]
            mov dword ptr [esi + 0x24], 0
        lbl_5e010c58:
            mov edx, dword ptr [edi]
            push edi
            mov dword ptr [esi + 0x24], edi
            call dword ptr [edx + 4]
            pop edi
            xor eax, eax
            pop esi
            ret 8
        lbl_5e010c68:
            mov eax, dword ptr [esp + 0xc]
            mov eax, dword ptr [eax + 0x18]
            test eax, eax
            je lbl_5e010c98
            test edi, edi
            je lbl_5e010c7c
            mov ecx, dword ptr [edi + 0x18]
            jmp lbl_5e010c7e
        lbl_5e010c7c:
            xor ecx, ecx
        lbl_5e010c7e:
            mov edx, dword ptr [eax]
            push ecx
            push eax
            call dword ptr [edx + 0xc]
            mov esi, eax
            test esi, esi
            jl lbl_5e010c91
            mov eax, dword ptr [edi]
            push edi
            call dword ptr [eax + 4]
        lbl_5e010c91:
            mov eax, esi
            pop edi
            pop esi
            ret 8
        lbl_5e010c98:
            pop edi
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
            nop
    }
}
