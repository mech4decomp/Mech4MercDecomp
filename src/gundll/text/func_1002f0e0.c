// FUN_1002f0e0 (0x1002F0E0) __thiscall
extern void* g_1004909C;
extern void* g_100490E4;

__declspec(naked) void func_1002f0e0(void)
{
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp+0x10]
        xor ebp, ebp
        test esi, esi
        push edi
        mov edi, ecx
        jne LFC
        pop edi
        pop esi
        pop ebp
        mov eax, 0x80070057
        pop ebx
        ret 4
LFC:
        push 0
        push 0
        push 1
        push 0
        call dword ptr [g_1004909C]
        mov ebx, eax
        test ebx, ebx
        jne L12D
        call dword ptr [g_100490E4]
        test eax, eax
        jl L13B
        jle L13B
        pop edi
        pop esi
        and eax, 0xffff
        pop ebp
        or eax, 0x80070000
        pop ebx
        ret 4
L12D:
        mov eax, dword ptr [esi]
        push esi
        call dword ptr [eax+4]
        mov dword ptr [edi+8], esi
        mov dword ptr [edi+0x14], ebx
        mov eax, ebp
L13B:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
    }
}
