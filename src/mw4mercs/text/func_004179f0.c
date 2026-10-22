/* FUN_004179f0 - __thiscall
 * Iterates a list from this+0; for each node calls its vtable[0] with arg 1.
 */
__declspec(naked) void FUN_004179f0(void)
{
    __asm {
        mov eax, dword ptr [ecx]
        test eax, eax
        jz L_0f
        push esi
    L_f7:
        mov esi, dword ptr [eax+4]
        mov eax, dword ptr [eax]
        test eax, eax
        jz L_08
        mov edx, dword ptr [eax]
        push 1
        mov ecx, eax
        call dword ptr [edx]
    L_08:
        test esi, esi
        mov eax, esi
        jnz L_f7
        pop esi
    L_0f:
        ret
    }
}
