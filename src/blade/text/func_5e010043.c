/* auto-transcribed gap function 0x5E010043 (1085 B); review against reference; stepping stone */
extern void __cdecl FUN_5e00ea50(void);
extern void __cdecl FUN_5e00ea70(void);
extern void __cdecl FUN_5e010180(void);
extern void __cdecl FUN_5e0102f7(void);
extern void __cdecl FUN_5e02b453(void);
extern void __cdecl FUN_5e02b45e(void);
extern int g_5e035014;
extern int g_5e0354e0;
extern int g_5e0384c8;
__declspec(naked) void FUN_5e010043(void)
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
            mov eax, dword ptr [esp + 4]
            mov eax, dword ptr [eax + 0x20]
            test eax, eax
            jne lbl_5e010073
            mov eax, 0x80004005
            ret 8
        lbl_5e010073:
            mov edx, dword ptr [esp + 8]
            mov ecx, dword ptr [eax]
            push edx
            push eax
            call dword ptr [ecx + 0x38]
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
            mov eax, dword ptr [esp + 4]
            push ebx
            xor ebx, ebx
            push esi
            mov eax, dword ptr [eax + 0x20]
            cmp eax, ebx
            je lbl_5e0100f5
            lea edx, [esp + 0xc]
            mov dword ptr [esp + 0xc], ebx
            mov ecx, dword ptr [eax]
            push edx
            push offset g_5e0354e0
            push eax
            call dword ptr [ecx]
            cmp eax, ebx
            jl FUN_5e010180
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
            je lbl_5e0100ee
            mov ecx, dword ptr [eax]
            push eax
            call dword ptr [ecx + 8]
        lbl_5e0100ee:
            mov eax, esi
            pop esi
            pop ebx
            ret 0xc
        lbl_5e0100f5:
            mov edx, dword ptr [esp + 0x10]
            cmp edx, ebx
            je lbl_5e01017b
            push ebp
            push edi
            mov edi, offset g_5e0384c8
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
            add edx, 0x418
            shr ecx, 2
            rep movsd
            __emit 0x8b /* mov ecx, eax: MSVC6 cannot encode natively */
            __emit 0xc8 /* mov ecx, eax: MSVC6 cannot encode natively */
            xor eax, eax
            and ecx, 3
            __emit 0xf3 /* rep movsb byte ptr es:[edi], byte ptr [esi]: MSVC6 cannot encode natively */
            __emit 0xa4 /* rep movsb byte ptr es:[edi], byte ptr [esi]: MSVC6 cannot encode natively */
            __emit 0xbf /* mov edi, 0x5e0384d0: MSVC6 cannot encode natively */
            __emit 0xd0 /* mov edi, 0x5e0384d0: MSVC6 cannot encode natively */
            __emit 0x84 /* mov edi, 0x5e0384d0: MSVC6 cannot encode natively */
            __emit 0x03 /* mov edi, 0x5e0384d0: MSVC6 cannot encode natively */
            __emit 0x5e /* mov edi, 0x5e0384d0: MSVC6 cannot encode natively */
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
            and ecx, 3
            __emit 0xf3 /* rep movsb byte ptr es:[edi], byte ptr [esi]: MSVC6 cannot encode natively */
            __emit 0xa4 /* rep movsb byte ptr es:[edi], byte ptr [esi]: MSVC6 cannot encode natively */
            __emit 0xc7 /* mov dword ptr [edx - 0x18], 1: MSVC6 cannot encode natively */
            __emit 0x42 /* mov dword ptr [edx - 0x18], 1: MSVC6 cannot encode natively */
            __emit 0xe8 /* mov dword ptr [edx - 0x18], 1: MSVC6 cannot encode natively */
            __emit 0x01 /* mov dword ptr [edx - 0x18], 1: MSVC6 cannot encode natively */
            __emit 0x00 /* mov dword ptr [edx - 0x18], 1: MSVC6 cannot encode natively */
            __emit 0x00 /* mov dword ptr [edx - 0x18], 1: MSVC6 cannot encode natively */
            __emit 0x00 /* mov dword ptr [edx - 0x18], 1: MSVC6 cannot encode natively */
            mov dword ptr [edx - 0x14], ebx
            mov dword ptr [edx - 0x10], ebx
            mov dword ptr [edx - 0xc], ebx
            mov dword ptr [edx - 8], ebx
            mov dword ptr [edx - 4], ebx
            xor ecx, ecx
            pop edi
            mov dword ptr [edx], ecx
            pop ebp
            pop esi
            xor eax, eax
            mov dword ptr [edx + 4], ecx
            pop ebx
            mov dword ptr [edx + 8], ecx
            mov dword ptr [edx + 0xc], ecx
            ret 0xc
        lbl_5e01017b:
            mov eax, 0x80070057
            pop esi
            pop ebx
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
            ret 0x10
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
            push ebx
            push ebp
            mov ebp, dword ptr [esp + 0x10]
            push esi
            mov esi, dword ptr [g_5e035014]
            push edi
            push 4
            push ebp
            call esi
            test eax, eax
            je lbl_5e0101d3
            pop edi
            pop esi
            pop ebp
            mov eax, 0x80070057
            pop ebx
            ret 0x10
        lbl_5e0101d3:
            cmp dword ptr [ebp], 0x10
            je lbl_5e0101e5
            pop edi
            pop esi
            pop ebp
            mov eax, 0x80070057
            pop ebx
            ret 0x10
        lbl_5e0101e5:
            push 0x10
            push ebp
            call esi
            test eax, eax
            je lbl_5e0101fa
            pop edi
            pop esi
            pop ebp
            mov eax, 0x80070057
            pop ebx
            ret 0x10
        lbl_5e0101fa:
            mov eax, dword ptr [ebp + 8]
            cmp eax, 0x1e2
            __emit 0x77 /* ja 0x5e010225: MSVC6 cannot encode natively */
            __emit 0x21 /* ja 0x5e010225: MSVC6 cannot encode natively */
            __emit 0x74 /* je 0x5e010244: MSVC6 cannot encode natively */
            __emit 0x3e /* je 0x5e010244: MSVC6 cannot encode natively */
            add eax, 0xfffffeee
            cmp eax, 0xb2
            ja FUN_5e0102f7
            xor ecx, ecx
            __emit 0x8a /* mov cl, byte ptr [eax + 0x5e01030c]: MSVC6 cannot encode natively */
            __emit 0x88 /* mov cl, byte ptr [eax + 0x5e01030c]: MSVC6 cannot encode natively */
            __emit 0x0c /* mov cl, byte ptr [eax + 0x5e01030c]: MSVC6 cannot encode natively */
            __emit 0x03 /* mov cl, byte ptr [eax + 0x5e01030c]: MSVC6 cannot encode natively */
            __emit 0x01 /* mov cl, byte ptr [eax + 0x5e01030c]: MSVC6 cannot encode natively */
            __emit 0x5e /* mov cl, byte ptr [eax + 0x5e01030c]: MSVC6 cannot encode natively */
            __emit 0xff /* jmp dword ptr [ecx*4 + 0x5e010304]: MSVC6 cannot encode natively */
            __emit 0x24 /* jmp dword ptr [ecx*4 + 0x5e010304]: MSVC6 cannot encode natively */
            __emit 0x8d /* jmp dword ptr [ecx*4 + 0x5e010304]: MSVC6 cannot encode natively */
            __emit 0x04 /* jmp dword ptr [ecx*4 + 0x5e010304]: MSVC6 cannot encode natively */
            __emit 0x03 /* jmp dword ptr [ecx*4 + 0x5e010304]: MSVC6 cannot encode natively */
            __emit 0x01 /* jmp dword ptr [ecx*4 + 0x5e010304]: MSVC6 cannot encode natively */
            __emit 0x5e /* jmp dword ptr [ecx*4 + 0x5e010304]: MSVC6 cannot encode natively */
            add eax, 0xfffffdee
            cmp eax, 0xb2
            ja FUN_5e0102f7
            xor edx, edx
            __emit 0x8a /* mov dl, byte ptr [eax + 0x5e0103c8]: MSVC6 cannot encode natively */
            __emit 0x90 /* mov dl, byte ptr [eax + 0x5e0103c8]: MSVC6 cannot encode natively */
            __emit 0xc8 /* mov dl, byte ptr [eax + 0x5e0103c8]: MSVC6 cannot encode natively */
            __emit 0x03 /* mov dl, byte ptr [eax + 0x5e0103c8]: MSVC6 cannot encode natively */
            __emit 0x01 /* mov dl, byte ptr [eax + 0x5e0103c8]: MSVC6 cannot encode natively */
            __emit 0x5e /* mov dl, byte ptr [eax + 0x5e0103c8]: MSVC6 cannot encode natively */
            __emit 0xff /* jmp dword ptr [edx*4 + 0x5e0103c0]: MSVC6 cannot encode natively */
            __emit 0x24 /* jmp dword ptr [edx*4 + 0x5e0103c0]: MSVC6 cannot encode natively */
            __emit 0x95 /* jmp dword ptr [edx*4 + 0x5e0103c0]: MSVC6 cannot encode natively */
            __emit 0xc0 /* jmp dword ptr [edx*4 + 0x5e0103c0]: MSVC6 cannot encode natively */
            __emit 0x03 /* jmp dword ptr [edx*4 + 0x5e0103c0]: MSVC6 cannot encode natively */
            __emit 0x01 /* jmp dword ptr [edx*4 + 0x5e0103c0]: MSVC6 cannot encode natively */
            __emit 0x5e /* jmp dword ptr [edx*4 + 0x5e0103c0]: MSVC6 cannot encode natively */
            push 0x28
            call FUN_5e02b45e
            add esp, 4
            test eax, eax
            je lbl_5e0102ce
            mov ecx, eax
            call FUN_5e00ea50
            mov esi, eax
            test esi, esi
            je lbl_5e0102ce
            mov ecx, ebp
            lea eax, [esi + 0x14]
            lea ebx, [esi + 0x10]
            mov dword ptr [esi + 0xc], 0
            mov edx, dword ptr [ecx]
            mov dword ptr [eax], edx
            mov dword ptr [ebx], 0
            mov edx, dword ptr [ecx + 4]
            mov dword ptr [eax + 4], edx
            mov edx, dword ptr [ecx + 8]
            mov dword ptr [eax + 8], edx
            mov edx, dword ptr [esp + 0x14]
            mov ecx, dword ptr [ecx + 0xc]
            mov edi, dword ptr [edx + 0x18]
            mov dword ptr [eax + 0xc], ecx
            mov ecx, dword ptr [esp + 0x20]
            mov eax, dword ptr [edi]
            push ecx
            push ebx
            push ebp
            push edi
            call dword ptr [eax + 0x14]
            test eax, eax
            jl lbl_5e0102be
            mov eax, dword ptr [esp + 0x20]
            mov edx, dword ptr [edi]
            push eax
            lea eax, [esi + 0xc]
            push eax
            push ebp
            push edi
            call dword ptr [edx + 0x14]
            test eax, eax
            jge lbl_5e0102da
            mov ebx, dword ptr [ebx]
            push ebx
            mov ecx, dword ptr [ebx]
            call dword ptr [ecx + 8]
        lbl_5e0102be:
            mov ecx, esi
            call FUN_5e00ea70
            push esi
            call FUN_5e02b453
            add esp, 4
        lbl_5e0102ce:
            pop edi
            pop esi
            pop ebp
            mov eax, 0x8007000e
            pop ebx
            ret 0x10
        lbl_5e0102da:
            mov eax, dword ptr [esp + 0x1c]
            lea edx, [esi + 4]
            mov byte ptr [esi + 0x24], 0
            pop edi
            mov dword ptr [eax], edx
            mov eax, dword ptr [esi + 8]
            inc eax
            mov dword ptr [esi + 8], eax
            pop esi
            pop ebp
            xor eax, eax
            pop ebx
            ret 0x10
            pop edi
            pop esi
            pop ebp
            mov eax, 0x88760800
            pop ebx
            ret 0x10
            nop
            inc esp
            add al, byte ptr [ecx]
            pop esi
            test dword ptr [edx], 0x1005e01
            add dword ptr [ecx], eax
            add byte ptr [ecx], al
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add byte ptr [ecx], al
            __emit 0x00 /* add byte ptr [eax + 0x5e010244], dl: MSVC6 cannot encode natively */
            __emit 0x90 /* add byte ptr [eax + 0x5e010244], dl: MSVC6 cannot encode natively */
            __emit 0x44 /* add byte ptr [eax + 0x5e010244], dl: MSVC6 cannot encode natively */
            __emit 0x02 /* add byte ptr [eax + 0x5e010244], dl: MSVC6 cannot encode natively */
            __emit 0x01 /* add byte ptr [eax + 0x5e010244], dl: MSVC6 cannot encode natively */
            __emit 0x5e /* add byte ptr [eax + 0x5e010244], dl: MSVC6 cannot encode natively */
            test dword ptr [edx], 0x1005e01
            add dword ptr [ecx], eax
            add byte ptr [ecx], al
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add dword ptr [ecx], eax
            add byte ptr [ecx], al
            add byte ptr [eax - 0x6f6f6f70], dl
    }
}
