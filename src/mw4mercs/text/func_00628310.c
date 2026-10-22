/*
 * FUN_00628310 (21 B) — ABL point-selection flag setter (variant 5).
 *
 * __fastcall (ECX = this). Sets this->cc = 1 and the object at
 * this->field_0x10c field_0x70 = 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_00628310(void *this)
{
    __asm {
        mov     eax, 0x1
        mov     dword ptr [ecx + 0xcc], eax
        mov     ecx, dword ptr [ecx + 0x10c]
        mov     byte ptr [ecx + 0x70], al
        ret
    }
}
