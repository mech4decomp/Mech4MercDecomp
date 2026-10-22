// FUN_1000dbd0 (0x1000DBD0) __stdcall
extern int __stdcall FUN_1001c8b0(int a, int b, int c);
extern int __stdcall FUN_10001dd0(int a);

__declspec(naked) int __stdcall FUN_1000dbd0(void)
{
    __asm {
        push esi
        mov esi, dword ptr [esp+0x8]
        mov eax, dword ptr [esi+0xc]
        test eax, eax
        push edi
        jz L_dbe7
        pop edi
        mov eax, 0xc112000d
        pop esi
        ret 0x10
L_dbe7:
        mov eax, dword ptr [esp+0x14]
        mov ecx, dword ptr [esp+0x10]
        push eax
        push ecx
        push esi
        call FUN_1001c8b0
        test eax, eax
        jl L_dc22
        mov edi, dword ptr [esp+0x18]
        push edi
        call FUN_10001dd0
        test eax, eax
        jnz L_dc17
        test edi, edi
        jz L_dc17
        pop edi
        mov eax, 0x8007000e
        pop esi
        ret 0x10
L_dc17:
        xor ecx, ecx
        mov dword ptr [esi+0x24], eax
        mov byte ptr [esi+0x4], 0x1
        mov eax, ecx
L_dc22:
        pop edi
        pop esi
        ret 0x10
    }
}
