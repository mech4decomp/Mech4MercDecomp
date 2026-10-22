// FUN_10007cd0 (0x10007CD0, 152 B, __stdcall)
extern int *g_10049040;   // IAT
extern int *g_100490e4;   // IAT: GetLastError
extern void __cdecl FUN_1000c140(unsigned long, unsigned long, unsigned long);
extern void __cdecl FUN_10001d60(unsigned long);

__declspec(naked) void FUN_10007cd0(void)
{
    __asm {
        sub esp, 0x28
        mov edx, dword ptr [esp + 0x2c]
        push esi
        push 0x0
        lea eax, [esp + 0xc]
        push eax
        mov eax, dword ptr [edx + 0x4]
        lea ecx, [esp + 0x14]
        push ecx
        push 0x2
        push eax
        mov dword ptr [esp + 0x18], 0x0
        mov dword ptr [esp + 0x1c], 0x20
        call dword ptr [g_10049040]
        test eax, eax
        jnz loc_26
        call dword ptr [g_100490e4]
        test eax, eax
        jge loc_12
        mov esi, eax
        jmp loc_52
loc_12:
        jg loc_18
        mov esi, eax
        jmp loc_52
loc_18:
        and eax, 0xffff
        or eax, 0x80070000
        mov esi, eax
        jmp loc_52
loc_26:
        mov edx, dword ptr [esp + 0x8]
        lea ecx, [esp + 0xc]
        push ecx
        push edx
        lea eax, [esp + 0xc]
        push eax
        call FUN_1000c140
        mov esi, eax
        test esi, esi
        jl loc_52
        mov ecx, dword ptr [esp + 0x4]
        mov edx, dword ptr [esp + 0x34]
        mov dword ptr [edx], ecx
        mov dword ptr [esp + 0x4], 0x0
loc_52:
        mov eax, dword ptr [esp + 0x4]
        push eax
        call FUN_10001d60
        add esp, 0x4
        mov eax, esi
        pop esi
        add esp, 0x28
        ret 0x8
    }
}
