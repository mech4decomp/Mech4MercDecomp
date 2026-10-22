/* auto-transcribed gap function 0x5E00F775 (171 B); review against reference; stepping stone */
extern int g_5e0354d0;
__declspec(naked) void FUN_5e00f775(void)
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
            mov eax, dword ptr [esp + 8]
            mov edx, dword ptr [esp + 4]
            mov ecx, dword ptr [eax + 4]
            push ecx
            push edx
            call dword ptr [eax]
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
            mov eax, dword ptr [esp + 4]
            push esi
            xor esi, esi
            lea ecx, [eax + 0x24]
            mov eax, dword ptr [eax + 0x24]
            test eax, eax
            jne lbl_5e00f7ba
            mov eax, 0x80004005
            pop esi
            ret 0x14
        lbl_5e00f7ba:
            mov edx, dword ptr [eax]
            push ecx
            push offset g_5e0354d0
            push eax
            call dword ptr [edx]
            test eax, eax
            jl lbl_5e00f7e4
            mov ecx, dword ptr [esp + 0x18]
            mov edx, dword ptr [esp + 0x14]
            mov eax, dword ptr [esi]
            push ecx
            mov ecx, dword ptr [esp + 0x14]
            push edx
            mov edx, dword ptr [esp + 0x14]
            push ecx
            push edx
            push 0
            call dword ptr [eax + 0x24]
        lbl_5e00f7e4:
            pop esi
            ret 0x14
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            mov eax, dword ptr [esp + 4]
            mov eax, dword ptr [eax + 0x20]
            test eax, eax
            je lbl_5e00f818
            mov edx, dword ptr [esp + 0x14]
            mov ecx, dword ptr [eax]
            push edx
            mov edx, dword ptr [esp + 0x14]
            push edx
            mov edx, dword ptr [esp + 0x14]
            push edx
            mov edx, dword ptr [esp + 0x14]
            push edx
            push eax
            call dword ptr [ecx + 0x24]
            ret 0x14
        lbl_5e00f818:
            mov eax, 0x80004005
            ret 0x14
    }
}
