/* FUN_10006e10 - hex digit to value conversion (__stdcall, 1 ushort param) */

int __declspec(naked) FUN_10006e10(void)
{
    __asm {
        mov  eax, dword ptr [esp + 0x4]
        cmp  ax, 0x30
        jc   L_2b
        cmp  ax, 0x39
        ja   L_2b
        and  eax, 0xffff
        sub  eax, 0x30
        ret  0x4
L_2b:
        cmp  ax, 0x41
        jc   L_42
        cmp  ax, 0x46
        ja   L_42
        and  eax, 0xffff
        sub  eax, 0x37
        ret  0x4
L_42:
        cmp  ax, 0x61
        jc   L_59
        cmp  ax, 0x66
        ja   L_59
        and  eax, 0xffff
        sub  eax, 0x57
        ret  0x4
L_59:
        xor  eax, eax
        ret  0x4
    }
}
