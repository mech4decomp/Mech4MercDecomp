/*
 * FUN_004DD250 (16 B) — Swaps fields: copies this+0x14 to this+0x10,
 * then writes param to this+0x14.
 *
 * __thiscall (ECX = this), RET 8 (two DWORD params).
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_004dd250(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x14]
        mov     dword ptr [ecx + 0x10], eax
        mov     eax, dword ptr [esp + 4]
        mov     dword ptr [ecx + 0x14], eax
        ret     8
    }
}
