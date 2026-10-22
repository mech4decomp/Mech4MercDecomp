/* auto-transcribed gap function 0x5E011B08 (200 B); review against reference; stepping stone */
extern int g_5e035670;
__declspec(naked) void FUN_5e011b08(void)
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
            sub esp, 8
            mov eax, dword ptr [esp + 0x10]
            mov dword ptr [esp + 4], 0
            test eax, eax
            __emit 0xc7 /* mov dword ptr [esp], 0: MSVC6 cannot encode natively */
            __emit 0x44 /* mov dword ptr [esp], 0: MSVC6 cannot encode natively */
            __emit 0x24 /* mov dword ptr [esp], 0: MSVC6 cannot encode natively */
            __emit 0x00 /* mov dword ptr [esp], 0: MSVC6 cannot encode natively */
            __emit 0x00 /* mov dword ptr [esp], 0: MSVC6 cannot encode natively */
            __emit 0x00 /* mov dword ptr [esp], 0: MSVC6 cannot encode natively */
            __emit 0x00 /* mov dword ptr [esp], 0: MSVC6 cannot encode natively */
            __emit 0x00 /* mov dword ptr [esp], 0: MSVC6 cannot encode natively */
            je lbl_5e011b50
            add eax, -0x10
            jmp lbl_5e011b52
        lbl_5e011b50:
            xor eax, eax
        lbl_5e011b52:
            mov eax, dword ptr [eax + 0x18]
            lea edx, [esp + 4]
            push esi
            push edx
            mov ecx, dword ptr [eax]
            push offset g_5e035670
            push eax
            call dword ptr [ecx]
            mov esi, eax
            test esi, esi
            jl lbl_5e011b98
            mov eax, dword ptr [esp + 0x10]
            lea edx, [esp + 4]
            push edx
            push offset g_5e035670
            mov eax, dword ptr [eax + 8]
            push eax
            mov ecx, dword ptr [eax]
            call dword ptr [ecx]
            mov esi, eax
            test esi, esi
            jl lbl_5e011b98
            mov eax, dword ptr [esp + 4]
            mov edx, dword ptr [esp + 8]
            push edx
            push eax
            mov ecx, dword ptr [eax]
            call dword ptr [ecx + 0x18]
            mov esi, eax
        lbl_5e011b98:
            mov eax, dword ptr [esp + 4]
            test eax, eax
            je lbl_5e011bae
            mov ecx, dword ptr [eax]
            push eax
            call dword ptr [ecx + 8]
            mov dword ptr [esp + 4], 0
        lbl_5e011bae:
            mov eax, dword ptr [esp + 8]
            test eax, eax
            je lbl_5e011bbc
            mov edx, dword ptr [eax]
            push eax
            call dword ptr [edx + 8]
        lbl_5e011bbc:
            mov eax, esi
            pop esi
            add esp, 8
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
    }
}
