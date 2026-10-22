/*
 * FUN_00628250 (35 B) — ABL point-selection flag setter (variant 1).
 *
 * __fastcall (ECX = this). Sets this->bc = 1 and updates the object at
 * this->field_0x10c: field_0x6c = 1, others = 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_00628250(void *this)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x10c]
        mov     edx, 0x1
        mov     dword ptr [ecx + 0xbc], edx
        xor     cl, cl
        mov     byte ptr [eax + 0x6c], dl
        mov     byte ptr [eax + 0x6d], cl
        mov     byte ptr [eax + 0x71], cl
        mov     byte ptr [eax + 0x6e], cl
        mov     byte ptr [eax + 0x6f], cl
        ret
    }
}
