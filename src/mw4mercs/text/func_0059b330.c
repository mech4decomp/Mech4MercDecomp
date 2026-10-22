/*
 * FUN_0059b330 (70 B) — Destructor (non-scalar deleting).
 *
 * __thiscall (ECX = this), RET 0 (no params).
 * Sets vtable, decrements refcounts for two allocations, calls destructor body.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084E0(void *ptr);
extern void __fastcall FUN_00415380(void *this);

__declspec(naked) void __fastcall FUN_0059b330(void *this)
{
    __asm {
        PUSH ESI
        MOV  ESI, ECX
        MOV  DWORD PTR [ESI], 0x78383C
        MOV  EAX, DWORD PTR [ESI + 0x14]
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
        MOV  EAX, DWORD PTR [ESI + 0x10]
        TEST EAX, EAX
        JE   L_skip_free2

        MOV  CL, BYTE PTR [EAX - 1]
        DEC  EAX
        DEC  CL
        MOV  BYTE PTR [EAX], CL
        JNE  L_skip_free2
        PUSH EAX
        CALL FUN_004084E0
        ADD  ESP, 4

    L_skip_free2:
        MOV  ECX, ESI
        CALL FUN_00415380
        POP  ESI
        RET
    }
}
