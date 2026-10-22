// FUN_1002d980 (0x1002D980) __stdcall, 237 bytes
extern void * __cdecl FUN_10001d50(int);
extern int __stdcall FUN_1001c190(int, void *, void **);
extern void __cdecl FUN_10001d60(void *);
extern void __stdcall FUN_1001c2a0(void *);

__declspec(naked) void FUN_1002d980(void)
{
    __asm {
        sub esp, 0xc
        mov edx, dword ptr [esp+0x14]
        push ebx
        mov ebx, dword ptr [esp+0x14]
        mov eax, dword ptr [ebx]
        push ebp
        push esi
        push edi
        lea ecx, [esp+0x10]
        push ecx
        push edx
        xor edi, edi
        push ebx
        mov dword ptr [esp+0x1c], edi
        mov dword ptr [esp+0x20], edi
        xor esi, esi
        call dword ptr [eax+4]
        mov eax, dword ptr [esp+0x10]
        cmp eax, edi
        jnz loc_d9ba
        mov eax, dword ptr [esp+0x28]
        mov dword ptr [eax], edi
        jmp loc_da53
loc_d9ba:
        lea ecx, [eax*4]
        push ecx
        call FUN_10001d50
        add esp, 4
        cmp eax, edi
        mov dword ptr [esp+0x20], eax
        jnz loc_d9d9
        mov esi, 0x8007000e
        jmp loc_da44
loc_d9d9:
        mov ecx, dword ptr [esp+0x10]
        cmp ecx, edi
        jbe loc_da0b
        mov ebp, eax
loc_d9e3:
        mov ecx, dword ptr [esp+0x24]
        mov edx, dword ptr [ebx]
        push ebp
        lea eax, [esp+0x1c]
        push eax
        push edi
        push ecx
        push ebx
        call dword ptr [edx+8]
        mov esi, eax
        test esi, esi
        jl loc_da40
        mov ecx, dword ptr [esp+0x10]
        inc edi
        add ebp, 4
        cmp edi, ecx
        jc loc_d9e3
        mov eax, dword ptr [esp+0x20]
loc_da0b:
        lea edx, [esp+0x14]
        push edx
        push eax
        push ecx
        call FUN_1001c190
        mov esi, eax
        test esi, esi
        mov eax, dword ptr [esp+0x20]
        jl loc_da44
        push eax
        call FUN_10001d60
        mov ecx, dword ptr [esp+0x2c]
        mov edx, dword ptr [esp+0x18]
        add esp, 4
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        mov dword ptr [ecx], edx
        pop ebx
        add esp, 0xc
        ret 0xc
loc_da40:
        mov eax, dword ptr [esp+0x20]
loc_da44:
        xor edi, edi
        cmp eax, edi
        jz loc_da53
        push eax
        call FUN_10001d60
        add esp, 4
loc_da53:
        mov eax, dword ptr [esp+0x14]
        cmp eax, edi
        jz loc_da61
        push eax
        call FUN_1001c2a0
loc_da61:
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xc
        ret 0xc
    }
}
