/* FUN_0040f7f0 - loader/parser subsystem helper (tree find) */

__declspec(naked) void func_0040f7f0(void)
{
    __asm {
        push ecx
        mov edx, dword ptr [ecx]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [edx+4]
        test edi, edi
        mov dword ptr [esp+0x10], edx
        mov ebp, edx
        jz L_f84e
        mov eax, dword ptr [esp+0x1c]
        mov edx, dword ptr [eax]
    L_f80a:
        mov eax, dword ptr [edi+0x10]
        mov esi, edx
    L_f80f:
        mov bl, byte ptr [eax]
        mov cl, bl
        cmp bl, byte ptr [esi]
        jnz L_f833
        test cl, cl
        jz L_f82f
        mov bl, byte ptr [eax+1]
        mov cl, bl
        cmp bl, byte ptr [esi+1]
        jnz L_f833
        add eax, 2
        add esi, 2
        test cl, cl
        jnz L_f80f
    L_f82f:
        xor eax, eax
        jmp L_f838
    L_f833:
        sbb eax, eax
        sbb eax, -1
    L_f838:
        test eax, eax
        jl L_f843
        mov ebp, edi
        mov edi, dword ptr [edi+8]
        jmp L_f846
    L_f843:
        mov edi, dword ptr [edi+0xc]
    L_f846:
        test edi, edi
        jnz L_f80a
        mov edx, dword ptr [esp+0x10]
    L_f84e:
        cmp ebp, edx
        mov dword ptr [esp+0x10], ebp
        jz L_f8a0
        mov ecx, dword ptr [esp+0x1c]
        mov esi, dword ptr [ebp+0x10]
        mov eax, dword ptr [ecx]
    L_f85f:
        mov bl, byte ptr [eax]
        mov cl, bl
        cmp bl, byte ptr [esi]
        jnz L_f883
        test cl, cl
        jz L_f87f
        mov bl, byte ptr [eax+1]
        mov cl, bl
        cmp bl, byte ptr [esi+1]
        jnz L_f883
        add eax, 2
        add esi, 2
        test cl, cl
        jnz L_f85f
    L_f87f:
        xor eax, eax
        jmp L_f888
    L_f883:
        sbb eax, eax
        sbb eax, -1
    L_f888:
        test eax, eax
        jl L_f8a0
        pop edi
        lea eax, [esp+0xc]
        mov edx, dword ptr [eax]
        mov eax, dword ptr [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr [eax], edx
        pop ebx
        pop ecx
        ret 8
    L_f8a0:
        pop edi
        lea eax, [esp+0x18]
        pop esi
        mov dword ptr [esp+0x14], edx
        mov edx, dword ptr [eax]
        mov eax, dword ptr [esp+0x10]
        pop ebp
        mov dword ptr [eax], edx
        pop ebx
        pop ecx
        ret 8
    }
}
