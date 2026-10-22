/*
 * FUN_005e89d0 (25 B) - Copies 0xC dwords from param_2 to (this->0x1C + param_1).
 *
 * __thiscall (ECX = this), 2 stack params, RET 8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005e89d0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0xC]
        push    edi
        mov     edi, dword ptr [ecx + 0x1C]
        add     edi, dword ptr [esp + 0xC]
        mov     ecx, 0xC
        rep movsd
        pop     edi
        pop     esi
        ret     8
    }
}
