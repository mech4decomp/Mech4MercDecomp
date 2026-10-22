// FUN_100238a0 (0x100238A0) __thiscall, 44 bytes
extern void __cdecl FUN_1001c720(void);

__declspec(naked) void FUN_100238a0(void)
{
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push eax
        push 0x810b
        mov esi, ecx
        call FUN_1001c720
        xor eax, eax
        mov dword ptr [esi + 0x20], eax
        mov dword ptr [esi + 0x24], eax
        mov dword ptr [esi + 0x28], eax
        mov dword ptr [esi + 0x2c], eax
        mov dword ptr [esi], 0x1004ab40
        mov eax, esi
        pop esi
        ret 0x4
    }
}
