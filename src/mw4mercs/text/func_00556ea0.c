/*
 * FUN_00556EA0 (147 B) — __thiscall method on some game object.
 * Manages a counter at +0x408, clamped to [0, inf).
 * Similar to FUN_00556880 but uses +0x408 instead of +0x3e0.
 * Calls FUN_0061ACF0(0x8000) and FUN_0061AD20() for some check.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_0061acf0(int param);
extern int __cdecl FUN_0061ad20(int param);

__declspec(naked) void __stdcall FUN_00556ea0(void)
{
    __asm {
        PUSH ESI
        MOV  ESI, ECX
        MOV  EAX, dword ptr [ESI + 0x384]
        MOV  ECX, dword ptr [EAX + 0x10]
        SHR  ECX, 0x13
        TEST CL, 0x1
        JNZ  L_return
        MOV  AL, byte ptr [ESI + 0x589]
        TEST AL, AL
        JZ   L_not_set
        MOV  EDX, dword ptr [ESP + 0x8]
        MOV  EAX, dword ptr [EDX + 0x10]
        TEST EAX, EAX
        JG   L_skip_dec
        DEC  dword ptr [ESI + 0x408]
L_skip_dec:
        MOV  EAX, dword ptr [ESI + 0x408]
        TEST EAX, EAX
        JGE  L_return
        MOV  dword ptr [ESI + 0x408], 0x0
        POP  ESI
        RET  0x4

L_not_set:
        MOV  AL, byte ptr [ESI + 0x5ac]
        TEST AL, AL
        JNZ  L_return
        PUSH 0x8000
        CALL FUN_0061acf0
        MOV  ECX, EAX
        CALL FUN_0061ad20
        TEST AL, AL
        JZ   L_return
        MOV  EAX, dword ptr [ESP + 0x8]
        MOV  ECX, dword ptr [EAX + 0x10]
        TEST ECX, ECX
        MOV  EAX, dword ptr [ESI + 0x408]
        JLE  L_dec
        INC  EAX
        JMP  L_store
L_dec:
        DEC  EAX
L_store:
        TEST EAX, EAX
        MOV  dword ptr [ESI + 0x408], EAX
        JGE  L_return
        MOV  dword ptr [ESI + 0x408], 0x0

L_return:
        POP  ESI
        RET  0x4
    }
}
