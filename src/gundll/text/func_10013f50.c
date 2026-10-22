// FUN_10013f50 (0x10013F50) __stdcall
extern int __stdcall FUN_1001c760(int a, int b);
extern int __stdcall FUN_10001dd0(int a);

__declspec(naked) int __stdcall FUN_10013f50(void)
{
    __asm {
        push esi
        mov esi, dword ptr [esp+0x8]
        mov eax, dword ptr [esi+0xc]
        test eax, eax
        push edi
        jz L_13f67
        pop edi
        mov eax, 0xc112000d
        pop esi
        ret 0x10
L_13f67:
        mov eax, dword ptr [esp+0x10]
        push eax
        push esi
        call FUN_1001c760
        test eax, eax
        jl L_13fa4
        mov edi, dword ptr [esp+0x18]
        push edi
        call FUN_10001dd0
        test eax, eax
        jnz L_13f92
        test edi, edi
        jz L_13f92
        pop edi
        mov eax, 0x8007000e
        pop esi
        ret 0x10
L_13f92:
        mov edx, dword ptr [esp+0x14]
        xor ecx, ecx
        mov dword ptr [esi+0x24], eax
        mov byte ptr [esi+0x4], 0x1
        mov dword ptr [esi+0x20], edx
        mov eax, ecx
L_13fa4:
        pop edi
        pop esi
        ret 0x10
    }
}
