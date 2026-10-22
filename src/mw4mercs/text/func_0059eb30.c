/*
 * FUN_0059eb30 (64 B) — Reference-counted container release method.
 *
 * __thiscall (ECX = this), RET 4 (1 param).
 * Finds item in container, decrements refcount, deletes if zero.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__fastcall FUN_00416B60(void *container, void *param);
extern void __fastcall FUN_00415CA0(void *container, void *item);

__declspec(naked) void __fastcall FUN_0059eb30(void *this)
{
    __asm {
        PUSH EBX
        PUSH ESI
        MOV  EBX, ECX
        PUSH EDI
        LEA  EAX, [ESP + 0x10]
        LEA  EDI, [EBX + 0x10]
        PUSH EAX
        MOV  ECX, EDI
        CALL FUN_00416B60
        MOV  ESI, EAX
        TEST ESI, ESI
        JE   L_done

        MOV  ECX, DWORD PTR [ESI + 0x18]
        DEC  ECX
        MOV  EAX, ECX
        TEST EAX, EAX
        MOV  DWORD PTR [ESI + 0x18], ECX
        JG   L_skip_delete

        PUSH ESI
        MOV  ECX, EDI
        CALL FUN_00415CA0
        MOV  EDX, DWORD PTR [ESI]
        PUSH 1
        MOV  ECX, ESI
        CALL DWORD PTR [EDX]

    L_skip_delete:
        DEC  DWORD PTR [EBX + 0x2C]

    L_done:
        POP  EDI
        POP  ESI
        POP  EBX
        RET  4
    }
}
