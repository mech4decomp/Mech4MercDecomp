/*
 * FUN_004E02C0 (26 B) — Destructor.
 *
 * __thiscall (ECX = this), RET 0 (no stack params).
 * Sets vtable to 0x773A6C, calls ~COleControlSiteOrWnd(this+0x1C),
 * then calls FUN_004E00F0(this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fc90(void);
extern void __cdecl FUN_004e00f0(void);

__declspec(naked) void __fastcall FUN_004e02c0(void)
{
    __asm {
        PUSH ESI
        MOV  ESI, ECX
        LEA  ECX, [ESI + 0x1C]
        MOV  dword ptr [ESI], 0x00773A6C
        CALL FUN_0041fc90
        MOV  ECX, ESI
        CALL FUN_004e00f0
        POP  ESI
        RET
    }
}
