// FUN_1003e7c7 (0x1003E7C7) __cdecl, 169 bytes
__declspec(naked) void func_1003e7c7(void)
{
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov edx, dword ptr [ebp + 0x10]
        push ebx
        mov ebx, dword ptr [ebp + 0xc]
        push esi
        movzx ecx, byte ptr [edx]
        push edi
        mov edi, dword ptr [ebp + 0x8]
        and dword ptr [ebp - 0x4], 0x0
        mov eax, ebx
        sub eax, dword ptr [edi + 0x10]
        sar eax, 0xc
        cmp ecx, dword ptr [ebp + 0x14]
        lea edi, [edi + eax*8 + 0x18]
        jbe L801
        mov eax, dword ptr [ebp + 0x14]
        sub ecx, eax
        mov byte ptr [edx], al
        add dword ptr [edi], ecx
        mov dword ptr [edi + 0x4], 0xf1
        jmp L861
    L801:
        jnc L868
        mov eax, dword ptr [ebp + 0x14]
        lea esi, [edx + eax*1]
        lea eax, [ebx + 0xf8]
        cmp esi, eax
        ja L868
        lea eax, [ecx + edx*1]
    L816:
        cmp eax, esi
        jnc L824
        cmp byte ptr [eax], 0x0
        jnz L822
        inc eax
        jmp L816
    L822:
        cmp eax, esi
    L824:
        jnz L868
        mov al, byte ptr [ebp + 0x14]
        mov byte ptr [edx], al
        mov eax, dword ptr [ebx]
        cmp edx, eax
        ja L85C
        cmp esi, eax
        jbe L85C
        lea eax, [ebx + 0xf8]
        cmp esi, eax
        jnc L853
        xor eax, eax
        mov dword ptr [ebx], esi
    L843:
        cmp byte ptr [esi], al
        jnz L84E
    L847:
        inc eax
        cmp byte ptr [esi + eax*1], 0x0
        jz L847
    L84E:
        mov dword ptr [ebx + 0x4], eax
        jmp L85C
    L853:
        and dword ptr [ebx + 0x4], 0x0
        lea eax, [ebx + 0x8]
        mov dword ptr [ebx], eax
    L85C:
        sub ecx, dword ptr [ebp + 0x14]
        add dword ptr [edi], ecx
    L861:
        mov dword ptr [ebp - 0x4], 0x1
    L868:
        mov eax, dword ptr [ebp - 0x4]
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
