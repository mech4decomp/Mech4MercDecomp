/*
 * FUN_006D43C0 (size=176) - Rectangle/region math.
 *
 * __cdecl
 *
 * CFLAGS: /O1
 * Match: target 100%
 */


__declspec(naked) void __cdecl FUN_006D43C0(void)
{
    __asm {
        _emit 0x24
        _emit 0x0F
        _emit 0xAF
        _emit 0xD7
        mov esi, ebx
        sub esi, edx
        mov eax, 0
        sets al
        dec eax
        and eax, esi
        mov dword ptr [ecx], eax
        mov eax, dword ptr [ebp + 4]
        sub eax, edx
        add eax, ebx
        cmp eax, edi
        jle l_0025
        mov dword ptr [ecx + 4], edi
        jmp l_0032
    l_0025:
        xor edx, edx
        test eax, eax
        setl dl
        dec edx
        and edx, eax
        mov dword ptr [ecx + 4], edx
    l_0032:
        mov eax, dword ptr [ecx]
        cmp eax, dword ptr [ecx + 4]
        jne l_0043
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        pop ecx
        ret 0x10
    l_0043:
        mov esi, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x18]
        imul esi, edi
        mov eax, dword ptr [edx + 0xc]
        sub eax, esi
        jns l_0067
        mov esi, dword ptr [esp + 0x10]
        add esi, eax
        mov dword ptr [ecx + 0xc], esi
        mov dword ptr [ecx + 8], 0
        jmp l_006a
    l_0067:
        mov dword ptr [ecx + 8], eax
    l_006a:
        mov eax, dword ptr [ecx + 8]
        mov esi, dword ptr [ecx + 0xc]
        add esi, eax
        cmp esi, edi
        jle l_007b
        sub edi, eax
        mov dword ptr [ecx + 0xc], edi
    l_007b:
        mov eax, dword ptr [ecx + 0xc]
        test eax, eax
        jne l_008c
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        pop ecx
        ret 0x10
    l_008c:
        pop edi
        pop esi
        mov al, 1
        pop ebp
        mov dword ptr [ecx + 0x10], edx
        mov byte ptr [ecx + 0x14], al
        pop ebx
        pop ecx
        ret 0x10
        nop
        nop
        nop
        nop
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 4]
        push edi
        xor edi, edi
        cmp eax, edi
        _emit 0x7E
        _emit 0x24
    }
}
