// FUN_10025e50 (0x10025E50) __stdcall, 238 bytes
extern int __stdcall FUN_1001c760(void *, void *);
extern void * __stdcall FUN_10001dd0(void *);
extern void __cdecl FUN_10001d60(void *);

__declspec(naked) void __stdcall FUN_10025e50(void)
{
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp+0x10]
        mov eax, dword ptr [esi+0xc]
        push edi
        xor edi, edi
        xor ebx, ebx
        test eax, eax
        jz loc_25e6f
        pop edi
        pop esi
        pop ebp
        mov eax, 0xc112000d
        pop ebx
        ret 0x20
loc_25e6f:
        mov eax, dword ptr [esp+0x18]
        push eax
        push esi
        call FUN_1001c760
        test eax, eax
        jl loc_25f37
        mov ecx, dword ptr [esp+0x1c]
        push ecx
        call FUN_10001dd0
        mov ebp, eax
        test ebp, ebp
        jnz loc_25e9a
        mov eax, dword ptr [esp+0x1c]
        test eax, eax
        jnz loc_25f09
loc_25e9a:
        mov edx, dword ptr [esp+0x20]
        push edx
        call FUN_10001dd0
        mov edi, eax
        test edi, edi
        jnz loc_25eb2
        mov eax, dword ptr [esp+0x20]
        test eax, eax
        jnz loc_25f09
loc_25eb2:
        mov eax, dword ptr [esp+0x2c]
        push eax
        call FUN_10001dd0
        mov ebx, eax
        test ebx, ebx
        jnz loc_25eca
        mov eax, dword ptr [esp+0x2c]
        test eax, eax
        jnz loc_25f09
loc_25eca:
        mov ecx, dword ptr [esp+0x30]
        push ecx
        call FUN_10001dd0
        mov ecx, eax
        test ecx, ecx
        jnz loc_25ee2
        mov eax, dword ptr [esp+0x30]
        test eax, eax
        jnz loc_25f09
loc_25ee2:
        mov edx, dword ptr [esp+0x24]
        mov dword ptr [esi+0x28], edx
        mov edx, dword ptr [esp+0x28]
        mov dword ptr [esi+0x24], edi
        pop edi
        mov dword ptr [esi+0x20], ebp
        mov dword ptr [esi+0x30], ebx
        mov byte ptr [esi+4], 1
        mov dword ptr [esi+0x2c], edx
        mov dword ptr [esi+0x34], ecx
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0x20
loc_25f09:
        test ebp, ebp
        mov esi, 0x8007000e
        jz loc_25f1b
        push ebp
        call FUN_10001d60
        add esp, 4
loc_25f1b:
        test edi, edi
        jz loc_25f28
        push edi
        call FUN_10001d60
        add esp, 4
loc_25f28:
        test ebx, ebx
        jz loc_25f35
        push ebx
        call FUN_10001d60
        add esp, 4
loc_25f35:
        mov eax, esi
loc_25f37:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x20
    }
}
