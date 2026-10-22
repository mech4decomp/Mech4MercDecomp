// FUN_100302e0 (0x100302E0) __stdcall, 44 bytes
extern void __cdecl FUN_10030450(void);
extern void __cdecl FUN_10033620(void);

__declspec(naked) void __stdcall func_100302e0(void)
{
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov eax, dword ptr [edi + 0xc]
        xor esi, esi
        test eax, eax
        je skip
        mov ecx, dword ptr [eax]
        push esi
        push eax
        call dword ptr [ecx + 0x38]
        mov esi, eax
skip:
        mov ecx, edi
        call FUN_10030450
        push eax
        call FUN_10033620
        pop edi
        mov eax, esi
        pop esi
        ret 0x8
    }
}
