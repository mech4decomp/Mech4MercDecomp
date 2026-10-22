/* FUN_00450a00 - MLR material base ctor (__thiscall, RET 0xc) */

extern void __cdecl FUN_00458360(void);
extern int __cdecl FUN_006fab90(void);

__declspec(naked) void* func_00450a00(void)
{
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 0x10]
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0xc]
        push edi
        push eax
        mov ebx, ecx
        mov ecx, dword ptr [ebp + 0x8]
        push esi
        push ecx
        mov ecx, ebx
        call FUN_00458360
        mov eax, dword ptr [ebp + 0x10]
        cmp eax, 0x3
        lea edi, [ebx + 0x64]
        mov dword ptr [edi], 0x0
        mov dword ptr [edi + 0x4], 0x0
        mov dword ptr [ebx], 0x76ea60
        jge L_0x450a5b
        push 0x76e300
        call FUN_006fab90
        add esp, 0x4
        test eax, eax
        jz L_0x450ad8
        int 3
        /* dead epilogue (unreachable: INT3 traps) - present in reference */
        mov dword ptr [ebx + 0x6c], edi
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        pop ebp
        ret 0xc
    L_0x450a5b:
        cmp eax, 0xb
        jge L_0x450a8b
        mov edx, dword ptr [esi]
        push 0x4
        lea eax, [ebp + 0x10]
        push eax
        mov ecx, esi
        call dword ptr [edx + 0x20]
        mov eax, dword ptr [ebp + 0x10]
        mov edx, dword ptr [esi]
        lea ecx, [eax*4 + 0x0]
        push ecx
        mov ecx, esi
        call dword ptr [edx + 0x18]
        mov dword ptr [ebx + 0x6c], edi
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        pop ebp
        ret 0xc
    L_0x450a8b:
        mov edx, dword ptr [esi]
        lea eax, [edi + 0x4]
        push 0x4
        push eax
        mov ecx, esi
        call dword ptr [edx + 0x20]
        mov eax, dword ptr [edi + 0x4]
        test eax, eax
        mov dword ptr [ebp + 0x10], eax
        jbe L_0x450abf
        mov eax, dword ptr [esi]
        mov ecx, esi
        call dword ptr [eax + 0x4]
        mov edx, dword ptr [esi]
        mov dword ptr [edi], eax
        mov eax, dword ptr [ebp + 0x10]
        lea ecx, [eax*4 + 0x0]
        push ecx
        mov ecx, esi
        call dword ptr [edx + 0x18]
        jmp L_0x450ac5
    L_0x450abf:
        mov dword ptr [edi], 0x0
    L_0x450ac5:
        mov ecx, dword ptr [ebx + 0x68]
        mov eax, 0x100
        cmp ecx, eax
        jbe L_0x450ad8
        mov edx, dword ptr [edi]
        mov dword ptr [edi], edx
        mov dword ptr [edi + 0x4], eax
    L_0x450ad8:
        mov dword ptr [ebx + 0x6c], edi
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        pop ebp
        ret 0xc
    }
}
