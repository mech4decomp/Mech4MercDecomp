/*
 * FUN_00557230 (276 B) — __thiscall method on some game object.
 * Sets counter at +0x368 to param.
 * If param == 3: calls FUN_00557F60(0,0), copies fields, returns 1.
 * Else: checks global obfuscated data at 0x007dab44/0x007dab40,
 * calls FUN_00557360, calls FUN_00557F60(4,0), copies fields, returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_00557f60(int param1, int param2);
extern void __cdecl FUN_00557360(void);

__declspec(naked) void __stdcall FUN_00557230(void)
{
    __asm {
        MOV  EAX, dword ptr [ESP + 0x4]
        CMP  EAX, 0x3
        PUSH ESI
        MOV  ESI, ECX
        MOV  dword ptr [ESI + 0x368], EAX
        JNZ  L_not_three
        PUSH 0x0
        PUSH 0x0
        CALL FUN_00557f60
        MOV  EAX, dword ptr [ESI + 0x518]
        MOV  ECX, dword ptr [ESI + 0x51c]
        MOV  EDX, dword ptr [ESI + 0x520]
        MOV  dword ptr [ESI + 0x56c], EAX
        MOV  dword ptr [ESI + 0x570], ECX
        MOV  EAX, dword ptr [ESI + 0x528]
        MOV  dword ptr [ESI + 0x57c], EAX
        MOV  ECX, dword ptr [ESI + 0x524]
        MOV  dword ptr [ESI + 0x574], EDX
        MOV  EDX, dword ptr [ESI + 0x52c]
        MOV  dword ptr [ESI + 0x578], ECX
        MOV  dword ptr [ESI + 0x568], 0x0
        MOV  dword ptr [ESI + 0x580], EDX
        MOV  AL, 0x1
        POP  ESI
        RET  0x4

L_not_three:
        /* _emit: MOV EAX, [0x007dab44] — MSVC6 encodes mov eax, imm32 as immediate load, not memory deref */
        _emit 0xA1
        _emit 0x44
        _emit 0xAB
        _emit 0x7D
        _emit 0x00
        MOV  ECX, dword ptr [EAX]
        /* _emit: XOR ECX, [0x007dab40] — MSVC6 can't encode XOR with absolute address */
        _emit 0x33
        _emit 0x0D
        _emit 0x40
        _emit 0xAB
        _emit 0x7D
        _emit 0x00
        MOV  EDX, dword ptr [ECX + 0xc]
        LEA  EAX, [ECX + 0xc]
        XOR  EDX, 0x85739531
        MOV  CL, byte ptr [EDX + 0x17]
        TEST CL, CL
        JZ   L_call_57360
        MOV  EAX, dword ptr [EAX]
        XOR  EAX, 0x85739531
        MOV  ECX, dword ptr [EAX + 0x50]
        MOV  EAX, dword ptr [ECX + 0x5c]
        TEST EAX, EAX
        JNZ  L_call_57360
        XOR  AL, AL
        POP  ESI
        RET  0x4

L_call_57360:
        MOV  ECX, ESI
        CALL FUN_00557360
        PUSH 0x0
        PUSH 0x4
        MOV  ECX, ESI
        CALL FUN_00557f60
        MOV  EDX, dword ptr [ESI + 0x518]
        MOV  EAX, dword ptr [ESI + 0x51c]
        MOV  ECX, dword ptr [ESI + 0x520]
        MOV  dword ptr [ESI + 0x56c], EDX
        MOV  dword ptr [ESI + 0x570], EAX
        MOV  EDX, dword ptr [ESI + 0x528]
        MOV  dword ptr [ESI + 0x57c], EDX
        MOV  EAX, dword ptr [ESI + 0x524]
        MOV  dword ptr [ESI + 0x574], ECX
        MOV  ECX, dword ptr [ESI + 0x52c]
        MOV  dword ptr [ESI + 0x578], EAX
        MOV  dword ptr [ESI + 0x568], 0x4
        MOV  dword ptr [ESI + 0x580], ECX
        MOV  AL, 0x1
        POP  ESI
        RET  0x4
    }
}
