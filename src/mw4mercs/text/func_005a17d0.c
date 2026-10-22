/* Auto-generated inline asm for FUN_005a17d0 (0x005A17D0) */

#include <stddef.h>

void __declspec(naked) FUN_005a17d0(void)
{
    

extern void __cdecl FUN_100416c62(void);
extern void __cdecl FUN_1004084d5(void);
__asm {
PUSH ESI
        MOV  ESI, ECX
        call FUN_100416c62
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
