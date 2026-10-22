// FUN_100211a0 (0x100211A0) __thiscall, 47 bytes
extern void __cdecl FUN_1001c870(void);

__declspec(naked) void func_100211a0(void)
{
    __asm {
        mov eax, dword ptr [esp+4]
        push esi
        push eax
        push 0xa200
        mov esi, ecx
        call FUN_1001c870
        xor eax, eax
        mov dword ptr [esi+0x24], eax
        mov dword ptr [esi+0x28], eax
        mov dword ptr [esi+0x2c], eax
        mov dword ptr [esi+0x30], eax
        mov dword ptr [esi+0x34], eax
        mov dword ptr [esi], 0x1004aa80
        mov eax, esi
        pop esi
        ret 0x4
    }
}
