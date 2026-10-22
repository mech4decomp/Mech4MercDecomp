/* Auto-generated inline asm for FUN_00591330 (0x00591330) */

extern void __stdcall FUN_004169c0(void);
extern void __stdcall FUN_00416130(void *);
extern void __stdcall FUN_00415e30(void *);
extern void __stdcall FUN_004084e0(void *);

extern int DAT_007f1f9c;
extern int DAT_007f1fa0;

__declspec(naked) void FUN_00591330(void)
{
    __asm {
        PUSH ESI
        MOV  ESI, ECX
        CALL FUN_004169c0
        TEST byte ptr [ESP + 0x8], 0x1
        JZ   skip_release
        MOV  ECX, dword ptr [DAT_007f1fa0]
        PUSH ESI
        CALL FUN_00416130
        DEC  dword ptr [DAT_007f1f9c]
        JNZ  skip_release
        PUSH EDI
        MOV  EDI, dword ptr [DAT_007f1fa0]
        TEST EDI, EDI
        JZ   zero_ptr
        MOV  ECX, EDI
        CALL FUN_00415e30
        PUSH EDI
        CALL FUN_004084e0
        ADD  ESP, 0x4
zero_ptr:
        POP  EDI
        MOV  EAX, ESI
        MOV  dword ptr [DAT_007f1fa0], 0
        POP  ESI
        RET  0x4
skip_release:
        MOV  EAX, ESI
        POP  ESI
        RET  0x4
    }
}
