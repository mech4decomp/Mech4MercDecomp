// FUN_100192c0 (0x100192C0) __stdcall, 121 bytes
extern void __cdecl FUN_1001c760(void);
extern void __cdecl FUN_1002d510(void);
extern void __cdecl FUN_1002d770(void);

__declspec(naked) void __stdcall func_100192c0(void)
{
    __asm {
        push ecx
        push esi
        push edi
        mov edi, dword ptr [esp+0x10]
        mov eax, dword ptr [edi+0xc]
        test eax, eax
        mov dword ptr [esp+8], 0
        jz L_e1
        pop edi
        mov eax, 0xc112000d
        pop esi
        pop ecx
        ret 0xc
L_e1:
        mov eax, dword ptr [esp+0x14]
        push eax
        push edi
        call FUN_1001c760
        mov esi, eax
        test esi, esi
        jl L_1a
        mov ecx, dword ptr [esp+0x18]
        push ecx
        lea edx, [esp+0xc]
        push edx
        call FUN_1002d510
        mov esi, eax
        test esi, esi
        jl L_1a
        mov eax, dword ptr [esp+8]
        mov dword ptr [edi+0x20], eax
        mov byte ptr [edi+4], 1
        pop edi
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
L_1a:
        mov eax, dword ptr [esp+8]
        test eax, eax
        jz L_31
        mov ecx, dword ptr [edi+0xc]
        test ecx, ecx
        setnz cl
        push eax
        push ecx
        call FUN_1002d770
L_31:
        pop edi
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
    }
}
