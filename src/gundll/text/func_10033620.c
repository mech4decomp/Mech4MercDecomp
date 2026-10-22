// FUN_10033620 (0x10033620) __stdcall, 83 bytes
__declspec(naked) void FUN_10033620(void)
{
    __asm {
        sub esp, 0x24
        xor eax, eax
        mov dword ptr [esp+0x8], eax
        mov dword ptr [esp+0xc], eax
        mov dword ptr [esp+0x10], eax
        __emit 0x8D  /* __emit: MSVC6 drops the 00 disp byte for lea eax,[esp] (8D 04 24); ref uses 8D 44 24 00 */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        mov ecx, 0x10
        lea edx, [esp+0x10]
        mov dword ptr [esp+0x20], eax
        mov eax, dword ptr [esp+0x28]
        push edx
        mov dword ptr [esp+0x4], ecx
        mov dword ptr [esp+0x20], ecx
        mov ecx, dword ptr [eax]
        push eax
        mov dword ptr [esp+0xc], 0x80158650
        mov dword ptr [esp+0x1c], 0xc351
        mov dword ptr [esp+0x20], 0xffff0016
        call dword ptr [ecx+0xc]
        add esp, 0x24
        ret 0x4
    }
}
