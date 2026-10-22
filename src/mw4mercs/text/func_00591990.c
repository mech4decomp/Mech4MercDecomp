/* FUN_00591990 - 30 bytes, __thiscall */
/* Destructor: calls FUN_005919B0, then conditionally frees `this` if param_2 & 1 */

extern void __cdecl FUN_005919b0(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void FUN_00591990(void)
{
    __asm {
        PUSH ESI
        MOV  ESI, ECX
        CALL FUN_005919b0
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
