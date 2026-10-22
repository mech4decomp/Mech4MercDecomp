// FUN_10027c00 (0x10027C00) __stdcall, 173 bytes
extern void __cdecl FUN_1001c760(void);
extern void __cdecl FUN_10001dd0(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __stdcall FUN_10027c00(void)
{
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x10]
        mov eax, dword ptr [esi + 0xc]
        push edi
        xor edi, edi
        test eax, eax
        jz L1D
        pop edi
        pop esi
        pop ebp
        mov eax, 0xc112000d
        pop ebx
        ret 0x18
    L1D:
        mov eax, dword ptr [esp + 0x18]
        push eax
        push esi
        call FUN_1001c760
        test eax, eax
        jl LA6
        mov ebp, dword ptr [esp + 0x20]
        push ebp
        call FUN_10001dd0
        mov ebx, eax
        test ebx, ebx
        jnz L40
        test ebp, ebp
        jnz L85
    L40:
        mov ebp, dword ptr [esp + 0x24]
        push ebp
        call FUN_10001dd0
        mov edi, eax
        test edi, edi
        jnz L54
        test ebp, ebp
        jnz L85
    L54:
        mov ebp, dword ptr [esp + 0x28]
        push ebp
        call FUN_10001dd0
        mov ecx, eax
        test ecx, ecx
        jnz L68
        test ebp, ebp
        jnz L85
    L68:
        mov edx, dword ptr [esp + 0x1c]
        mov dword ptr [esi + 0x28], edi
        pop edi
        mov dword ptr [esi + 0x24], ebx
        mov byte ptr [esi + 0x4], 0x1
        mov dword ptr [esi + 0x20], edx
        mov dword ptr [esi + 0x2c], ecx
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0x18
    L85:
        test ebx, ebx
        mov esi, 0x8007000e
        jz L97
        push ebx
        call FUN_10001d60
        add esp, 0x4
    L97:
        test edi, edi
        jz LA4
        push edi
        call FUN_10001d60
        add esp, 0x4
    LA4:
        mov eax, esi
    LA6:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x18
    }
}
