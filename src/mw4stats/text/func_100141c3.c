/* auto-transcribed gap function 0x100141C3 (413 B); review against reference; stepping stone */
extern void __cdecl FUN_1000a0f0(void);
extern void __cdecl FUN_1001e1b0(void);
extern int g_10021478;
extern int g_10021c00;
__declspec(naked) void FUN_100141c3(void)
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
            mov eax, dword ptr [esp + 8]
            push esi
            push edi
            mov ecx, 4
            mov edi, offset g_10021c00
            mov esi, eax
            xor edx, edx
            repe cmpsd
            __emit 0x75 /* jne 0x100141f5: MSVC6 cannot encode natively */
            __emit 0x0d /* jne 0x100141f5: MSVC6 cannot encode natively */
            mov eax, dword ptr [esp + 0xc]
            test eax, eax
            je lbl_1001422c
            lea ecx, [eax + 0x1c]
            jmp lbl_1001422e
            mov ecx, 4
            mov edi, offset g_10021478
            mov esi, eax
            xor edx, edx
            repe cmpsd
            __emit 0x75 /* jne 0x10014214: MSVC6 cannot encode natively */
            __emit 0x0d /* jne 0x10014214: MSVC6 cannot encode natively */
            mov eax, dword ptr [esp + 0xc]
            test eax, eax
            je lbl_1001422c
            lea ecx, [eax + 0x1c]
            jmp lbl_1001422e
            mov esi, dword ptr [esp + 0xc]
            push eax
            push esi
            mov ecx, dword ptr [esi]
            call dword ptr [ecx + 0x24]
            test eax, eax
            je lbl_10014243
            test esi, esi
            je lbl_1001422c
            lea ecx, [esi + 0x1c]
            jmp lbl_1001422e
        lbl_1001422c:
            xor ecx, ecx
        lbl_1001422e:
            mov eax, dword ptr [esp + 0x14]
            mov dword ptr [eax], ecx
            mov eax, ecx
            push eax
            mov edx, dword ptr [eax]
            call dword ptr [edx + 4]
            pop edi
            xor eax, eax
            pop esi
            ret 0xc
        lbl_10014243:
            mov eax, dword ptr [esp + 0x14]
            pop edi
            pop esi
            mov dword ptr [eax], 0
            mov eax, 0x80004002
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
            push ebx
            push esi
            mov esi, dword ptr [esp + 0xc]
            push edi
            mov eax, dword ptr [esi + 0x34]
            test eax, eax
            je lbl_10014279
            pop edi
            pop esi
            mov eax, 0x80040210
            pop ebx
            ret 0x10
        lbl_10014279:
            mov ebx, dword ptr [esp + 0x14]
            test ebx, ebx
            jne lbl_1001428c
            pop edi
            pop esi
            mov eax, 0x80070057
            pop ebx
            ret 0x10
        lbl_1001428c:
            push 0x38
            call FUN_1000a0f0
            mov edi, eax
            test edi, edi
            mov dword ptr [esi + 0x34], edi
            jne lbl_100142a7
            pop edi
            pop esi
            mov eax, 0x80040257
            pop ebx
            ret 0x10
        lbl_100142a7:
            mov ecx, 0xe
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
            mov eax, dword ptr [edi + 0x34]
            mov dword ptr [edx + 0x34], eax
            mov ecx, dword ptr [esi + 0x34]
            mov edx, dword ptr [edi + 0x30]
            mov dword ptr [ecx + 0x30], edx
            mov eax, dword ptr [esi]
            mov dword ptr [esi + 0x14], ebx
            call dword ptr [eax + 0x28]
            mov ebx, eax
            test ebx, ebx
            jge lbl_100142eb
            mov ecx, dword ptr [esi]
            push esi
            call dword ptr [ecx + 0x40]
            pop edi
            mov eax, ebx
            pop esi
            pop ebx
            ret 0x10
        lbl_100142eb:
            mov edx, dword ptr [edi + 0x30]
            mov eax, dword ptr [esp + 0x1c]
            mov ecx, dword ptr [esi]
            lea ebx, [esi + 0x3c]
            push ebx
            push esi
            mov dword ptr [esi + 4], edx
            mov dword ptr [esi + 0xc], eax
            call dword ptr [ecx + 0x34]
            test eax, eax
            je lbl_10014317
            mov edx, dword ptr [esi]
            push esi
            call dword ptr [edx + 0x40]
            pop edi
            pop esi
            mov eax, 0x80040258
            pop ebx
            ret 0x10
        lbl_10014317:
            mov eax, dword ptr [esi + 0x28]
            mov ecx, dword ptr [edi + 0x34]
            push eax
            push ecx
            push ebx
            push esi
            call FUN_1001e1b0
            mov edi, eax
            test edi, edi
            je lbl_1001433a
            mov edx, dword ptr [esi]
            push esi
            call dword ptr [edx + 0x40]
            mov eax, edi
            pop edi
            pop esi
            pop ebx
            ret 0x10
        lbl_1001433a:
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
