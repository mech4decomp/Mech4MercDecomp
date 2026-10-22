// FUN_1003b18d (0x1003B18D) __cdecl
extern void __cdecl FUN_10041f80(void);
extern void __cdecl FUN_10041f09(void);
extern void __cdecl FUN_1003b1ee(void);

__declspec(naked) void func_1003b18d(void)
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x28
        lea eax, [ebp-0x28]
        push esi
        push eax
        lea eax, [ebp-0x10]
        push eax
        mov eax, dword ptr [ebp+8]
        push ecx
        push ecx
        fld qword ptr [eax]
        fstp qword ptr [esp]
        call FUN_10041f80
        mov esi, dword ptr [ebp+0x10]
        lea eax, [ebp-0x10]
        push eax
        mov edx, dword ptr [ebp+0xc]
        lea eax, [esi+1]
        push eax
        xor eax, eax
        cmp dword ptr [ebp-0x10], 0x2d
        sete al
        xor ecx, ecx
        test esi, esi
        setg cl
        add edx, eax
        add ecx, edx
        push ecx
        call FUN_10041f09
        lea eax, [ebp-0x10]
        push 0
        push eax
        push dword ptr [ebp+0x14]
        push esi
        push dword ptr [ebp+0xc]
        call FUN_1003b1ee
        mov eax, dword ptr [ebp+0xc]
        add esp, 0x30
        pop esi
        leave
        ret
    }
}
