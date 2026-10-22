// func_005471A0 - checks object state via XOR-decoded pointer chain
// Returns 0, 1, or 2 based on object fields

#include "mw4/common.h"

__declspec(naked) int __stdcall func_005471A0(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [ecx + 0xC]
        xor     eax, 0x85739531
        mov     cl, byte ptr [eax + 0x17]
        test    cl, cl
        jne     L1
        xor     eax, eax
        ret
    L1:
        mov     cl, byte ptr [eax + 0x16]
        test    cl, cl
        je      L2
        mov     eax, dword ptr [eax + 0x50]
        mov     ecx, dword ptr [eax + 0xE4]
        xor     edx, edx
        test    ecx, ecx
        setne   dl
        inc     edx
        mov     eax, edx
        ret
    L2:
        mov     eax, dword ptr [eax + 0x54]
        mov     ecx, dword ptr [eax + 0xE4]
        xor     edx, edx
        test    ecx, ecx
        setne   dl
        inc     edx
        mov     eax, edx
        ret
    }


}
