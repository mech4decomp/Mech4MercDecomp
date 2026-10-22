/*
 * FUN_005971b0 (63 B) — Status value to string conversion.
 *
 * __cdecl, takes an int status value, returns a string pointer.
 * 0 -> "Hidden", 1 -> "Displayed", 2 -> "Completed", default -> "Bad".
 * Asserts if default case is reached.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_006FABF0(const char *msg);

/* String constants in .rdata */
extern const char _str_assert_msg;   /* "That is not a valid status value" @ 0x783168 */
extern const char _str_bad;          /* "Bad" @ 0x783164 */
extern const char _str_completed;    /* "Completed" @ 0x783144 */
extern const char _str_displayed;    /* "Displayed" @ 0x783150 */
extern const char _str_hidden;       /* "Hidden" @ 0x78315C */

__declspec(naked) const char *__cdecl FUN_005971b0(int status)
{
    __asm {
        PUSH EBP
        MOV  EBP, ESP
        MOV  EAX, DWORD PTR [EBP + 8]
        SUB  EAX, 0
        JE   L_case_0
        DEC  EAX
        JE   L_case_1
        DEC  EAX
        JE   L_case_2

        /* default case */
        PUSH OFFSET _str_assert_msg
        CALL FUN_006FABF0
        ADD  ESP, 4
        TEST EAX, EAX
        JE   L_skip_int3
        INT  3
    L_skip_int3:
        MOV  EAX, OFFSET _str_bad
        POP  EBP
        RET

    L_case_2:
        MOV  EAX, OFFSET _str_completed
        POP  EBP
        RET

    L_case_1:
        MOV  EAX, OFFSET _str_displayed
        POP  EBP
        RET

    L_case_0:
        MOV  EAX, OFFSET _str_hidden
        POP  EBP
        RET
    }
}
