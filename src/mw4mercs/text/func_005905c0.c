/*
 * 40 bytes — Virtual method lookup via obfuscated vtable.
 * thiscall: ecx = this.
 * Returns an int (vtable method pointer or cached value).
 */

#include <windows.h>

__declspec(naked) int FUN_005905C0(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
mov     eax, dword ptr [ecx + 0x9C4]
        cmp     eax, -1
        jne     l_return
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [ecx + 0x20]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0x290]
l_return:
        ret
    }


}
