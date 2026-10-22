/* auto-transcribed gap function 0x1000DFC4 (118 B); review against reference; stepping stone */
extern int g_10021064;
__declspec(naked) void FUN_1000dfc4(void)
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
            push esi
            push edi
            mov edi, dword ptr [esp + 0xc]
            mov eax, dword ptr [edi + 8]
            test eax, eax
            jne lbl_1000dfe7
            pop edi
            mov eax, 0x80040290
            pop esi
            ret 8
        lbl_1000dfe7:
            mov esi, dword ptr [esp + 0x10]
            push 0x10
            push esi
            call dword ptr [g_10021064]
            test eax, eax
            je lbl_1000e002
            pop edi
            mov eax, 0x80070057
            pop esi
            ret 8
        lbl_1000e002:
            add edi, 0x1c
            mov eax, dword ptr [edi]
            mov dword ptr [esi], eax
            mov ecx, dword ptr [edi + 4]
            mov dword ptr [esi + 4], ecx
            mov edx, dword ptr [edi + 8]
            mov dword ptr [esi + 8], edx
            mov eax, dword ptr [edi + 0xc]
            pop edi
            mov dword ptr [esi + 0xc], eax
            xor eax, eax
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
            push esi
            push edi
            mov esi, ecx
            xor edi, edi
            push edi
            lea ecx, [esi + 0xc]
    }
}
