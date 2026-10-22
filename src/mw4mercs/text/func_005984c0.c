/*
 * FUN_005984c0 (67 B) — Constructor-like method.
 *
 * __thiscall (ECX = this), RET 8 (2 DWORD params).
 * Allocates and initializes a linked list node, stores it in this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084D0(int size);

__declspec(naked) void *__fastcall FUN_005984c0(void *this)
{
    __asm {
        MOV  EAX, DWORD PTR [ESP + 8]
        PUSH ESI
        MOV  ESI, ECX
        MOV  CL, BYTE PTR [EAX]
        MOV  BYTE PTR [ESI], CL
        PUSH 0x18
        MOV  DWORD PTR [ESI], 0
        CALL FUN_004084D0
        MOV  EDX, DWORD PTR [ESP + 0xC]
        MOV  CL, BYTE PTR [EDX]
        MOV  DWORD PTR [EAX + 4], 0
        MOV  DWORD PTR [EAX + 8], EAX
        MOV  DWORD PTR [ESI], EAX
        ADD  ESP, 4
        MOV  BYTE PTR [EAX], 0
        MOV  DWORD PTR [EAX + 0xC], EAX
        MOV  DWORD PTR [ESI + 4], 0
        MOV  BYTE PTR [ESI + 8], CL
        MOV  EAX, ESI
        POP  ESI
        RET  8
    }
}
