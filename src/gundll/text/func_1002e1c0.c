// FUN_1002e1c0 (__stdcall, 81 bytes)
extern void __cdecl FUN_1000c140(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void FUN_1002e1c0(void)
{
    __asm {
        push ecx
        mov eax, dword ptr [esp+0xc]
        push esi
        xor esi, esi
        test eax, eax
        mov dword ptr [esp+0x4], 0
        jz L1
        mov ecx, dword ptr [eax+0x4]
        mov edx, dword ptr [eax]
        push ecx
        push edx
        lea eax, [esp+0xc]
        push eax
        call FUN_1000c140
        mov esi, eax
        test esi, esi
        jl L2
    L1:
        mov edx, dword ptr [esp+0x4]
        mov ecx, dword ptr [esp+0xc]
        mov dword ptr [ecx], edx
        mov dword ptr [esp+0x4], 0
    L2:
        mov eax, dword ptr [esp+0x4]
        push eax
        call FUN_10001d60
        add esp, 4
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}
