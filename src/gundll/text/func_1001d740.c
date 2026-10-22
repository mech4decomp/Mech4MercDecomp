/* FUN_1001d740 __stdcall 0x1001D740 */
extern void __cdecl FUN_10038141(void);
extern void __cdecl FUN_1001dae0(void);
extern void __cdecl FUN_10001d60(void);
extern void __cdecl FUN_1001d740(void);
extern int g_10050cd0;
extern int g_10050cd8;
extern int g_10050ce0;
extern int g_10050ce8;
extern int g_10050cf0;

__declspec(naked) void FUN_1001d740(void)
{
    __asm {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x24]
        xor ebx, ebx
        cmp esi, ebx
        push edi
        mov dword ptr [esp + 0x14], ebx
        mov dword ptr [esp + 0x10], ebx
        jg L_d76f
L_d759:
        pop edi
        pop esi
        mov dword ptr [esp + 8], 0xc1120002
        mov eax, dword ptr [esp + 8]
        pop ebp
        pop ebx
        add esp, 8
        ret 0x14
L_d76f:
        mov edi, dword ptr [esp + 0x20]
        mov eax, dword ptr [edi + 4]
        mov ecx, dword ptr [g_10050cd0]
        mov ebp, dword ptr [esp + 0x24]
        push eax
        push ecx
        push esi
        push ebp
        call FUN_10038141
        add esp, 0x10
        cmp eax, ebx
        mov dword ptr [esp + 0x20], eax
        jge L_d7aa
        pop edi
        pop esi
        mov dword ptr [esp + 8], 0xc1120002
        mov eax, dword ptr [esp + 8]
        pop ebp
        pop ebx
        add esp, 8
        ret 0x14
L_d7aa:
        sub esi, eax
        lea ebp, [ebp + eax*2]
        mov eax, dword ptr [edi + 0xc]
        test eax, eax
        jbe L_d832
L_d7b7:
        mov eax, dword ptr [edi + 0x14]
        mov ecx, dword ptr [eax + ebx*4]
        push 0
        lea edx, [esp + 0x18]
        push edx
        mov edx, dword ptr [esp + 0x24]
        push ecx
        push edx
        call FUN_1001dae0
        test eax, eax
        mov dword ptr [esp + 0x10], eax
        jl L_d8b4
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [edi + 0x10]
        mov edx, dword ptr [ecx + ebx*4]
        push eax
        mov eax, dword ptr [g_10050cd8]
        push edx
        push eax
        push esi
        push ebp
        call FUN_10038141
        mov edx, dword ptr [edi + 0x14]
        mov ecx, dword ptr [esp + 0x28]
        add esp, 0x14
        mov dword ptr [esp + 0x20], eax
        cmp dword ptr [edx + ebx*4], ecx
        jz L_d814
        push ecx
        call FUN_10001d60
        mov eax, dword ptr [esp + 0x24]
        add esp, 4
L_d814:
        test eax, eax
        mov dword ptr [esp + 0x14], 0
        jl L_d759
        sub esi, eax
        lea ebp, [ebp + eax*2]
        mov eax, dword ptr [edi + 0xc]
        inc ebx
        cmp ebx, eax
        jc L_d7b7
L_d832:
        mov eax, dword ptr [edi + 0x1c]
        test eax, eax
        jnz L_d8c2
        mov eax, dword ptr [g_10050ce0]
        push eax
        push esi
        push ebp
        call FUN_10038141
        add esp, 0xc
        test eax, eax
        mov dword ptr [esp + 0x20], eax
        jge L_d86b
        pop edi
        pop esi
        mov dword ptr [esp + 8], 0xc1120002
        mov eax, dword ptr [esp + 8]
        pop ebp
        pop ebx
        add esp, 8
        ret 0x14
L_d86b:
        mov ebx, dword ptr [esp + 0x28]
L_d86f:
        mov edi, dword ptr [edi + 0x18]
        test edi, edi
        lea ebp, [ebp + eax*2]
        jz L_d8a8
        mov edx, dword ptr [esp + 0x1c]
        lea eax, [esp + 0x20]
        push eax
        mov eax, dword ptr [esp + 0x28]
        mov ecx, ebp
        sub ecx, eax
        sar ecx, 1
        sub ebx, ecx
        push ebx
        push ebp
        push edi
        push edx
        call FUN_1001d740
        test eax, eax
        mov dword ptr [esp + 0x10], eax
        jl L_d8b4
        mov eax, dword ptr [esp + 0x20]
        lea ebp, [ebp + eax*2]
L_d8a8:
        sub ebp, dword ptr [esp + 0x24]
        mov ecx, dword ptr [esp + 0x2c]
        sar ebp, 1
        mov dword ptr [ecx], ebp
L_d8b4:
        mov eax, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0x14
L_d8c2:
        mov ecx, dword ptr [g_10050ce8]
        push ecx
        push esi
        push ebp
        call FUN_10038141
        add esp, 0xc
        test eax, eax
        mov dword ptr [esp + 0x20], eax
        jge L_d8f1
        pop edi
        pop esi
        mov dword ptr [esp + 8], 0xc1120002
        mov eax, dword ptr [esp + 8]
        pop ebp
        pop ebx
        add esp, 8
        ret 0x14
L_d8f1:
        mov ecx, dword ptr [esp + 0x24]
        mov ebx, dword ptr [esp + 0x28]
        lea ebp, [ebp + eax*2]
        sub esi, eax
        mov eax, ebp
        sub eax, ecx
        sar eax, 1
        lea edx, [esp + 0x20]
        push edx
        mov edx, dword ptr [edi + 0x1c]
        mov ecx, ebx
        sub ecx, eax
        mov eax, dword ptr [esp + 0x20]
        push ecx
        push ebp
        push edx
        push eax
        call FUN_1001d740
        test eax, eax
        mov dword ptr [esp + 0x10], eax
        jl L_d8b4
        mov ecx, dword ptr [edi + 4]
        mov eax, dword ptr [esp + 0x20]
        mov edx, dword ptr [g_10050cf0]
        push ecx
        push edx
        sub esi, eax
        lea ebp, [ebp + eax*2]
        push esi
        push ebp
        call FUN_10038141
        add esp, 0x10
        test eax, eax
        mov dword ptr [esp + 0x20], eax
        jge L_d86f
        pop edi
        pop esi
        mov dword ptr [esp + 8], 0xc1120002
        mov eax, dword ptr [esp + 8]
        pop ebp
        pop ebx
        add esp, 8
        ret 0x14
    }
}
