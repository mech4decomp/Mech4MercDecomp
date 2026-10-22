// FUN_10010620 (0x10010620) __stdcall, 82 bytes
extern void __cdecl FUN_1001c760(void);
extern void __cdecl FUN_10001dd0(void);

__declspec(naked) void FUN_10010620(void)
{
    __asm {
        push esi
        mov esi, dword ptr [esp+0x8]
        mov eax, dword ptr [esi+0xc]
        test eax, eax
        push edi
        jz  L37
        pop edi
        mov eax, 0xc112000d
        pop esi
        ret 0xc
L37:
        mov eax, dword ptr [esp+0x10]
        push eax
        push esi
        call FUN_1001c760
        test eax, eax
        jl  L6d
        mov edi, dword ptr [esp+0x14]
        push edi
        call FUN_10001dd0
        test eax, eax
        jnz L62
        test edi, edi
        jz  L62
        pop edi
        mov eax, 0x8007000e
        pop esi
        ret 0xc
L62:
        xor ecx, ecx
        mov dword ptr [esi+0x20], eax
        mov byte ptr [esi+0x4], 0x1
        mov eax, ecx
L6d:
        pop edi
        pop esi
        ret 0xc
    }
}
