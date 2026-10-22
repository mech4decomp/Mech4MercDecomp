/*
 * FUN_00430670 (19 B) — Virtual call with bit test.
 *
 * Reads field at this+0x14, tests low 2 bits. If any set, negates the value,
 * masks to low 2 bits, pushes as param, and calls virtual method at vtable+0x18.
 *
 * __thiscall (ECX = this), no stack params, no return value.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_00430670(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x14]
        test    al, 3
        je      l_done
        mov     edx, dword ptr [ecx]
        neg     eax
        and     eax, 3
        push    eax
        call    dword ptr [edx + 0x18]
    l_done:
        ret
    }
}
