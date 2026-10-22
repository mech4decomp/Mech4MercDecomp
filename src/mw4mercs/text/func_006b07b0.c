/*
 * FUN_006B07B0 (7 B) — Sets vtable to 0x799cd8.
 *
 * __thiscall (ECX = this).
 *
 * Disassembly:
 *   C7 01 D8 9C 79 00    mov     dword ptr [ecx], 0x799cd8
 *   C3                   ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_006b07b0(void)
{
    __asm {
        mov     dword ptr [ecx], 0x799cd8
        ret
    }
}
