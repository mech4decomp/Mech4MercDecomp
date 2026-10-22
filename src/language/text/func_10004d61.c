/* auto-transcribed gap function 0x10004D61 (244 B); review against reference; stepping stone */
__declspec(naked) void FUN_10004d61(void)
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
            int 3
            int 3
            int 3
            int 3
            int 3
            int 3
            push ebx
            push esi
            mov eax, dword ptr [esp + 0x18]
            or eax, eax
            jne lbl_10004d92
            mov ecx, dword ptr [esp + 0x14]
            mov eax, dword ptr [esp + 0x10]
            xor edx, edx
            div ecx
            mov ebx, eax
            mov eax, dword ptr [esp + 0xc]
            div ecx
            mov edx, ebx
            jmp lbl_10004dd3
        lbl_10004d92:
            mov ecx, eax
            mov ebx, dword ptr [esp + 0x14]
            mov edx, dword ptr [esp + 0x10]
            mov eax, dword ptr [esp + 0xc]
        lbl_10004da0:
            shr ecx, 1
            rcr ebx, 1
            shr edx, 1
            rcr eax, 1
            or ecx, ecx
            jne lbl_10004da0
            div ebx
            mov esi, eax
            mul dword ptr [esp + 0x18]
            mov ecx, eax
            mov eax, dword ptr [esp + 0x14]
            mul esi
            add edx, ecx
            jb lbl_10004dce
            cmp edx, dword ptr [esp + 0x10]
            ja lbl_10004dce
            jb lbl_10004dcf
            cmp eax, dword ptr [esp + 0xc]
            jbe lbl_10004dcf
        lbl_10004dce:
            dec esi
        lbl_10004dcf:
            xor edx, edx
            mov eax, esi
        lbl_10004dd3:
            pop esi
            pop ebx
            ret 0x10
            int 3
            int 3
            int 3
            int 3
            int 3
            int 3
            int 3
            int 3
            push ebx
            mov eax, dword ptr [esp + 0x14]
            or eax, eax
            jne lbl_10004e01
            mov ecx, dword ptr [esp + 0x10]
            mov eax, dword ptr [esp + 0xc]
            xor edx, edx
            div ecx
            mov eax, dword ptr [esp + 8]
            div ecx
            mov eax, edx
            xor edx, edx
            jmp lbl_10004e51
        lbl_10004e01:
            mov ecx, eax
            mov ebx, dword ptr [esp + 0x10]
            mov edx, dword ptr [esp + 0xc]
            mov eax, dword ptr [esp + 8]
        lbl_10004e0f:
            shr ecx, 1
            rcr ebx, 1
            shr edx, 1
            rcr eax, 1
            or ecx, ecx
            jne lbl_10004e0f
            div ebx
            mov ecx, eax
            mul dword ptr [esp + 0x14]
            xchg ecx, eax
            mul dword ptr [esp + 0x10]
            add edx, ecx
            jb lbl_10004e3a
            cmp edx, dword ptr [esp + 0xc]
            ja lbl_10004e3a
            jb lbl_10004e42
            cmp eax, dword ptr [esp + 8]
            jbe lbl_10004e42
        lbl_10004e3a:
            sub eax, dword ptr [esp + 0x10]
            sbb edx, dword ptr [esp + 0x14]
        lbl_10004e42:
            sub eax, dword ptr [esp + 8]
            sbb edx, dword ptr [esp + 0xc]
            neg edx
            neg eax
            sbb edx, 0
        lbl_10004e51:
            pop ebx
            ret 0x10
    }
}
