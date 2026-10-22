/* auto-transcribed gap function 0x5E002CAB (421 B); review against reference; stepping stone */
extern int g_5e035680;
extern int g_5e035700;
extern int g_5e0362a0;
__declspec(naked) void FUN_5e002cab(void)
{
    __asm {
            nop
            nop
            nop
            nop
            nop
            mov eax, 0x80004005
            ret 8
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            mov eax, 0x80004005
            ret 8
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            mov eax, 0x80004005
            ret 8
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            mov eax, 0x80004005
            ret 0x10
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            mov eax, dword ptr [esp + 4]
            push ebx
            push esi
            push edi
            mov eax, dword ptr [eax + 0x41e0]
            test eax, eax
            je lbl_5e002d29
            mov edx, dword ptr [esp + 0x24]
            mov ecx, dword ptr [eax]
            push edx
            mov edx, dword ptr [esp + 0x24]
            push edx
            mov edx, dword ptr [esp + 0x24]
            push edx
            mov edx, dword ptr [esp + 0x24]
            push edx
            mov edx, dword ptr [esp + 0x24]
            push edx
            push eax
            call dword ptr [ecx + 0xac]
            pop edi
            pop esi
            pop ebx
            ret 0x18
        lbl_5e002d29:
            mov esi, dword ptr [esp + 0x14]
            lea ecx, [esp + 0x14]
            push ecx
            push offset g_5e035680
            mov eax, dword ptr [esi]
            push esi
            call dword ptr [eax]
            test eax, eax
            jl lbl_5e002d90
            mov edi, dword ptr [esp + 0x1c]
            lea eax, [esp + 0x10]
            push eax
            push offset g_5e035680
            mov edx, dword ptr [edi]
            push edi
            call dword ptr [edx]
            mov ebx, eax
            mov eax, dword ptr [esp + 0x14]
            test ebx, ebx
            jge lbl_5e002d6f
            test eax, eax
            je lbl_5e002d67
            mov ecx, dword ptr [eax]
            push eax
            call dword ptr [ecx + 8]
        lbl_5e002d67:
            pop edi
            mov eax, ebx
            pop esi
            pop ebx
            ret 0x18
        lbl_5e002d6f:
            mov ecx, dword ptr [esp + 0x10]
            mov edx, dword ptr [eax]
            push ecx
            push eax
            call dword ptr [edx + 0x14]
            test eax, eax
            jge lbl_5e002d90
            mov edx, dword ptr [esi]
            push 0
            push 0x1000000
            push 0
            push edi
            push 0
            push esi
            call dword ptr [edx + 0x14]
        lbl_5e002d90:
            pop edi
            pop esi
            pop ebx
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
            xor eax, eax
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
            mov eax, dword ptr [esp + 8]
            push esi
            push edi
            mov ecx, 4
            mov edi, eax
            mov esi, offset g_5e0362a0
            xor edx, edx
            repe cmpsd
            __emit 0x75 /* jne 0x5e002e1f: MSVC6 cannot encode natively */
            __emit 0x17 /* jne 0x5e002e1f: MSVC6 cannot encode natively */
            mov esi, dword ptr [esp + 0xc]
            push esi
            mov eax, dword ptr [esi]
            call dword ptr [eax + 4]
            pop edi
            xor eax, eax
            mov ecx, dword ptr [esp + 0x10]
            mov dword ptr [ecx], esi
            pop esi
            ret 0xc
            mov ecx, 4
            mov edi, eax
            mov esi, offset g_5e035700
            xor edx, edx
            repe cmpsd
            __emit 0x74 /* je 0x5e002e08: MSVC6 cannot encode natively */
            __emit 0xd7 /* je 0x5e002e08: MSVC6 cannot encode natively */
            mov edx, dword ptr [esp + 0x14]
            pop edi
            mov eax, 0x80004005
            pop esi
            mov dword ptr [edx], 0
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
    }
}
