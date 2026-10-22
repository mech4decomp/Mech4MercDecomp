/*
 * func_005E8A30 - thiscall copy helper (stdcall, ret 8)
 * Copies 0x30 bytes from [ecx+0x1c]+[esp+8] to [esp+0x10]
 */

__declspec(naked) void func_005E8A30()
{
    __asm {
        push    esi
        mov     esi, dword ptr [ecx + 0x1c]
        mov     ecx, dword ptr [esp + 8]
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        add     esi, ecx
        mov     ecx, 0xc
        rep     movsd
        pop     edi
        pop     esi
        ret     8
    }
}
