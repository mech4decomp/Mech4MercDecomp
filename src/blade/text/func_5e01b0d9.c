/* auto-transcribed gap function 0x5E01B0D9 (1431 B); review against reference; stepping stone */
extern void __cdecl FUN_5e01a290(void);
extern void __cdecl FUN_5e01a760(void);
extern void __cdecl FUN_5e01a930(void);
extern void __cdecl FUN_5e01aaa0(void);
extern void __cdecl FUN_5e01b149(void);
extern void __cdecl FUN_5e01b1e8(void);
extern void __cdecl FUN_5e01b38e(void);
extern void __cdecl FUN_5e01b3b1(void);
extern void __cdecl FUN_5e01b431(void);
extern void __cdecl FUN_5e01b583(void);
extern void __cdecl FUN_5e01b60b(void);
extern void __cdecl FUN_5e027daa(void);
extern void __cdecl FUN_5e027e0a(void);
extern void __cdecl FUN_5e027e9a(void);
extern void __cdecl FUN_5e027f1a(void);
extern void __cdecl FUN_5e027f6a(void);
extern int g_5e036290;
extern int g_5e038928;
extern int g_5e038990;
extern int g_5e038994;
extern int g_5e77a510;
extern int g_5e77a514;
extern int g_5e77a530;
extern int g_5e77a578;
extern int g_5e77a580;
extern int g_5e77a594;
extern int g_5e77a598;
extern int g_5e77a5b8;
extern int g_5e77a5d8;
extern int g_5e77a5e4;
extern int g_5e77a5e8;
extern int g_5e77a5ec;
extern int g_5e77a600;
extern int g_5e77a60c;
extern int g_5e77a618;
extern int g_5e77a624;
extern int g_5e77a630;
extern int g_5e77a680;
extern int g_5e77a68c;
extern int g_5e77a694;
extern int g_5e77a698;
extern int g_5e77a69c;
extern int g_5e77a6a0;
extern int g_5e77a6a4;
extern int g_5e77a6a8;
extern int g_5e77a6ac;
extern int g_5e77a6b8;
extern int g_5e77a6bc;
extern int g_5e77a6c0;
extern int g_5e77a6c4;
extern int g_5e77a6cc;
extern int g_5e77a6d0;
extern int g_5e77a6dc;
extern int g_5e77a6e0;
extern int g_5e77a6e4;
extern int g_5e77a6e8;
extern int g_5e77a6fc;
extern int g_5e77a704;
extern int g_5e77a788;
extern int g_5e77a798;
extern int g_5e77a7bc;
extern int g_5e77a7c0;
extern int g_5e77a7c4;
extern int g_5e77a7c8;
extern int g_5e77a7dc;
extern int g_5e77a7e0;
extern int g_5e77a7e8;
extern int g_5e77a800;
extern int g_5e77a834;
extern int g_5e77a840;
extern int g_5e77a844;
extern int g_5e77a848;
extern int g_5e77a850;
__declspec(naked) void FUN_5e01b0d9(void)
{
    __asm {
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            push ebp
            mov ebp, esp
            sub esp, 0x24
            push ebx
            mov ebx, ecx
            mov ecx, dword ptr [g_5e77a5d8]
            push esi
            mov esi, dword ptr [g_5e77a5b8]
            mov eax, ecx
            push edi
            mov edi, dword ptr [g_5e77a598]
            and eax, esi
            and eax, edi
            and eax, 0xf8000000
            cmp eax, 0xf8000000
            __emit 0x75 /* jne 0x5e01b150: MSVC6 cannot encode natively */
            __emit 0x41 /* jne 0x5e01b150: MSVC6 cannot encode natively */
            mov eax, dword ptr [g_5e77a580]
            and ah, 0xef
            test ah, 0x40
            mov dword ptr [g_5e77a580], eax
            jne lbl_5e01b129
            and ah, 0xdf
            mov dword ptr [g_5e77a580], eax
        lbl_5e01b129:
            test eax, 0x202040
            jne lbl_5e01b13a
            or eax, 0x400080
            mov dword ptr [g_5e77a580], eax
        lbl_5e01b13a:
            shr eax, 8
            and eax, 0x1f
            mov ecx, ebx
            __emit 0xff /* call dword ptr [eax*4 + 0x5e036008]: MSVC6 cannot encode natively */
            __emit 0x14 /* call dword ptr [eax*4 + 0x5e036008]: MSVC6 cannot encode natively */
            __emit 0x85 /* call dword ptr [eax*4 + 0x5e036008]: MSVC6 cannot encode natively */
            __emit 0x08 /* call dword ptr [eax*4 + 0x5e036008]: MSVC6 cannot encode natively */
            __emit 0x60 /* call dword ptr [eax*4 + 0x5e036008]: MSVC6 cannot encode natively */
            __emit 0x03 /* call dword ptr [eax*4 + 0x5e036008]: MSVC6 cannot encode natively */
            __emit 0x5e /* call dword ptr [eax*4 + 0x5e036008]: MSVC6 cannot encode natively */
            pop edi
            pop esi
            pop ebx
            mov esp, ebp
            pop ebp
            ret
            mov edx, dword ptr [g_5e77a580]
            test edx, 0x230000
            jne FUN_5e01b1e8
            mov eax, ecx
            or eax, esi
            or eax, edi
            test eax, 0xf8000000
            __emit 0x75 /* jne 0x5e01b1e8: MSVC6 cannot encode natively */
            __emit 0x79 /* jne 0x5e01b1e8: MSVC6 cannot encode natively */
            mov eax, dword ptr [g_5e77a848]
            and edx, 0x980101
            mov ecx, eax
            mov esi, eax
            and ecx, 0x1f
            and esi, 0x7c00
            shl ecx, 2
            or ecx, esi
            mov esi, dword ptr [g_5e038990]
            shr eax, 1
            shl ecx, 1
            and eax, 0xf80000
            or edx, 0x400088
            or ecx, eax
            mov eax, dword ptr [g_5e77a834]
            test eax, eax
            mov dword ptr [g_5e77a580], edx
            mov dword ptr [g_5e77a594], ecx
            mov dword ptr [g_5e038990], offset FUN_5e027f6a
            jne lbl_5e01b1cc
            mov dword ptr [g_5e038990], offset FUN_5e027f1a
        lbl_5e01b1cc:
            shr edx, 8
            and edx, 0x1f
            mov ecx, ebx
            __emit 0xff /* call dword ptr [edx*4 + 0x5e036008]: MSVC6 cannot encode natively */
            __emit 0x14 /* call dword ptr [edx*4 + 0x5e036008]: MSVC6 cannot encode natively */
            __emit 0x95 /* call dword ptr [edx*4 + 0x5e036008]: MSVC6 cannot encode natively */
            __emit 0x08 /* call dword ptr [edx*4 + 0x5e036008]: MSVC6 cannot encode natively */
            __emit 0x60 /* call dword ptr [edx*4 + 0x5e036008]: MSVC6 cannot encode natively */
            __emit 0x03 /* call dword ptr [edx*4 + 0x5e036008]: MSVC6 cannot encode natively */
            __emit 0x5e /* call dword ptr [edx*4 + 0x5e036008]: MSVC6 cannot encode natively */
            mov dword ptr [g_5e038990], esi
            pop edi
            pop esi
            pop ebx
            mov esp, ebp
            pop ebp
            ret
            mov eax, edx
            mov ebx, edx
            and eax, 0xff
            mov dword ptr [g_5e77a704], 0
            shr edi, 0x18
            __emit 0x8d /* lea eax, [eax*4 + 0x5e038524]: MSVC6 cannot encode natively */
            __emit 0x04 /* lea eax, [eax*4 + 0x5e038524]: MSVC6 cannot encode natively */
            __emit 0x85 /* lea eax, [eax*4 + 0x5e038524]: MSVC6 cannot encode natively */
            __emit 0x24 /* lea eax, [eax*4 + 0x5e038524]: MSVC6 cannot encode natively */
            __emit 0x85 /* lea eax, [eax*4 + 0x5e038524]: MSVC6 cannot encode natively */
            __emit 0x03 /* lea eax, [eax*4 + 0x5e038524]: MSVC6 cannot encode natively */
            __emit 0x5e /* lea eax, [eax*4 + 0x5e038524]: MSVC6 cannot encode natively */
            __emit 0x89 /* mov dword ptr [ebp - 0x1c], eax: MSVC6 cannot encode natively */
            __emit 0x45 /* mov dword ptr [ebp - 0x1c], eax: MSVC6 cannot encode natively */
            __emit 0xe4 /* mov dword ptr [ebp - 0x1c], eax: MSVC6 cannot encode natively */
            mov eax, 0xff
            sub eax, edi
            mov edi, 0xff
            shr esi, 0x18
            sub edi, esi
            shr eax, 3
            shr edi, 3
            shr ebx, 0x10
            cmp eax, edi
            jne lbl_5e01b24d
            shr ecx, 0x18
            mov esi, 0xff
            sub esi, ecx
            shr esi, 3
            cmp eax, esi
            jne lbl_5e01b24d
            mov dword ptr [g_5e77a704], 1
            mov dword ptr [g_5e038928], offset FUN_5e027daa
            jmp lbl_5e01b266
        lbl_5e01b24d:
            test dh, 0x80
            mov dword ptr [g_5e038928], offset FUN_5e027e9a
            jne lbl_5e01b266
            mov dword ptr [g_5e038928], offset FUN_5e027e0a
        lbl_5e01b266:
            xor ecx, ecx
            mov eax, offset g_5e77a788
        lbl_5e01b26d:
            mov esi, dword ptr [ebp - 0x1c]
            xor edx, edx
            add eax, 4
            mov dl, byte ptr [ecx + esi]
            inc ecx
            cmp eax, offset g_5e77a798
            __emit 0x8b /* mov edx, dword ptr [edx*4 + 0x5e038924]: MSVC6 cannot encode natively */
            __emit 0x14 /* mov edx, dword ptr [edx*4 + 0x5e038924]: MSVC6 cannot encode natively */
            __emit 0x95 /* mov edx, dword ptr [edx*4 + 0x5e038924]: MSVC6 cannot encode natively */
            __emit 0x24 /* mov edx, dword ptr [edx*4 + 0x5e038924]: MSVC6 cannot encode natively */
            __emit 0x89 /* mov edx, dword ptr [edx*4 + 0x5e038924]: MSVC6 cannot encode natively */
            __emit 0x03 /* mov edx, dword ptr [edx*4 + 0x5e038924]: MSVC6 cannot encode natively */
            __emit 0x5e /* mov edx, dword ptr [edx*4 + 0x5e038924]: MSVC6 cannot encode natively */
            mov dword ptr [eax - 4], edx
            jl lbl_5e01b26d
            xor eax, eax
            mov edx, dword ptr [g_5e77a788]
            __emit 0x8a /* mov al, byte ptr [ebx*2 + 0x5e036089]: MSVC6 cannot encode natively */
            __emit 0x04 /* mov al, byte ptr [ebx*2 + 0x5e036089]: MSVC6 cannot encode natively */
            __emit 0x5d /* mov al, byte ptr [ebx*2 + 0x5e036089]: MSVC6 cannot encode natively */
            __emit 0x89 /* mov al, byte ptr [ebx*2 + 0x5e036089]: MSVC6 cannot encode natively */
            __emit 0x60 /* mov al, byte ptr [ebx*2 + 0x5e036089]: MSVC6 cannot encode natively */
            __emit 0x03 /* mov al, byte ptr [ebx*2 + 0x5e036089]: MSVC6 cannot encode natively */
            __emit 0x5e /* mov al, byte ptr [ebx*2 + 0x5e036089]: MSVC6 cannot encode natively */
            __emit 0x8b /* mov ecx, dword ptr [eax*4 + 0x5e038990]: MSVC6 cannot encode natively */
            __emit 0x0c /* mov ecx, dword ptr [eax*4 + 0x5e038990]: MSVC6 cannot encode natively */
            __emit 0x85 /* mov ecx, dword ptr [eax*4 + 0x5e038990]: MSVC6 cannot encode natively */
            __emit 0x90 /* mov ecx, dword ptr [eax*4 + 0x5e038990]: MSVC6 cannot encode natively */
            __emit 0x89 /* mov ecx, dword ptr [eax*4 + 0x5e038990]: MSVC6 cannot encode natively */
            __emit 0x03 /* mov ecx, dword ptr [eax*4 + 0x5e038990]: MSVC6 cannot encode natively */
            __emit 0x5e /* mov ecx, dword ptr [eax*4 + 0x5e038990]: MSVC6 cannot encode natively */
            xor eax, eax
            __emit 0x8a /* mov al, byte ptr [ebx*2 + 0x5e036088]: MSVC6 cannot encode natively */
            __emit 0x04 /* mov al, byte ptr [ebx*2 + 0x5e036088]: MSVC6 cannot encode natively */
            __emit 0x5d /* mov al, byte ptr [ebx*2 + 0x5e036088]: MSVC6 cannot encode natively */
            __emit 0x88 /* mov al, byte ptr [ebx*2 + 0x5e036088]: MSVC6 cannot encode natively */
            __emit 0x60 /* mov al, byte ptr [ebx*2 + 0x5e036088]: MSVC6 cannot encode natively */
            __emit 0x03 /* mov al, byte ptr [ebx*2 + 0x5e036088]: MSVC6 cannot encode natively */
            __emit 0x5e /* mov al, byte ptr [ebx*2 + 0x5e036088]: MSVC6 cannot encode natively */
            mov dword ptr [g_5e77a798], ecx
            mov dword ptr [g_5e038994], edx
            __emit 0x8b /* mov ecx, dword ptr [eax*4 + 0x5e038990]: MSVC6 cannot encode natively */
            __emit 0x0c /* mov ecx, dword ptr [eax*4 + 0x5e038990]: MSVC6 cannot encode natively */
            __emit 0x85 /* mov ecx, dword ptr [eax*4 + 0x5e038990]: MSVC6 cannot encode natively */
            __emit 0x90 /* mov ecx, dword ptr [eax*4 + 0x5e038990]: MSVC6 cannot encode natively */
            __emit 0x89 /* mov ecx, dword ptr [eax*4 + 0x5e038990]: MSVC6 cannot encode natively */
            __emit 0x03 /* mov ecx, dword ptr [eax*4 + 0x5e038990]: MSVC6 cannot encode natively */
            __emit 0x5e /* mov ecx, dword ptr [eax*4 + 0x5e038990]: MSVC6 cannot encode natively */
            mov dword ptr [g_5e77a6a8], ecx
            call FUN_5e01aaa0
            mov eax, dword ptr [g_5e77a6ac]
            test eax, eax
            jne lbl_5e01b301
            mov edx, dword ptr [g_5e77a6bc]
            mov eax, dword ptr [g_5e77a6b8]
            push edx
            push eax
            call FUN_5e01a290
            mov ecx, dword ptr [g_5e77a6c0]
            mov edx, dword ptr [g_5e77a6b8]
            push ecx
            push edx
            call FUN_5e01a760
            mov eax, dword ptr [g_5e77a5ec]
            mov dword ptr [g_5e77a6c4], eax
            jmp lbl_5e01b332
        lbl_5e01b301:
            mov ecx, dword ptr [g_5e77a6c0]
            mov edx, dword ptr [g_5e77a6b8]
            push ecx
            push edx
            call FUN_5e01a290
            mov eax, dword ptr [g_5e77a6bc]
            mov ecx, dword ptr [g_5e77a6b8]
            push eax
            push ecx
            call FUN_5e01a760
            mov edx, dword ptr [g_5e77a694]
            mov dword ptr [g_5e77a6c4], edx
        lbl_5e01b332:
            mov ecx, dword ptr [g_5e77a840]
            mov eax, dword ptr [g_5e77a5e8]
            imul ecx, eax
            fld dword ptr [g_5e77a530]
            fmul dword ptr [g_5e036290]
            fstp dword ptr [ebp - 0x1c]
            mov edx, dword ptr [g_5e77a844]
            add ecx, edx
            mov edx, dword ptr [g_5e77a6cc]
            imul edx, eax
            mov eax, dword ptr [g_5e77a6d0]
            mov dword ptr [g_5e77a510], ecx
            add edx, eax
            mov dword ptr [g_5e77a514], edx
            fld dword ptr [ebp - 0x1c]
            fistp qword ptr [ebp - 0x18]
            mov eax, dword ptr [ebp - 0x18]
            mov ecx, dword ptr [g_5e77a6c4]
            mov dword ptr [g_5e77a7dc], eax
            mov dword ptr [ebp - 0x1c], 0
            mov edx, ecx
            dec ecx
            test edx, edx
            mov dword ptr [g_5e77a6c4], ecx
            je FUN_5e01b60b
            mov edi, dword ptr [g_5e77a68c]
            mov esi, dword ptr [g_5e77a514]
            mov edx, dword ptr [g_5e77a510]
            mov eax, dword ptr [g_5e77a5e4]
            mov ebx, eax
            sub ebx, edi
            mov dword ptr [g_5e77a578], ebx
            jns FUN_5e01b583
            mov ecx, dword ptr [g_5e77a834]
            mov edi, eax
            fld dword ptr [g_5e77a630]
            fmul dword ptr [g_5e036290]
            shl edi, cl
            fstp dword ptr [ebp - 0x14]
            lea ecx, [edx + edi*2]
            lea edx, [esi + eax*2]
            mov dword ptr [g_5e77a7bc], ecx
            mov dword ptr [g_5e77a7c0], edx
            fld dword ptr [ebp - 0x14]
            fistp qword ptr [ebp - 0x24]
            mov eax, dword ptr [ebp - 0x24]
            mov ecx, dword ptr [g_5e77a60c]
            mov edx, dword ptr [g_5e77a618]
            mov esi, dword ptr [g_5e77a578]
            mov dword ptr [g_5e77a7c8], eax
            mov eax, dword ptr [g_5e77a624]
            mov dword ptr [ebp - 4], ecx
            mov ecx, dword ptr [g_5e77a600]
            mov dword ptr [ebp - 8], edx
            mov edx, dword ptr [g_5e77a680]
            mov dword ptr [ebp - 0xc], eax
            mov dword ptr [ebp - 0x10], ecx
            mov dword ptr [ebp - 0x14], edx
            mov eax, dword ptr [ebp - 0xc]
            mov edx, dword ptr [ebp - 8]
            mov ecx, dword ptr [ebp - 4]
            sar eax, 0xe
            sar edx, 0xe
            mov edi, eax
            and edx, 0x3ff
            shl eax, 0xb
            sar ecx, 0xe
            or eax, edx
            and ecx, 0x3ff
            shl eax, 0xb
            and edi, 0x3ff
            or eax, ecx
            shl edi, 0x14
            mov dword ptr [g_5e77a800], eax
            mov al, byte ptr [g_5e77a580]
            or edi, ecx
            test al, 0x10
            mov dword ptr [g_5e77a7e0], edi
            je lbl_5e01b494
            mov eax, dword ptr [ebp - 0x10]
            sar eax, 0xe
            and eax, 0x3ff
            shl eax, 0xb
            or eax, edx
            shl eax, 0xa
            mov dword ptr [g_5e77a7e8], eax
            jmp lbl_5e01b49d
        lbl_5e01b494:
            shl edx, 0xa
            mov dword ptr [g_5e77a7e8], edx
        lbl_5e01b49d:
            mov ecx, dword ptr [ebp - 0x14]
            mov eax, esi
            sar ecx, 0xe
            cmp esi, -0x10
            mov dword ptr [g_5e77a850], ecx
            mov dword ptr [g_5e77a7c4], eax
            jge lbl_5e01b4bf
            mov eax, 0xfffffff0
            mov dword ptr [g_5e77a7c4], eax
        lbl_5e01b4bf:
            mov ecx, dword ptr [g_5e77a834]
            mov edx, eax
            shl edx, cl
            mov ecx, dword ptr [g_5e77a7bc]
            neg eax
            neg edx
            lea edx, [ecx + edx*2]
            mov ecx, dword ptr [g_5e77a7c0]
            mov dword ptr [g_5e77a7bc], edx
            lea edx, [ecx + eax*2]
            mov dword ptr [g_5e77a7c0], edx
            push ebx
            push esi
            push edi
            push ebp
            call dword ptr [g_5e77a6a8]
            pop ebp
            pop edi
            pop esi
            pop ebx
            mov esi, dword ptr [g_5e77a578]
            mov eax, dword ptr [g_5e77a7c4]
            sub esi, eax
            mov dword ptr [g_5e77a578], esi
            jns lbl_5e01b57d
            mov eax, dword ptr [g_5e77a7dc]
            mov edi, dword ptr [g_5e77a7c8]
            mov ecx, dword ptr [g_5e77a6e0]
            mov edx, dword ptr [g_5e77a6e4]
            shl eax, 4
            add edi, eax
            mov eax, dword ptr [ebp - 4]
            shl ecx, 4
            mov dword ptr [g_5e77a7c8], edi
            mov edi, dword ptr [ebp - 8]
            mov ebx, dword ptr [ebp - 0xc]
            add eax, ecx
            mov ecx, dword ptr [g_5e77a6dc]
            mov dword ptr [ebp - 4], eax
            mov eax, dword ptr [g_5e77a6e8]
            shl edx, 4
            add edi, edx
            mov edx, dword ptr [ebp - 0x10]
            shl ecx, 4
            add edx, ecx
            mov dword ptr [ebp - 8], edi
            shl eax, 4
            mov dword ptr [ebp - 0x10], edx
            mov edx, dword ptr [g_5e77a6fc]
            add ebx, eax
            mov eax, dword ptr [ebp - 0x14]
            shl edx, 4
            add eax, edx
            mov dword ptr [ebp - 0xc], ebx
            mov dword ptr [ebp - 0x14], eax
            jmp FUN_5e01b431
        lbl_5e01b57d:
            mov ecx, dword ptr [g_5e77a6c4]
            cmp ecx, dword ptr [ebp - 0x1c]
            jl FUN_5e01b149
            call FUN_5e01a930
            mov edi, dword ptr [g_5e77a68c]
            mov edx, dword ptr [g_5e77a698]
            mov eax, dword ptr [g_5e77a6a4]
            mov ecx, dword ptr [g_5e77a69c]
            add edi, edx
            add eax, ecx
            mov dword ptr [g_5e77a68c], edi
            mov dword ptr [g_5e77a6a4], eax
            js lbl_5e01b5cd
            mov ecx, dword ptr [g_5e77a6a0]
            inc edi
            sub eax, ecx
            mov dword ptr [g_5e77a68c], edi
            mov dword ptr [g_5e77a6a4], eax
        lbl_5e01b5cd:
            mov edx, dword ptr [g_5e77a510]
            mov ecx, dword ptr [g_5e77a840]
            mov esi, dword ptr [g_5e77a514]
            mov eax, dword ptr [g_5e77a6cc]
            add edx, ecx
            mov ecx, dword ptr [g_5e77a6c4]
            add esi, eax
            mov eax, ecx
            dec ecx
            mov dword ptr [g_5e77a510], edx
            test eax, eax
            mov dword ptr [g_5e77a514], esi
            mov dword ptr [g_5e77a6c4], ecx
            jne FUN_5e01b3b1
            mov ecx, dword ptr [g_5e77a694]
            mov eax, dword ptr [g_5e77a5ec]
            cmp eax, ecx
            je FUN_5e01b149
            mov ecx, dword ptr [ebp - 0x1c]
            mov eax, dword ptr [g_5e77a6ac]
            inc ecx
            test eax, eax
            mov dword ptr [ebp - 0x1c], ecx
            jne lbl_5e01b64b
            mov edx, dword ptr [g_5e77a6c0]
            mov eax, dword ptr [g_5e77a6bc]
            push edx
            push eax
            call FUN_5e01a290
            mov ecx, dword ptr [g_5e77a5ec]
            jmp FUN_5e01b38e
        lbl_5e01b64b:
            mov ecx, dword ptr [g_5e77a6c0]
            mov edx, dword ptr [g_5e77a6bc]
            push ecx
            push edx
            call FUN_5e01a760
            mov ecx, dword ptr [g_5e77a694]
            jmp FUN_5e01b38e
            nop
            nop
            nop
            nop
            nop
            nop
            nop
    }
}
