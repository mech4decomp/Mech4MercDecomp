/*
 * FUN_0059b190 (63 B) — Virtual method at vtable 0x783828 slot +4.
 *
 * __thiscall (ECX = this). Calls a getter, stores result, calls a virtual
 * method, calls another method, and does float subtraction.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__fastcall FUN_005F07C0(void *this);
extern int __fastcall FUN_005F0940(void *this);

__declspec(naked) void __fastcall FUN_0059b190(void *this)
{
    __asm {
        PUSH ESI
        PUSH EDI
        MOV  ESI, ECX
        CALL FUN_005F07C0
        LEA  ECX, [EAX + 0x78]
        MOV  DWORD PTR [ESI + 0x17C], EAX
        MOV  EAX, DWORD PTR [ECX]
        CALL DWORD PTR [EAX + 4]
        MOV  ECX, ESI
        MOV  EDI, EAX
        CALL FUN_005F0940
        TEST AL, AL
        JE   L_skip
        FLD  DWORD PTR [EDI + 0x664]
        MOV  ESI, DWORD PTR [ESI + 0x17C]
        FSUBR DWORD PTR [ESI + 0x3B8]
        FSTP DWORD PTR [ESI + 0x3B8]
    L_skip:
        POP  EDI
        POP  ESI
        RET
    }
}
