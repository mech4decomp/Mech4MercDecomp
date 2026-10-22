/* FUN_005919D0 - 119 bytes, __cdecl */
/* Allocates 0xA8 bytes, initializes via FUN_00501A20, stores global pointer */

#include <windows.h>

extern void *__cdecl FUN_004084d0(unsigned int size);
extern void __cdecl FUN_00501a20(void);

extern int DAT_007F25BC;
extern int DAT_007F25C0;
extern int DAT_007F1FAC;

__declspec(naked) void FUN_005919d0(void)
{
    __asm {
        PUSH ESI
        PUSH 0xA8
        CALL FUN_004084d0
        MOV  ESI, EAX
        ADD  ESP, 0x4
        TEST ESI, ESI
        JZ   alloc_failed

        MOV  EAX, dword ptr [DAT_007F25BC]
        MOV  ECX, dword ptr [DAT_007F25C0]

        PUSH 0x502C60
        PUSH 0x5028B0
        PUSH 0x66A3C0
        PUSH 0x62EC80
        PUSH 0x66A150
        PUSH EAX
        PUSH 0x62DF30
        PUSH 0x591A80
        PUSH 0x0
        PUSH 0x0
        PUSH ECX
        PUSH 0x78257C
        PUSH 0x4C2
        MOV  ECX, ESI
        CALL FUN_00501a20
        MOV  dword ptr [ESI + 0xA4], 0x6039E0
        MOV  dword ptr [DAT_007F1FAC], ESI
        POP  ESI
        RET

alloc_failed:
        MOV  dword ptr [DAT_007F1FAC], 0
        POP  ESI
        RET
    }
}
