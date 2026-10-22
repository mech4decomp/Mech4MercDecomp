/*
 * FUN_004F4800 (38 B) — Copy 0xC dwords from struct field.
 *
 * Copies 48 bytes (0xC dwords) from [this->field_170->field_D8 + 0x80]
 * to the destination pointer passed as parameter.
 *
 * __thiscall (ECX = this), RET 4, 1 stack param (dest pointer).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_004f4800(void)
{
    __asm {
        mov     eax, [ecx + 0x170]
        push    esi
        mov     esi, [eax + 0xD8]
        mov     eax, [esp + 8]
        push    edi
        add     esi, 0x80
        mov     ecx, 0x0C
        mov     edi, eax
        rep movsd
        pop     edi
        pop     esi
        ret     4
    }
}
