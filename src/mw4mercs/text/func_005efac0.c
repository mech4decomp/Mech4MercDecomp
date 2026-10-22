/*
 * func_005efac0 - __thiscall switch dispatch
 * Sets a flag bit in [ecx+0x1a0] based on the argument (1..6).
 */
__declspec(naked) void func_005efac0()
{
    __asm {
        mov     eax, [esp + 4]
        dec     eax
        cmp     eax, 5
        ja      default_case
        jmp     dword ptr [eax*4 + 0x5efb10]
    case1:
        or      dword ptr [ecx + 0x1a0], 1
        ret     4
    case2:
        or      dword ptr [ecx + 0x1a0], 2
        ret     4
    case3:
        or      dword ptr [ecx + 0x1a0], 4
        ret     4
    case4:
        or      dword ptr [ecx + 0x1a0], 8
        ret     4
    case5:
        or      dword ptr [ecx + 0x1a0], 0x10
        ret     4
    case6:
        or      dword ptr [ecx + 0x1a0], 0x20
    default_case:
        ret     4
    }
}
