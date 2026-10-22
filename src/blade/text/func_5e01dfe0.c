/* auto-transcribed gap function 0x5E01DFE0 (1799 B); review against reference; stepping stone */
extern void __cdecl FUN_5e01b670(void);
extern void __cdecl FUN_5e01bbc0(void);
extern void __cdecl FUN_5e01bd80(void);
extern void __cdecl FUN_5e01d540(void);
extern void __cdecl FUN_5e01e045(void);
extern void __cdecl FUN_5e01e0da(void);
extern void __cdecl FUN_5e01e334(void);
extern void __cdecl FUN_5e01e357(void);
extern void __cdecl FUN_5e01e422(void);
extern void __cdecl FUN_5e01e5f4(void);
extern void __cdecl FUN_5e01e5fa(void);
extern void __cdecl FUN_5e01e682(void);
extern void __cdecl FUN_5e027daa(void);
extern void __cdecl FUN_5e027e0a(void);
extern void __cdecl FUN_5e027e9a(void);
extern void __cdecl FUN_5e027f1a(void);
extern void __cdecl FUN_5e027f6a(void);
extern int g_5e036290;
extern int g_5e0384e8;
extern int g_5e038928;
extern int g_5e038990;
extern int g_5e038994;
extern int g_5e77a510;
extern int g_5e77a514;
extern int g_5e77a530;
extern int g_5e77a55c;
extern int g_5e77a560;
extern int g_5e77a578;
extern int g_5e77a580;
extern int g_5e77a594;
extern int g_5e77a598;
extern int g_5e77a5b4;
extern int g_5e77a5b8;
extern int g_5e77a5d4;
extern int g_5e77a5d8;
extern int g_5e77a5e4;
extern int g_5e77a5e8;
extern int g_5e77a5ec;
extern int g_5e77a600;
extern int g_5e77a60c;
extern int g_5e77a618;
extern int g_5e77a624;
extern int g_5e77a630;
extern int g_5e77a668;
extern int g_5e77a674;
extern int g_5e77a680;
extern int g_5e77a68c;
extern int g_5e77a694;
extern int g_5e77a698;
extern int g_5e77a69c;
extern int g_5e77a6a0;
extern int g_5e77a6a4;
extern int g_5e77a6a8;
extern int g_5e77a6ac;
extern int g_5e77a6b4;
extern int g_5e77a6b8;
extern int g_5e77a6bc;
extern int g_5e77a6c0;
extern int g_5e77a6c4;
extern int g_5e77a6cc;
extern int g_5e77a6d0;
extern int g_5e77a6d4;
extern int g_5e77a6d8;
extern int g_5e77a6dc;
extern int g_5e77a6e0;
extern int g_5e77a6e4;
extern int g_5e77a6e8;
extern int g_5e77a6fc;
extern int g_5e77a704;
extern int g_5e77a788;
extern int g_5e77a798;
extern int g_5e77a7a0;
extern int g_5e77a7a4;
extern int g_5e77a7a8;
extern int g_5e77a7ac;
extern int g_5e77a7bc;
extern int g_5e77a7c0;
extern int g_5e77a7c4;
extern int g_5e77a7c8;
extern int g_5e77a7cc;
extern int g_5e77a7d0;
extern int g_5e77a7dc;
extern int g_5e77a7e0;
extern int g_5e77a7e8;
extern int g_5e77a7f0;
extern int g_5e77a7f8;
extern int g_5e77a800;
extern int g_5e77a808;
extern int g_5e77a810;
extern int g_5e77a834;
extern int g_5e77a840;
extern int g_5e77a844;
extern int g_5e77a848;
extern int g_5e77a850;
__declspec(naked) void FUN_5e01dfe0(void)
{
    __asm {
            push ebp
            mov ebp, esp
            sub esp, 0x2c
            mov edx, dword ptr [g_5e77a5b8]
            push ebx
            push esi
            mov esi, dword ptr [g_5e77a598]
            push edi
            mov edi, dword ptr [g_5e77a5d8]
            mov eax, edi
            and eax, edx
            and eax, esi
            and eax, 0xf8000000
            cmp eax, 0xf8000000
            mov eax, dword ptr [g_5e77a580]
            __emit 0x75 /* jne 0x5e01e04c: MSVC6 cannot encode natively */
            __emit 0x3a /* jne 0x5e01e04c: MSVC6 cannot encode natively */
            and ah, 0xef
            test ah, 0x40
            mov dword ptr [g_5e77a580], eax
            jne lbl_5e01e027
            and ah, 0xdf
            mov dword ptr [g_5e77a580], eax
        lbl_5e01e027:
            test eax, 0x202008
            jne lbl_5e01e038
            or eax, 0x400080
            mov dword ptr [g_5e77a580], eax
        lbl_5e01e038:
            shr eax, 8
            and eax, 0x1f
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
            test eax, 0x230000
            jne FUN_5e01e0da
            or edi, edx
            or edi, esi
            test edi, 0xf8000000
            __emit 0x75 /* jne 0x5e01e0da: MSVC6 cannot encode natively */
            __emit 0x77 /* jne 0x5e01e0da: MSVC6 cannot encode natively */
            mov edx, dword ptr [g_5e77a848]
            and eax, 0x980101
            mov esi, edx
            mov edi, edx
            and esi, 0x1f
            and edi, 0x7c00
            shl esi, 2
            or esi, edi
            or eax, 0x400088
            shr edx, 1
            shl esi, 1
            and edx, 0xf80000
            mov dword ptr [g_5e77a580], eax
            or esi, edx
            mov edx, dword ptr [g_5e77a834]
            mov dword ptr [g_5e77a594], esi
            mov esi, dword ptr [g_5e038990]
            test edx, edx
            mov dword ptr [g_5e038990], offset FUN_5e027f6a
            jne lbl_5e01e0c0
            mov dword ptr [g_5e038990], offset FUN_5e027f1a
        lbl_5e01e0c0:
            shr eax, 8
            and eax, 0x1f
            __emit 0xff /* call dword ptr [eax*4 + 0x5e036008]: MSVC6 cannot encode natively */
            __emit 0x14 /* call dword ptr [eax*4 + 0x5e036008]: MSVC6 cannot encode natively */
            __emit 0x85 /* call dword ptr [eax*4 + 0x5e036008]: MSVC6 cannot encode natively */
            __emit 0x08 /* call dword ptr [eax*4 + 0x5e036008]: MSVC6 cannot encode natively */
            __emit 0x60 /* call dword ptr [eax*4 + 0x5e036008]: MSVC6 cannot encode natively */
            __emit 0x03 /* call dword ptr [eax*4 + 0x5e036008]: MSVC6 cannot encode natively */
            __emit 0x5e /* call dword ptr [eax*4 + 0x5e036008]: MSVC6 cannot encode natively */
            mov dword ptr [g_5e038990], esi
            pop edi
            pop esi
            pop ebx
            mov esp, ebp
            pop ebp
            ret
            test al, 8
            jne lbl_5e01e111
            mov edi, dword ptr [g_5e77a594]
            mov ebx, dword ptr [g_5e77a5b4]
            mov ecx, 0xffffff
            or edi, ecx
            or ebx, ecx
            mov dword ptr [g_5e77a594], edi
            mov edi, dword ptr [g_5e77a5d4]
            or edi, ecx
            mov dword ptr [g_5e77a5b4], ebx
            mov dword ptr [g_5e77a5d4], edi
            or al, 0xe
            jmp lbl_5e01e129
        lbl_5e01e111:
            test al, 4
            jne lbl_5e01e12e
            mov ecx, dword ptr [g_5e77a594]
            or al, 4
            mov dword ptr [g_5e77a5b4], ecx
            mov dword ptr [g_5e77a5d4], ecx
        lbl_5e01e129:
            mov dword ptr [g_5e77a580], eax
        lbl_5e01e12e:
            mov ecx, eax
            mov edi, eax
            and ecx, 0xff
            mov dword ptr [g_5e77a704], 0
            shr esi, 0x18
            __emit 0x8d /* lea ebx, [ecx*4 + 0x5e038524]: MSVC6 cannot encode natively */
            __emit 0x1c /* lea ebx, [ecx*4 + 0x5e038524]: MSVC6 cannot encode natively */
            __emit 0x8d /* lea ebx, [ecx*4 + 0x5e038524]: MSVC6 cannot encode natively */
            __emit 0x24 /* lea ebx, [ecx*4 + 0x5e038524]: MSVC6 cannot encode natively */
            __emit 0x85 /* lea ebx, [ecx*4 + 0x5e038524]: MSVC6 cannot encode natively */
            __emit 0x03 /* lea ebx, [ecx*4 + 0x5e038524]: MSVC6 cannot encode natively */
            __emit 0x5e /* lea ebx, [ecx*4 + 0x5e038524]: MSVC6 cannot encode natively */
            __emit 0xb9 /* mov ecx, 0xff: MSVC6 cannot encode natively */
            __emit 0xff /* mov ecx, 0xff: MSVC6 cannot encode natively */
            __emit 0x00 /* mov ecx, 0xff: MSVC6 cannot encode natively */
            __emit 0x00 /* mov ecx, 0xff: MSVC6 cannot encode natively */
            __emit 0x00 /* mov ecx, 0xff: MSVC6 cannot encode natively */
            sub ecx, esi
            mov esi, 0xff
            shr edx, 0x18
            sub esi, edx
            shr ecx, 3
            shr esi, 3
            shr edi, 0x10
            cmp ecx, esi
            jne lbl_5e01e197
            mov edx, dword ptr [g_5e77a5d8]
            mov esi, 0xff
            shr edx, 0x18
            sub esi, edx
            shr esi, 3
            cmp ecx, esi
            jne lbl_5e01e197
            mov dword ptr [g_5e77a704], 1
            mov dword ptr [g_5e038928], offset FUN_5e027daa
            jmp lbl_5e01e1b0
        lbl_5e01e197:
            test ah, 0x80
            mov dword ptr [g_5e038928], offset FUN_5e027e9a
            jne lbl_5e01e1b0
            mov dword ptr [g_5e038928], offset FUN_5e027e0a
        lbl_5e01e1b0:
            xor esi, esi
            mov ecx, offset g_5e77a788
        lbl_5e01e1b7:
            xor edx, edx
            add ecx, 4
            mov dl, byte ptr [esi + ebx]
            inc esi
            cmp ecx, offset g_5e77a798
            __emit 0x8b /* mov edx, dword ptr [edx*4 + 0x5e038924]: MSVC6 cannot encode natively */
            __emit 0x14 /* mov edx, dword ptr [edx*4 + 0x5e038924]: MSVC6 cannot encode natively */
            __emit 0x95 /* mov edx, dword ptr [edx*4 + 0x5e038924]: MSVC6 cannot encode natively */
            __emit 0x24 /* mov edx, dword ptr [edx*4 + 0x5e038924]: MSVC6 cannot encode natively */
            __emit 0x89 /* mov edx, dword ptr [edx*4 + 0x5e038924]: MSVC6 cannot encode natively */
            __emit 0x03 /* mov edx, dword ptr [edx*4 + 0x5e038924]: MSVC6 cannot encode natively */
            __emit 0x5e /* mov edx, dword ptr [edx*4 + 0x5e038924]: MSVC6 cannot encode natively */
            mov dword ptr [ecx - 4], edx
            jl lbl_5e01e1b7
            xor ecx, ecx
            __emit 0x8a /* mov cl, byte ptr [edi*2 + 0x5e036089]: MSVC6 cannot encode natively */
            __emit 0x0c /* mov cl, byte ptr [edi*2 + 0x5e036089]: MSVC6 cannot encode natively */
            __emit 0x7d /* mov cl, byte ptr [edi*2 + 0x5e036089]: MSVC6 cannot encode natively */
            __emit 0x89 /* mov cl, byte ptr [edi*2 + 0x5e036089]: MSVC6 cannot encode natively */
            __emit 0x60 /* mov cl, byte ptr [edi*2 + 0x5e036089]: MSVC6 cannot encode natively */
            __emit 0x03 /* mov cl, byte ptr [edi*2 + 0x5e036089]: MSVC6 cannot encode natively */
            __emit 0x5e /* mov cl, byte ptr [edi*2 + 0x5e036089]: MSVC6 cannot encode natively */
            __emit 0x8b /* mov edx, dword ptr [ecx*4 + 0x5e038990]: MSVC6 cannot encode natively */
            __emit 0x14 /* mov edx, dword ptr [ecx*4 + 0x5e038990]: MSVC6 cannot encode natively */
            __emit 0x8d /* mov edx, dword ptr [ecx*4 + 0x5e038990]: MSVC6 cannot encode natively */
            __emit 0x90 /* mov edx, dword ptr [ecx*4 + 0x5e038990]: MSVC6 cannot encode natively */
            __emit 0x89 /* mov edx, dword ptr [ecx*4 + 0x5e038990]: MSVC6 cannot encode natively */
            __emit 0x03 /* mov edx, dword ptr [ecx*4 + 0x5e038990]: MSVC6 cannot encode natively */
            __emit 0x5e /* mov edx, dword ptr [ecx*4 + 0x5e038990]: MSVC6 cannot encode natively */
            mov ecx, dword ptr [g_5e77a788]
            mov dword ptr [g_5e77a798], edx
            xor edx, edx
            __emit 0x8a /* mov dl, byte ptr [edi*2 + 0x5e036088]: MSVC6 cannot encode natively */
            __emit 0x14 /* mov dl, byte ptr [edi*2 + 0x5e036088]: MSVC6 cannot encode natively */
            __emit 0x7d /* mov dl, byte ptr [edi*2 + 0x5e036088]: MSVC6 cannot encode natively */
            __emit 0x88 /* mov dl, byte ptr [edi*2 + 0x5e036088]: MSVC6 cannot encode natively */
            __emit 0x60 /* mov dl, byte ptr [edi*2 + 0x5e036088]: MSVC6 cannot encode natively */
            __emit 0x03 /* mov dl, byte ptr [edi*2 + 0x5e036088]: MSVC6 cannot encode natively */
            __emit 0x5e /* mov dl, byte ptr [edi*2 + 0x5e036088]: MSVC6 cannot encode natively */
            mov dword ptr [g_5e038994], ecx
            test al, 4
            __emit 0x8b /* mov ecx, dword ptr [edx*4 + 0x5e038990]: MSVC6 cannot encode natively */
            __emit 0x0c /* mov ecx, dword ptr [edx*4 + 0x5e038990]: MSVC6 cannot encode natively */
            __emit 0x95 /* mov ecx, dword ptr [edx*4 + 0x5e038990]: MSVC6 cannot encode natively */
            __emit 0x90 /* mov ecx, dword ptr [edx*4 + 0x5e038990]: MSVC6 cannot encode natively */
            __emit 0x89 /* mov ecx, dword ptr [edx*4 + 0x5e038990]: MSVC6 cannot encode natively */
            __emit 0x03 /* mov ecx, dword ptr [edx*4 + 0x5e038990]: MSVC6 cannot encode natively */
            __emit 0x5e /* mov ecx, dword ptr [edx*4 + 0x5e038990]: MSVC6 cannot encode natively */
            mov dword ptr [g_5e77a6a8], ecx
            jne lbl_5e01e264
            test al, 2
            je lbl_5e01e22f
            mov eax, dword ptr [g_5e77a594]
            mov edx, eax
            shr edx, 3
            and edx, 0x1f
            shr eax, 0x1b
            mov dword ptr [g_5e77a7ac], edx
            mov dword ptr [g_5e77a7a0], eax
            jmp lbl_5e01e264
        lbl_5e01e22f:
            mov ecx, dword ptr [g_5e77a594]
            mov eax, ecx
            mov edx, ecx
            shr eax, 3
            mov esi, eax
            and eax, 0x1f0000
            and ecx, 0xf800ffff
            and edx, 0xf800
            and esi, 0x1f
            or eax, ecx
            or edx, esi
            shr eax, 0x10
            mov dword ptr [g_5e77a7a4], edx
            mov dword ptr [g_5e77a7a8], eax
        lbl_5e01e264:
            mov eax, dword ptr [g_5e77a6ac]
            test eax, eax
            jne lbl_5e01e2a4
            call FUN_5e01bd80
            mov eax, dword ptr [g_5e77a6bc]
            mov ecx, dword ptr [g_5e77a6b8]
            push eax
            push ecx
            call FUN_5e01b670
            mov edx, dword ptr [g_5e77a6c0]
            mov eax, dword ptr [g_5e77a6b8]
            push edx
            push eax
            call FUN_5e01d540
            mov ecx, dword ptr [g_5e77a5ec]
            mov dword ptr [g_5e77a6c4], ecx
            jmp lbl_5e01e2d8
        lbl_5e01e2a4:
            call FUN_5e01bd80
            mov edx, dword ptr [g_5e77a6c0]
            mov eax, dword ptr [g_5e77a6b8]
            push edx
            push eax
            call FUN_5e01b670
            mov ecx, dword ptr [g_5e77a6bc]
            mov edx, dword ptr [g_5e77a6b8]
            push ecx
            push edx
            call FUN_5e01d540
            mov eax, dword ptr [g_5e77a694]
            mov dword ptr [g_5e77a6c4], eax
        lbl_5e01e2d8:
            mov ecx, dword ptr [g_5e77a840]
            mov eax, dword ptr [g_5e77a5e8]
            imul ecx, eax
            fld dword ptr [g_5e77a530]
            fmul dword ptr [g_5e036290]
            fstp dword ptr [ebp - 0x18]
            mov edx, dword ptr [g_5e77a844]
            add ecx, edx
            mov edx, dword ptr [g_5e77a6cc]
            imul edx, eax
            mov eax, dword ptr [g_5e77a6d0]
            mov dword ptr [g_5e77a510], ecx
            add edx, eax
            mov dword ptr [g_5e77a514], edx
            fld dword ptr [ebp - 0x18]
            fistp qword ptr [ebp - 0x24]
            mov eax, dword ptr [ebp - 0x24]
            mov ecx, dword ptr [g_5e77a6c4]
            mov dword ptr [g_5e77a7dc], eax
            mov dword ptr [ebp - 0x18], 0
            mov edx, ecx
            dec ecx
            test edx, edx
            mov dword ptr [g_5e77a6c4], ecx
            je FUN_5e01e682
            mov edi, dword ptr [g_5e77a68c]
            mov esi, dword ptr [g_5e77a514]
            mov edx, dword ptr [g_5e77a510]
            mov eax, dword ptr [g_5e77a5e4]
            mov ebx, eax
            sub ebx, edi
            mov dword ptr [g_5e77a578], ebx
            jns FUN_5e01e5fa
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
            fistp qword ptr [ebp - 0x2c]
            mov eax, dword ptr [ebp - 0x2c]
            mov dword ptr [g_5e77a7c8], eax
            fld dword ptr [g_5e77a668]
            fmul dword ptr [g_5e0384e8]
            fistp dword ptr [g_5e77a6b4]
            mov ecx, dword ptr [g_5e77a6b4]
            mov dword ptr [g_5e77a7cc], ecx
            fld dword ptr [g_5e77a674]
            fmul dword ptr [g_5e0384e8]
            fistp dword ptr [g_5e77a6b4]
            mov edx, dword ptr [g_5e77a55c]
            mov eax, dword ptr [g_5e77a7cc]
            mov ecx, dword ptr [g_5e77a6b4]
            add eax, edx
            mov edx, dword ptr [g_5e77a60c]
            mov dword ptr [g_5e77a7cc], eax
            mov eax, dword ptr [g_5e77a560]
            mov dword ptr [ebp - 4], edx
            mov edx, dword ptr [g_5e77a600]
            add ecx, eax
            mov eax, dword ptr [g_5e77a618]
            mov dword ptr [g_5e77a7d0], ecx
            mov ecx, dword ptr [g_5e77a624]
            mov dword ptr [ebp - 8], eax
            mov eax, dword ptr [g_5e77a680]
            mov dword ptr [ebp - 0xc], ecx
            mov dword ptr [ebp - 0x10], edx
            mov ecx, dword ptr [ebp - 4]
            mov bl, byte ptr [g_5e77a580]
            sar ecx, 0xe
            test bl, 2
            mov dword ptr [ebp - 0x14], eax
            mov dword ptr [g_5e77a808], ecx
            jne lbl_5e01e4ac
            mov eax, dword ptr [ebp - 0xc]
            mov esi, dword ptr [ebp - 8]
            sar eax, 0xe
            mov edi, eax
            and ecx, 0x3ff
            and edi, 0x3ff
            mov dword ptr [ebp - 0x20], eax
            mov edx, edi
            shl edx, 0x14
            or edx, ecx
            sar esi, 0xe
            mov dword ptr [g_5e77a7e0], edx
            mov edx, esi
            and edx, 0x3ff
            mov dword ptr [ebp - 0x1c], esi
            mov ebx, edx
            shl ebx, 0xb
            or ebx, ecx
            mov dword ptr [g_5e77a7f0], ebx
            mov ebx, eax
            shl ebx, 0xb
            or ebx, edx
            shl ebx, 0xb
            or ebx, ecx
            mov dword ptr [g_5e77a800], ebx
            mov bl, byte ptr [g_5e77a580]
            test bl, 0x10
            jne lbl_5e01e4b7
            shl edx, 0xa
            mov dword ptr [g_5e77a7e8], edx
            mov dword ptr [g_5e77a7f8], edi
            jmp lbl_5e01e4b2
        lbl_5e01e4ac:
            mov esi, dword ptr [ebp - 0x1c]
            mov eax, dword ptr [ebp - 0x20]
        lbl_5e01e4b2:
            test bl, 0x10
            je lbl_5e01e4eb
        lbl_5e01e4b7:
            mov edx, dword ptr [ebp - 0x10]
            and esi, 0x3ff
            mov ecx, edx
            and eax, 0x3ff
            sar ecx, 0xe
            and ecx, 0x3ff
            mov dword ptr [g_5e77a810], edx
            shl ecx, 0xb
            or esi, ecx
            shl esi, 0xa
            or eax, ecx
            mov dword ptr [g_5e77a7e8], esi
            mov dword ptr [g_5e77a7f8], eax
        lbl_5e01e4eb:
            mov eax, dword ptr [ebp - 0x14]
            sar eax, 0xe
            mov dword ptr [g_5e77a850], eax
            mov eax, dword ptr [g_5e77a578]
            cmp eax, -0x10
            mov dword ptr [g_5e77a7c4], eax
            jge lbl_5e01e50f
            mov eax, 0xfffffff0
            mov dword ptr [g_5e77a7c4], eax
        lbl_5e01e50f:
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
            mov eax, dword ptr [g_5e77a7c4]
            mov ecx, dword ptr [g_5e77a578]
            sub ecx, eax
            mov dword ptr [g_5e77a578], ecx
            jns FUN_5e01e5f4
            mov ecx, dword ptr [g_5e77a7dc]
            mov eax, dword ptr [g_5e77a7c8]
            mov edx, dword ptr [g_5e77a6d4]
            mov ebx, dword ptr [g_5e77a7cc]
            shl ecx, 4
            mov edi, dword ptr [g_5e77a7d0]
            add eax, ecx
            mov ecx, dword ptr [g_5e77a6e0]
            add ebx, edx
            mov edx, dword ptr [ebp - 4]
            mov dword ptr [g_5e77a7c8], eax
            mov eax, dword ptr [g_5e77a6d8]
            mov dword ptr [g_5e77a7cc], ebx
            shl ecx, 4
            add edx, ecx
            mov ecx, dword ptr [g_5e77a6dc]
            mov dword ptr [ebp - 4], edx
            mov edx, dword ptr [g_5e77a6e4]
            add edi, eax
            mov eax, dword ptr [ebp - 8]
            shl edx, 4
            add eax, edx
            mov edx, dword ptr [ebp - 0x10]
            shl ecx, 4
            mov dword ptr [ebp - 8], eax
            mov eax, dword ptr [g_5e77a6e8]
            add edx, ecx
            mov dword ptr [g_5e77a7d0], edi
            mov edi, dword ptr [ebp - 0xc]
            mov dword ptr [ebp - 0x10], edx
            mov edx, dword ptr [g_5e77a6fc]
            shl eax, 4
            add edi, eax
            mov eax, dword ptr [ebp - 0x14]
            shl edx, 4
            mov dword ptr [ebp - 0xc], edi
            add eax, edx
            jmp FUN_5e01e422
            mov ecx, dword ptr [g_5e77a6c4]
            cmp ecx, dword ptr [ebp - 0x18]
            jl FUN_5e01e045
            call FUN_5e01bbc0
            mov edi, dword ptr [g_5e77a68c]
            mov edx, dword ptr [g_5e77a698]
            mov eax, dword ptr [g_5e77a6a4]
            mov ecx, dword ptr [g_5e77a69c]
            add edi, edx
            add eax, ecx
            mov dword ptr [g_5e77a68c], edi
            mov dword ptr [g_5e77a6a4], eax
            js lbl_5e01e644
            mov ecx, dword ptr [g_5e77a6a0]
            inc edi
            sub eax, ecx
            mov dword ptr [g_5e77a68c], edi
            mov dword ptr [g_5e77a6a4], eax
        lbl_5e01e644:
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
            jne FUN_5e01e357
            mov ecx, dword ptr [g_5e77a694]
            mov eax, dword ptr [g_5e77a5ec]
            cmp eax, ecx
            je FUN_5e01e045
            mov ecx, dword ptr [ebp - 0x18]
            mov eax, dword ptr [g_5e77a6ac]
            inc ecx
            test eax, eax
            mov dword ptr [ebp - 0x18], ecx
            jne lbl_5e01e6c2
            mov edx, dword ptr [g_5e77a6c0]
            mov eax, dword ptr [g_5e77a6bc]
            push edx
            push eax
            call FUN_5e01b670
            mov ecx, dword ptr [g_5e77a5ec]
            jmp FUN_5e01e334
        lbl_5e01e6c2:
            mov ecx, dword ptr [g_5e77a6c0]
            mov edx, dword ptr [g_5e77a6bc]
            push ecx
            push edx
            call FUN_5e01d540
            mov ecx, dword ptr [g_5e77a694]
            jmp FUN_5e01e334
            mov ecx, dword ptr [esp + 4]
            xor eax, eax
            __emit 0x83 /* EMIT : MSVC6 cannot encode natively */
    }
}
