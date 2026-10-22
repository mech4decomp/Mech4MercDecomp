/*
 * FUN_00741040 (69 B) — Group deletion helper.
 *
 * Calls a virtual method (vtable+0x88) on param_1 with (param_1, param_2,
 * param_3). If the result is negative, formats an error message via
 * FUN_006FABF0 and asserts (INT 3) on failure.
 *
 * __stdcall, RET 0xC (three stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_0073E160(int);
extern int __cdecl FUN_006FABF0(const char *msg);

/* String constant in .rdata @ 0x7a8fb4 */
extern const char g_007a8fb4;   /* "FAILED (0x%x - %s) - DeleteGroupFromGroup(%d, %d)" */

__declspec(naked) int __stdcall FUN_00741040(int *param_1, int param_2, int param_3)
{
    __asm {
        PUSH EBP
        MOV  EBP, ESP
        MOV  EAX, DWORD PTR [EBP + 8]
        MOV  ECX, DWORD PTR [EAX]
        PUSH EBX
        MOV  EBX, DWORD PTR [EBP + 0xC]
        PUSH ESI
        PUSH EDI
        MOV  EDI, DWORD PTR [EBP + 0x10]
        PUSH EDI
        PUSH EBX
        PUSH EAX
        CALL DWORD PTR [ECX + 0x88]
        MOV  ESI, EAX
        TEST ESI, ESI
        JGE  L_done
        PUSH EDI
        PUSH EBX
        PUSH ESI
        CALL FUN_0073E160
        PUSH EAX
        PUSH ESI
        PUSH OFFSET g_007a8fb4
        CALL FUN_006FABF0
        ADD  ESP, 0x14
        TEST EAX, EAX
        JZ   L_done
        INT  3
    L_done:
        POP  EDI
        MOV  EAX, ESI
        POP  ESI
        POP  EBX
        POP  EBP
        RET  0xC
    }
}
