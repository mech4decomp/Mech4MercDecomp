/*
 * FUN_005230e0 (204 B) — Switch-based property getter.
 *
 * __thiscall (ECX = this). Reads a field from param_1, uses it as a switch
 * index to read a value from a struct at this+0x40ee8, stores it to *param_1[8].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

__declspec(naked) void FUN_005230e0(void)
{
    __asm {
        mov     edx, dword ptr [esp + 4]
        mov     eax, dword ptr [edx + 8]
        mov     edx, dword ptr [edx + 4]
        push    esi
        lea     esi, [edx - 1]
        cmp     esi, 0x1f
        mov     dword ptr [eax], 0
        ja      l_default
        xor     edx, edx
        mov     dl, byte ptr [esi + 0x5231d0]
        jmp     dword ptr [edx*4 + 0x5231ac]
l_case1:
        mov     ecx, dword ptr [ecx + 0x40ee8]
        mov     edx, dword ptr [ecx + 0x18]
        mov     dword ptr [eax], edx
        mov     eax, 0x1
        pop     esi
        ret     0x8
l_case2:
        mov     ecx, dword ptr [ecx + 0x40ee8]
        mov     edx, dword ptr [ecx + 0x20]
        mov     dword ptr [eax], edx
        mov     eax, 0x1
        pop     esi
        ret     0x8
l_case3:
        mov     ecx, dword ptr [ecx + 0x40ee8]
        mov     edx, dword ptr [ecx + 0x1c]
        mov     dword ptr [eax], edx
        mov     eax, 0x1
        pop     esi
        ret     0x8
l_case4:
        mov     ecx, dword ptr [ecx + 0x40ee8]
        mov     edx, dword ptr [ecx + 0x24]
        mov     dword ptr [eax], edx
        mov     eax, 0x1
        pop     esi
        ret     0x8
l_case5:
        mov     ecx, dword ptr [ecx + 0x40ee8]
        mov     edx, dword ptr [ecx + 0x28]
        mov     dword ptr [eax], edx
        mov     eax, 0x1
        pop     esi
        ret     0x8
l_case6:
        mov     ecx, dword ptr [ecx + 0x40ee8]
        mov     edx, dword ptr [ecx + 0x2c]
        mov     dword ptr [eax], edx
        mov     eax, 0x1
        pop     esi
        ret     0x8
l_case1f:
        mov     ecx, dword ptr [ecx + 0x40ee8]
        mov     edx, dword ptr [ecx + 0x48]
        mov     dword ptr [eax], edx
        mov     eax, 0x1
        pop     esi
        ret     0x8
l_case20:
        mov     ecx, dword ptr [ecx + 0x40ee8]
        mov     edx, dword ptr [ecx + 0x4c]
        mov     dword ptr [eax], edx
l_default:
        mov     eax, 0x1
        pop     esi
        ret     0x8
    }
}
