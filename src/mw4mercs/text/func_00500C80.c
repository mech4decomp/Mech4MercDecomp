/*
 * func_00500C80 - thiscall copy helper (stdcall, ret 8)
 * Copies 0x30 bytes from [esp+0xc] to [ecx+0x1c] + [esp+0xc]
 */

__declspec(naked) void func_00500C80()
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        push    edi
        mov     edi, dword ptr [ecx + 0x1c]
        add     edi, dword ptr [esp + 0xc]
        mov     ecx, 0xc
        rep     movsd
        pop     edi
        pop     esi
        ret     8
    }
}
