/*
 * FUN_005d2340 (13 B) — __thiscall (ECX=this), RET 4.
 * Stores param into this+0x3B8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005d2340(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     dword ptr [ecx + 0x3B8], eax
        ret     0x4
    }
}
