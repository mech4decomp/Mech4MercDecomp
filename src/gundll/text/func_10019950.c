// FUN_10019950 (0x10019950) __thiscall, 44 bytes
extern void __cdecl FUN_1001c720(void);

__declspec(naked) void FUN_10019950(void)
{
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push eax
        push 0x7104
        mov esi, ecx
        call FUN_1001c720
        xor eax, eax
        mov dword ptr [esi + 0x20], eax
        mov dword ptr [esi + 0x24], eax
        mov dword ptr [esi + 0x28], eax
        mov dword ptr [esi + 0x2c], eax
        mov dword ptr [esi], 0x10049a94
        mov eax, esi
        pop esi
        ret 0x4
    }
}
