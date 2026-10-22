/* func_004dadd0.c - FUN_004dadd0 (86 B) - __thiscall, RET 0x4
 * Clears bit5 of this+0x10 (calling vtable+0x1c if arg set), then walks a
 * linked list at this+0xbc calling vtable+0x48 on each node.
 */
#include <stddef.h>

__declspec(naked) void func_004dadd0(void)
{
    __asm {
        PUSH ESI
        MOV ESI,ECX
        PUSH EDI
        MOV EDI,dword ptr [ESI + 0x10]
        MOV EAX,EDI
        SHR EAX,0x5
        TEST AL,0x1
        JZ skip_bit
        MOV AL,byte ptr [ESP + 0xc]
        TEST AL,AL
        JZ clear_bit
        MOV ECX,dword ptr [ESI + 0xd8]
        CALL dword ptr [ECX + 0x1c]
        MOV byte ptr [ESP + 0xc],0x0
clear_bit:
        AND EDI,0xffffffdf
        MOV dword ptr [ESI + 0x10],EDI
skip_bit:
        MOV EAX,dword ptr [ESI + 0xbc]
        TEST EAX,EAX
        JZ done
        MOV EDI,dword ptr [ESP + 0xc]
        MOV ESI,EAX
loop_start:
        TEST ESI,ESI
        JZ done
        MOV ECX,dword ptr [ESI]
        TEST ECX,ECX
        MOV ESI,dword ptr [ESI + 0x4]
        JZ done
        MOV EDX,dword ptr [ECX]
        PUSH EDI
        CALL dword ptr [EDX + 0x48]
        JMP loop_start
done:
        POP EDI
        POP ESI
        RET 0x4
    }
}
