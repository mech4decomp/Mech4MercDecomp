/*
 * FUN_004E52E0 (25 B) — Constructor.
 *
 * __thiscall (ECX = this), RET 4, 1 stack param.
 * Calls FUN_004E4D30 as sub-constructor, sets vtable to 0x773FC8.
 * Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004e4d30(void);

__declspec(naked) void * __stdcall FUN_004e52e0(void)
{
    __asm {
        MOV  EAX, [ESP + 0x4]
        PUSH ESI
        MOV  ESI, ECX
        PUSH EAX
        CALL FUN_004e4d30
        MOV  dword ptr [ESI], 0x00773FC8
        MOV  EAX, ESI
        POP  ESI
        RET  0x4
    }
}
