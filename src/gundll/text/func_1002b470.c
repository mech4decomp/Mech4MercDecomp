// FUN_1002b470 (0x1002B470) __stdcall, 123 bytes
extern void __cdecl FUN_10038141(void);

__declspec(naked) void __stdcall func_1002b470(void)
{
    __asm {
        push ecx
        mov eax, dword ptr [esp+0x1c]
        push ebx
        push ebp
        push esi
        xor esi, esi
        cmp eax, esi
        push edi
        mov dword ptr [esp+0x10], esi
        jbe L_ca
        mov ebp, dword ptr [esp+0x28]
        mov ebx, dword ptr [esp+0x1c]
        mov edi, dword ptr [esp+0x18]
        nop
L_90:
        mov eax, dword ptr [ebp+esi*4]
        mov ecx, dword ptr [esp+0x24]
        push eax
        push 0x10049b58
        push ecx
        push 0x1005135c
        push ebx
        push edi
        call FUN_10038141
        add esp, 0x18
        test eax, eax
        jl L_de
        mov ecx, dword ptr [esp+0x10]
        add ecx, eax
        sub ebx, eax
        lea edi, [edi+eax*2]
        mov eax, dword ptr [esp+0x2c]
        inc esi
        cmp esi, eax
        mov dword ptr [esp+0x10], ecx
        jc L_90
L_ca:
        mov eax, dword ptr [esp+0x10]
        mov edx, dword ptr [esp+0x20]
        pop edi
        pop esi
        pop ebp
        mov dword ptr [edx], eax
        xor eax, eax
        pop ebx
        pop ecx
        ret 0x18
L_de:
        pop edi
        pop esi
        pop ebp
        mov eax, 0xc1120002
        pop ebx
        pop ecx
        ret 0x18
    }
}
