/* FUN_00584670 - constructor-like __thiscall, 36 bytes */
extern void FUN_00415380(void);
extern void FUN_004084e0(void *);

__declspec(naked) void * FUN_00584670(void)
{
    
__asm {
PUSH ESI
        MOV  ESI, ECX
        MOV  DWORD PTR [ESI], 0x00782220
        CALL FUN_00415380
        test    byte ptr [esp + 0x8], 1
        JE   skip_free
        PUSH ESI
        CALL FUN_004084e0
        ADD  ESP, 0x4
skip_free:
        MOV  EAX, ESI
        POP  ESI
        RET  0x4
    }


}
