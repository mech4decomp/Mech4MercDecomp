/* func_004dacd0.c - FUN_004dacd0 (111 B) - __thiscall teardown/destructor
 * Iterates 2 slots at this+0xd0, calls virtual method at vtable+8, then
 * clears; releases objects at this+0x124 and this+0x128.
 */
#include <stddef.h>

__declspec(naked) void func_004dacd0(void)
{
    __asm {
        PUSH EBX
        PUSH EBP
        PUSH ESI
        MOV EBP,ECX
        PUSH EDI
        LEA EDI,[EBP + 0xd0]
        MOV EBX,0x2
loop_start:
        MOV ESI,dword ptr [EDI]
        TEST ESI,ESI
        JZ loop_next
        MOV EAX,dword ptr [ESI]
        MOV ECX,ESI
        CALL dword ptr [EAX + 0x8]
        TEST AL,AL
        JZ loop_next
        MOV EDX,dword ptr [ESI]
        PUSH 0x1
        MOV ECX,ESI
        CALL dword ptr [EDX]
        MOV dword ptr [EDI],0x0
loop_next:
        ADD EDI,0x4
        DEC EBX
        JNZ loop_start
        MOV ECX,dword ptr [EBP + 0x124]
        TEST ECX,ECX
        JZ skip_124
        MOV EAX,dword ptr [ECX]
        PUSH 0x1
        CALL dword ptr [EAX]
        MOV dword ptr [EBP + 0x124],0x0
skip_124:
        MOV ECX,dword ptr [EBP + 0x128]
        TEST ECX,ECX
        JZ skip_128
        MOV EDX,dword ptr [ECX]
        PUSH 0x1
        CALL dword ptr [EDX]
        MOV dword ptr [EBP + 0x128],0x0
skip_128:
        POP EDI
        POP ESI
        POP EBP
        POP EBX
        RET
    }
}
