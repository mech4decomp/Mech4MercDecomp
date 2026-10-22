// FUN_1002eb50 (0x1002EB50) __thiscall
extern void __cdecl FUN_1002e3a0(void);
extern void __cdecl FUN_1002e750(void);
extern void __cdecl FUN_1002e940(void);
extern void __cdecl FUN_1002ebc0(void);

__declspec(naked) void func_1002eb50(void)
{
    __asm {
        mov eax, dword ptr [esp+4]
        push esi
        push edi
        xor edi, edi
        dec eax
        mov esi, ecx
        je L96
        sub eax, 2
        je L8F
        sub eax, 6
        je L76
        push 0xC1121C00
        call FUN_1002e3a0
        pop edi
        pop esi
        ret 4
L76:
        call FUN_1002e750
        mov edx, dword ptr [esi+0x30]
        push edx
        mov edx, dword ptr [esi+0x2c]
        mov dword ptr [esi+0x24], eax
        mov eax, dword ptr [esi+0x28]
        mov ecx, dword ptr [eax]
        push edx
        push eax
        call dword ptr [ecx+8]
L8F:
        mov eax, edi
L91:
        pop edi
        pop esi
        ret 4
L96:
        push 1
        mov ecx, esi
        call FUN_1002e940
        test eax, eax
        jl L91
        mov eax, dword ptr [esi+0x24]
        push eax
        mov ecx, esi
        call FUN_1002ebc0
        pop edi
        pop esi
        ret 4
    }
}
