/* FUN_00591c80 - 30 bytes, __thiscall scalar deleting destructor */

extern void __fastcall FUN_00591ca0(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_00591c80(void)
{
    __asm {
        PUSH ESI
        MOV  ESI, ECX
        CALL FUN_00591ca0
        TEST byte ptr [ESP + 0x8], 0x1
        JZ   skip_free
        PUSH ESI
        CALL FUN_004084e0
        ADD  ESP, 0x4
skip_free:
        MOV  EAX, ESI
        POP  ESI
        RET  0x4
    }
}
