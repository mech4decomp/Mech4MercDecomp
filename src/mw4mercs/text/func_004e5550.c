/*
 * FUN_004E5550 (26 B) — Constructor.
 *
 * __thiscall (ECX = this), RET 0 (no stack params).
 * Calls FUN_004B5EA0(), sets [this+4]=0, [this+8]=0,
 * sets vtable to 0x774070, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004b5ea0(void);

__declspec(naked) void * __fastcall FUN_004e5550(void)
{
    __asm {
        PUSH ESI
        MOV  ESI, ECX
        CALL FUN_004b5ea0
        XOR  EAX, EAX
        MOV  [ESI + 0x4], EAX
        MOV  [ESI + 0x8], EAX
        MOV  dword ptr [ESI], 0x00774070
        MOV  EAX, ESI
        POP  ESI
        RET
    }
}
