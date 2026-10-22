/* Auto-generated inline asm for FUN_005a1990 (0x005A1990) */

#include <stddef.h>

void __declspec(naked) FUN_005a1990(void)
{
    
__asm {
MOV  EAX, dword ptr [ECX + 0x10]
        CMP  EAX, 0x3
        JZ   do_update
        TEST EAX, EAX
        JNZ  skip
do_update:
        MOV  EAX, dword ptr [ESP + 0x4]
        MOV  dword ptr [ECX + 0x10], 0x2
        MOV  dword ptr [ECX + 0x138], 0x0
        MOV  dword ptr [ECX + 0x13c], EAX
skip:
        RET  0x4
    }


}
