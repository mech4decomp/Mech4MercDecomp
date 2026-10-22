/*
 * FUN_0074a350 (69 B) — SetTransform helper.
 *
 * Calls a virtual method (vtable+0x38) on param_1 with (param_1, param_2,
 * param_3). If the result is negative, formats an error message via
 * FUN_006FABF0 (with FUN_0074C690(param_2) and FUN_0073E160 as args) and
 * asserts (INT 3) on failure.
 *
 * __stdcall, RET 0xC (three stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_0074C690(int);
extern int __cdecl FUN_0073E160(int);
extern int __cdecl FUN_006FABF0(const char *msg);

__declspec(naked) int __stdcall FUN_0074a350(int *param_1, int param_2, int param_3)
{
    __asm {
        PUSH EBP
        MOV  EBP, ESP
        MOV  EDX, DWORD PTR [EBP + 0x10]
        MOV  EAX, DWORD PTR [EBP + 8]
        MOV  ECX, DWORD PTR [EAX]
        PUSH ESI
        PUSH EDI
        MOV  EDI, DWORD PTR [EBP + 0xC]
        PUSH EDX
        PUSH EDI
        PUSH EAX
        CALL DWORD PTR [ECX + 0x38]
        MOV  ESI, EAX
        TEST ESI, ESI
        JGE  L_done
        PUSH EDI
        CALL FUN_0074C690
        PUSH EAX
        PUSH ESI
        CALL FUN_0073E160
        PUSH EAX
        PUSH ESI
        /* __emit: literal push of assert string @ 0x007AA718 (68 18 A7 7A 00);
           _str_failed was a conflated extern that resolved to the wrong addr. */
        PUSH 0x007AA718
        CALL FUN_006FABF0
        ADD  ESP, 0x10
        TEST EAX, EAX
        JZ   L_done
        INT  3
    L_done:
        POP  EDI
        MOV  EAX, ESI
        POP  ESI
        POP  EBP
        RET  0xC
    }
}
