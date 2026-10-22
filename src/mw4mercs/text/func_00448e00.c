/* MLR mesh FUN_00448e00 (63 bytes, __thiscall RET 0x8) */

__declspec(naked) void func_00448e00(void)
{
    __asm {
        mov edx, dword ptr [esp + 0x4]
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [ecx + edx*0x4 + 0xa8], eax
        xor eax, eax
        mov al, byte ptr [ecx + 0x18a]
        cmp edx, eax
        jnz L_448e3c
        mov edx, dword ptr [ecx + 0x34]
        mov eax, dword ptr [ecx + eax*0x4 + 0xa8]
        or edx, 0x3fff
        mov dword ptr [ecx + 0x34], edx
        mov edx, dword ptr [ecx + 0x2c]
        and edx, 0xffffc000
        or edx, eax
        mov dword ptr [ecx + 0x2c], edx
L_448e3c:
        ret 0x8
    }
}
