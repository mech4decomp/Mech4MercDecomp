// FUN_1003ff47 (0x1003FF47) __thiscall
extern int __cdecl FUN_10037bf0(int a, int b);

__declspec(naked) void FUN_1003ff47(void)
{
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        xor ebx, ebx
        cmp dword ptr [ebp+0xc], ebx
        push 0x1
        pop eax
        jl L_ff9a
L_ff57:
        test eax, eax
        jz L_ff9a
        mov eax, dword ptr [ebp+0xc]
        add eax, ebx
        cdq
        sub eax, edx
        mov esi, eax
        mov eax, dword ptr [ebp+0x8]
        sar esi, 0x1
        push dword ptr [eax+esi*8]
        lea edi, [eax+esi*8]
        mov eax, dword ptr [ebp+0x10]
        push dword ptr [eax]
        call FUN_10037bf0
        pop ecx
        test eax, eax
        pop ecx
        jnz L_ff8a
        mov ecx, dword ptr [ebp+0x10]
        add edi, 0x4
        mov dword ptr [ecx], edi
        jmp L_ff95
L_ff8a:
        jge L_ff92
        dec esi
        mov dword ptr [ebp+0xc], esi
        jmp L_ff95
L_ff92:
        lea ebx, [esi+0x1]
L_ff95:
        cmp ebx, dword ptr [ebp+0xc]
        jle L_ff57
L_ff9a:
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
