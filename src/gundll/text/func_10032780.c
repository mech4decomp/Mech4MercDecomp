/*
 * FUN_10032780 (26 B) - __thiscall, RET 0x4. Calls virtual method at
 * vtable+0x60 of this->0xc with (this->0xc, *(param_1+0x18), 0, 0, 0).
 *
 * __thiscall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_10032780(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     edx, dword ptr [eax + 0x18]
        mov     eax, dword ptr [ecx + 0xc]
        mov     ecx, dword ptr [eax]
        push    0
        push    0
        push    0
        push    edx
        push    eax
        call    dword ptr [ecx + 0x60]
        ret     4
    }
}
