/*
 * FUN_005832f0 (348 B) — Object initialization / creation function.
 *
 * __thiscall (ECX = this), RET 0x8 (2 stack params).
 * Creates a new object via virtual call, initializes its fields
 * from various source fields, clamps values to [0, 100].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern long __cdecl _ftol(double val);
extern int __fastcall FUN_005f79d0(void *this, void *param1, int param2);
extern int __fastcall FUN_00590c10(void *this);

__declspec(naked) void __fastcall FUN_005832f0(void)
{
    

extern int DAT_0076d048;
__asm {
PUSH EBX
        PUSH EBP
        PUSH ESI
        MOV  ESI, dword ptr [ESP + 0x10]    ; ESI = param1 (first stack param)
        MOV  EAX, dword ptr [ESI]           ; EAX = vtable
        PUSH EDI
        MOV  EDI, ECX                       ; EDI = this
        PUSH 0x158                          ; size param
        MOV  ECX, ESI                       ; ECX = param1
        CALL dword ptr [EAX + 0x14]         ; virtual alloc(size)
        MOV  ECX, dword ptr [ESP + 0x18]    ; ECX = second stack param
        PUSH ECX
        PUSH ESI
        MOV  ECX, EDI
        CALL FUN_005f79d0                   ; init call
        MOV  EDX, dword ptr [ESI]           ; EDX = vtable
        MOV  ECX, ESI
        CALL dword ptr [EDX + 0x4]          ; virtual getter
        MOV  ESI, EAX                       ; ESI = new object
        MOV  EAX, dword ptr [EDI + 0x408]   ; EAX = source ptr
        FLD  dword ptr [EAX + 0x4c]         ; load float
        MOV  dword ptr [ESI], 0x158         ; set size field
        FSTP dword ptr [ESI + 0x148]        ; store float
        FLD  dword ptr [EAX + 0x54]
        FSTP dword ptr [ESI + 0x14c]
        FLD  dword ptr [EAX + 0x58]
        MOV  AL, byte ptr [EDI + 0x510]
        MOV  byte ptr [ESI + 0x154], AL
        MOV  EAX, dword ptr [EDI + 0x3bc]
        CDQ
        AND  EDX, 0x3
        ADD  EAX, EDX
        SAR  EAX, 0x2
        FSTP dword ptr [ESI + 0x150]
        MOV  dword ptr [ESI + 0x134], EAX
        JNS  l_check_max1
        MOV  dword ptr [ESI + 0x134], 0x0
        JMP  l_after_clamp1
    l_check_max1:
        CMP  EAX, 0x64
        JLE  l_after_clamp1
        MOV  dword ptr [ESI + 0x134], 0x64
    l_after_clamp1:
        MOV  EDX, dword ptr [EDI + 0x78]
        MOV  EBP, dword ptr [EDI + 0x504]
        LEA  ECX, [EDI + 0x78]
        CALL dword ptr [EDX + 0x4]          ; virtual getter
        FLD  dword ptr [EBP + 0x18c]
        MOV  EBX, EAX
        FSUB dword ptr [EBX + 0x2c8]
        FLD  dword ptr [EBX + 0x2bc]
        FSUB dword ptr [EBX + 0x2c8]
        FDIVP ST(1),ST(0)
        fmul dword ptr [DAT_0076d048]
        CALL _ftol
        XOR  EBP, EBP
        CMP  EAX, EBP
        MOV  dword ptr [ESI + 0x138], EAX
        JGE  l_check_max2
        MOV  dword ptr [ESI + 0x138], EBP
        JMP  l_after_clamp2
    l_check_max2:
        CMP  EAX, 0x64
        JLE  l_after_clamp2
        MOV  dword ptr [ESI + 0x138], 0x64
    l_after_clamp2:
        MOV  EAX, dword ptr [EDI + 0x9a4]
        FLD  dword ptr [EAX + 0x1b0]
        CALL _ftol
        LEA  EAX, [EAX + EAX*0x4]           ; EAX = result * 5
        CMP  EAX, EBP
        MOV  dword ptr [ESI + 0x140], EAX
        JGE  l_check_max3
        MOV  dword ptr [ESI + 0x140], EBP
        JMP  l_after_clamp3
    l_check_max3:
        CMP  EAX, 0x64
        JLE  l_after_clamp3
        MOV  dword ptr [ESI + 0x140], 0x64
    l_after_clamp3:
        MOV  ECX, EDI
        CALL FUN_00590c10
        CMP  EAX, EBP
        MOV  dword ptr [ESI + 0x13c], EAX
        JGE  l_check_max4
        MOV  dword ptr [ESI + 0x13c], EBP
        JMP  l_after_clamp4
    l_check_max4:
        CMP  EAX, 0x64
        JLE  l_after_clamp4
        MOV  dword ptr [ESI + 0x13c], 0x64
    l_after_clamp4:
        MOV  ECX, dword ptr [EBX + 0x634]
        POP  EDI
        MOV  dword ptr [ESI + 0x144], ECX
        MOV  EAX, ESI
        POP  ESI
        POP  EBP
        POP  EBX
        RET  0x8
    }


}
