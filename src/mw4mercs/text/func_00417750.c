/* FUN_00417750 - __thiscall, RET 0x4
 * Walks a linked list (next at +0x10) from *(this+4)->+8, returns the
 * element at index param_1 (its +0xc value), storing it at this+0x10.
 */
__declspec(naked) void FUN_00417750(void)
{
    __asm {
        mov eax, dword ptr [ecx+4]
        mov eax, dword ptr [eax+8]
        xor edx, edx
        test eax, eax
        push esi
        jz L_6d
        mov esi, dword ptr [esp+8]
    L_61:
        cmp edx, esi
        jz L_73
        mov eax, dword ptr [eax+10h]
        inc edx
        test eax, eax
        jnz L_61
    L_6d:
        xor eax, eax
        pop esi
        ret 4
    L_73:
        mov dword ptr [ecx+10h], eax
        mov eax, dword ptr [eax+0ch]
        pop esi
        ret 4
    }
}
