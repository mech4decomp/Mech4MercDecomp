/* auto-transcribed gap function 0x10004A75 (155 B); review against reference; stepping stone */
__declspec(naked) void FUN_10004a75(void)
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
            mov edx, dword ptr [esp + 4]
            mov ecx, dword ptr [esp + 8]
            test edx, 3
            jne lbl_10004acc
        lbl_10004a90:
            mov eax, dword ptr [edx]
            cmp al, byte ptr [ecx]
            jne lbl_10004ac4
            or al, al
            je lbl_10004ac0
            cmp ah, byte ptr [ecx + 1]
            jne lbl_10004ac4
            or ah, ah
            je lbl_10004ac0
            shr eax, 0x10
            cmp al, byte ptr [ecx + 2]
            jne lbl_10004ac4
            or al, al
            je lbl_10004ac0
            cmp ah, byte ptr [ecx + 3]
            jne lbl_10004ac4
            add ecx, 4
            add edx, 4
            or ah, ah
            jne lbl_10004a90
            mov edi, edi
        lbl_10004ac0:
            xor eax, eax
            ret
            nop
        lbl_10004ac4:
            sbb eax, eax
            shl eax, 1
            inc eax
            ret
            mov edi, edi
        lbl_10004acc:
            test edx, 1
            je lbl_10004ae8
            mov al, byte ptr [edx]
            inc edx
            cmp al, byte ptr [ecx]
            jne lbl_10004ac4
            inc ecx
            or al, al
            je lbl_10004ac0
            test edx, 2
            je lbl_10004a90
        lbl_10004ae8:
            mov ax, word ptr [edx]
            add edx, 2
            cmp al, byte ptr [ecx]
            jne lbl_10004ac4
            or al, al
            je lbl_10004ac0
            cmp ah, byte ptr [ecx + 1]
            jne lbl_10004ac4
            or ah, ah
            je lbl_10004ac0
            add ecx, 2
            jmp lbl_10004a90
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
    }
}
