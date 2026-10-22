// FUN_1000c590 (0x1000C590) __stdcall, 167 bytes
extern void __cdecl FUN_1000c1b0(void);

__declspec(naked) void __stdcall func_1000c590(void)
{
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov eax, dword ptr [esi]
        push eax
        call FUN_1000c1b0
        mov edx, eax
        test edx, edx
        jnz L5A7
        pop esi
        ret 0x4
    L5A7:
        mov ecx, dword ptr [esi]
        push ebx
        mov ebx, ecx
        shr ecx, 0x2
        push edi
        mov eax, 0xeeeeeeee
        mov edi, edx
        rep stosd
        mov ecx, ebx
        and ecx, 0x3
        rep stosb
        mov ecx, dword ptr [esi + 0x18]
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [esi + 0x14]
        test ecx, ecx
        mov dword ptr [esi + 0x18], edx
        lea eax, [edx + 0x4]
        jz L60E
        mov ecx, dword ptr [esi + 0x4]
        xor edx, edx
        test ecx, ecx
        jbe L62C
        mov edi, 0x444e4550
    L5E0:
        mov dword ptr [eax], 0x45524650
        mov ecx, dword ptr [esi + 0x10]
        mov dword ptr [ecx + eax*1 + 0x4], edi
        mov ebx, dword ptr [esi + 0x1c]
        lea ecx, [eax + 0x4]
        mov dword ptr [ecx], ebx
        mov dword ptr [esi + 0x1c], ecx
        add eax, dword ptr [esi + 0x8]
        mov ecx, dword ptr [esi + 0x4]
        inc edx
        cmp edx, ecx
        jb L5E0
        pop edi
        pop ebx
        mov eax, 0x1
        pop esi
        ret 0x4
    L60E:
        mov edx, dword ptr [esi + 0x4]
        xor ecx, ecx
        test edx, edx
        jbe L62C
    L617:
        mov edx, dword ptr [esi + 0x1c]
        mov dword ptr [eax], edx
        mov ebx, dword ptr [esi + 0x8]
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [esi + 0x1c], eax
        add eax, ebx
        inc ecx
        cmp ecx, edx
        jb L617
    L62C:
        pop edi
        pop ebx
        mov eax, 0x1
        pop esi
        ret 0x4
    }
}
