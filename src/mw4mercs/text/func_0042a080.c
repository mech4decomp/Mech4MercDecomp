/* FUN_0042a080 - MLR render-state setter (__thiscall, char param) */
extern void __cdecl FUN_004912b0(void);
extern void __cdecl FUN_0042a130(void);

__declspec(naked) void func_0042a080(void)
{
    __asm {
        sub esp, 0x18
        push ebx
        mov bl, byte ptr [esp + 0x20]
        push esi
        mov esi, ecx
        cmp bl, byte ptr [esi + 0x98]
        push edi
        jz L_42a124
        mov edi, dword ptr [esi + 0x8c]
        lea eax, [edi + 0xc]
        push eax
        lea ecx, [esp + 0x10]
        mov byte ptr [esi + 0x98], bl
        call FUN_004912b0
        cmp bl, 0x1
        jnz L_42a0d8
        mov ecx, dword ptr [esi + 0x90]
        mov eax, dword ptr [esp + 0xc]
        mov esi, dword ptr [esp + 0x14]
        mov ecx, dword ptr [ecx + 0x1c]
        and eax, 0xffffc000
        or esi, 0x3fff
        mov dword ptr [esp + 0x14], esi
        jmp L_42a0f5
L_42a0d8:
        mov eax, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esi + 0x94]
        and eax, 0xffffc000
        or edx, 0x3fff
        mov dword ptr [esp + 0x14], edx
L_42a0f5:
        mov edx, dword ptr [esp + 0x14]
        or edx, 0x40000000
        or eax, ecx
        sub esp, 0x18
        mov dword ptr [esp + 0x2c], edx
        lea edx, [esp + 0x24]
        and eax, 0xbfffffff
        mov ecx, esp
        push edx
        mov dword ptr [esp + 0x28], eax
        call FUN_004912b0
        mov ecx, edi
        call FUN_0042a130
L_42a124:
        pop edi
        pop esi
        pop ebx
        add esp, 0x18
        ret 0x4
    }
}
