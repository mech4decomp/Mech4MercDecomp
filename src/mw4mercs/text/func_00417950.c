/* FUN_00417950 - __thiscall, RET 0x4
 * Inserts this into a list: head at param_1->+0xc; this+0x10 links.
 */
__declspec(naked) void FUN_00417950(void)
{
    __asm {
        mov edx, dword ptr [esp+4]
        mov eax, dword ptr [edx+0ch]
        test eax, eax
        jnz L_64
        mov dword ptr [ecx+10h], ecx
        mov dword ptr [edx+0ch], ecx
        ret 4
    L_64:
        push esi
        mov esi, dword ptr [eax+10h]
        mov dword ptr [ecx+10h], esi
        mov dword ptr [eax+10h], ecx
        mov dword ptr [edx+0ch], ecx
        pop esi
        ret 4
    }
}
