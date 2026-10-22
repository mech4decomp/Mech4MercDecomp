/* Auto-generated inline asm for FUN_00591390 (0x00591390) */

extern void __stdcall FUN_00416c60(void);
extern void __stdcall FUN_004084e0(void *);

__declspec(naked) void FUN_00591390(void)
{
    __asm {
        PUSH ESI
        MOV  ESI, ECX
        CALL FUN_00416c60
        TEST byte ptr [ESP + 0x8], 0x1
        JZ   skip_delete
        PUSH ESI
        CALL FUN_004084e0
        ADD  ESP, 0x4
skip_delete:
        MOV  EAX, ESI
        POP  ESI
        RET  0x4
    }
}
