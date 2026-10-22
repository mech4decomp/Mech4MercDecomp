/*
 * FUN_004E5570 (26 B) — Destructor.
 *
 * __thiscall (ECX = this), RET 0 (no stack params).
 * Sets vtable to 0x774070, calls FUN_00417980(this+0x4),
 * then calls FUN_004B5EB0(this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00417980(void);
extern void __cdecl FUN_004b5eb0(void);

__declspec(naked) void __fastcall FUN_004e5570(void)
{
    __asm {
        PUSH ESI
        MOV  ESI, ECX
        LEA  ECX, [ESI + 0x4]
        MOV  dword ptr [ESI], 0x00774070
        CALL FUN_00417980
        MOV  ECX, ESI
        CALL FUN_004b5eb0
        POP  ESI
        RET
    }
}
