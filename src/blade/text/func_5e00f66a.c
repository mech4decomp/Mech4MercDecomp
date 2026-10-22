/* auto-transcribed gap function 0x5E00F66A (70 B); review against reference; stepping stone */
extern int g_5e0354d0;
__declspec(naked) void FUN_5e00f66a(void)
{
    __asm {
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
            jne lbl_5e00f68a
            mov eax, 0x80004005
            pop esi
            ret 0xc
        lbl_5e00f68a:
            mov edx, dword ptr [eax]
            push ecx
            push offset g_5e0354d0
            push eax
            call dword ptr [edx]
            test eax, eax
            jl lbl_5e00f6aa
            mov ecx, dword ptr [esp + 0x10]
            mov edx, dword ptr [esp + 0xc]
            mov eax, dword ptr [esi]
            push ecx
            push edx
            push 0
            call dword ptr [eax + 0x1c]
        lbl_5e00f6aa:
            pop esi
            ret 0xc
            nop
            nop
    }
}
