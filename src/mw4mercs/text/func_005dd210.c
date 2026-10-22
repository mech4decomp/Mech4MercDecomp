/*
 * FUN_005dd210 (13 B) — __thiscall (ECX = this), RET 4.
 * Stores param dword at this+0x304.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005dd210(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     dword ptr [ecx + 0x304], eax
        ret     0x4
    }
}
