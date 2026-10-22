/*
 * FUN_00599dd0 (68 B) — Constructor with 4 parameters.
 *
 * __thiscall (ECX = this), RET 0x10 (4 DWORD params).
 * Calls base constructor, copies fields, sets vtable.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_005ECEF0(void *this, int p1, int p2, int p3, int p4);

__declspec(naked) void *__fastcall FUN_00599dd0(void *this)
{
    __asm {
        MOV  EAX, DWORD PTR [ESP + 0x10]
        MOV  EDX, DWORD PTR [ESP + 4]
        PUSH ESI
        PUSH EDI
        MOV  EDI, DWORD PTR [ESP + 0x10]
        MOV  ESI, ECX
        MOV  ECX, DWORD PTR [ESP + 0x14]
        PUSH EAX
        PUSH ECX
        PUSH EDI
        PUSH EDX
        MOV  ECX, ESI
        CALL FUN_005ECEF0
        MOV  EAX, DWORD PTR [EDI + 0xB4]
        MOV  ECX, DWORD PTR [EDI + 0xB8]
        MOV  DWORD PTR [ESI + 0x258], EAX
        POP  EDI
        MOV  DWORD PTR [ESI], 0x783464
        MOV  DWORD PTR [ESI + 0x25C], ECX
        MOV  EAX, ESI
        POP  ESI
        RET  0x10
    }
}
