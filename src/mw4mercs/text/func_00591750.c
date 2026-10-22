/* Auto-generated inline asm for FUN_00591750 (0x00591750) */

extern void __stdcall FUN_00501b40(void);
extern void __stdcall FUN_004084e0(void *);

__declspec(naked) void FUN_00591750(void)
{
    

extern int DAT_007f1fa4;
__asm {
PUSH ESI
        mov esi, dword ptr [DAT_007f1fa4]
        TEST ESI, ESI
        JZ   skip_free
        MOV  ECX, ESI
        CALL FUN_00501b40
        PUSH ESI
        CALL FUN_004084e0
        ADD  ESP, 0x4
skip_free:
        mov dword ptr [DAT_007f1fa4], 0x0
        POP  ESI
        RET
    }


}
