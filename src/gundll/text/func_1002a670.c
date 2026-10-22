// FUN_1002a670 (0x1002A670) __fastcall, 120 bytes
extern void __cdecl FUN_10001d60(void);
extern void __cdecl FUN_1001ca00(void);

__declspec(naked) void __fastcall func_1002a670(void)
{
    __asm {
        push -1
        push 0x10048748
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp+4], esi
        mov dword ptr [esi], 0x1004ad20
        mov eax, dword ptr [esi+0xc]
        test eax, eax
        mov dword ptr [esp+0x10], 0
        jne L1
        mov eax, dword ptr [esi+0x1c]
        push eax
        call FUN_10001d60
        mov eax, dword ptr [esi+0x20]
        push eax
        call FUN_10001d60
        mov eax, dword ptr [esi+0x24]
        push eax
        call FUN_10001d60
        mov eax, dword ptr [esi+0x28]
        push eax
        call FUN_10001d60
        add esp, 0x10
L1:
        mov ecx, esi
        mov dword ptr [esp+0x10], 0xffffffff
        call FUN_1001ca00
        mov ecx, dword ptr [esp+8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}
