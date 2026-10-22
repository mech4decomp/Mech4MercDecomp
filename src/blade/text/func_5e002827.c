/* auto-transcribed gap function 0x5E002827 (841 B); review against reference; stepping stone */
extern void __cdecl FUN_5e002909(void);
__declspec(naked) void FUN_5e002827(void)
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
            mov eax, dword ptr [esp + 4]
            push esi
            mov esi, dword ptr [eax + 0x426c]
            test esi, esi
            je lbl_5e002851
            mov ecx, dword ptr [esi]
            push esi
            call dword ptr [ecx + 4]
            xor eax, eax
            mov edx, dword ptr [esp + 0xc]
            mov dword ptr [edx], esi
            pop esi
            ret 8
        lbl_5e002851:
            mov eax, dword ptr [esp + 0xc]
            pop esi
            mov dword ptr [eax], 0
            mov eax, 0x88760082
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
            mov eax, dword ptr [esp + 4]
            sub esp, 0x10
            push esi
            mov esi, dword ptr [eax + 0x41e8]
            test esi, esi
            je FUN_5e002909
            push ebx
            push edi
            mov edi, dword ptr [esp + 0x24]
            test edi, edi
            jne lbl_5e0028e0
            mov ecx, dword ptr [eax + 0x4080]
            mov edx, dword ptr [eax + 0x4084]
            push ebp
            mov ebp, dword ptr [eax + 0x4088]
            mov eax, dword ptr [eax + 0x408c]
            add ebp, ecx
            add eax, edx
            mov dword ptr [esp + 0x10], ecx
            mov dword ptr [esp + 0x14], edx
            mov dword ptr [esp + 0x18], ebp
            mov dword ptr [esp + 0x1c], eax
            mov ecx, dword ptr [esi + 4]
            mov edi, 1
            lea ebx, [esp + 0x10]
            mov eax, dword ptr [ecx + 0x42f8]
            pop ebp
            test eax, eax
            jne lbl_5e0028e4
            mov eax, dword ptr [esp + 0x2c]
            and al, 0xfd
            mov dword ptr [esp + 0x2c], eax
            jmp lbl_5e0028e4
        lbl_5e0028e0:
            mov ebx, dword ptr [esp + 0x28]
        lbl_5e0028e4:
            mov eax, dword ptr [esp + 0x38]
            mov ecx, dword ptr [esp + 0x34]
            mov edx, dword ptr [esi]
            push eax
            mov eax, dword ptr [esp + 0x34]
            push ecx
            mov ecx, dword ptr [esp + 0x34]
            push eax
            push ecx
            push ebx
            push edi
            push esi
            call dword ptr [edx + 0x50]
            pop edi
            pop ebx
            pop esi
            add esp, 0x10
            ret 0x1c
            xor eax, eax
            pop esi
            add esp, 0x10
            ret 0x1c
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
            mov esi, dword ptr [esp + 0xc]
            push edi
            lea edi, [eax + 0x4080]
            mov ecx, 6
            rep movsd
            __emit 0x5f /* pop edi: MSVC6 cannot encode natively */
            xor eax, eax
            pop esi
            ret 8
            nop
            nop
            mov eax, dword ptr [esp + 4]
            push esi
            push edi
            mov edi, dword ptr [esp + 0x10]
            lea esi, [eax + 0x4080]
            mov ecx, 6
            rep movsd
            __emit 0x5f /* pop edi: MSVC6 cannot encode natively */
            xor eax, eax
            pop esi
            ret 8
            nop
            nop
            mov eax, dword ptr [esp + 4]
            push esi
            mov esi, dword ptr [esp + 0xc]
            push edi
            lea edi, [eax + 0x4098]
            mov ecx, 0x11
            rep movsd
            __emit 0x80 /* or byte ptr [eax + 0x45a5], 0x40: MSVC6 cannot encode natively */
            __emit 0x88 /* or byte ptr [eax + 0x45a5], 0x40: MSVC6 cannot encode natively */
            __emit 0xa5 /* or byte ptr [eax + 0x45a5], 0x40: MSVC6 cannot encode natively */
            __emit 0x45 /* or byte ptr [eax + 0x45a5], 0x40: MSVC6 cannot encode natively */
            __emit 0x00 /* or byte ptr [eax + 0x45a5], 0x40: MSVC6 cannot encode natively */
            __emit 0x00 /* or byte ptr [eax + 0x45a5], 0x40: MSVC6 cannot encode natively */
            __emit 0x40 /* or byte ptr [eax + 0x45a5], 0x40: MSVC6 cannot encode natively */
            pop edi
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
            mov eax, dword ptr [esp + 4]
            push esi
            push edi
            mov edi, dword ptr [esp + 0x10]
            lea esi, [eax + 0x4098]
            mov ecx, 0x11
            rep movsd
            __emit 0x5f /* pop edi: MSVC6 cannot encode natively */
            xor eax, eax
            pop esi
            ret 8
            nop
            nop
            mov eax, dword ptr [esp + 8]
            cmp eax, 2
            jb lbl_5e0029c1
            mov eax, 0x80004005
            ret 0xc
        lbl_5e0029c1:
            mov ecx, dword ptr [esp + 4]
            lea edx, [eax + eax*2]
            push esi
            mov esi, dword ptr [esp + 0x10]
            or byte ptr [ecx + 0x45a5], 0x40
            lea eax, [eax + edx*4]
            push edi
            lea edi, [ecx + eax*8 + 0x40dc]
            mov ecx, 0x1a
            rep movsd
            __emit 0x5f /* pop edi: MSVC6 cannot encode natively */
            xor eax, eax
            pop esi
            ret 0xc
            nop
            nop
            nop
            mov eax, dword ptr [esp + 8]
            cmp eax, 2
            jbe lbl_5e002a01
            mov eax, 0x80004005
            ret 0xc
        lbl_5e002a01:
            lea ecx, [eax + eax*2]
            push esi
            push edi
            mov edi, dword ptr [esp + 0x14]
            lea edx, [eax + ecx*4]
            mov eax, dword ptr [esp + 0xc]
            mov ecx, 0x1a
            lea esi, [eax + edx*8 + 0x40dc]
            xor eax, eax
            rep movsd
            __emit 0x5f /* pop edi: MSVC6 cannot encode natively */
            pop esi
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
            mov eax, 0x80004005
            ret 4
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
            xor eax, eax
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
            sub esp, 0x10
            push esi
            mov esi, dword ptr [esp + 0x20]
            lea ecx, [esp + 4]
            push edi
            mov eax, dword ptr [esi]
            push ecx
            push esi
            call dword ptr [eax + 0x18]
            mov edx, dword ptr [esi]
            lea eax, [esp + 0x24]
            push 0
            push eax
            push 0x10
            push esi
            mov dword ptr [esp + 0x34], 0
            call dword ptr [edx + 0xc]
            mov ecx, dword ptr [esp + 0x1c]
            lea eax, [ecx - 4]
            mov ecx, dword ptr [esp + 0x30]
            push ecx
            mov ecx, dword ptr [esp + 0x30]
            push ecx
            mov ecx, dword ptr [esp + 0x2c]
            mov edx, dword ptr [eax]
            push ecx
            mov ecx, dword ptr [esp + 0x1c]
            push ecx
            mov ecx, dword ptr [esp + 0x30]
            push ecx
            push eax
            call dword ptr [edx + 0x70]
            mov edx, dword ptr [esi]
            push esi
            mov edi, eax
            call dword ptr [edx + 0x10]
            mov eax, edi
            pop edi
            pop esi
            add esp, 0x10
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
            nop
            nop
            nop
            sub esp, 0x10
            push esi
            mov esi, dword ptr [esp + 0x20]
            lea ecx, [esp + 4]
            push edi
            mov eax, dword ptr [esi]
            push ecx
            push esi
            call dword ptr [eax + 0x18]
            mov edx, dword ptr [esi]
            lea eax, [esp + 0x24]
            push 0
            push eax
            push 0x10
            push esi
            mov dword ptr [esp + 0x34], 0
            call dword ptr [edx + 0xc]
            mov ecx, dword ptr [esp + 0x1c]
            lea eax, [ecx - 4]
            mov ecx, dword ptr [esp + 0x38]
            push ecx
            mov ecx, dword ptr [esp + 0x38]
            push ecx
            mov ecx, dword ptr [esp + 0x38]
            push ecx
            mov ecx, dword ptr [esp + 0x38]
            push ecx
            mov ecx, dword ptr [esp + 0x34]
            mov edx, dword ptr [eax]
            push ecx
            mov ecx, dword ptr [esp + 0x24]
            push ecx
            mov ecx, dword ptr [esp + 0x38]
            push ecx
            push eax
            call dword ptr [edx + 0x74]
            mov edx, dword ptr [esi]
            push esi
            mov edi, eax
            call dword ptr [edx + 0x10]
            mov eax, edi
            pop edi
            pop esi
            add esp, 0x10
            ret 0x20
            nop
            nop
            nop
            mov eax, dword ptr [esp + 4]
            mov eax, dword ptr [eax + 0x437c]
            test eax, eax
            je lbl_5e002b57
            mov ecx, dword ptr [eax]
            push eax
            call dword ptr [ecx + 4]
            ret 0xc
        lbl_5e002b57:
            mov edx, dword ptr [esp + 0xc]
            xor eax, eax
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
    }
}
