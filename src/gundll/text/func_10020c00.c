// FUN_10020c00 (0x10020C00) __thiscall, 44 bytes
extern void __cdecl FUN_1001c720(void);

__declspec(naked) void FUN_10020c00(void)
{
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push eax
        push 0xa104
        mov esi, ecx
        call FUN_1001c720
        xor eax, eax
        mov dword ptr [esi + 0x20], eax
        mov dword ptr [esi + 0x24], eax
        mov dword ptr [esi + 0x28], eax
        mov dword ptr [esi + 0x2c], eax
        mov dword ptr [esi], 0x1004aa68
        mov eax, esi
        pop esi
        ret 0x4
    }
}
