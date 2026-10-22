/*
 * FUN_006F7670 (27 B) — Scalar deleting destructor.
 *
 * __thiscall (ECX = this), RET 4, 1 stack param (flags byte).
 * Calls FUN_006F7690() as destructor body.
 * If (flags & 1), calls FUN_006F84C0(this) to free.
 * Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f7690(void);
extern void __cdecl FUN_006f84c0(void *ptr);

__declspec(naked) void __stdcall FUN_006f7670(void)
{
    __asm {
        PUSH ESI
        MOV ESI, ECX
        CALL FUN_006f7690
        TEST byte ptr [ESP + 0x8], 0x1
        JZ l_skip_free
        PUSH ESI
        CALL FUN_006f84c0
    l_skip_free:
        MOV EAX, ESI
        POP ESI
        RET 0x4
    }
}
