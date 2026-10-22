// FUN_1001b3d0 (0x1001B3D0) __thiscall, 167 bytes
__declspec(naked) void func_1001b3d0(void)
{
    __asm {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x10]
        test ebp, ebp
        push esi
        push edi
        mov ebx, ecx
        jz L46A
        mov eax, dword ptr [esp + 0x1c]
        test eax, eax
        jz L46A
        push ebp
        call dword ptr [ebx + 0xc]
        and ax, word ptr [ebx + 0x2]
        mov ecx, dword ptr [ebx + 0x4]
        xor edi, edi
        mov di, ax
        shl edi, 0x4
        mov esi, dword ptr [edi + ecx*1]
        add edi, ecx
        cmp esi, edi
        jz L447
    L407:
        mov eax, dword ptr [esi + 0xc]
        test eax, eax
        js L422
        mov eax, dword ptr [esi + 0x8]
        push ebp
        push eax
        mov dword ptr [esp + 0x18], eax
        call dword ptr [ebx + 0x8]
        test al, al
        jnz L435
        mov ebp, dword ptr [esp + 0x18]
    L422:
        mov esi, dword ptr [esi]
        cmp esi, edi
        jnz L407
        pop edi
        pop esi
        pop ebp
        mov eax, 0xc1120007
        pop ebx
        pop ecx
        ret 0x8
    L435:
        mov ebx, dword ptr [ebx + 0x10]
        test ebx, ebx
        mov esi, dword ptr [esp + 0x10]
        jz L443
        push esi
        call ebx
    L443:
        test esi, esi
        jnz L454
    L447:
        pop edi
        pop esi
        pop ebp
        mov eax, 0xc1120007
        pop ebx
        pop ecx
        ret 0x8
    L454:
        mov eax, dword ptr [esp + 0x1c]
        add esi, 0x84
        pop edi
        mov dword ptr [eax], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret 0x8
    L46A:
        pop edi
        pop esi
        pop ebp
        mov eax, 0x80004003
        pop ebx
        pop ecx
        ret 0x8
    }
}
