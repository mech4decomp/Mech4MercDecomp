/* Auto-generated inline asm for FUN_005a1850 (0x005A1850) */

#include <stddef.h>

void __declspec(naked) FUN_005a1850(void)
{
    

extern int DAT_007f2038;
extern void __cdecl FUN_1004d5d18(void);
extern void __cdecl FUN_1004084d2(void);
__asm {
PUSH ESI
        mov esi, dword ptr [DAT_007f2038]
        TEST ESI, ESI
        JZ   skip_delete
        MOV  ECX, ESI
        call FUN_1004d5d18
        PUSH ESI
        call FUN_1004084d2
        ADD  ESP, 0x4
skip_delete:
        mov dword ptr [DAT_007f2038], 0x0
        POP  ESI
        RET
    }


}
