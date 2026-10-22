/* func_006F6A90.c -- in-.text data block (block 0x6F6A50), 388 bytes.
   Two functions that allocate/copy string objects via an allocator function
   pointer (g_76b294). */

extern void *g_76b294;

__declspec(naked) void func_006F6A90(void)
{
    __asm {
        sub esp, 0x14
        push ebx
        push ebp
        mov ebp, dword ptr [g_76b294]
        push esi
        mov esi, dword ptr [esp + 0x24]
        mov ebx, ecx
        push edi
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        push ecx
        call ebp
        or ecx, 0xffffffff
        mov edx, eax
        mov edi, esi
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        shr ecx, 2
        mov esi, edi
        mov edi, edx
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr [esp + 0x30]
        mov dword ptr [esp + 0x14], edx
        mov edx, dword ptr [esp + 0x34]
        xor esi, esi
        push 0x1c
        mov dword ptr [esp + 0x20], ecx
        mov dword ptr [esp + 0x24], edx
        mov dword ptr [esp + 0x28], esi
        mov dword ptr [esp + 0x1c], esi
        call ebp
        add esp, 8
        cmp eax, esi
        je L_6f6b03
        mov dword ptr [eax + 0x14], esi
        mov dword ptr [eax + 0x18], esi
        jmp L_6f6b05
L_6f6b03:
        xor eax, eax
L_6f6b05:
        mov edx, dword ptr [ebx + 8]
        test edx, edx
        mov ecx, 5
        lea esi, [esp + 0x10]
        mov edi, eax
        rep movsd
        mov ecx, dword ptr [ebx + 0xc]
        mov dword ptr [eax + 0x18], ecx
        jne L_6f6b2f
        pop edi
        pop esi
        pop ebp
        mov dword ptr [ebx + 8], eax
        mov dword ptr [ebx + 0xc], eax
        pop ebx
        add esp, 0x14
        ret 0xc
L_6f6b2f:
        pop edi
        pop esi
        pop ebp
        mov dword ptr [ebx + 0xc], eax
        mov dword ptr [ecx + 0x14], eax
        pop ebx
        add esp, 0x14
        ret 0xc
        nop
        sub esp, 0x14
        push ebx
        mov ebx, dword ptr [g_76b294]
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x24]
        mov ebp, ecx
        push edi
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        push ecx
        call ebx
        or ecx, 0xffffffff
        mov edx, eax
        mov edi, esi
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        shr ecx, 2
        mov esi, edi
        mov edi, edx
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov esi, dword ptr [esp + 0x30]
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        push ecx
        mov dword ptr [esp + 0x18], edx
        call ebx
        or ecx, 0xffffffff
        mov edx, eax
        mov edi, esi
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        shr ecx, 2
        mov esi, edi
        mov edi, edx
        rep movsd
        mov ecx, eax
        and ecx, 3
        push 0x1c
        mov dword ptr [esp + 0x2c], edx
        rep movsb
        mov dword ptr [esp + 0x20], 1
        call ebx
        xor edx, edx
        add esp, 0xc
        cmp eax, edx
        je L_6f6bda
        mov dword ptr [eax + 0x14], edx
        mov dword ptr [eax + 0x18], edx
        jmp L_6f6bdc
L_6f6bda:
        xor eax, eax
L_6f6bdc:
        mov ecx, 5
        lea esi, [esp + 0x10]
        mov edi, eax
        rep movsd
        cmp dword ptr [ebp + 8], edx
        mov ecx, dword ptr [ebp + 0xc]
        mov dword ptr [eax + 0x18], ecx
        jne L_6f6c04
        pop edi
        pop esi
        mov dword ptr [ebp + 8], eax
        mov dword ptr [ebp + 0xc], eax
        pop ebp
        pop ebx
        add esp, 0x14
        ret 8
L_6f6c04:
        pop edi
        pop esi
        mov dword ptr [ebp + 0xc], eax
        pop ebp
        mov dword ptr [ecx + 0x14], eax
        pop ebx
        add esp, 0x14
        ret 8
    }
}
