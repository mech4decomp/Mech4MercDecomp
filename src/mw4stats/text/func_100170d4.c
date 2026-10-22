/* auto-transcribed gap function 0x100170D4 (284 B); review against reference; stepping stone */
extern void __cdecl FUN_1000b7d0(void);
extern void __cdecl FUN_1000b850(void);
extern int g_1002105c;
extern int g_100210ec;
extern int g_10021130;
__declspec(naked) void FUN_100170d4(void)
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
            push ebx
            mov ebx, dword ptr [g_1002105c]
            push esi
            push edi
            mov edi, dword ptr [esp + 0x14]
            push -1
            mov eax, dword ptr [edi + 0xc]
            push eax
            call ebx
            test eax, eax
            je lbl_10017104
            pop edi
            pop esi
            mov eax, 0x80070057
            pop ebx
            ret 8
        lbl_10017104:
            mov ecx, dword ptr [edi + 0xc]
            push -1
            push ecx
            call ebx
            test eax, eax
            jne lbl_10017135
            mov edx, dword ptr [edi + 0xc]
            push edx
            call FUN_1000b7d0
            add esp, 4
            test eax, eax
            jne lbl_10017135
            mov eax, dword ptr [esp + 0x10]
            push eax
            mov ecx, dword ptr [eax]
            call dword ptr [ecx + 0x40]
            pop edi
            pop esi
            mov eax, 0x80070057
            pop ebx
            ret 8
        lbl_10017135:
            mov esi, dword ptr [esp + 0x10]
            mov eax, dword ptr [edi]
            push -1
            mov edx, dword ptr [esi + 0x34]
            mov dword ptr [edx], eax
            mov ecx, dword ptr [esi + 0x34]
            mov edx, dword ptr [edi + 0x14]
            mov dword ptr [ecx + 0x14], edx
            mov eax, dword ptr [esi + 0x34]
            mov ecx, dword ptr [edi + 4]
            mov dword ptr [eax + 4], ecx
            mov edx, dword ptr [esi + 0x34]
            mov eax, dword ptr [edi + 8]
            mov dword ptr [edx + 8], eax
            mov ecx, dword ptr [edi + 0xc]
            push ecx
            call ebx
            test eax, eax
            jne lbl_100171a6
            mov eax, dword ptr [edi + 0xc]
            lea edx, [esi + 0xd4]
            push edx
            push eax
            call FUN_1000b850
            add esp, 8
            test al, al
            je lbl_100171a6
            mov ecx, dword ptr [edi + 0xc]
            push ecx
            call dword ptr [g_10021130]
            mov edx, dword ptr [esi + 0x34]
            add esp, 4
            mov dword ptr [edx + 0xc], eax
            mov eax, dword ptr [esi + 0x34]
            mov ecx, dword ptr [eax + 0xc]
            test ecx, ecx
            jne lbl_100171de
            pop edi
            pop esi
            mov eax, 0x80040254
            pop ebx
            ret 8
        lbl_100171a6:
            mov ecx, dword ptr [esi + 0x34]
            xor edi, edi
            mov dword ptr [ecx + 0xc], edi
            mov eax, dword ptr [esi + 0xe0]
            cmp eax, edi
            jbe lbl_100171cc
            mov eax, dword ptr [esi + 0xd4]
            cmp eax, edi
            je lbl_100171cc
            push eax
            call dword ptr [g_100210ec]
            add esp, 4
        lbl_100171cc:
            mov dword ptr [esi + 0xd4], edi
            mov dword ptr [esi + 0xe4], edi
            mov dword ptr [esi + 0xe0], edi
        lbl_100171de:
            pop edi
            pop esi
            xor eax, eax
            pop ebx
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
    }
}
