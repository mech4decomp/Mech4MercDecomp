/* func_0070e320 - FUN_0070e320 - 92 bytes: app-init hook (string concat into buffer) */

extern void __cdecl FUN_0070e390(void);
extern void __cdecl FUN_0070e3c0(void);
extern void __cdecl FUN_0070e460(void);

__declspec(naked) void func_0070e320(void)
{
    __asm {
        sub esp, 0x58
        push edi
        lea eax, [esp + 0x4]
        push eax
        call FUN_0070e390
        mov edx, dword ptr [esp + 0x60]
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        dec ecx
        push ecx
        push edx
        lea ecx, [esp + 0xc]
        push ecx
        call FUN_0070e3c0
        mov edx, dword ptr [esp + 0x64]
        or ecx, 0xffffffff
        mov edi, edx
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        push ecx
        push edx
        lea edx, [esp + 0xc]
        push edx
        call FUN_0070e3c0
        lea eax, [esp + 0x4]
        push eax
        push 0x85b4b0
        call FUN_0070e460
        pop edi
        add esp, 0x58
        ret 0x8
    }
}
