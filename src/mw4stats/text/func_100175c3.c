/* auto-transcribed gap function 0x100175C3 (269 B); review against reference; stepping stone */
extern void __cdecl FUN_1000a0f0(void);
extern void __cdecl FUN_1001e1b0(void);
__declspec(naked) void FUN_100175c3(void)
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
            push ebx
            push esi
            mov esi, dword ptr [esp + 0xc]
            push edi
            mov eax, dword ptr [esi + 0x34]
            test eax, eax
            je lbl_100175e9
            pop edi
            pop esi
            mov eax, 0x80040210
            pop ebx
            ret 0x10
        lbl_100175e9:
            mov ebx, dword ptr [esp + 0x14]
            test ebx, ebx
            jne lbl_100175fc
            pop edi
            pop esi
            mov eax, 0x80070057
            pop ebx
            ret 0x10
        lbl_100175fc:
            push 0x18
            call FUN_1000a0f0
            mov edi, eax
            test edi, edi
            mov dword ptr [esi + 0x34], edi
            jne lbl_10017617
            pop edi
            pop esi
            mov eax, 0x80040257
            pop ebx
            ret 0x10
        lbl_10017617:
            mov ecx, 6
            xor eax, eax
            rep stosd
            __emit 0x8b /* mov edi, dword ptr [esp + 0x18]: MSVC6 cannot encode natively */
            __emit 0x7c /* mov edi, dword ptr [esp + 0x18]: MSVC6 cannot encode natively */
            __emit 0x24 /* mov edi, dword ptr [esp + 0x18]: MSVC6 cannot encode natively */
            __emit 0x18 /* mov edi, dword ptr [esp + 0x18]: MSVC6 cannot encode natively */
            mov eax, dword ptr [esi + 0x34]
            push edi
            push esi
            mov ecx, dword ptr [edi]
            mov dword ptr [eax], ecx
            mov edx, dword ptr [esi + 0x34]
            mov eax, dword ptr [edi + 0x14]
            mov dword ptr [edx + 0x14], eax
            mov ecx, dword ptr [esi + 0x34]
            mov edx, dword ptr [edi + 0x10]
            mov dword ptr [ecx + 0x10], edx
            mov eax, dword ptr [esi]
            mov dword ptr [esi + 0x14], ebx
            call dword ptr [eax + 0x28]
            mov ebx, eax
            test ebx, ebx
            jge lbl_1001765b
            mov ecx, dword ptr [esi]
            push esi
            call dword ptr [ecx + 0x40]
            pop edi
            mov eax, ebx
            pop esi
            pop ebx
            ret 0x10
        lbl_1001765b:
            mov edx, dword ptr [edi + 0x10]
            mov eax, dword ptr [esp + 0x1c]
            mov ecx, dword ptr [esi]
            lea ebx, [esi + 0x3c]
            push ebx
            push esi
            mov dword ptr [esi + 4], edx
            mov dword ptr [esi + 0xc], eax
            call dword ptr [ecx + 0x34]
            test eax, eax
            je lbl_10017687
            mov edx, dword ptr [esi]
            push esi
            call dword ptr [edx + 0x40]
            pop edi
            pop esi
            mov eax, 0x80040258
            pop ebx
            ret 0x10
        lbl_10017687:
            mov eax, dword ptr [esi + 0x28]
            mov ecx, dword ptr [edi + 0x14]
            push eax
            push ecx
            push ebx
            push esi
            call FUN_1001e1b0
            mov edi, eax
            test edi, edi
            je lbl_100176aa
            mov edx, dword ptr [esi]
            push esi
            call dword ptr [edx + 0x40]
            mov eax, edi
            pop edi
            pop esi
            pop ebx
            ret 0x10
        lbl_100176aa:
            mov dword ptr [esi + 8], 1
            mov esi, dword ptr [esi + 0x14]
            push esi
            mov eax, dword ptr [esi]
            call dword ptr [eax + 4]
            mov eax, edi
            pop edi
            pop esi
            pop ebx
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
    }
}
