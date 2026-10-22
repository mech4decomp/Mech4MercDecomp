// FUN_10034bc0 (0x10034BC0) - __thiscall constructor with SEH frame
extern void __cdecl FUN_10034960(void);

__declspec(naked) void FUN_10034bc0(void)
{
    __asm {
        push -1
        push 0x10048b4b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, dword ptr [esp+0x14]
        push ebx
        push ebp
        mov ebp, dword ptr [esp+0x24]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp+0x24]
        push edi
        xor ebx, ebx
        push ebp
        lea edi, [esi+0x54]
        push edi
        mov dword ptr [esi], 0x1004b2a0
        mov dword ptr [esi+0x4], 0x1004af10
        mov dword ptr [esi+0x8], 0x1004af0c
        push ebx
        mov dword ptr [esi+0x14], ecx
        push esi
        mov dword ptr [esi+0xc], ebx
        mov dword ptr [esi+0x10], eax
        mov dword ptr [esi+0x18], ebp
        mov dword ptr [esi+0x1c], ebx
        mov dword ptr [esi+0x20], ebx
        mov dword ptr [esi+0x24], ebx
        mov dword ptr [esi+0x28], ebx
        mov dword ptr [esi+0x30], ebx
        mov dword ptr [esi+0x34], ebx
        mov byte ptr [esi+0x48], bl
        push ebx
        lea ecx, [edi+0x4]
        mov dword ptr [esp+0x24], esi
        mov dword ptr [edi], 0x1004aff8
        call FUN_10034960
        mov dword ptr [edi], 0x1004b288
        mov eax, dword ptr [esp+0x24]
        mov byte ptr [esi+0x7c], bl
        mov dword ptr [esi+0x80], ebx
        mov dword ptr [esi+0x84], ebx
        mov dword ptr [esi], 0x1004b230
        mov dword ptr [esi+0x4], 0x1004b228
        mov dword ptr [esi+0x8], 0x1004b224
        mov dword ptr [esi+0x4c], 0x2
        mov dword ptr [esi+0x50], esi
        mov edx, dword ptr [eax]
        push eax
        mov dword ptr [esp+0x20], ebx
        call dword ptr [edx+0x4]
        mov eax, dword ptr [ebp]
        push ebp
        call dword ptr [eax+0x4]
        mov ecx, dword ptr [esp+0x14]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0xc
    }
}
