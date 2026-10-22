/* auto-transcribed gap function 0x1001B593 (493 B); review against reference; stepping stone */
extern void __cdecl FUN_100067c0(void);
extern void __cdecl FUN_1000a0e0(void);
extern void __cdecl FUN_1000a0f0(void);
extern void __cdecl FUN_1001e1b0(void);
extern void __cdecl FUN_1001e380(void);
extern int g_10021064;
__declspec(naked) void FUN_1001b593(void)
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
            je lbl_1001b5b9
            pop edi
            pop esi
            mov eax, 0x80040210
            pop ebx
            ret 0x10
        lbl_1001b5b9:
            mov ebx, dword ptr [esp + 0x14]
            test ebx, ebx
            jne lbl_1001b5cc
            pop edi
            pop esi
            mov eax, 0x80070057
            pop ebx
            ret 0x10
        lbl_1001b5cc:
            push 0x28
            call FUN_1000a0f0
            mov edi, eax
            test edi, edi
            mov dword ptr [esi + 0x34], edi
            jne lbl_1001b5e7
            pop edi
            pop esi
            mov eax, 0x80040257
            pop ebx
            ret 0x10
        lbl_1001b5e7:
            mov ecx, 0xa
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
            mov eax, dword ptr [edi + 0x24]
            mov dword ptr [edx + 0x24], eax
            mov ecx, dword ptr [esi + 0x34]
            mov edx, dword ptr [edi + 0x20]
            mov dword ptr [ecx + 0x20], edx
            mov eax, dword ptr [esi]
            mov dword ptr [esi + 0x14], ebx
            call dword ptr [eax + 0x28]
            mov ebx, eax
            test ebx, ebx
            jge lbl_1001b62b
            mov ecx, dword ptr [esi]
            push esi
            call dword ptr [ecx + 0x40]
            pop edi
            mov eax, ebx
            pop esi
            pop ebx
            ret 0x10
        lbl_1001b62b:
            mov edx, dword ptr [edi + 0x20]
            mov eax, dword ptr [esp + 0x1c]
            mov ecx, dword ptr [esi]
            lea ebx, [esi + 0x3c]
            push ebx
            push esi
            mov dword ptr [esi + 4], edx
            mov dword ptr [esi + 0xc], eax
            call dword ptr [ecx + 0x34]
            test eax, eax
            je lbl_1001b657
            mov edx, dword ptr [esi]
            push esi
            call dword ptr [edx + 0x40]
            pop edi
            pop esi
            mov eax, 0x80040258
            pop ebx
            ret 0x10
        lbl_1001b657:
            mov eax, dword ptr [esi + 0x28]
            mov ecx, dword ptr [edi + 0x24]
            push eax
            push ecx
            push ebx
            push esi
            call FUN_1001e1b0
            mov edi, eax
            test edi, edi
            je lbl_1001b67a
            mov edx, dword ptr [esi]
            push esi
            call dword ptr [edx + 0x40]
            mov eax, edi
            pop edi
            pop esi
            pop ebx
            ret 0x10
        lbl_1001b67a:
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
            push ebx
            mov ebx, dword ptr [esp + 0xc]
            push esi
            push edi
            push 4
            push ebx
            call dword ptr [g_10021064]
            test eax, eax
            je lbl_1001b6bf
            pop edi
            pop esi
            mov eax, 0x80070057
            pop ebx
            ret 8
        lbl_1001b6bf:
            mov esi, dword ptr [esp + 0x10]
            mov eax, dword ptr [esi + 0x38]
            test eax, eax
            jne lbl_1001b765
            lea eax, [esp + 0x14]
            push eax
            push esi
            call FUN_1001e380
            test eax, eax
            jl lbl_1001b76e
            lea edi, [esi + 0x20]
            push 7
            mov ecx, edi
            call FUN_100067c0
            mov edx, dword ptr [edi]
            mov ecx, edi
            mov eax, dword ptr [esp + 0x14]
            push eax
            call dword ptr [edx + 8]
            test eax, eax
            jl lbl_1001b76e
            mov edx, dword ptr [edi]
            mov ecx, edi
            call dword ptr [edx]
            mov ecx, dword ptr [esi + 0x30]
            mov edx, dword ptr [eax]
            push 1
            push ecx
            mov ecx, eax
            call dword ptr [edx + 0x1c]
            mov edi, eax
            test edi, edi
            jne lbl_1001b721
            pop edi
            pop esi
            mov eax, 0x80040285
            pop ebx
            ret 8
        lbl_1001b721:
            push 4
            call FUN_1000a0f0
            test eax, eax
            mov dword ptr [esi + 0x38], eax
            jne lbl_1001b73a
            pop edi
            pop esi
            mov eax, 0x80040259
            pop ebx
            ret 8
        lbl_1001b73a:
            mov dword ptr [eax], 0
            mov edx, dword ptr [esi]
            push edi
            push esi
            call dword ptr [edx + 0x38]
            mov edi, eax
            test edi, edi
            jge lbl_1001b765
            mov eax, dword ptr [esi + 0x38]
            push eax
            call FUN_1000a0e0
            mov eax, edi
            mov dword ptr [esi + 0x38], 0
            pop edi
            pop esi
            pop ebx
            ret 8
        lbl_1001b765:
            mov ecx, dword ptr [esi + 0x38]
            xor eax, eax
            mov edx, dword ptr [ecx]
            mov dword ptr [ebx], edx
        lbl_1001b76e:
            pop edi
            pop esi
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
            nop
            nop
    }
}
