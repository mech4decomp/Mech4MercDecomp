// FUN_100160f0 (0x100160F0) __thiscall, 44 bytes
extern void __cdecl FUN_1001c870(void);

__declspec(naked) void FUN_100160f0(void)
{
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push eax
        push 0x5200
        mov esi, ecx
        call FUN_1001c870
        xor eax, eax
        mov dword ptr [esi + 0x24], eax
        mov dword ptr [esi + 0x28], eax
        mov dword ptr [esi + 0x2c], eax
        mov dword ptr [esi + 0x30], eax
        mov dword ptr [esi], 0x10049944
        mov eax, esi
        pop esi
        ret 0x4
    }
}
