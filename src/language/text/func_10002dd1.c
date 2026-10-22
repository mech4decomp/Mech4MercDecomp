/* auto-transcribed gap function 0x10002DD1 (415 B); review against reference; stepping stone */
extern void __cdecl FUN_10002df6(void);
__declspec(naked) void FUN_10002dd1(void)
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
        lbl_10002de0:
            lea eax, [edx - 1]
            pop ebx
            ret
            __emit 0x8d /* lea esp, [esp]: MSVC6 cannot encode natively */
            __emit 0xa4 /* lea esp, [esp]: MSVC6 cannot encode natively */
            __emit 0x24 /* lea esp, [esp]: MSVC6 cannot encode natively */
            __emit 0x00 /* lea esp, [esp]: MSVC6 cannot encode natively */
            __emit 0x00 /* lea esp, [esp]: MSVC6 cannot encode natively */
            __emit 0x00 /* lea esp, [esp]: MSVC6 cannot encode natively */
            __emit 0x00 /* lea esp, [esp]: MSVC6 cannot encode natively */
            __emit 0x8d /* lea esp, [esp]: MSVC6 cannot encode natively */
            __emit 0x64 /* lea esp, [esp]: MSVC6 cannot encode natively */
            __emit 0x24 /* lea esp, [esp]: MSVC6 cannot encode natively */
            __emit 0x00 /* lea esp, [esp]: MSVC6 cannot encode natively */
            xor eax, eax
            mov al, byte ptr [esp + 8]
            push ebx
            mov ebx, eax
            shl eax, 8
            mov edx, dword ptr [esp + 8]
            test edx, 3
            je lbl_10002e1b
        lbl_10002e08:
            mov cl, byte ptr [edx]
            inc edx
            __emit 0x38 /* cmp cl, bl: MSVC6 cannot encode natively */
            __emit 0xd9 /* cmp cl, bl: MSVC6 cannot encode natively */
            je lbl_10002de0
            test cl, cl
            je lbl_10002e64
            test edx, 3
            jne lbl_10002e08
        lbl_10002e1b:
            or ebx, eax
            push edi
            mov eax, ebx
            shl ebx, 0x10
            push esi
            or ebx, eax
        lbl_10002e26:
            mov ecx, dword ptr [edx]
            mov edi, 0x7efefeff
            mov eax, ecx
            mov esi, edi
            xor ecx, ebx
            add esi, eax
            add edi, ecx
            xor ecx, 0xffffffff
            xor eax, 0xffffffff
            xor ecx, edi
            xor eax, esi
            add edx, 4
            and ecx, 0x81010100
            jne lbl_10002e68
            and eax, 0x81010100
            je lbl_10002e26
            and eax, 0x1010100
            jne lbl_10002e62
            and esi, 0x80000000
            jne lbl_10002e26
        lbl_10002e62:
            pop esi
            pop edi
        lbl_10002e64:
            pop ebx
            xor eax, eax
            ret
        lbl_10002e68:
            mov eax, dword ptr [edx - 4]
            __emit 0x38 /* cmp al, bl: MSVC6 cannot encode natively */
            __emit 0xd8 /* cmp al, bl: MSVC6 cannot encode natively */
            je lbl_10002ea5
            test al, al
            je lbl_10002e62
            __emit 0x38 /* cmp ah, bl: MSVC6 cannot encode natively */
            __emit 0xdc /* cmp ah, bl: MSVC6 cannot encode natively */
            je lbl_10002e9e
            test ah, ah
            je lbl_10002e62
            shr eax, 0x10
            __emit 0x38 /* cmp al, bl: MSVC6 cannot encode natively */
            __emit 0xd8 /* cmp al, bl: MSVC6 cannot encode natively */
            je lbl_10002e97
            test al, al
            je lbl_10002e62
            __emit 0x38 /* cmp ah, bl: MSVC6 cannot encode natively */
            __emit 0xdc /* cmp ah, bl: MSVC6 cannot encode natively */
            je lbl_10002e90
            test ah, ah
            je lbl_10002e62
            jmp lbl_10002e26
        lbl_10002e90:
            pop esi
            pop edi
            lea eax, [edx - 1]
            pop ebx
            ret
        lbl_10002e97:
            lea eax, [edx - 2]
            pop esi
            pop edi
            pop ebx
            ret
        lbl_10002e9e:
            lea eax, [edx - 3]
            pop esi
            pop edi
            pop ebx
            ret
        lbl_10002ea5:
            lea eax, [edx - 4]
            pop esi
            pop edi
            pop ebx
            ret
            int 3
            int 3
            int 3
            int 3
            mov ecx, dword ptr [esp + 8]
            push edi
            push ebx
            push esi
            mov dl, byte ptr [ecx]
            mov edi, dword ptr [esp + 0x10]
            test dl, dl
            je lbl_10002f2a
            mov dh, byte ptr [ecx + 1]
            test dh, dh
            je lbl_10002f17
        lbl_10002ec8:
            mov esi, edi
            mov ecx, dword ptr [esp + 0x14]
            mov al, byte ptr [edi]
            inc esi
            __emit 0x38 /* cmp al, dl: MSVC6 cannot encode natively */
            __emit 0xd0 /* cmp al, dl: MSVC6 cannot encode natively */
            je lbl_10002eea
            test al, al
            je lbl_10002ee4
        lbl_10002ed9:
            mov al, byte ptr [esi]
            inc esi
        lbl_10002edc:
            __emit 0x38 /* cmp al, dl: MSVC6 cannot encode natively */
            __emit 0xd0 /* cmp al, dl: MSVC6 cannot encode natively */
            je lbl_10002eea
            test al, al
            jne lbl_10002ed9
        lbl_10002ee4:
            pop esi
            pop ebx
            pop edi
            xor eax, eax
            ret
        lbl_10002eea:
            mov al, byte ptr [esi]
            inc esi
            __emit 0x38 /* cmp al, dh: MSVC6 cannot encode natively */
            __emit 0xf0 /* cmp al, dh: MSVC6 cannot encode natively */
            jne lbl_10002edc
            lea edi, [esi - 1]
        lbl_10002ef4:
            mov ah, byte ptr [ecx + 2]
            test ah, ah
            je lbl_10002f23
            mov al, byte ptr [esi]
            add esi, 2
            __emit 0x38 /* cmp al, ah: MSVC6 cannot encode natively */
            __emit 0xe0 /* cmp al, ah: MSVC6 cannot encode natively */
            jne lbl_10002ec8
            mov al, byte ptr [ecx + 3]
            test al, al
            je lbl_10002f23
            mov ah, byte ptr [esi - 1]
            add ecx, 2
            __emit 0x38 /* cmp al, ah: MSVC6 cannot encode natively */
            __emit 0xe0 /* cmp al, ah: MSVC6 cannot encode natively */
            je lbl_10002ef4
            jmp lbl_10002ec8
        lbl_10002f17:
            xor eax, eax
            pop esi
            pop ebx
            pop edi
            mov al, dl
            jmp FUN_10002df6
        lbl_10002f23:
            lea eax, [edi - 1]
            pop esi
            pop ebx
            pop edi
            ret
        lbl_10002f2a:
            mov eax, edi
            pop esi
            pop ebx
            pop edi
            ret
            push ebp
            mov ebp, esp
            push edi
            push esi
            push ebx
            mov ecx, dword ptr [ebp + 0x10]
            jecxz lbl_10002f61
            mov ebx, ecx
            mov edi, dword ptr [ebp + 8]
            mov esi, edi
            xor eax, eax
            repne scasb
            neg ecx
            add ecx, ebx
            mov edi, esi
            mov esi, dword ptr [ebp + 0xc]
            repe cmpsb
            mov al, byte ptr [esi - 1]
            xor ecx, ecx
            cmp al, byte ptr [edi - 1]
            ja lbl_10002f5f
            je lbl_10002f61
            dec ecx
            dec ecx
        lbl_10002f5f:
            not ecx
        lbl_10002f61:
            mov eax, ecx
            pop ebx
            pop esi
            pop edi
            leave
            ret
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
