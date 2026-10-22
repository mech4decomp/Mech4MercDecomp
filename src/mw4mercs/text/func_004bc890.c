/* func_004bc890.c — MLR ElementRenderer LOD lookup/remove (__thiscall) */
#include <stddef.h>

extern void __cdecl FUN_004bf590(void);

__declspec(naked) void func_004bc890(void)
{
    __asm {
        push ebx
        mov ebx, dword ptr [esp+0x8]
        push ebp
        push esi
        push edi
        mov edi, dword ptr [ecx+0x158]
        xor edx, edx
        test di, di
        jbe L_c8e0
        mov ebp, dword ptr [ecx+0x154]
        mov esi, dword ptr [ecx+0x144]
L_c8b1:
        mov eax, edx
        and eax, 0xffff
        cmp dword ptr [esi+eax*4], ebx
        jz L_c8d0
        inc edx
        cmp dx, di
        jc L_c8b1
        push ebx
        call FUN_004bf590
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
L_c8d0:
        mov dword ptr [ebp+eax*8], 0x0
        mov dword ptr [ebp+eax*8+0x4], 0x0
L_c8e0:
        push ebx
        call FUN_004bf590
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    }
}
