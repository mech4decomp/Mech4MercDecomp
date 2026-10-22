/*
 * FUN_00584540 (303 B) — Object initialization with loop.
 *
 * __fastcall (ECX = param_1), RET 0x4 (1 stack param).
 * Processes items in a loop, allocates memory, sets up objects.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004d1f80(void *this, int param);
extern void __fastcall FUN_00412a00(void *this, void *param);
extern int __cdecl FUN_0048f380(int param1, int param2);
extern void * __cdecl FUN_004084d0(int size);
extern void __cdecl FUN_004084e0(void *ptr);
extern void __fastcall FUN_00415180(void *this, int param);
extern void __fastcall FUN_00416a90(void *this, void *param);
extern void __fastcall FUN_004d21c0(void *this);

__declspec(naked) void __fastcall FUN_00584540(void)
{
    

extern int DAT_007da848;
extern int DAT_007b8c10;
__asm {
SUB  ESP, 0x54
        PUSH EDI
        MOV  EDI, ECX
        PUSH 0x1
        LEA  EAX, [ESP + 0x60]
        PUSH EAX
        LEA  ECX, [ESP + 0x1c]
        MOV  dword ptr [ESP + 0x18], EDI
        CALL FUN_004d1f80
        MOV  ECX, dword ptr [ESP + 0x24]
        MOV  EDX, dword ptr [ESP + 0x28]
        MOV  EAX, dword ptr [ESP + 0x30]
        SUB  ECX, EDX
        ADD  ECX, EAX
        JZ   l_cleanup
        PUSH EBX
        PUSH EBP
        PUSH ESI
    l_loop:
        MOV  EAX, dword ptr [ESP + 0x20]
        PUSH 0x4
        LEA  EDX, [ESP + 0x1c]
        PUSH EDX
        LEA  ECX, [ESP + 0x28]
        CALL dword ptr [EAX + 0x20]         ; virtual call
        LEA  ECX, [ESP + 0x14]
        PUSH ECX
        LEA  EDX, [ESP + 0x24]
        PUSH EDX
        MOV  dword ptr [ESP + 0x1c], 0x0
        CALL FUN_00412a00
        MOV  EDX, dword ptr [ESP + 0x28]
        ADD  ESP, 0x8
        PUSH 0x1
        LEA  EAX, [ESP + 0x17]
        PUSH EAX
        LEA  ECX, [ESP + 0x28]
        CALL dword ptr [EDX + 0x20]         ; virtual call
        MOV  EAX, dword ptr [ESP + 0x14]
        mov ecx, dword ptr [DAT_007da848]
        PUSH 0x0
        PUSH EAX
        CALL FUN_0048f380
        PUSH 0x1c
        MOV  EBP, EAX
        CALL FUN_004084d0
        MOV  ESI, EAX
        ADD  ESP, 0x4
        TEST ESI, ESI
        JZ   l_check_flag
        mov ecx, dword ptr [DAT_007b8c10]
        MOV  BL, byte ptr [ESP + 0x13]
        MOV  EDI, dword ptr [ESP + 0x18]
        PUSH ECX
        MOV  ECX, ESI
        CALL FUN_00415180
        XOR  EAX, EAX
        MOV  dword ptr [ESI + 0x14], EDI
        MOV  EDI, dword ptr [ESP + 0x1c]
        MOV  dword ptr [ESI + 0x8], EAX
        MOV  dword ptr [ESI + 0xc], EAX
        MOV  dword ptr [ESI], 0x782220
        MOV  dword ptr [ESI + 0x10], EBP
        MOV  byte ptr [ESI + 0x18], BL
        JMP  l_after_alloc
    l_check_flag:
        XOR  ESI, ESI
    l_after_alloc:
        MOV  AL, byte ptr [ESP + 0x13]
        TEST AL, AL
        JZ   l_add_to_list
        MOV  dword ptr [EDI + 0x970], ESI
        JMP  l_check_refcount
    l_add_to_list:
        LEA  EDX, [ESP + 0x18]
        PUSH EDX
        PUSH ESI
        LEA  ECX, [EDI + 0x974]
        CALL FUN_00416a90
    l_check_refcount:
        MOV  EAX, dword ptr [ESP + 0x14]
        TEST EAX, EAX
        JZ   l_check_loop
        MOV  CL, byte ptr [EAX - 0x1]
        DEC  EAX
        DEC  CL
        MOV  byte ptr [EAX], CL
        JNZ  l_check_loop
        PUSH EAX
        CALL FUN_004084e0
        ADD  ESP, 0x4
    l_check_loop:
        MOV  EAX, dword ptr [ESP + 0x30]
        MOV  EDX, dword ptr [ESP + 0x34]
        MOV  ECX, dword ptr [ESP + 0x3c]
        SUB  EAX, EDX
        ADD  EAX, ECX
        JNZ  l_loop
        POP  ESI
        POP  EBP
        POP  EBX
    l_cleanup:
        LEA  ECX, [ESP + 0x14]
        CALL FUN_004d21c0
        POP  EDI
        ADD  ESP, 0x54
        RET  0x4
    }


}
