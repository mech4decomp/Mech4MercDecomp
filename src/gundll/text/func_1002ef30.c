// FUN_1002ef30 (0x1002EF30, 152 B, __stdcall)
extern void __cdecl FUN_10001d50(unsigned long);
extern void __cdecl FUN_1002efd0(void);
extern void __cdecl FUN_1002f0e0(unsigned long);

__declspec(naked) void FUN_1002ef30(void)
{
    __asm {
        push -0x1
        push 0x1004887b
        mov eax, fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push edi
        push 0x3c
        call FUN_10001d50
        add esp, 0x4
        mov dword ptr [esp + 0x8], eax
        test eax, eax
        mov dword ptr [esp + 0x14], 0x0
        jz loc_6d
        mov ecx, eax
        call FUN_1002efd0
        mov esi, eax
        jmp loc_6f
loc_6d:
        xor esi, esi
loc_6f:
        test esi, esi
        mov dword ptr [esp + 0x14], 0xffffffff
        jnz loc_93
        pop edi
        mov eax, 0x8007000e
        pop esi
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x8
loc_93:
        mov eax, dword ptr [esp + 0x20]
        push eax
        mov ecx, esi
        call FUN_1002f0e0
        mov edi, eax
        test edi, edi
        jl loc_ad
        mov ecx, dword ptr [esp + 0x1c]
        mov dword ptr [ecx], esi
        jmp loc_b3
loc_ad:
        mov edx, dword ptr [esi]
        push esi
        call dword ptr [edx + 0x8]
loc_b3:
        mov ecx, dword ptr [esp + 0xc]
        mov eax, edi
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x8
    }
}
