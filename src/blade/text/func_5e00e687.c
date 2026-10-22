/* auto-transcribed gap function 0x5E00E687 (969 B); review against reference; stepping stone */
extern void __cdecl FUN_5e00e913(void);
extern void __cdecl FUN_5e00e915(void);
extern void __cdecl FUN_5e00ea70(void);
extern void __cdecl FUN_5e02b453(void);
extern int g_5e035710;
extern int g_5e035720;
extern int g_5e0362a0;
extern int g_5e77a4c8;
extern int g_5e77a508;
__declspec(naked) void FUN_5e00e687(void)
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
            mov eax, dword ptr [esp + 8]
            push esi
            push edi
            mov ecx, 4
            mov edi, eax
            mov esi, offset g_5e0362a0
            xor edx, edx
            repe cmpsd
            __emit 0x75 /* jne 0x5e00e6bf: MSVC6 cannot encode natively */
            __emit 0x17 /* jne 0x5e00e6bf: MSVC6 cannot encode natively */
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
            mov esi, offset g_5e035710
            xor edx, edx
            repe cmpsd
            __emit 0x74 /* je 0x5e00e6a8: MSVC6 cannot encode natively */
            __emit 0xd7 /* je 0x5e00e6a8: MSVC6 cannot encode natively */
            mov ecx, 4
            mov edi, eax
            mov esi, offset g_5e035720
            xor edx, edx
            repe cmpsd
            __emit 0x75 /* jne 0x5e00e70e: MSVC6 cannot encode natively */
            __emit 0x2b /* jne 0x5e00e70e: MSVC6 cannot encode natively */
            mov esi, dword ptr [esp + 0xc]
            push esi
            mov eax, dword ptr [esi]
            call dword ptr [eax + 4]
            test esi, esi
            je lbl_5e00e701
            mov ecx, dword ptr [esp + 0x14]
            lea eax, [esi + 4]
            pop edi
            pop esi
            mov dword ptr [ecx], eax
            xor eax, eax
            ret 0xc
        lbl_5e00e701:
            mov ecx, dword ptr [esp + 0x14]
            xor eax, eax
            pop edi
            pop esi
            mov dword ptr [ecx], eax
            ret 0xc
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
            nop
            nop
            nop
            mov eax, dword ptr [esp + 4]
            mov ecx, dword ptr [eax + 8]
            inc ecx
            mov dword ptr [eax + 8], ecx
            mov eax, ecx
            ret 4
            push esi
            mov esi, dword ptr [esp + 8]
            mov eax, dword ptr [esi + 8]
            dec eax
            mov dword ptr [esi + 8], eax
            jne lbl_5e00e78c
            mov eax, dword ptr [esi + 0x10]
            test eax, eax
            je lbl_5e00e762
            mov ecx, dword ptr [eax]
            push eax
            call dword ptr [ecx + 8]
            mov dword ptr [esi + 0x10], 0
        lbl_5e00e762:
            mov eax, dword ptr [esi + 0xc]
            test eax, eax
            je lbl_5e00e776
            mov edx, dword ptr [eax]
            push eax
            call dword ptr [edx + 8]
            mov dword ptr [esi + 0xc], 0
        lbl_5e00e776:
            test esi, esi
            je lbl_5e00e78a
            mov ecx, esi
            call FUN_5e00ea70
            push esi
            call FUN_5e02b453
            add esp, 4
        lbl_5e00e78a:
            xor eax, eax
        lbl_5e00e78c:
            pop esi
            ret 4
            mov edx, dword ptr [esp + 0x10]
            mov eax, dword ptr [esp + 4]
            push edx
            mov edx, dword ptr [esp + 0x10]
            mov eax, dword ptr [eax + 0x10]
            push edx
            mov edx, dword ptr [esp + 0x10]
            mov ecx, dword ptr [eax]
            push edx
            push eax
            call dword ptr [ecx + 0xc]
            ret 0x10
            nop
            mov eax, dword ptr [esp + 4]
            mov eax, dword ptr [eax + 0x10]
            push eax
            mov ecx, dword ptr [eax]
            call dword ptr [ecx + 0x10]
            ret 4
            mov eax, 0x80004005
            ret 0x20
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            mov eax, dword ptr [esp + 4]
            mov ecx, dword ptr [esp + 8]
            add eax, 0x14
            push esi
            mov edx, dword ptr [ecx]
            mov esi, dword ptr [eax]
            cmp edx, esi
            pop esi
            jae lbl_5e00e7ed
            mov eax, 0x80070057
            ret 8
        lbl_5e00e7ed:
            mov edx, dword ptr [eax]
            mov dword ptr [ecx], edx
            mov edx, dword ptr [eax + 4]
            mov dword ptr [ecx + 4], edx
            mov edx, dword ptr [eax + 8]
            mov eax, dword ptr [eax + 0xc]
            mov dword ptr [ecx + 8], edx
            mov dword ptr [ecx + 0xc], eax
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
            mov edx, dword ptr [g_5e77a508]
            xor eax, eax
            push esi
            mov esi, dword ptr [esp + 0x20]
            test edx, edx
            push edi
            jle lbl_5e00e843
            mov ecx, offset g_5e77a4c8
        lbl_5e00e837:
            cmp dword ptr [ecx], esi
            je lbl_5e00e857
            inc eax
            add ecx, 4
            cmp eax, edx
            jl lbl_5e00e837
        lbl_5e00e843:
            mov eax, dword ptr [esp + 0x1c]
            test eax, eax
            je FUN_5e00e913
            lea ecx, [eax - 4]
            jmp FUN_5e00e915
        lbl_5e00e857:
            test esi, esi
            je lbl_5e00e862
            lea ecx, [esi - 4]
            mov eax, ecx
            jmp lbl_5e00e866
        lbl_5e00e862:
            xor ecx, ecx
            xor eax, eax
        lbl_5e00e866:
            mov eax, dword ptr [eax + 0x41e4]
            add ecx, 0x438c
            push ecx
            push 1
            mov edx, dword ptr [eax]
            push eax
            call dword ptr [edx + 0x2c]
            test esi, esi
            je lbl_5e00e886
            lea ecx, [esi - 4]
            mov eax, ecx
            jmp lbl_5e00e88a
        lbl_5e00e886:
            xor ecx, ecx
            xor eax, eax
        lbl_5e00e88a:
            mov eax, dword ptr [eax + 0x41e4]
            add ecx, 0x43cc
            push ecx
            push 2
            mov edx, dword ptr [eax]
            push eax
            call dword ptr [edx + 0x2c]
            test esi, esi
            je lbl_5e00e8aa
            lea ecx, [esi - 4]
            mov eax, ecx
            jmp lbl_5e00e8ae
        lbl_5e00e8aa:
            xor ecx, ecx
            xor eax, eax
        lbl_5e00e8ae:
            mov eax, dword ptr [eax + 0x41e4]
            add ecx, 0x440c
            push ecx
            push 3
            mov edx, dword ptr [eax]
            push eax
            call dword ptr [edx + 0x2c]
            test esi, esi
            je lbl_5e00e8cc
            add esi, -4
            jmp lbl_5e00e8ce
        lbl_5e00e8cc:
            xor esi, esi
        lbl_5e00e8ce:
            mov eax, dword ptr [esp + 0x1c]
            test eax, eax
            je lbl_5e00e8db
            lea ecx, [eax - 4]
            jmp lbl_5e00e8dd
        lbl_5e00e8db:
            xor ecx, ecx
        lbl_5e00e8dd:
            mov edi, dword ptr [esp + 0x28]
            mov esi, dword ptr [esi + 0x41e4]
            mov ecx, dword ptr [ecx + 0x10]
            mov eax, dword ptr [esp + 0xc]
            push edi
            push esi
            mov esi, dword ptr [esp + 0x28]
            mov eax, dword ptr [eax + 0xc]
            push esi
            push ecx
            mov ecx, dword ptr [esp + 0x28]
            mov edx, dword ptr [eax]
            push ecx
            mov ecx, dword ptr [esp + 0x28]
            push ecx
            mov ecx, dword ptr [esp + 0x28]
            push ecx
            push eax
            call dword ptr [edx + 0x14]
            pop edi
            pop esi
            ret 0x20
            xor ecx, ecx
            mov ecx, dword ptr [ecx + 0xc]
            push ebx
            mov ebx, dword ptr [esp + 0x2c]
            mov edi, dword ptr [esp + 0x10]
            push ebp
            mov ebp, dword ptr [esp + 0x28]
            push ebx
            mov eax, dword ptr [edi + 8]
            push esi
            push ebp
            push ecx
            mov ecx, dword ptr [esp + 0x30]
            mov edx, dword ptr [eax]
            push ecx
            mov ecx, dword ptr [esp + 0x30]
            push ecx
            mov ecx, dword ptr [esp + 0x30]
            push ecx
            push eax
            call dword ptr [edx + 0x14]
            mov eax, dword ptr [esp + 0x24]
            test eax, eax
            je lbl_5e00e94f
            lea ecx, [eax - 4]
            jmp lbl_5e00e951
        lbl_5e00e94f:
            xor ecx, ecx
        lbl_5e00e951:
            mov ecx, dword ptr [ecx + 0x10]
            push ebx
            mov eax, dword ptr [edi + 0xc]
            push esi
            push ebp
            push ecx
            mov ecx, dword ptr [esp + 0x30]
            mov edx, dword ptr [eax]
            push ecx
            mov ecx, dword ptr [esp + 0x30]
            push ecx
            mov ecx, dword ptr [esp + 0x30]
            push ecx
            push eax
            call dword ptr [edx + 0x14]
            pop ebp
            pop ebx
            pop edi
            pop esi
            ret 0x20
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
            push ebx
            push ebp
            push esi
            mov esi, dword ptr [esp + 0x20]
            lea ecx, [esp + 0x18]
            push edi
            mov ebp, dword ptr [esi + 0xc]
            xor eax, eax
            lea edx, [esp + 0x18]
            push ecx
            mov dword ptr [esp + 0x20], eax
            mov dword ptr [esp + 0x18], eax
            mov dword ptr [esp + 0x1c], eax
            mov dword ptr [esp + 0x14], eax
            mov eax, dword ptr [ebp]
            push edx
            push 0x10
            push ebp
            call dword ptr [eax + 0xc]
            mov ebx, dword ptr [esi + 8]
            lea ecx, [esp + 0x14]
            lea edx, [esp + 0x10]
            push ecx
            mov eax, dword ptr [ebx]
            push edx
            push 0x20
            push ebx
            call dword ptr [eax + 0xc]
            mov edi, dword ptr [esp + 0x10]
            mov esi, dword ptr [esp + 0x18]
            mov ecx, dword ptr [esp + 0x14]
            mov edx, edi
            mov eax, ecx
            push ebp
            shr ecx, 2
            rep movsd
            __emit 0x8b /* mov ecx, eax: MSVC6 cannot encode natively */
            __emit 0xc8 /* mov ecx, eax: MSVC6 cannot encode natively */
            and ecx, 3
            __emit 0xf3 /* rep movsb byte ptr es:[edi], byte ptr [esi]: MSVC6 cannot encode natively */
            __emit 0xa4 /* rep movsb byte ptr es:[edi], byte ptr [esi]: MSVC6 cannot encode natively */
            __emit 0x89 /* mov dword ptr [esp + 0x14], edx: MSVC6 cannot encode natively */
            __emit 0x54 /* mov dword ptr [esp + 0x14], edx: MSVC6 cannot encode natively */
            __emit 0x24 /* mov dword ptr [esp + 0x14], edx: MSVC6 cannot encode natively */
            __emit 0x14 /* mov dword ptr [esp + 0x14], edx: MSVC6 cannot encode natively */
            mov eax, dword ptr [ebp]
            call dword ptr [eax + 0x10]
            mov ecx, dword ptr [ebx]
            push ebx
            call dword ptr [ecx + 0x10]
            mov edx, dword ptr [g_5e77a508]
            xor eax, eax
            mov esi, dword ptr [esp + 0x28]
            test edx, edx
            jle lbl_5e00ea16
            mov ecx, offset g_5e77a4c8
        lbl_5e00ea0a:
            cmp dword ptr [ecx], esi
            je lbl_5e00ea34
            inc eax
            add ecx, 4
            cmp eax, edx
            jl lbl_5e00ea0a
        lbl_5e00ea16:
            mov eax, dword ptr [esp + 0x2c]
            mov edx, dword ptr [ebx]
            push eax
            push esi
            push ebx
            call dword ptr [edx + 0x1c]
            pop edi
            pop esi
            mov ecx, dword ptr [esp + 0x1c]
            pop ebp
            pop ebx
            mov byte ptr [ecx + 0x20], 1
            add esp, 0x10
            ret 0xc
        lbl_5e00ea34:
            pop edi
            pop esi
            pop ebp
            xor eax, eax
            pop ebx
            add esp, 0x10
            ret 0xc
            mov eax, 0x80004005
            ret 0x20
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
