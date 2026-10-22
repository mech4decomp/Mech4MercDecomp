/* func_004dae30.c - FUN_004dae30 (44 B) - __thiscall, RET 0x4
 * If bit5 of this+0x10 set: call vtable+0x1c if arg nonzero, then clear bit5.
 */
#include <stddef.h>

__declspec(naked) void func_004dae30(void)
{
    __asm {
        PUSH ESI
        PUSH EDI
        MOV EDI,ECX
        MOV ESI,dword ptr [EDI + 0x10]
        MOV EAX,ESI
        SHR EAX,0x5
        TEST AL,0x1
        JZ done
        MOV AL,byte ptr [ESP + 0xc]
        TEST AL,AL
        JZ clear_bit
        MOV ECX,dword ptr [EDI + 0xd8]
        CALL dword ptr [ECX + 0x1c]
clear_bit:
        AND ESI,0xffffffdf
        MOV dword ptr [EDI + 0x10],ESI
done:
        POP EDI
        POP ESI
        RET 0x4
    }
}
