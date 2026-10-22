/* FUN_00417a10 - __thiscall, RET 0x4
 * Returns the param_1-th node's +0 value from a list headed at this+0.
 */
__declspec(naked) void FUN_00417a10(void)
{
    __asm {
        mov eax, dword ptr [ecx]
        xor edx, edx
        test eax, eax
        jz L_28
        mov ecx, dword ptr [esp+4]
    L_1c:
        cmp edx, ecx
        jz L_2d
        mov eax, dword ptr [eax+4]
        inc edx
        test eax, eax
        jnz L_1c
    L_28:
        xor eax, eax
        ret 4
    L_2d:
        mov eax, dword ptr [eax]
        ret 4
    }
}
