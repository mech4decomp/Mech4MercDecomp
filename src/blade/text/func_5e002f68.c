/* auto-transcribed gap function 0x5E002F68 (152 B); review against reference; stepping stone */
__declspec(naked) void FUN_5e002f68(void)
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
            mov ecx, dword ptr [esp + 8]
            push esi
            mov esi, dword ptr [esp + 8]
            mov eax, dword ptr [esi + 0x34]
            cmp ecx, eax
            jne lbl_5e002f91
            test eax, eax
            je lbl_5e002f91
            mov ecx, dword ptr [eax]
            push eax
            call dword ptr [ecx + 8]
            mov dword ptr [esi + 0x34], 0
        lbl_5e002f91:
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
            mov eax, dword ptr [esp + 4]
            mov eax, dword ptr [eax + 0x34]
            test eax, eax
            je lbl_5e002fc3
            test byte ptr [esp + 0x10], 6
            je lbl_5e002fc3
            mov ecx, dword ptr [esp + 0xc]
            mov edx, dword ptr [eax]
            push eax
            mov dword ptr [ecx], eax
            call dword ptr [edx + 4]
            xor eax, eax
            ret 0x10
        lbl_5e002fc3:
            mov eax, dword ptr [esp + 0xc]
            mov dword ptr [eax], 0
            xor eax, eax
            ret 0x10
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
            push edi
            mov edi, dword ptr [esp + 0x10]
            lea esi, [eax + 8]
            mov ecx, 0xb
            rep movsd
            __emit 0x5f /* pop edi: MSVC6 cannot encode natively */
            xor eax, eax
            pop esi
            ret 8
            nop
            nop
            nop
            nop
            nop
    }
}
