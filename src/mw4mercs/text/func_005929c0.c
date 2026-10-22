/*
 * FUN_005929C0 (163 B) — Weight class string parser.
 * Compares input string against "Open", "Light", "Medium", "Heavy", "Assault"
 * and returns corresponding integer (4, 0, 1, 2, 3) or -1 on failure.
 *
 * CFLAGS: /O1
 */

extern int __cdecl FUN_006fabf0(const char *, ...);

__declspec(naked) int __stdcall FUN_005929C0(int param1)
{
    

extern int DAT_0076b2ac;
__asm {
PUSH EBP
        MOV  EBP, ESP
        PUSH ESI
        MOV  ESI, [EBP + 8]        /* param1 = string pointer */
        TEST ESI, ESI
        PUSH EDI
        JZ   return_minus1

        mov edi, dword ptr [DAT_0076b2ac]

        /* Compare "Open" */
        PUSH 0x782aa4
        PUSH ESI
        CALL EDI                    /* _stricmp via global ptr */
        ADD  ESP, 0x8
        TEST EAX, EAX
        JNZ  not_open
        POP  EDI
        MOV  EAX, 0x4
        POP  ESI
        POP  EBP
        RET

not_open:
        /* Compare "Light" */
        PUSH 0x76ff50
        PUSH ESI
        CALL EDI
        ADD  ESP, 0x8
        TEST EAX, EAX
        JNZ  not_light
        POP  EDI
        POP  ESI
        POP  EBP
        RET                         /* returns 0 (EAX from _stricmp result = 0) */

not_light:
        /* Compare "Medium" */
        PUSH 0x782a9c
        PUSH ESI
        CALL EDI
        ADD  ESP, 0x8
        TEST EAX, EAX
        JNZ  not_medium
        POP  EDI
        MOV  EAX, 0x1
        POP  ESI
        POP  EBP
        RET

not_medium:
        /* Compare "Heavy" */
        PUSH 0x782a94
        PUSH ESI
        CALL EDI
        ADD  ESP, 0x8
        TEST EAX, EAX
        JNZ  not_heavy
        POP  EDI
        MOV  EAX, 0x2
        POP  ESI
        POP  EBP
        RET

not_heavy:
        /* Compare "Assault" */
        PUSH 0x782a8c
        PUSH ESI
        CALL EDI
        ADD  ESP, 0x8
        TEST EAX, EAX
        JNZ  not_assault
        POP  EDI
        MOV  EAX, 0x3
        POP  ESI
        POP  EBP
        RET

not_assault:
        /* Error: not a valid weight class */
        PUSH ESI
        PUSH 0x782a60
        CALL FUN_006fabf0
        ADD  ESP, 0x8
        TEST EAX, EAX
        JZ   return_minus1
        INT  3                      /* __debugbreak */

return_minus1:
        POP  EDI
        OR   EAX, 0xFFFFFFFF        /* EAX = -1 */
        POP  ESI
        POP  EBP
        RET
    }


}
