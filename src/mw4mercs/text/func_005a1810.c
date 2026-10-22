/* Auto-generated inline asm for FUN_005a1810 (0x005A1810) */

#include <stddef.h>

void __declspec(naked) FUN_005a1810(void)
{
    

extern void __cdecl FUN_1004084d3(void);
extern int DAT_007dc140;
extern void __cdecl FUN_1004d5bf0(void);
extern int DAT_007f2038;
__asm {
PUSH 0x20
        call FUN_1004084d3
        ADD  ESP, 0x4
        TEST EAX, EAX
        JZ   alloc_failed
        mov ecx, dword ptr [DAT_007dc140]
        PUSH 0x0
        PUSH 0x0
        PUSH ECX
        PUSH 0x783f44
        PUSH 0x4b2
        MOV  ECX, EAX
        call FUN_1004d5bf0
        mov dword ptr [DAT_007f2038], eax
        RET
alloc_failed:
        mov dword ptr [DAT_007f2038], 0x0
        RET
    }


}
