// FUN_100320d0 (0x100320D0) __stdcall, 47 bytes
__declspec(naked) void __stdcall func_100320d0(void)
{
    __asm {
        push ecx
        mov eax, dword ptr [esp+8]
        mov eax, dword ptr [eax+0xc]
        push esi
        xor esi, esi
        push esi
        lea edx, [esp+8]
        push edx
        mov edx, dword ptr [esp+0x18]
        push edx
        mov dword ptr [esp+0x10], esi
        mov ecx, dword ptr [eax]
        push eax
        call dword ptr [ecx+0x68]
        test eax, eax
        mov eax, dword ptr [esp+4]
        jge done
        mov eax, esi
done:
        pop esi
        pop ecx
        ret 0x8
    }
}
