/* auto-transcribed gap function 0x10003E9D (257 B); review against reference; stepping stone */
extern void __cdecl FUN_10003f96(void);
__declspec(naked) void FUN_10003e9d(void)
{
    __asm {
            int 3
            int 3
            int 3
            mov ecx, dword ptr [esp + 0xc]
            push edi
            test ecx, ecx
            je lbl_10003f23
            push esi
            push ebx
            mov ebx, ecx
            mov esi, dword ptr [esp + 0x14]
            test esi, 3
            mov edi, dword ptr [esp + 0x10]
            jne lbl_10003ec4
            shr ecx, 2
            jne lbl_10003f31
            jmp lbl_10003ee5
        lbl_10003ec4:
            mov al, byte ptr [esi]
            inc esi
            mov byte ptr [edi], al
            inc edi
            dec ecx
            je lbl_10003ef2
            test al, al
            je lbl_10003efa
            test esi, 3
            jne lbl_10003ec4
            mov ebx, ecx
            shr ecx, 2
            jne lbl_10003f31
        lbl_10003ee0:
            and ebx, 3
            je lbl_10003ef2
        lbl_10003ee5:
            mov al, byte ptr [esi]
            inc esi
            mov byte ptr [edi], al
            inc edi
            test al, al
            je lbl_10003f1e
            dec ebx
            jne lbl_10003ee5
        lbl_10003ef2:
            mov eax, dword ptr [esp + 0x10]
            pop ebx
            pop esi
            pop edi
            ret
        lbl_10003efa:
            test edi, 3
            je lbl_10003f14
        lbl_10003f02:
            mov byte ptr [edi], al
            inc edi
            dec ecx
            je FUN_10003f96
            test edi, 3
            jne lbl_10003f02
        lbl_10003f14:
            mov ebx, ecx
            shr ecx, 2
            jne lbl_10003f87
        lbl_10003f1b:
            mov byte ptr [edi], al
            inc edi
        lbl_10003f1e:
            dec ebx
            jne lbl_10003f1b
            pop ebx
            pop esi
        lbl_10003f23:
            mov eax, dword ptr [esp + 8]
            pop edi
            ret
        lbl_10003f29:
            mov dword ptr [edi], edx
            add edi, 4
            dec ecx
            je lbl_10003ee0
        lbl_10003f31:
            mov edx, 0x7efefeff
            mov eax, dword ptr [esi]
            add edx, eax
            xor eax, 0xffffffff
            xor eax, edx
            mov edx, dword ptr [esi]
            add esi, 4
            test eax, 0x81010100
            je lbl_10003f29
            test dl, dl
            je lbl_10003f7b
            test dh, dh
            je lbl_10003f71
            test edx, 0xff0000
            je lbl_10003f67
            test edx, 0xff000000
            jne lbl_10003f29
            mov dword ptr [edi], edx
            jmp lbl_10003f7f
        lbl_10003f67:
            and edx, 0xffff
            mov dword ptr [edi], edx
            jmp lbl_10003f7f
        lbl_10003f71:
            and edx, 0xff
            mov dword ptr [edi], edx
            jmp lbl_10003f7f
        lbl_10003f7b:
            xor edx, edx
            mov dword ptr [edi], edx
        lbl_10003f7f:
            add edi, 4
            xor eax, eax
            dec ecx
            je lbl_10003f91
        lbl_10003f87:
            xor eax, eax
        lbl_10003f89:
            mov dword ptr [edi], eax
            add edi, 4
            dec ecx
            jne lbl_10003f89
        lbl_10003f91:
            and ebx, 3
            jne lbl_10003f1b
            mov eax, dword ptr [esp + 0x10]
            pop ebx
            pop esi
            pop edi
            ret
    }
}
