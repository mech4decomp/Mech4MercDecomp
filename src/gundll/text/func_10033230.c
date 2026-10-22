// FUN_10033230 (0x10033230) __stdcall
extern void __cdecl FUN_10033860(void);
extern void __cdecl FUN_10033810(void);

__declspec(naked) int __stdcall FUN_10033230(void)
{
    __asm {
        push esi
        mov esi, dword ptr [esp+0x8]
        movzx ecx, word ptr [esi]
        xor eax, eax
        sub ecx, eax
        jz L_3268
        dec ecx
        jnz L_3283
        mov eax, dword ptr [esp+0x14]
        mov ecx, dword ptr [esp+0x10]
        mov edx, dword ptr [esp+0xc]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call FUN_10033860
        xor eax, eax
        mov ax, word ptr [esi+0x6]
        add ax, word ptr [esi+0x4]
        pop esi
        add eax, 0x8
        ret 0x10
L_3268:
        mov eax, dword ptr [esp+0x14]
        mov ecx, dword ptr [esp+0x10]
        mov edx, dword ptr [esp+0xc]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call FUN_10033810
        mov eax, 0x8
L_3283:
        pop esi
        ret 0x10
    }
}
