// FUN_10011620 (0x10011620) __stdcall
extern int __stdcall FUN_1001c760(int a, int b);
extern int __stdcall FUN_10001dd0(int a);

__declspec(naked) int __stdcall FUN_10011620(void)
{
    __asm {
        push esi
        mov esi, dword ptr [esp+0x8]
        mov eax, dword ptr [esi+0xc]
        test eax, eax
        push edi
        jz L_11637
        pop edi
        mov eax, 0xc112000d
        pop esi
        ret 0x10
L_11637:
        mov eax, dword ptr [esp+0x10]
        push eax
        push esi
        call FUN_1001c760
        test eax, eax
        jl L_11674
        mov edi, dword ptr [esp+0x18]
        push edi
        call FUN_10001dd0
        test eax, eax
        jnz L_11662
        test edi, edi
        jz L_11662
        pop edi
        mov eax, 0x8007000e
        pop esi
        ret 0x10
L_11662:
        mov edx, dword ptr [esp+0x14]
        xor ecx, ecx
        mov dword ptr [esi+0x24], eax
        mov byte ptr [esi+0x4], 0x1
        mov dword ptr [esi+0x20], edx
        mov eax, ecx
L_11674:
        pop edi
        pop esi
        ret 0x10
    }
}
