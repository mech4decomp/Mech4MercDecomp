/*
 * FUN_005aab70 (11 B) — Constructor (__fastcall).
 *
 * Sets vtable pointer [ecx] = 0x7855c8, then tail-calls FUN_005f07e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_005f07e0(void);

__declspec(naked) void FUN_005aab70(void)
{
    __asm {
        mov     dword ptr [ecx], 0x7855c8
        jmp     FUN_005f07e0
    }
}
