// FUN_100339c0 (0x100339C0) __thiscall, 122 bytes
__declspec(naked) void func_100339c0(void)
{
    __asm {
        push ebx
        mov ebx, dword ptr [esp+0xc]
        test ebx, ebx
        push esi
        push edi
        mov esi, ecx
        jz L_d3
        mov dword ptr [ebx], 0
L_d3:
        mov edi, dword ptr [esp+0x10]
        cmp di, 0x578
        jnc L_e3
        mov edi, 0x578
L_e3:
        xor ecx, ecx
        mov cx, di
        add ecx, 0xc
        cmp ecx, 0x10000
        jc L_fe
        pop edi
        pop esi
        mov eax, 0x80070057
        pop ebx
        ret 8
L_fe:
        mov eax, dword ptr [esi+8]
        mov edx, dword ptr [eax]
        push ecx
        push eax
        call dword ptr [edx+0xc]
        test eax, eax
        jz L_24
        test ebx, ebx
        mov ecx, dword ptr [esi+4]
        mov word ptr [esi+0x14], di
        mov dword ptr [eax], ecx
        lea ecx, [eax+0xc]
        mov dword ptr [esi+0xc], ecx
        mov dword ptr [esi+0x10], ecx
        jz L_24
        mov dword ptr [ebx], ecx
L_24:
        xor edx, edx
        test eax, eax
        setnz dl
        pop edi
        pop esi
        pop ebx
        dec edx
        and edx, 0x8007000e
        mov eax, edx
        ret 8
    }
}
