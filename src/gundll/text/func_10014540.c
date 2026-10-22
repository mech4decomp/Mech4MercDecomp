// FUN_10014540 (0x10014540) __stdcall, 44 bytes
extern void __cdecl FUN_1001c760(void);

__declspec(naked) void FUN_10014540(void)
{
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov eax, dword ptr [esi + 0xc]
        test eax, eax
        jz short L55
        mov eax, 0xc112000d
        pop esi
        ret 0x8
L55:
        mov eax, dword ptr [esp + 0xc]
        push eax
        push esi
        call FUN_1001c760
        test eax, eax
        jl short L68
        mov byte ptr [esi + 0x4], 0x1
L68:
        pop esi
        ret 0x8
    }
}
