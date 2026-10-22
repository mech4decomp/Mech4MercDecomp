/*
 * func_005efb30 - __thiscall switch dispatch
 * Clears a flag bit in [ecx+0x1a0] based on the argument (1..6).
 */
__declspec(naked) void func_005efb30()
{
    __asm {
        mov     eax, [esp + 4]
        dec     eax
        cmp     eax, 5
        ja      default_case
        jmp     dword ptr [eax*4 + 0x5efb80]
    case1:
        and     dword ptr [ecx + 0x1a0], 0xfffffffe
        ret     4
    case2:
        and     dword ptr [ecx + 0x1a0], 0xfffffffd
        ret     4
    case3:
        and     dword ptr [ecx + 0x1a0], 0xfffffffb
        ret     4
    case4:
        and     dword ptr [ecx + 0x1a0], 0xfffffff7
        ret     4
    case5:
        and     dword ptr [ecx + 0x1a0], 0xffffffef
        ret     4
    case6:
        and     dword ptr [ecx + 0x1a0], 0xffffffdf
    default_case:
        ret     4
    }
}
