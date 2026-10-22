/*
 * FUN_10031A20 (29 B) - __stdcall, RET 0x4.  Reads this->field at +0x24 as a
 * pointer, dereferences it, adds 8, dereferences again; if non-null returns
 * that value + 0x18, else returns 0.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10031A20(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     ecx, dword ptr [eax + 0x24]
        mov     eax, dword ptr [ecx]
        add     eax, 8
        mov     eax, dword ptr [eax]
        test    eax, eax
        je      L1
        add     eax, 0x18
        ret     0x4
L1:
        xor     eax, eax
        ret     0x4
    }
}
