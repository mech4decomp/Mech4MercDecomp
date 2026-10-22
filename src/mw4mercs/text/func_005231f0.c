/*
 * FUN_005231f0 (198 B) — Switch-based property setter.
 *
 * __thiscall (ECX = this). Reads a value from *param_1[8], uses param_1[4]
 * as a switch index to write the value into a struct at this+0x40ee8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

__declspec(naked) void FUN_005231f0(void)
{
    __asm {
        mov     edx, dword ptr [esp + 4]
        mov     eax, dword ptr [edx + 8]
        mov     edx, dword ptr [edx + 4]
        push    esi
        lea     esi, [edx - 1]
        cmp     esi, 0x1f
        ja      l_default
        xor     edx, edx
        mov     dl, byte ptr [esi + 0x5232dc]
        jmp     dword ptr [edx*4 + 0x5232b8]
l_case1:
        mov     edx, dword ptr [eax]
        mov     ecx, dword ptr [ecx + 0x40ee8]
        mov     dword ptr [ecx + 0x18], edx
        mov     eax, 0x1
        pop     esi
        ret     0x8
l_case2:
        mov     edx, dword ptr [eax]
        mov     ecx, dword ptr [ecx + 0x40ee8]
        mov     dword ptr [ecx + 0x20], edx
        mov     eax, 0x1
        pop     esi
        ret     0x8
l_case3:
        mov     edx, dword ptr [eax]
        mov     ecx, dword ptr [ecx + 0x40ee8]
        mov     dword ptr [ecx + 0x1c], edx
        mov     eax, 0x1
        pop     esi
        ret     0x8
l_case4:
        mov     edx, dword ptr [eax]
        mov     ecx, dword ptr [ecx + 0x40ee8]
        mov     dword ptr [ecx + 0x24], edx
        mov     eax, 0x1
        pop     esi
        ret     0x8
l_case5:
        mov     edx, dword ptr [eax]
        mov     ecx, dword ptr [ecx + 0x40ee8]
        mov     dword ptr [ecx + 0x28], edx
        mov     eax, 0x1
        pop     esi
        ret     0x8
l_case6:
        mov     edx, dword ptr [eax]
        mov     ecx, dword ptr [ecx + 0x40ee8]
        mov     dword ptr [ecx + 0x2c], edx
        mov     eax, 0x1
        pop     esi
        ret     0x8
l_case1f:
        mov     edx, dword ptr [eax]
        mov     ecx, dword ptr [ecx + 0x40ee8]
        mov     dword ptr [ecx + 0x48], edx
        mov     eax, 0x1
        pop     esi
        ret     0x8
l_case20:
        mov     ecx, dword ptr [ecx + 0x40ee8]
        mov     edx, dword ptr [eax]
        mov     dword ptr [ecx + 0x4c], edx
l_default:
        mov     eax, 0x1
        pop     esi
        ret     0x8
    }
}
