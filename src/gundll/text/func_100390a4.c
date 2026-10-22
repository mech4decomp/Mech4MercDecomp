// FUN_100390a4 (0x100390A4, 155 B, __cdecl)
extern void __cdecl FUN_10039985(void);
extern void __cdecl FUN_100393f9(unsigned long, unsigned long, unsigned long, unsigned long);
extern void __cdecl FUN_1003913f(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long);

__declspec(naked) void FUN_100390a4(void)
{
    __asm {
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 0x18]
        push edi
        mov edi, 0x19930520
        cmp dword ptr [esi], edi
        jz loc_ba
        call FUN_10039985
loc_ba:
        mov eax, dword ptr [ebp + 0x8]
        test byte ptr [eax + 0x4], 0x66
        jz loc_e2
        cmp dword ptr [esi + 0x4], 0x0
        jz loc_38
        cmp dword ptr [ebp + 0x1c], 0x0
        jnz loc_38
        push -0x1
        push esi
        push dword ptr [ebp + 0x14]
        push dword ptr [ebp + 0xc]
        call FUN_100393f9
        add esp, 0x10
        jmp loc_38
loc_e2:
        cmp dword ptr [esi + 0xc], 0x0
        jz loc_38
        cmp dword ptr [eax], 0xe06d7363
        jnz loc_1c
        cmp dword ptr [eax + 0x14], edi
        jbe loc_1c
        mov ecx, dword ptr [eax + 0x1c]
        mov ecx, dword ptr [ecx + 0x8]
        test ecx, ecx
        jz loc_1c
        movzx edx, byte ptr [ebp + 0x24]
        push edx
        push dword ptr [ebp + 0x20]
        push dword ptr [ebp + 0x1c]
        push esi
        push dword ptr [ebp + 0x14]
        push dword ptr [ebp + 0x10]
        push dword ptr [ebp + 0xc]
        push eax
        call ecx
        add esp, 0x20
        jmp loc_3b
loc_1c:
        push dword ptr [ebp + 0x20]
        push dword ptr [ebp + 0x1c]
        push dword ptr [ebp + 0x24]
        push esi
        push dword ptr [ebp + 0x14]
        push dword ptr [ebp + 0x10]
        push dword ptr [ebp + 0xc]
        push eax
        call FUN_1003913f
        add esp, 0x20
loc_38:
        push 0x1
        pop eax
loc_3b:
        pop edi
        pop esi
        pop ebp
        ret
    }
}
