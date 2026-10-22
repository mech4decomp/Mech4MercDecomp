// FUN_10025ae0 (0x10025AE0) __thiscall, 44 bytes
extern void __cdecl FUN_1001c9e0(void);

__declspec(naked) void func_10025ae0(void)
{
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push eax
        push 0x4604
        mov esi, ecx
        call FUN_1001c9e0
        xor eax, eax
        mov dword ptr [esi + 0x1c], eax
        mov dword ptr [esi + 0x20], eax
        mov dword ptr [esi + 0x24], eax
        mov dword ptr [esi + 0x28], eax
        mov dword ptr [esi], 0x1004abdc
        mov eax, esi
        pop esi
        ret 0x4
    }
}
