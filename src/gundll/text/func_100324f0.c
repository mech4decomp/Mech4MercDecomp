// FUN_100324f0 (0x100324F0) __thiscall, 237 bytes
extern void * __cdecl FUN_10001d50(int);
extern void __cdecl FUN_100343e0(void);

__declspec(naked) void FUN_100324f0(void)
{
    __asm {
        push -1
        push 0x10048a4b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push ebp
        mov ebp, dword ptr [esp+0x1c]
        mov eax, dword ptr [ebp+8]
        push edi
        mov edi, ecx
        mov dword ptr [esp+8], eax
        mov eax, dword ptr [edi+0x1c]
        test eax, eax
        jnz loc_32539
        mov ecx, dword ptr [ebp+4]
        mov dword ptr [edi+0x1c], ecx
        pop edi
        xor eax, eax
        pop ebp
        mov ecx, dword ptr [esp+8]
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret 4
loc_32539:
        mov edx, dword ptr [edi+0x18]
        push esi
        push 0x38
        mov dword ptr [esp+0x28], edx
        call FUN_10001d50
        mov esi, eax
        add esp, 4
        mov dword ptr [esp+0x10], esi
        test esi, esi
        mov dword ptr [esp+0x1c], 0
        jz loc_3258c
        mov eax, dword ptr [esp+0x24]
        mov ecx, dword ptr [ebp+8]
        mov edx, dword ptr [ebp+4]
        push ebx
        push eax
        push esi
        push ecx
        push edi
        lea ebx, [esi+4]
        push edx
        mov ecx, ebx
        mov dword ptr [esi], 0x1004b0f4
        call FUN_100343e0
        mov dword ptr [ebx], 0x1004b0f0
        mov dword ptr [esi], 0x1004b0c0
        pop ebx
        jmp loc_3258e
loc_3258c:
        xor esi, esi
loc_3258e:
        test esi, esi
        mov dword ptr [esp+0x1c], 0xffffffff
        jz loc_325c7
        push edi
        lea edx, [esp+0x28]
        push edx
        lea edx, [esp+0x14]
        push edx
        mov dword ptr [ebp+8], esi
        mov eax, dword ptr [edi+0x14]
        mov ecx, dword ptr [eax]
        push esi
        push eax
        call dword ptr [ecx+0xc]
        mov eax, dword ptr [esp+0xc]
        mov dword ptr [esi+0x10], eax
        mov eax, dword ptr [esp+0x24]
        test eax, eax
        jnz loc_325c4
        mov eax, dword ptr [edi+0x18]
loc_325c4:
        mov dword ptr [esi+0x1c], eax
loc_325c7:
        mov ecx, dword ptr [esp+0x14]
        mov eax, esi
        pop esi
        pop edi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret 4
    }
}
