/*
 * FUN_004F1450 (26 B) — Constructor.
 *
 * __thiscall (ECX = this), RET 0 (no stack params).
 * Sets vtable to 0x774EA8, calls FUN_00417980(this+0x24),
 * then calls FUN_004F21A0(this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00417980(void);
extern void __cdecl FUN_004f21a0(void);

__declspec(naked) void __fastcall FUN_004f1450(void)
{
    __asm {
        PUSH ESI
        MOV  ESI, ECX
        LEA  ECX, [ESI + 0x24]
        MOV  dword ptr [ESI], 0x00774EA8
        CALL FUN_00417980
        MOV  ECX, ESI
        CALL FUN_004f21a0
        POP  ESI
        RET
    }
}
