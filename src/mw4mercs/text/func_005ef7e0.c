/*
 * FUN_005ef7e0 (15 B) — __thiscall (ECX = this), returns float on FPU stack.
 *
 * Calls virtual method at [this->78]+4, then returns 2 * [ret+0x3C].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) float __stdcall FUN_005ef7e0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x78]
        add     ecx, 0x78
        call    dword ptr [eax + 0x4]
        fld     dword ptr [eax + 0x3C]
        fadd    st, st(0)
        ret
    }
}
