/* FUN_00591810 - 30 bytes, __thiscall */
/* Calls FUN_00591830, then conditionally deletes `this` if param_2 & 1 */

extern void __cdecl FUN_00591830(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void FUN_00591810(void)
{
    __asm {
        PUSH ESI
        MOV  ESI, ECX
        CALL FUN_00591830
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
