// FUN_100377ae (0x100377AE) __cdecl, 123 bytes
extern void __cdecl FUN_10039985(void);

__declspec(naked) void func_100377ae(void)
{
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        cmp dword ptr [ebp+0xc], 0
        push edi
        mov edi, dword ptr [ebp+8]
        mov esi, dword ptr [edi+0xc]
        mov ebx, dword ptr [edi+0x10]
        mov eax, esi
        mov dword ptr [ebp+8], esi
        mov dword ptr [ebp-4], eax
        jl L_05
L_cc:
        cmp esi, -1
        jnz L_d6
        call FUN_10039985
L_d6:
        mov ecx, dword ptr [ebp+0x10]
        dec esi
        lea eax, [esi+esi*4]
        cmp dword ptr [ebx+eax*4+4], ecx
        lea eax, [ebx+eax*4]
        jge L_eb
        cmp ecx, dword ptr [eax+8]
        jle L_f0
L_eb:
        cmp esi, -1
        jnz L_fc
L_f0:
        mov eax, dword ptr [ebp+8]
        dec dword ptr [ebp+0xc]
        mov dword ptr [ebp-4], eax
        mov dword ptr [ebp+8], esi
L_fc:
        cmp dword ptr [ebp+0xc], 0
        jge L_cc
        mov eax, dword ptr [ebp-4]
L_05:
        mov ecx, dword ptr [ebp+0x14]
        inc esi
        mov dword ptr [ecx], esi
        mov ecx, dword ptr [ebp+0x18]
        mov dword ptr [ecx], eax
        cmp eax, dword ptr [edi+0xc]
        ja L_19
        cmp esi, eax
        jbe L_1e
L_19:
        call FUN_10039985
L_1e:
        lea eax, [esi+esi*4]
        pop edi
        pop esi
        lea eax, [ebx+eax*4]
        pop ebx
        leave
        ret
    }
}
