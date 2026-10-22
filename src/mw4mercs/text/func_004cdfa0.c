/*
 * FUN_004CDFA0 (30 B) — Array bounds-checked accessor.
 *
 * __thiscall (ECX = this), RET 4.
 * Returns this->array_1818[index] if 0 <= index <= 255, else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_004cdfa0(int index)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        test    eax, eax
        jl      l_out_of_bounds
        cmp     eax, 0xff
        jg      l_out_of_bounds
        mov     eax, dword ptr [ecx + eax * 4 + 0x1818]
        ret     4
    l_out_of_bounds:
        xor     eax, eax
        ret     4
    }
}
