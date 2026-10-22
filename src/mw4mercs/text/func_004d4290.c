#include <windows.h>

extern void FUN_004CCCC0(void);
extern int DAT_007dab44;
extern int DAT_007dab40;

__declspec(naked) void FUN_004D4290(void)
{
    __asm {
        mov     eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [ecx + 0x14]
        xor     edx, 0x85739531
        lea     eax, [ecx + 0x14]
        jz      l_ret
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        jmp     FUN_004CCCC0
    l_ret:
        ret
    }
}
