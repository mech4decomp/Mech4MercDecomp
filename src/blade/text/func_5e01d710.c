/* auto-transcribed gap function 0x5E01D710 (2270 B); review against reference; stepping stone */
extern void __cdecl FUN_5e01c530(void);
extern void __cdecl FUN_5e01cad0(void);
extern void __cdecl FUN_5e01ccb0(void);
extern void __cdecl FUN_5e01d540(void);
extern void __cdecl FUN_5e01d775(void);
extern void __cdecl FUN_5e01d80a(void);
extern void __cdecl FUN_5e01da64(void);
extern void __cdecl FUN_5e01da87(void);
extern void __cdecl FUN_5e01dbd6(void);
extern void __cdecl FUN_5e01ddba(void);
extern void __cdecl FUN_5e01def1(void);
extern void __cdecl FUN_5e01df79(void);
extern int g_5e035aa4;
extern int g_5e036008;
extern int g_5e036088;
extern int g_5e036089;
extern int g_5e036290;
extern int g_5e0384e8;
extern int g_5e038524;
extern int g_5e03852c;
extern int g_5e038924;
extern int g_5e038928;
extern int g_5e038990;
extern int g_5e038994;
extern int g_5e77a510;
extern int g_5e77a514;
extern int g_5e77a530;
extern int g_5e77a538;
extern int g_5e77a53c;
extern int g_5e77a544;
extern int g_5e77a548;
extern int g_5e77a550;
extern int g_5e77a554;
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
extern int g_5e77a63c;
extern int g_5e77a650;
extern int g_5e77a65c;
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
extern int g_5e77a6c8;
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
extern int g_5e77a7d4;
extern int g_5e77a7d8;
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
__declspec(naked) void FUN_5e01d710(void)
{
    __asm {
            push ebp
            mov ebp, esp
            sub esp, 0x48
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
            jne lbl_5e01d77c
            and ah, 0xef
            test ah, 0x40
            mov dword ptr [g_5e77a580], eax
            jne lbl_5e01d757
            and ah, 0xdf
            mov dword ptr [g_5e77a580], eax
        lbl_5e01d757:
            test eax, 0x202008
            jne lbl_5e01d768
            or eax, 0x400080
            mov dword ptr [g_5e77a580], eax
        lbl_5e01d768:
            shr eax, 8
            and eax, 0x1f
            call dword ptr [eax*4 + g_5e036008]
            pop edi
            pop esi
            pop ebx
            mov esp, ebp
            pop ebp
            ret
        lbl_5e01d77c:
            test eax, 0x230000
            jne FUN_5e01d80a
            or edi, edx
            or edi, esi
            test edi, 0xf8000000
            jne lbl_5e01d80a
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
            mov dword ptr [g_5e038990], 0x5e027f6a
            jne lbl_5e01d7f0
            mov dword ptr [g_5e038990], 0x5e027f1a
        lbl_5e01d7f0:
            shr eax, 8
            and eax, 0x1f
            call dword ptr [eax*4 + g_5e036008]
            mov dword ptr [g_5e038990], esi
            pop edi
            pop esi
            pop ebx
            mov esp, ebp
            pop ebp
            ret
        lbl_5e01d80a:
            test al, 8
            jne lbl_5e01d841
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
            jmp lbl_5e01d859
        lbl_5e01d841:
            test al, 4
            jne lbl_5e01d85e
            mov ecx, dword ptr [g_5e77a594]
            or al, 4
            mov dword ptr [g_5e77a5b4], ecx
            mov dword ptr [g_5e77a5d4], ecx
        lbl_5e01d859:
            mov dword ptr [g_5e77a580], eax
        lbl_5e01d85e:
            mov ecx, eax
            mov edi, eax
            and ecx, 0xff
            mov dword ptr [g_5e77a704], 0
            shr esi, 0x18
            lea ebx, [ecx*4 + g_5e038524]
            mov ecx, 0xff
            sub ecx, esi
            mov esi, 0xff
            shr edx, 0x18
            sub esi, edx
            shr ecx, 3
            shr esi, 3
            shr edi, 0x10
            cmp ecx, esi
            jne lbl_5e01d8c7
            mov edx, dword ptr [g_5e77a5d8]
            mov esi, 0xff
            shr edx, 0x18
            sub esi, edx
            shr esi, 3
            cmp ecx, esi
            jne lbl_5e01d8c7
            mov dword ptr [g_5e77a704], 1
            mov dword ptr [g_5e038928], 0x5e027daa
            jmp lbl_5e01d8e0
        lbl_5e01d8c7:
            test ah, 0x80
            mov dword ptr [g_5e038928], 0x5e027e9a
            jne lbl_5e01d8e0
            mov dword ptr [g_5e038928], 0x5e027e0a
        lbl_5e01d8e0:
            xor esi, esi
            mov ecx, 0x5e77a788
        lbl_5e01d8e7:
            xor edx, edx
            add ecx, 4
            mov dl, byte ptr [esi + ebx]
            inc esi
            cmp ecx, 0x5e77a798
            mov edx, dword ptr [edx*4 + g_5e038924]
            mov dword ptr [ecx - 4], edx
            jl lbl_5e01d8e7
            xor ecx, ecx
            mov cl, byte ptr [edi*2 + g_5e036089]
            mov edx, dword ptr [ecx*4 + g_5e038990]
            mov ecx, dword ptr [g_5e77a788]
            mov dword ptr [g_5e77a798], edx
            xor edx, edx
            mov dl, byte ptr [edi*2 + g_5e036088]
            mov dword ptr [g_5e038994], ecx
            test al, 4
            mov ecx, dword ptr [edx*4 + g_5e038990]
            mov dword ptr [g_5e77a6a8], ecx
            jne lbl_5e01d994
            test al, 2
            je lbl_5e01d95f
            mov eax, dword ptr [g_5e77a594]
            mov edx, eax
            shr edx, 3
            and edx, 0x1f
            shr eax, 0x1b
            mov dword ptr [g_5e77a7ac], edx
            mov dword ptr [g_5e77a7a0], eax
            jmp lbl_5e01d994
        lbl_5e01d95f:
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
        lbl_5e01d994:
            mov eax, dword ptr [g_5e77a6ac]
            test eax, eax
            jne lbl_5e01d9d4
            call FUN_5e01ccb0
            mov eax, dword ptr [g_5e77a6bc]
            mov ecx, dword ptr [g_5e77a6b8]
            push eax
            push ecx
            call FUN_5e01c530
            mov edx, dword ptr [g_5e77a6c0]
            mov eax, dword ptr [g_5e77a6b8]
            push edx
            push eax
            call FUN_5e01d540
            mov ecx, dword ptr [g_5e77a5ec]
            mov dword ptr [g_5e77a6c4], ecx
            jmp lbl_5e01da08
        lbl_5e01d9d4:
            call FUN_5e01ccb0
            mov edx, dword ptr [g_5e77a6c0]
            mov eax, dword ptr [g_5e77a6b8]
            push edx
            push eax
            call FUN_5e01c530
            mov ecx, dword ptr [g_5e77a6bc]
            mov edx, dword ptr [g_5e77a6b8]
            push ecx
            push edx
            call FUN_5e01d540
            mov eax, dword ptr [g_5e77a694]
            mov dword ptr [g_5e77a6c4], eax
        lbl_5e01da08:
            mov ecx, dword ptr [g_5e77a840]
            mov eax, dword ptr [g_5e77a5e8]
            imul ecx, eax
            fld dword ptr [g_5e77a530]
            fmul dword ptr [g_5e036290]
            fstp dword ptr [ebp - 0x30]
            mov edx, dword ptr [g_5e77a844]
            add ecx, edx
            mov edx, dword ptr [g_5e77a6cc]
            imul edx, eax
            mov eax, dword ptr [g_5e77a6d0]
            mov dword ptr [g_5e77a510], ecx
            add edx, eax
            mov dword ptr [g_5e77a514], edx
            fld dword ptr [ebp - 0x30]
            fistp qword ptr [ebp - 0x40]
            mov eax, dword ptr [ebp - 0x40]
            mov ecx, dword ptr [g_5e77a6c4]
            mov dword ptr [g_5e77a7dc], eax
            mov dword ptr [ebp - 0x30], 0
            mov edx, ecx
            dec ecx
            test edx, edx
            mov dword ptr [g_5e77a6c4], ecx
            je FUN_5e01df79
            mov edi, dword ptr [g_5e77a68c]
            mov esi, dword ptr [g_5e77a514]
            mov edx, dword ptr [g_5e77a510]
            mov eax, dword ptr [g_5e77a5e4]
            mov ebx, eax
            sub ebx, edi
            mov dword ptr [g_5e77a578], ebx
            jns FUN_5e01def1
            mov ecx, dword ptr [g_5e77a834]
            mov edi, eax
            fld dword ptr [g_5e77a630]
            fmul dword ptr [g_5e036290]
            shl edi, cl
            fstp dword ptr [ebp - 0x2c]
            lea ecx, [edx + edi*2]
            lea edx, [esi + eax*2]
            mov dword ptr [g_5e77a7bc], ecx
            mov dword ptr [g_5e77a7c0], edx
            fld dword ptr [ebp - 0x2c]
            fistp qword ptr [ebp - 0x48]
            mov ecx, dword ptr [g_5e77a63c]
            mov edx, dword ptr [g_5e77a650]
            fld dword ptr [g_5e035aa4]
            mov dword ptr [ebp - 4], ecx
            mov eax, dword ptr [ebp - 0x48]
            fdiv dword ptr [ebp - 4]
            mov dword ptr [ebp - 8], edx
            mov dword ptr [g_5e77a7c8], eax
            mov eax, dword ptr [g_5e77a65c]
            mov dword ptr [ebp - 0xc], eax
            fst dword ptr [ebp - 0x10]
            fmul dword ptr [ebp - 8]
            fstp dword ptr [ebp - 0x2c]
            fld dword ptr [ebp - 0x2c]
            fmul dword ptr [g_5e0384e8]
            fistp dword ptr [g_5e77a6b4]
            fld dword ptr [ebp - 0x10]
            fmul dword ptr [ebp - 0xc]
            mov eax, dword ptr [g_5e77a6b4]
            fstp dword ptr [ebp - 0x2c]
            fld dword ptr [ebp - 0x2c]
            fmul dword ptr [g_5e0384e8]
            fistp dword ptr [g_5e77a6b4]
            mov edx, dword ptr [g_5e77a55c]
            mov ecx, dword ptr [g_5e77a560]
            add eax, edx
            mov edx, dword ptr [g_5e77a6b4]
            mov dword ptr [ebp - 0x18], eax
            mov eax, dword ptr [g_5e77a578]
            add edx, ecx
            cmp eax, -0x10
            mov dword ptr [ebp - 0x14], edx
            jge lbl_5e01db76
            fld dword ptr [g_5e77a53c]
            fadd dword ptr [ebp - 4]
            fstp dword ptr [ebp - 4]
            fld dword ptr [g_5e77a548]
            fadd dword ptr [ebp - 8]
            fstp dword ptr [ebp - 8]
            fld dword ptr [g_5e77a554]
            fadd dword ptr [ebp - 0xc]
            jmp lbl_5e01dba2
        lbl_5e01db76:
            inc eax
            mov dword ptr [ebp - 0x2c], eax
            fild dword ptr [ebp - 0x2c]
            fld st(0)
            fmul dword ptr [g_5e77a538]
            fsubr dword ptr [ebp - 4]
            fstp dword ptr [ebp - 4]
            fld st(0)
            fmul dword ptr [g_5e77a544]
            fsubr dword ptr [ebp - 8]
            fstp dword ptr [ebp - 8]
            fmul dword ptr [g_5e77a550]
            fsubr dword ptr [ebp - 0xc]
        lbl_5e01dba2:
            fstp dword ptr [ebp - 0xc]
            fld dword ptr [g_5e77a6c8]
            fdiv dword ptr [ebp - 4]
            mov eax, dword ptr [g_5e77a60c]
            mov ecx, dword ptr [g_5e77a618]
            mov edx, dword ptr [g_5e77a624]
            mov dword ptr [ebp - 0x1c], eax
            mov eax, dword ptr [g_5e77a600]
            mov dword ptr [ebp - 0x20], ecx
            mov ecx, dword ptr [g_5e77a680]
            mov dword ptr [ebp - 0x24], edx
            mov dword ptr [ebp - 0x28], eax
            mov bl, byte ptr [g_5e77a580]
            mov dword ptr [ebp - 0x2c], ecx
            mov ecx, dword ptr [ebp - 0x1c]
            sar ecx, 0xe
            test bl, 2
            mov dword ptr [g_5e77a808], ecx
            jne lbl_5e01dc60
            mov eax, dword ptr [ebp - 0x24]
            mov esi, dword ptr [ebp - 0x20]
            sar eax, 0xe
            mov edi, eax
            and ecx, 0x3ff
            and edi, 0x3ff
            mov dword ptr [ebp - 0x34], eax
            mov edx, edi
            shl edx, 0x14
            or edx, ecx
            sar esi, 0xe
            mov dword ptr [g_5e77a7e0], edx
            mov edx, esi
            and edx, 0x3ff
            mov dword ptr [ebp - 0x38], esi
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
            jne lbl_5e01dc6b
            shl edx, 0xa
            mov dword ptr [g_5e77a7e8], edx
            mov dword ptr [g_5e77a7f8], edi
            jmp lbl_5e01dc66
        lbl_5e01dc60:
            mov eax, dword ptr [ebp - 0x34]
            mov esi, dword ptr [ebp - 0x38]
        lbl_5e01dc66:
            test bl, 0x10
            je lbl_5e01dc9f
        lbl_5e01dc6b:
            mov edx, dword ptr [ebp - 0x28]
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
        lbl_5e01dc9f:
            mov eax, dword ptr [ebp - 0x2c]
            mov ecx, dword ptr [g_5e77a578]
            mov edx, dword ptr [ebp - 0x18]
            mov dword ptr [g_5e77a7c4], ecx
            sar eax, 0xe
            mov dword ptr [g_5e77a850], eax
            mov eax, dword ptr [ebp - 0x14]
            mov dword ptr [g_5e77a7cc], edx
            mov dword ptr [g_5e77a7d0], eax
            fstp dword ptr [ebp - 0x10]
            fld dword ptr [ebp - 0x10]
            fmul dword ptr [ebp - 8]
            fstp dword ptr [ebp - 0x18]
            fld dword ptr [ebp - 0x18]
            fmul dword ptr [g_5e0384e8]
            fistp dword ptr [g_5e77a6b4]
            fld dword ptr [ebp - 0x10]
            fmul dword ptr [ebp - 0xc]
            mov eax, dword ptr [g_5e77a6b4]
            fstp dword ptr [ebp - 0x18]
            fld dword ptr [ebp - 0x18]
            fmul dword ptr [g_5e0384e8]
            fistp dword ptr [g_5e77a6b4]
            mov ecx, dword ptr [g_5e77a560]
            mov edx, dword ptr [g_5e77a6b4]
            mov edi, dword ptr [g_5e77a55c]
            add edx, ecx
            mov ecx, dword ptr [g_5e77a578]
            add eax, edi
            cmp ecx, -0x10
            mov dword ptr [ebp - 0x18], eax
            mov dword ptr [ebp - 0x14], edx
            jge FUN_5e01ddba
            mov esi, dword ptr [g_5e77a7cc]
            mov edi, dword ptr [g_5e77a7d0]
            sub eax, esi
            sub edx, edi
            sar eax, 4
            mov dword ptr [g_5e77a7d4], eax
            lea eax, [ecx + 0x10]
            sar edx, 4
            cmp eax, -0x10
            mov dword ptr [g_5e77a7c4], 0xfffffff0
            mov dword ptr [g_5e77a7d8], edx
            jge lbl_5e01dd80
            fld dword ptr [g_5e77a53c]
            fadd dword ptr [ebp - 4]
            fstp dword ptr [ebp - 4]
            fld dword ptr [g_5e77a548]
            fadd dword ptr [ebp - 8]
            fstp dword ptr [ebp - 8]
            fld dword ptr [g_5e77a554]
            fadd dword ptr [ebp - 0xc]
            jmp lbl_5e01ddac
        lbl_5e01dd80:
            inc eax
            mov dword ptr [ebp - 0x3c], eax
            fild dword ptr [ebp - 0x3c]
            fld st(0)
            fmul dword ptr [g_5e77a538]
            fsubr dword ptr [ebp - 4]
            fstp dword ptr [ebp - 4]
            fld st(0)
            fmul dword ptr [g_5e77a544]
            fsubr dword ptr [ebp - 8]
            fstp dword ptr [ebp - 8]
            fmul dword ptr [g_5e77a550]
            fsubr dword ptr [ebp - 0xc]
        lbl_5e01ddac:
            fstp dword ptr [ebp - 0xc]
            fld dword ptr [g_5e77a6c8]
            fdiv dword ptr [ebp - 4]
            jmp lbl_5e01de2b
            cmp ecx, -2
            jl lbl_5e01dddb
            jne lbl_5e01de2b
            sub eax, dword ptr [g_5e77a7cc]
            mov dword ptr [g_5e77a7d4], eax
            mov eax, dword ptr [g_5e77a7d0]
            sub edx, eax
            mov dword ptr [g_5e77a7d8], edx
            jmp lbl_5e01de2b
        lbl_5e01dddb:
            mov ecx, dword ptr [g_5e77a578]
            mov eax, dword ptr [ebp - 0x18]
            sub eax, dword ptr [g_5e77a7cc]
            jns lbl_5e01ddf9
            neg eax
            mul dword ptr [ecx*4 + g_5e03852c]
            neg edx
            jmp lbl_5e01de00
        lbl_5e01ddf9:
            mul dword ptr [ecx*4 + g_5e03852c]
        lbl_5e01de00:
            mov dword ptr [g_5e77a7d4], edx
            mov eax, dword ptr [ebp - 0x14]
            sub eax, dword ptr [g_5e77a7d0]
            jns lbl_5e01de1e
            neg eax
            mul dword ptr [ecx*4 + g_5e03852c]
            neg edx
            jmp lbl_5e01de25
        lbl_5e01de1e:
            mul dword ptr [ecx*4 + g_5e03852c]
        lbl_5e01de25:
            mov dword ptr [g_5e77a7d8], edx
        lbl_5e01de2b:
            mov eax, dword ptr [g_5e77a7c4]
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
            jns lbl_5e01deeb
            mov ecx, dword ptr [g_5e77a7dc]
            mov ebx, dword ptr [g_5e77a7c8]
            mov eax, dword ptr [g_5e77a6e4]
            mov edx, dword ptr [g_5e77a6e0]
            mov esi, dword ptr [ebp - 0x1c]
            shl ecx, 4
            add ebx, ecx
            mov ecx, dword ptr [ebp - 0x20]
            shl eax, 4
            add ecx, eax
            mov eax, dword ptr [g_5e77a6fc]
            shl edx, 4
            mov dword ptr [ebp - 0x20], ecx
            mov ecx, dword ptr [g_5e77a6e8]
            add esi, edx
            mov edx, dword ptr [g_5e77a6dc]
            mov dword ptr [g_5e77a7c8], ebx
            mov ebx, dword ptr [ebp - 0x24]
            mov dword ptr [ebp - 0x1c], esi
            mov esi, dword ptr [ebp - 0x28]
            shl ecx, 4
            shl edx, 4
            add ebx, ecx
            mov ecx, dword ptr [ebp - 0x2c]
            add esi, edx
            mov dword ptr [ebp - 0x24], ebx
            shl eax, 4
            mov dword ptr [ebp - 0x28], esi
            add ecx, eax
            jmp FUN_5e01dbd6
        lbl_5e01deeb:
            mov ecx, dword ptr [g_5e77a6c4]
            cmp ecx, dword ptr [ebp - 0x30]
            jl FUN_5e01d775
            call FUN_5e01cad0
            mov edi, dword ptr [g_5e77a68c]
            mov edx, dword ptr [g_5e77a698]
            mov eax, dword ptr [g_5e77a6a4]
            mov ecx, dword ptr [g_5e77a69c]
            add edi, edx
            add eax, ecx
            mov dword ptr [g_5e77a68c], edi
            mov dword ptr [g_5e77a6a4], eax
            js lbl_5e01df3b
            mov ecx, dword ptr [g_5e77a6a0]
            inc edi
            sub eax, ecx
            mov dword ptr [g_5e77a68c], edi
            mov dword ptr [g_5e77a6a4], eax
        lbl_5e01df3b:
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
            jne FUN_5e01da87
            mov ecx, dword ptr [g_5e77a694]
            mov eax, dword ptr [g_5e77a5ec]
            cmp eax, ecx
            je FUN_5e01d775
            mov ecx, dword ptr [ebp - 0x30]
            mov eax, dword ptr [g_5e77a6ac]
            inc ecx
            test eax, eax
            mov dword ptr [ebp - 0x30], ecx
            jne lbl_5e01dfb9
            mov edx, dword ptr [g_5e77a6c0]
            mov eax, dword ptr [g_5e77a6bc]
            push edx
            push eax
            call FUN_5e01c530
            mov ecx, dword ptr [g_5e77a5ec]
            jmp FUN_5e01da64
        lbl_5e01dfb9:
            mov ecx, dword ptr [g_5e77a6c0]
            mov edx, dword ptr [g_5e77a6bc]
            push ecx
            push edx
            call FUN_5e01d540
            mov ecx, dword ptr [g_5e77a694]
            jmp FUN_5e01da64
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            push ebp
            mov ebp, esp
            sub esp, 0x2c
            mov edx, dword ptr [g_5e77a5b8]
            push ebx
            push esi
    }
}
