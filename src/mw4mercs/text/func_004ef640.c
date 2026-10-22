/* func_004ef640 - MLR/Adept state engine subsystem (__thiscall, RET 0xc) */
__declspec(naked) int func_004ef640(void)
{
    __asm {
        mov eax, dword ptr [esp+0x4]
        mov edx, dword ptr [esp+0xc]
        push esi
        mov esi, dword ptr [ecx+0x24]
        mov ecx, dword ptr [esp+0xc]
        mov dword ptr [esi+0x17c], ecx
        mov ecx, dword ptr [esi+0x18]
        or ecx, 0x4
        mov dword ptr [esi+0x178], eax
        mov eax, dword ptr [esi]
        mov dword ptr [esi+0x18], ecx
        mov ecx, esi
        mov dword ptr [esi+0x180], edx
        call dword ptr [eax+0x10]
        mov eax, dword ptr [esi+0x18]
        mov edx, dword ptr [esi]
        or eax, 0x4
        mov ecx, esi
        mov dword ptr [esi+0x18], eax
        call dword ptr [edx+0x10]
        mov ecx, esi
        call dword ptr [esi+0x1c]
        pop esi
        ret 0xc
    }
}
