/* auto-transcribed gap function 0x10003057 (353 B); review against reference; stepping stone */
extern void __cdecl FUN_10003156(void);
__declspec(naked) void FUN_10003057(void)
{
    __asm {
            int 3
            int 3
            int 3
            int 3
            int 3
            int 3
            int 3
            int 3
            int 3
            mov ecx, dword ptr [esp + 0xc]
            push edi
            test ecx, ecx
            je lbl_100030e3
            push esi
            push ebx
            mov ebx, ecx
            mov esi, dword ptr [esp + 0x14]
            test esi, 3
            mov edi, dword ptr [esp + 0x10]
            jne lbl_10003084
            shr ecx, 2
            jne lbl_100030f1
            jmp lbl_100030a5
        lbl_10003084:
            mov al, byte ptr [esi]
            inc esi
            mov byte ptr [edi], al
            inc edi
            dec ecx
            je lbl_100030b2
            test al, al
            je lbl_100030ba
            test esi, 3
            jne lbl_10003084
            mov ebx, ecx
            shr ecx, 2
            jne lbl_100030f1
        lbl_100030a0:
            and ebx, 3
            je lbl_100030b2
        lbl_100030a5:
            mov al, byte ptr [esi]
            inc esi
            mov byte ptr [edi], al
            inc edi
            test al, al
            je lbl_100030de
            dec ebx
            jne lbl_100030a5
        lbl_100030b2:
            mov eax, dword ptr [esp + 0x10]
            pop ebx
            pop esi
            pop edi
            ret
        lbl_100030ba:
            test edi, 3
            je lbl_100030d4
        lbl_100030c2:
            mov byte ptr [edi], al
            inc edi
            dec ecx
            je FUN_10003156
            test edi, 3
            jne lbl_100030c2
        lbl_100030d4:
            mov ebx, ecx
            shr ecx, 2
            jne lbl_10003147
        lbl_100030db:
            mov byte ptr [edi], al
            inc edi
        lbl_100030de:
            dec ebx
            jne lbl_100030db
            pop ebx
            pop esi
        lbl_100030e3:
            mov eax, dword ptr [esp + 8]
            pop edi
            ret
        lbl_100030e9:
            mov dword ptr [edi], edx
            add edi, 4
            dec ecx
            je lbl_100030a0
        lbl_100030f1:
            mov edx, 0x7efefeff
            mov eax, dword ptr [esi]
            add edx, eax
            xor eax, 0xffffffff
            xor eax, edx
            mov edx, dword ptr [esi]
            add esi, 4
            test eax, 0x81010100
            je lbl_100030e9
            test dl, dl
            je lbl_1000313b
            test dh, dh
            je lbl_10003131
            test edx, 0xff0000
            je lbl_10003127
            test edx, 0xff000000
            jne lbl_100030e9
            mov dword ptr [edi], edx
            jmp lbl_1000313f
        lbl_10003127:
            and edx, 0xffff
            mov dword ptr [edi], edx
            jmp lbl_1000313f
        lbl_10003131:
            and edx, 0xff
            mov dword ptr [edi], edx
            jmp lbl_1000313f
        lbl_1000313b:
            xor edx, edx
            mov dword ptr [edi], edx
        lbl_1000313f:
            add edi, 4
            xor eax, eax
            dec ecx
            je lbl_10003151
        lbl_10003147:
            xor eax, eax
        lbl_10003149:
            mov dword ptr [edi], eax
            add edi, 4
            dec ecx
            jne lbl_10003149
        lbl_10003151:
            and ebx, 3
            jne lbl_100030db
            mov eax, dword ptr [esp + 0x10]
            pop ebx
            pop esi
            pop edi
            ret
            int 3
            int 3
            mov edx, dword ptr [esp + 0xc]
            mov ecx, dword ptr [esp + 4]
            test edx, edx
            je lbl_100031b3
            xor eax, eax
            mov al, byte ptr [esp + 8]
            push edi
            mov edi, ecx
            cmp edx, 4
            jb lbl_100031a7
            neg ecx
            and ecx, 3
            je lbl_10003189
            sub edx, ecx
        lbl_10003183:
            mov byte ptr [edi], al
            inc edi
            dec ecx
            jne lbl_10003183
        lbl_10003189:
            mov ecx, eax
            shl eax, 8
            add eax, ecx
            mov ecx, eax
            shl eax, 0x10
            add eax, ecx
            mov ecx, edx
            and edx, 3
            shr ecx, 2
            je lbl_100031a7
            rep stosd
            __emit 0x85 /* test edx, edx: MSVC6 cannot encode natively */
            __emit 0xd2 /* test edx, edx: MSVC6 cannot encode natively */
            je lbl_100031ad
        lbl_100031a7:
            mov byte ptr [edi], al
            inc edi
            dec edx
            jne lbl_100031a7
        lbl_100031ad:
            mov eax, dword ptr [esp + 8]
            pop edi
            ret
        lbl_100031b3:
            mov eax, dword ptr [esp + 4]
            ret
    }
}
