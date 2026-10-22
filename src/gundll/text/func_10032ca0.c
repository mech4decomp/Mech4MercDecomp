// FUN_10032ca0 (0x10032CA0) __fastcall, 83 bytes
__declspec(naked) void __fastcall FUN_10032ca0(void)
{
    __asm {
        sub esp, 0x14
        xor eax, eax
        __emit 0x89  /* __emit: MSVC6 drops the 00 disp byte for mov [esp],eax (89 04 24); ref uses 89 44 24 00 */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        mov dword ptr [esp+0x4], eax
        push esi
        mov dword ptr [esp+0xc], eax
        mov dword ptr [esp+0x10], eax
        mov esi, ecx
        push 0x0
        mov dword ptr [esp+0x18], eax
        mov eax, dword ptr [esi+0xc]
        lea edx, [esp+0x8]
        push edx
        mov dword ptr [esp+0xc], 0x14
        mov ecx, dword ptr [eax]
        push eax
        call dword ptr [ecx+0x70]
        mov eax, dword ptr [esp+0x1c]
        mov esi, dword ptr [esi+0xc]
        push 0x0
        lea edx, [esp+0x8]
        push edx
        mov dword ptr [esp+0x1c], eax
        mov ecx, dword ptr [esi]
        push esi
        call dword ptr [ecx+0x74]
        pop esi
        add esp, 0x14
        ret 0x4
    }
}
