// FUN_1002b670 (__stdcall, 81 bytes)
extern void __cdecl FUN_10001d50(void);

__declspec(naked) void FUN_1002b670(void)
{
    __asm {
        mov eax, dword ptr [esp+0xc]
        test eax, eax
        push esi
        jnz L1
        mov eax, dword ptr [esp+0x8]
        mov dword ptr [eax], 0
        xor eax, eax
        pop esi
        ret 0xc
    L1:
        lea esi, [eax*4]
        push esi
        call FUN_10001d50
        add esp, 4
        test eax, eax
        jz L2
        mov ecx, esi
        mov esi, dword ptr [esp+0xc]
        mov edx, ecx
        push edi
        shr ecx, 2
        mov edi, eax
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr [esp+0xc]
        mov dword ptr [ecx], eax
        pop edi
    L2:
        xor eax, eax
        pop esi
        ret 0xc
    }
}
