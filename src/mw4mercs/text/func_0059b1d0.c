/*
 * FUN_0059b1d0 (68 B) — Virtual method at vtable 0x783828 slot +8.
 *
 * __thiscall (ECX = this). Calls getter, sets field, calls virtual method,
 * does float subtraction.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__fastcall FUN_005F07C0(void *this);

__declspec(naked) void __fastcall FUN_0059b1d0(void *this)
{
    __asm {
        PUSH ESI
        PUSH EDI
        MOV  EDI, ECX
        CALL FUN_005F07C0
        MOV  ECX, EDI
        MOV  DWORD PTR [EAX + 0x3EC], 0
        CALL FUN_005F07C0
        MOV  ESI, EAX
        MOV  EAX, DWORD PTR [ESI + 0x78]
        LEA  ECX, [ESI + 0x78]
        MOV  DWORD PTR [EDI + 0x17C], ESI
        CALL DWORD PTR [EAX + 4]
        FLD  DWORD PTR [EAX + 0x664]
        FLD  DWORD PTR [ESI + 0x3B8]
        POP  EDI
        FSUB ST(0), ST(1)
        FSTP DWORD PTR [ESI + 0x3B8]
        POP  ESI
        FSTP ST(0)
        RET
    }
}
