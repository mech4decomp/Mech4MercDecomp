/* Auto-generated inline asm for FUN_005a1930 (0x005A1930) */

#include <stddef.h>

void __declspec(naked) FUN_005a1930(void)
{
    

extern void __cdecl FUN_005a1952(void);
extern void __cdecl FUN_1004084d5(void);
__asm {
PUSH ESI
        MOV  ESI, ECX
        call FUN_005a1952
        TEST byte ptr [ESP + 0x8], 0x1
        JZ   skip_delete
        PUSH ESI
        call FUN_1004084d5
        ADD  ESP, 0x4
skip_delete:
        MOV  EAX, ESI
        POP  ESI
        RET  0x4
    }


}
