// FUN_100277f0 (0x100277F0) __thiscall, 47 bytes
extern void __cdecl FUN_1001c720(void);

__declspec(naked) void func_100277f0(void)
{
    __asm {
        mov eax, dword ptr [esp+4]
        push esi
        push eax
        push 0x5158
        mov esi, ecx
        call FUN_1001c720
        xor eax, eax
        mov dword ptr [esi+0x20], eax
        mov dword ptr [esi+0x24], eax
        mov dword ptr [esi+0x28], eax
        mov dword ptr [esi+0x2c], eax
        mov dword ptr [esi+0x30], eax
        mov dword ptr [esi], 0x1004ac48
        mov eax, esi
        pop esi
        ret 0x4
    }
}
