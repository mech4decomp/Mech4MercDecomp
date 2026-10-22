/*
 * FUN_00557150 (218 B) — __thiscall method on some game object.
 * Checks flags at +0x384->+0x10 bit 19 and +0x5ac.
 * Calls FUN_0061ACF0(0x10) and FUN_0061AD20() for some check.
 * If param->field_10 > 0, increments counter at +0x368 with signed modulo 4,
 * calls FUN_00557230, and copies fields from +0x518..+0x52c to +0x56c..+0x580.
 * On failure, calls FUN_00548F50.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_0061acf0(int param);
extern int __cdecl FUN_0061ad20(int param);
extern int __cdecl FUN_00557230(int param);
extern void __cdecl FUN_00548f50(int param);

__declspec(naked) void __stdcall FUN_00557150(void)
{
    __asm {
        PUSH ESI
        MOV  ESI, ECX
        MOV  EAX, dword ptr [ESI + 0x384]
        MOV  ECX, dword ptr [EAX + 0x10]
        SHR  ECX, 0x13
        TEST CL, 0x1
        PUSH EDI
        JNZ  L_return
        MOV  AL, byte ptr [ESI + 0x5ac]
        TEST AL, AL
        JNZ  L_return
        PUSH 0x10
        CALL FUN_0061acf0
        MOV  ECX, EAX
        CALL FUN_0061ad20
        TEST AL, AL
        JZ   L_return
        MOV  EDX, dword ptr [ESP + 0xc]
        MOV  EAX, dword ptr [EDX + 0x10]
        TEST EAX, EAX
        JLE  L_return
        MOV  EDI, dword ptr [ESI + 0x368]
        MOV  EAX, EDI
        INC  EAX
        AND  EAX, 0x80000003
        JNS  L_mod_ok
        DEC  EAX
        OR   EAX, 0xfffffffc
        INC  EAX
L_mod_ok:
        PUSH EAX
        MOV  ECX, ESI
        CALL FUN_00557230
        TEST AL, AL
        JNZ  L_fail
        MOV  ECX, dword ptr [ESI + 0x518]
        MOV  EDX, dword ptr [ESI + 0x51c]
        MOV  EAX, dword ptr [ESI + 0x520]
        MOV  dword ptr [ESI + 0x56c], ECX
        MOV  dword ptr [ESI + 0x570], EDX
        MOV  ECX, dword ptr [ESI + 0x528]
        MOV  dword ptr [ESI + 0x57c], ECX
        MOV  EDX, dword ptr [ESI + 0x524]
        MOV  dword ptr [ESI + 0x574], EAX
        MOV  EAX, dword ptr [ESI + 0x52c]
        MOV  dword ptr [ESI + 0x368], EDI
        MOV  dword ptr [ESI + 0x568], EDI
        MOV  dword ptr [ESI + 0x578], EDX
        POP  EDI
        MOV  dword ptr [ESI + 0x580], EAX
        POP  ESI
        RET  0x4

L_fail:
        MOV  ECX, dword ptr [ESI + 0x368]
        PUSH ECX
        CALL FUN_00548f50
        ADD  ESP, 0x4

L_return:
        POP  EDI
        POP  ESI
        RET  0x4
    }
}
