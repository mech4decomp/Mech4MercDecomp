/* func_0070e460 - FUN_0070e460 - 106 bytes: MD5 final */

extern void __cdecl FUN_0070eda0(void);
extern void __cdecl FUN_0070e3c0(void);
extern void __cdecl FUN_0070ee70(void);

__declspec(naked) void func_0070e460(void)
{
    __asm {
        sub esp, 0x8
        push esi
        push edi
        mov edi, dword ptr [esp + 0x18]
        push 0x8
        lea esi, [edi + 0x10]
        push esi
        lea eax, [esp + 0x10]
        push eax
        call FUN_0070eda0
        mov eax, dword ptr [esi]
        shr eax, 0x3
        and eax, 0x3f
        cmp eax, 0x38
        mov ecx, 0x38
        jc L_e490
        mov ecx, 0x78
    L_e490:
        sub ecx, eax
        push ecx
        push 0x7b7020
        push edi
        call FUN_0070e3c0
        push 0x8
        lea ecx, [esp + 0xc]
        push ecx
        push edi
        call FUN_0070e3c0
        mov edx, dword ptr [esp + 0x14]
        push 0x10
        push edi
        push edx
        call FUN_0070eda0
        push 0x58
        push 0x0
        push edi
        call FUN_0070ee70
        pop edi
        pop esi
        add esp, 0x8
        ret 0x8
    }
}
