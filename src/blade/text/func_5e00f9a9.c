/* auto-transcribed gap function 0x5E00F9A9 (439 B); review against reference; stepping stone */
extern void __cdecl FUN_5e001de0(void);
extern void __cdecl FUN_5e00faa4(void);
extern void __cdecl FUN_5e00faa9(void);
extern int g_5e03513c;
extern int g_5e035160;
extern int g_5e0354d0;
extern int g_5e0384a8;
__declspec(naked) void FUN_5e00f9a9(void)
{
    __asm {
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            mov eax, dword ptr [esp + 4]
            push ebx
            xor ebx, ebx
            push esi
            mov eax, dword ptr [eax + 0x24]
            cmp eax, ebx
            je lbl_5e00fa05
            lea edx, [esp + 0xc]
            mov dword ptr [esp + 0xc], ebx
            mov ecx, dword ptr [eax]
            push edx
            push offset g_5e0354d0
            push eax
            call dword ptr [ecx]
            cmp eax, ebx
            jl FUN_5e00faa9
            mov edx, dword ptr [esp + 0x14]
            mov eax, dword ptr [esp + 0xc]
            push edx
            mov edx, dword ptr [esp + 0x14]
            mov ecx, dword ptr [eax]
            push edx
            push eax
            call dword ptr [ecx + 0x6c]
            mov esi, eax
            mov eax, dword ptr [esp + 0xc]
            cmp eax, ebx
            je lbl_5e00f9fe
            mov ecx, dword ptr [eax]
            push eax
            call dword ptr [ecx + 8]
        lbl_5e00f9fe:
            mov eax, esi
            pop esi
            pop ebx
            ret 0xc
        lbl_5e00fa05:
            mov edx, dword ptr [esp + 0x10]
            cmp edx, ebx
            je FUN_5e00faa4
            push ebp
            push edi
            mov edi, offset g_5e0384a8
            or ecx, 0xffffffff
            xor eax, eax
            lea ebp, [edx + 0x200]
            repne scasb
            __emit 0xf7 /* not ecx: MSVC6 cannot encode natively */
            __emit 0xd1 /* not ecx: MSVC6 cannot encode natively */
            sub edi, ecx
            mov eax, ecx
            mov esi, edi
            mov edi, edx
            shr ecx, 2
            rep movsd
            __emit 0x8b /* mov ecx, eax: MSVC6 cannot encode natively */
            __emit 0xc8 /* mov ecx, eax: MSVC6 cannot encode natively */
            xor eax, eax
            and ecx, 3
            __emit 0xf3 /* rep movsb byte ptr es:[edi], byte ptr [esi]: MSVC6 cannot encode natively */
            __emit 0xa4 /* rep movsb byte ptr es:[edi], byte ptr [esi]: MSVC6 cannot encode natively */
            __emit 0xbf /* mov edi, 0x5e0384b0: MSVC6 cannot encode natively */
            __emit 0xb0 /* mov edi, 0x5e0384b0: MSVC6 cannot encode natively */
            __emit 0x84 /* mov edi, 0x5e0384b0: MSVC6 cannot encode natively */
            __emit 0x03 /* mov edi, 0x5e0384b0: MSVC6 cannot encode natively */
            __emit 0x5e /* mov edi, 0x5e0384b0: MSVC6 cannot encode natively */
            or ecx, 0xffffffff
            repne scasb
            __emit 0xf7 /* not ecx: MSVC6 cannot encode natively */
            __emit 0xd1 /* not ecx: MSVC6 cannot encode natively */
            sub edi, ecx
            mov eax, ecx
            mov esi, edi
            mov edi, ebp
            shr ecx, 2
            rep movsd
            __emit 0x8b /* mov ecx, eax: MSVC6 cannot encode natively */
            __emit 0xc8 /* mov ecx, eax: MSVC6 cannot encode natively */
            mov eax, 0x80004001
            and ecx, 3
            __emit 0xf3 /* rep movsb byte ptr es:[edi], byte ptr [esi]: MSVC6 cannot encode natively */
            __emit 0xa4 /* rep movsb byte ptr es:[edi], byte ptr [esi]: MSVC6 cannot encode natively */
            __emit 0xc7 /* mov dword ptr [edx + 0x400], 1: MSVC6 cannot encode natively */
            __emit 0x82 /* mov dword ptr [edx + 0x400], 1: MSVC6 cannot encode natively */
            __emit 0x00 /* mov dword ptr [edx + 0x400], 1: MSVC6 cannot encode natively */
            __emit 0x04 /* mov dword ptr [edx + 0x400], 1: MSVC6 cannot encode natively */
            __emit 0x00 /* mov dword ptr [edx + 0x400], 1: MSVC6 cannot encode natively */
            __emit 0x00 /* mov dword ptr [edx + 0x400], 1: MSVC6 cannot encode natively */
            __emit 0x01 /* mov dword ptr [edx + 0x400], 1: MSVC6 cannot encode natively */
            __emit 0x00 /* mov dword ptr [edx + 0x400], 1: MSVC6 cannot encode natively */
            __emit 0x00 /* mov dword ptr [edx + 0x400], 1: MSVC6 cannot encode natively */
            __emit 0x00 /* mov dword ptr [edx + 0x400], 1: MSVC6 cannot encode natively */
            mov dword ptr [edx + 0x404], ebx
            mov dword ptr [edx + 0x408], ebx
            mov dword ptr [edx + 0x40c], ebx
            mov dword ptr [edx + 0x410], ebx
            mov dword ptr [edx + 0x414], ebx
            xor ecx, ecx
            add edx, 0x418
            pop edi
            pop ebp
            mov dword ptr [edx], ecx
            pop esi
            pop ebx
            mov dword ptr [edx + 4], ecx
            mov dword ptr [edx + 8], ecx
            mov dword ptr [edx + 0xc], ecx
            ret 0xc
            mov eax, 0x80070057
            pop esi
            pop ebx
            ret 0xc
            nop
            nop
            mov eax, dword ptr [esp + 4]
            mov edx, dword ptr [esp + 8]
            push edx
            mov eax, dword ptr [eax + 0x18]
            push eax
            mov ecx, dword ptr [eax]
            call dword ptr [ecx + 0xc]
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
            sub esp, 0xec
            push esi
            mov esi, dword ptr [esp + 0xf8]
            test esi, esi
            jne lbl_5e00faf1
            mov eax, 0x80070057
            pop esi
            add esp, 0xec
            ret 0xc
        lbl_5e00faf1:
            push edi
            mov ecx, 0x3a
            xor eax, eax
            lea edi, [esp + 0xc]
            mov dword ptr [esp + 8], 0
            rep stosd
            __emit 0x8d /* lea eax, [esp + 8]: MSVC6 cannot encode natively */
            __emit 0x44 /* lea eax, [esp + 8]: MSVC6 cannot encode natively */
            __emit 0x24 /* lea eax, [esp + 8]: MSVC6 cannot encode natively */
            __emit 0x08 /* lea eax, [esp + 8]: MSVC6 cannot encode natively */
            push eax
            call FUN_5e001de0
            lea ecx, [esp + 8]
            mov edi, dword ptr [esp + 0x100]
            push edi
            push ecx
            push offset g_5e035160
            push offset g_5e03513c
            call esi
            mov ecx, dword ptr [esp + 0xf8]
            mov edx, dword ptr [ecx + 0x14]
            test edx, edx
            je lbl_5e00fb48
            cmp eax, 1
            jne lbl_5e00fb48
            mov eax, dword ptr [ecx + 0x18]
            push edi
            push esi
            push eax
            mov edx, dword ptr [eax]
            call dword ptr [edx + 0xc]
        lbl_5e00fb48:
            pop edi
            pop esi
            add esp, 0xec
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
    }
}
