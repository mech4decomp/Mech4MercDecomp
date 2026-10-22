// FUN_1002df70 (0x1002DF70, 152 B, __stdcall)
extern void __cdecl FUN_10001d50(unsigned long);
extern void __cdecl FUN_10001d60(unsigned long);
extern int *g_10049238;   // IAT

__declspec(naked) void FUN_1002df70(void)
{
    __asm {
        mov edx, dword ptr [esp + 0xc]
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push ebp
        mov ebp, dword ptr [esp + 0x18]
        push esi
        push edi
        lea ecx, [esp + 0x20]
        push ecx
        mov ecx, dword ptr [esp + 0x1c]
        push edx
        xor edi, edi
        push ecx
        mov dword ptr [ebp], edi
        mov eax, dword ptr [ebx]
        push ebx
        call dword ptr [eax + 0x30]
        mov esi, eax
        test esi, esi
        jl loc_f6
        mov edx, dword ptr [ebx]
        lea eax, [esp + 0x14]
        push eax
        mov eax, dword ptr [esp + 0x24]
        lea ecx, [esp + 0x20]
        push ecx
        push edi
        push eax
        push ebx
        call dword ptr [edx + 0x8]
        mov esi, eax
        test esi, esi
        jl loc_f6
        push 0x10
        call FUN_10001d50
        mov edi, eax
        add esp, 0x4
        test edi, edi
        jnz loc_df
        push edi
        mov esi, 0x8007000e
        call FUN_10001d60
        add esp, 0x4
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
loc_df:
        mov ecx, dword ptr [esp + 0x14]
        push edi
        push ecx
        call dword ptr [g_10049238]
        mov esi, eax
        test esi, esi
        jl loc_f6
        mov dword ptr [ebp], edi
        xor edi, edi
loc_f6:
        push edi
        call FUN_10001d60
        add esp, 0x4
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
    }
}
