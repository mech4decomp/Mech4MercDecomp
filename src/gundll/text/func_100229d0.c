// FUN_100229d0 (0x100229D0) - __stdcall, RET 0x4
extern unsigned int g_10075060;
extern void __cdecl FUN_1001c770(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void FUN_100229d0(void)
{
    __asm {
        sub esp, 0xc
        push esi
        push edi
        mov edi, dword ptr [esp+0x18]
        mov eax, dword ptr [edi+0xc]
        test eax, eax
        mov dword ptr [esp+0xc], 0x0
        mov dword ptr [esp+0x10], 0x0
        mov dword ptr [esp+0x8], 0x0
        jnz loc_10022a05
        pop edi
        mov eax, 0xc112000e
        pop esi
        add esp, 0xc
        ret 0x4
loc_10022a05:
        push edi
        call FUN_1001c770
        mov esi, eax
        test esi, esi
        jl loc_10022a90
        mov eax, dword ptr [edi+0xc]
        mov ecx, dword ptr [eax]
        lea edx, [esp+0xc]
        push edx
        mov edx, dword ptr [g_10075060]
        push 0x10049bc4
        push edx
        push eax
        call dword ptr [ecx+0x14]
        mov esi, eax
        test esi, esi
        jl loc_10022a90
        mov eax, dword ptr [edi+0xc]
        mov ecx, dword ptr [eax]
        lea edx, [esp+0x10]
        push edx
        mov edx, dword ptr [g_10075060]
        push 0x10049e5c
        push edx
        push eax
        call dword ptr [ecx+0x14]
        mov esi, eax
        test esi, esi
        jl loc_10022a90
        mov eax, dword ptr [edi+0xc]
        mov ecx, dword ptr [eax]
        lea edx, [esp+0x8]
        push edx
        mov edx, dword ptr [g_10075060]
        push 0x10049e50
        push edx
        push eax
        call dword ptr [ecx+0x10]
        mov esi, eax
        test esi, esi
        jl loc_10022a90
        mov eax, dword ptr [esp+0xc]
        mov ecx, dword ptr [esp+0x10]
        mov edx, dword ptr [esp+0x8]
        mov dword ptr [edi+0x20], eax
        mov dword ptr [edi+0x24], ecx
        mov dword ptr [edi+0x28], edx
        pop edi
        mov eax, esi
        pop esi
        add esp, 0xc
        ret 0x4
loc_10022a90:
        mov eax, dword ptr [esp+0x8]
        test eax, eax
        jz loc_10022aa1
        push eax
        call FUN_10001d60
        add esp, 0x4
loc_10022aa1:
        pop edi
        mov eax, esi
        pop esi
        add esp, 0xc
        ret 0x4
    }
}
