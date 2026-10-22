/* FUN_00591860 - 116 bytes, __cdecl */
/* Allocates 0xA8 bytes, initializes via FUN_00501A20, stores global pointer */

#include <windows.h>

extern void *__cdecl FUN_004084d0(unsigned int size);
extern void __cdecl FUN_00501a20(void);

extern int DAT_007F25B0;
extern int DAT_007F25B4;
extern int DAT_007F1FA8;

__declspec(naked) void FUN_00591860(void)
{
    __asm {
        PUSH ESI
        PUSH 0xA8
        CALL FUN_004084d0
        MOV  ESI, EAX
        ADD  ESP, 0x4
        TEST ESI, ESI
        JZ   alloc_failed

        MOV  EAX, dword ptr [DAT_007F25B0]
        MOV  ECX, dword ptr [DAT_007F25B4]

        PUSH 0x502C60
        PUSH 0x5028B0
        PUSH 0x674890
        PUSH 0x0
        PUSH 0x674770
        PUSH EAX
        PUSH 0x6746E0
        PUSH 0x591910
        PUSH 0x0
        PUSH 0x0
        PUSH ECX
        PUSH 0x7824A8
        PUSH 0x4CB
        MOV  ECX, ESI
        CALL FUN_00501a20
        MOV  dword ptr [ESI + 0xA4], 0x5F0A60
        MOV  dword ptr [DAT_007F1FA8], ESI
        POP  ESI
        RET

alloc_failed:
        MOV  dword ptr [DAT_007F1FA8], 0
        POP  ESI
        RET
    }
}
