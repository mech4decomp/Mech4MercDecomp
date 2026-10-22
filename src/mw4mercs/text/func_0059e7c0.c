/*
 * FUN_0059e7c0 (64 B) — Scalar deleting destructor.
 *
 * __thiscall (ECX = this), RET 4 (1 byte param: flags).
 * Sets vtable, decrements refcount, calls destructor body, optionally frees.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084E0(void *ptr);
extern void __fastcall FUN_00415380(void *this);

__declspec(naked) void *__fastcall FUN_0059e7c0(void *this)
{
    __asm {
        PUSH ESI
        MOV  ESI, ECX
        MOV  DWORD PTR [ESI], 0x783998
        MOV  EAX, DWORD PTR [ESI + 0x10]
        TEST EAX, EAX
        JE   L_skip_free1

        MOV  CL, BYTE PTR [EAX - 1]
        DEC  EAX
        DEC  CL
        MOV  BYTE PTR [EAX], CL
        JNE  L_skip_free1
        PUSH EAX
        CALL FUN_004084E0
        ADD  ESP, 4

    L_skip_free1:
        MOV  ECX, ESI
        CALL FUN_00415380
        TEST BYTE PTR [ESP + 8], 1
        JE   L_skip_free2
        PUSH ESI
        CALL FUN_004084E0
        ADD  ESP, 4

    L_skip_free2:
        MOV  EAX, ESI
        POP  ESI
        RET  4
    }
}
