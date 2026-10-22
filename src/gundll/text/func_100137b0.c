// FUN_100137b0 (0x100137B0) __stdcall, 124 bytes
extern void __cdecl FUN_1001c760(void);
extern void __cdecl FUN_10001dd0(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __stdcall func_100137b0(void)
{
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp+0xc]
        mov eax, dword ptr [esi+0xc]
        test eax, eax
        push edi
        jz L_c9
        pop edi
        pop esi
        mov eax, 0xc112000d
        pop ebx
        ret 0x10
L_c9:
        mov eax, dword ptr [esp+0x14]
        push eax
        push esi
        call FUN_1001c760
        test eax, eax
        jl L_26
        mov ebx, dword ptr [esp+0x18]
        push ebx
        call FUN_10001dd0
        mov edi, eax
        test edi, edi
        jnz L_ec
        test ebx, ebx
        jnz L_12
L_ec:
        mov ebx, dword ptr [esp+0x1c]
        push ebx
        call FUN_10001dd0
        mov ecx, eax
        test ecx, ecx
        jnz L_00
        test ebx, ebx
        jnz L_12
L_00:
        mov dword ptr [esi+0x20], edi
        pop edi
        mov byte ptr [esi+4], 1
        mov dword ptr [esi+0x24], ecx
        pop esi
        xor eax, eax
        pop ebx
        ret 0x10
L_12:
        test edi, edi
        mov esi, 0x8007000e
        jz L_24
        push edi
        call FUN_10001d60
        add esp, 4
L_24:
        mov eax, esi
L_26:
        pop edi
        pop esi
        pop ebx
        ret 0x10
    }
}
