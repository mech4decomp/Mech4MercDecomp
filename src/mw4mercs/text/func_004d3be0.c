/*
 * FUN_004D3BE0 (36 B) — Scalar deleting destructor.
 *
 * __thiscall (ECX = this), RET 4, 1 stack param (flags byte).
 * Sets vtable to 0x00772960, calls FUN_004DFDC0() as destructor body.
 * If (flags & 1), calls FUN_004084E0(this) to free.
 * Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004DFDC0(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_004d3be0(void)
{
    __asm {
        PUSH ESI
        MOV ESI, ECX
        MOV DWORD PTR [ESI], 0x00772960
        CALL FUN_004DFDC0
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
