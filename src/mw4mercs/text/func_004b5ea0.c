/*
 * FUN_004B5EA0 (9 B) — Vtable setter (__fastcall, ECX=this).
 * Sets vtable pointer at [this] to 0x007707a8.
 * Differs from FUN_004b5eb0 by using EAX as intermediate.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_004b5ea0(void)
{
    __asm {
        mov     eax, ecx
        mov     dword ptr [eax], 0x007707a8
        ret
    }
}
