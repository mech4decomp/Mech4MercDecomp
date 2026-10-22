/*
 * FUN_00500CA0 (extent 0x500CA0-0x500CBB, 27 B) - .text data block.
 * __thiscall-style (this in ecx), ret 8.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void __stdcall FUN_00500CA0(void)
{
    __asm {
        push   esi
        mov    esi, dword ptr [ecx + 0x1c]
        mov    ecx, dword ptr [esp + 8]
        push   edi
        mov    edi, dword ptr [esp + 0x10]
        add    esi, ecx
        mov    ecx, 0xc
        rep movsd
        pop    edi
        pop    esi
        ret    8
    }
}
