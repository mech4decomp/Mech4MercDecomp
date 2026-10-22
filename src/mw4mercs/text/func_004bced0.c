/*
 * FUN_004BCED0 (11 B) — Vtable setter + tail call (__fastcall, ECX=this).
 * Sets vtable pointer at [this] to 0x007713b8, then tail-calls FUN_004bf250.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004bf250(void *this);

__declspec(naked) void __fastcall FUN_004bced0(void *this)
{
    __asm {
        mov     dword ptr [ecx], 0x007713b8
        jmp     FUN_004bf250
    }
}
