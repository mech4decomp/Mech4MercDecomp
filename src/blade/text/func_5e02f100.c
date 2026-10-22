/*
 * _strncpy (254 B) — statically-linked CRT strncpy. Copies up to _Count
 * chars from _Source to _Dest, NUL-padding if _Source is shorter.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void _strncpy(void)
{
    __asm {
        mov ecx, dword ptr [esp+0xc]
        push edi
        test ecx, ecx
        jz L_f183
        push esi
        push ebx
        mov ebx, ecx
        mov esi, dword ptr [esp+0x14]
        test esi, 3
        mov edi, dword ptr [esp+0x10]
        jnz L_f124
        shr ecx, 2
        jnz L_f191
        jmp L_f145
L_f124:
        mov al, byte ptr [esi]
        inc esi
        mov byte ptr [edi], al
        inc edi
        dec ecx
        jz L_f152
        test al, al
        jz L_f15a
        test esi, 3
        jnz L_f124
        mov ebx, ecx
        shr ecx, 2
        jnz L_f191
L_f140:
        and ebx, 3
        jz L_f152
L_f145:
        mov al, byte ptr [esi]
        inc esi
        mov byte ptr [edi], al
        inc edi
        test al, al
        jz L_f17e
        dec ebx
        jnz L_f145
L_f152:
        mov eax, dword ptr [esp+0x10]
        pop ebx
        pop esi
        pop edi
        ret
L_f15a:
        test edi, 3
        jz L_f174
L_f162:
        mov byte ptr [edi], al
        inc edi
        dec ecx
        jz L_f1f6
        test edi, 3
        jnz L_f162
L_f174:
        mov ebx, ecx
        shr ecx, 2
        jnz L_f1e7
L_f17b:
        mov byte ptr [edi], al
        inc edi
L_f17e:
        dec ebx
        jnz L_f17b
        pop ebx
        pop esi
L_f183:
        mov eax, dword ptr [esp+0x8]
        pop edi
        ret
L_f189:
        mov dword ptr [edi], edx
        add edi, 4
        dec ecx
        jz L_f140
L_f191:
        mov edx, 0x7efefeff
        mov eax, dword ptr [esi]
        add edx, eax
        xor eax, 0xffffffff
        xor eax, edx
        mov edx, dword ptr [esi]
        add esi, 4
        test eax, 0x81010100
        jz L_f189
        test dl, dl
        jz L_f1db
        test dh, dh
        jz L_f1d1
        test edx, 0xff0000
        jz L_f1c7
        test edx, 0xff000000
        jnz L_f189
        mov dword ptr [edi], edx
        jmp L_f1df
L_f1c7:
        and edx, 0xffff
        mov dword ptr [edi], edx
        jmp L_f1df
L_f1d1:
        and edx, 0xff
        mov dword ptr [edi], edx
        jmp L_f1df
L_f1db:
        xor edx, edx
        mov dword ptr [edi], edx
L_f1df:
        add edi, 4
        xor eax, eax
        dec ecx
        jz L_f1f1
L_f1e7:
        xor eax, eax
L_f1e9:
        mov dword ptr [edi], eax
        add edi, 4
        dec ecx
        jnz L_f1e9
L_f1f1:
        and ebx, 3
        jnz L_f17b
L_f1f6:
        mov eax, dword ptr [esp+0x10]
        pop ebx
        pop esi
        pop edi
        ret
    }
}
