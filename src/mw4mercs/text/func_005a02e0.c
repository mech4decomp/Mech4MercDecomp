/*
 * FUN_005a02e0 (11 B) — __thiscall vtable setter + tail call.
 * Sets vtable at [this] to 0x783ae0, then jumps to FUN_005a0e70.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005a0e70(void);

__declspec(naked) void FUN_005a02e0(void)
{
    __asm {
        mov     dword ptr [ecx], 0x783ae0
        jmp     FUN_005a0e70
    }
}
