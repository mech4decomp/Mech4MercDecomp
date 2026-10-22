/*
 * FUN_006F3690 (30 B) — Scalar deleting destructor.
 *
 * __thiscall (ECX = this), RET 4, 1 stack param (flags byte).
 * Calls FUN_00416C60() as destructor body.
 * If (flags & 1), calls FUN_004084E0(this) to free.
 * Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416c60(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_006f3690(void)
{
    __asm {
        PUSH ESI
        MOV ESI, ECX
        CALL FUN_00416c60
        TEST byte ptr [ESP + 0x8], 0x1
        JZ l_skip_free
        PUSH ESI
        CALL FUN_004084e0
        ADD ESP, 0x4
    l_skip_free:
        MOV EAX, ESI
        POP ESI
        RET 0x4
    }
}
