/* func_004dad70.c - FUN_004dad70 (71 B) - __thiscall, RET 0x8
 * Sets this+0x144=1; if bit6 of this+0x10 set, calls FUN_004d67d0(this);
 * else stores two args at this+0xe4/0xe8.
 */
#include <stddef.h>

extern int g_7dab44;   /* [0x007dab44] */
extern int g_7dab40;   /* [0x007dab40] */
extern void __cdecl FUN_004d67d0(void);

__declspec(naked) void func_004dad70(void)
{
    __asm {
        MOV EAX,dword ptr [ECX + 0x10]
        SHR EAX,0x6
        TEST AL,0x1
        MOV byte ptr [ECX + 0x144],0x1
        JZ store_args
        PUSH ECX
        MOV ECX,dword ptr [g_7dab44]
        MOV EDX,dword ptr [ECX]
        XOR EDX,dword ptr [g_7dab40]
        MOV ECX,dword ptr [EDX]
        XOR ECX,0x85739531
        CALL FUN_004d67d0
        RET 0x8
store_args:
        MOV EAX,dword ptr [ESP + 0x4]
        MOV EDX,dword ptr [ESP + 0x8]
        MOV dword ptr [ECX + 0xe4],EAX
        MOV dword ptr [ECX + 0xe8],EDX
        RET 0x8
    }
}
