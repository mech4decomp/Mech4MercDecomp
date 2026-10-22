/*
 * FUN_004B5EB0 (7 B) — Vtable setter (__fastcall, ECX=this).
 * Sets vtable pointer at [this] to 0x007707a8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_004b5eb0(void)
{
    __asm {
        mov     dword ptr [ecx], 0x007707a8
        ret
    }
}
