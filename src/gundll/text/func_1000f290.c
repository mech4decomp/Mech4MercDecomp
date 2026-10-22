// FUN_1000f290 (__stdcall, 82 bytes)
extern void __cdecl FUN_1001c760(void);
extern void __cdecl FUN_10001dd0(void);

__declspec(naked) void FUN_1000f290(void)
{
    __asm {
        push esi
        mov esi, dword ptr [esp+0x8]
        mov eax, dword ptr [esi+0xc]
        test eax, eax
        push edi
        jz L1
        pop edi
        mov eax, 0xc112000d
        pop esi
        ret 0xc
    L1:
        mov eax, dword ptr [esp+0x10]
        push eax
        push esi
        call FUN_1001c760
        test eax, eax
        jl L2
        mov edi, dword ptr [esp+0x14]
        push edi
        call FUN_10001dd0
        test eax, eax
        jnz L3
        test edi, edi
        jz L3
        pop edi
        mov eax, 0x8007000e
        pop esi
        ret 0xc
    L3:
        xor ecx, ecx
        mov dword ptr [esi+0x20], eax
        mov byte ptr [esi+0x4], 1
        mov eax, ecx
    L2:
        pop edi
        pop esi
        ret 0xc
    }
}
