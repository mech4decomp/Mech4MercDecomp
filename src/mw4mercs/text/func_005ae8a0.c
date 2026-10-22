/*
 * FUN_005ae8a0 (23 B) — __thiscall (this = ECX), RET 0x4 (1 param).
 *
 *   [this+0x16c] = 1
 *   [this+0x174] = param_1
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl func_005ae8a0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     dword ptr [ecx + 0x16c], 0x1
        mov     dword ptr [ecx + 0x174], eax
        ret     0x4
    }
}
