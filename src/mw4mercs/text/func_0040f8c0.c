/* FUN_0040f8c0 - loader/parser subsystem helper (tree find) */

__declspec(naked) void func_0040f8c0(void)
{
    __asm {
        push ebp
        mov ebp, dword ptr [ecx]
        push edi
        mov edi, dword ptr [ebp+4]
        test edi, edi
        jz L_f920
        mov eax, dword ptr [esp+0x10]
        mov edx, dword ptr [eax]
        push ebx
        push esi
    L_f8d3:
        mov eax, dword ptr [edi+0x10]
        mov esi, edx
    L_f8d8:
        mov bl, byte ptr [eax]
        mov cl, bl
        cmp bl, byte ptr [esi]
        jnz L_f8fc
        test cl, cl
        jz L_f8f8
        mov bl, byte ptr [eax+1]
        mov cl, bl
        cmp bl, byte ptr [esi+1]
        jnz L_f8fc
        add eax, 2
        add esi, 2
        test cl, cl
        jnz L_f8d8
    L_f8f8:
        xor eax, eax
        jmp L_f901
    L_f8fc:
        sbb eax, eax
        sbb eax, -1
    L_f901:
        test eax, eax
        jl L_f90c
        mov ebp, edi
        mov edi, dword ptr [edi+8]
        jmp L_f90f
    L_f90c:
        mov edi, dword ptr [edi+0xc]
    L_f90f:
        test edi, edi
        jnz L_f8d3
        mov eax, dword ptr [esp+0x14]
        pop esi
        pop ebx
        pop edi
        mov dword ptr [eax], ebp
        pop ebp
        ret 8
    L_f920:
        mov eax, dword ptr [esp+0xc]
        pop edi
        mov dword ptr [eax], ebp
        pop ebp
        ret 8
    }
}
