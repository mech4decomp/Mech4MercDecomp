// FUN_10010d20 (__fastcall, 93 bytes)
extern void __cdecl FUN_10001d60(void);
extern void __cdecl FUN_1001c750(void);

__declspec(naked) void __fastcall FUN_10010d20(void)
{
    __asm {
        push -1
        push 0x10047bd8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp+4], esi
        mov dword ptr [esi], 0x10049794
        mov eax, dword ptr [esi+0xc]
        test eax, eax
        mov dword ptr [esp+0x10], 0
        jnz L1
        mov eax, dword ptr [esi+0x20]
        push eax
        call FUN_10001d60
        add esp, 4
    L1:
        mov ecx, esi
        mov dword ptr [esp+0x10], 0xffffffff
        call FUN_1001c750
        mov ecx, dword ptr [esp+8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}
