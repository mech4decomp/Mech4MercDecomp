// FUN_100253d0 (0x100253D0) __thiscall, 47 bytes
extern void __cdecl FUN_1001c9e0(void);

__declspec(naked) void func_100253d0(void)
{
    __asm {
        mov eax, dword ptr [esp+4]
        push esi
        push eax
        push 0x4602
        mov esi, ecx
        call FUN_1001c9e0
        xor eax, eax
        mov dword ptr [esi+0x1c], eax
        mov dword ptr [esi+0x20], eax
        mov dword ptr [esi+0x24], eax
        mov dword ptr [esi+0x28], eax
        mov dword ptr [esi+0x2c], eax
        mov dword ptr [esi], 0x1004abc4
        mov eax, esi
        pop esi
        ret 0x4
    }
}
