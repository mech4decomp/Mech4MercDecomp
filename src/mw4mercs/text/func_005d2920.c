/*
 * FUN_005d2920 (12 B) — __thiscall (ECX=this), RET 0.
 * Returns this+0xD8 deref + 0x80.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005d2920(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0xD8]
        add     eax, 0x80
        ret
    }
}
