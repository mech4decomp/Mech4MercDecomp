// FUN_1002e580 (0x1002E580) __thiscall
extern int g_10075068[];

__declspec(naked) void FUN_1002e580(void)
{
    __asm {
        mov eax, dword ptr [ecx+0x8]
        mov ax, word ptr [eax]
        cmp ax, 0x7f
        ja L_e5a6
        xor edx, edx
        mov dx, ax
        push esi
        mov esi, dword ptr [g_10075068 + edx*4]
        test esi, esi
        pop esi
        jnz L_e5a6
        mov eax, 0xb
        ret 0x4
L_e5a6:
        test ax, ax
        jz L_e5cc
        mov eax, dword ptr [ecx+0x10]
        test eax, eax
        jl L_e5bf
        mov edx, dword ptr [ecx+0x4]
        dec eax
        mov dword ptr [ecx+0x10], eax
        lea eax, [edx+eax*2]
        mov dword ptr [ecx+0x8], eax
L_e5bf:
        mov edx, dword ptr [ecx+0x8]
        cmp word ptr [edx+0x2], 0xa
        jnz L_e5cc
        dec dword ptr [ecx+0x14]
L_e5cc:
        mov eax, dword ptr [esp+0x4]
        mov dword ptr [ecx], eax
        xor eax, eax
        ret 0x4
    }
}
