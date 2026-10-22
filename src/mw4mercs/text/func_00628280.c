/*
 * FUN_00628280 (35 B) — ABL point-selection flag setter (variant 2).
 *
 * __fastcall (ECX = this). Sets this->c0 = 1 and updates the object at
 * this->field_0x10c: field_0x6d = 1, others = 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_00628280(void *this)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x10c]
        mov     edx, 0x1
        mov     dword ptr [ecx + 0xc0], edx
        xor     cl, cl
        mov     byte ptr [eax + 0x6c], cl
        mov     byte ptr [eax + 0x6d], dl
        mov     byte ptr [eax + 0x6e], cl
        mov     byte ptr [eax + 0x6f], cl
        mov     byte ptr [eax + 0x71], cl
        ret
    }
}
