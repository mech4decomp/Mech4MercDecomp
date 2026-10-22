/*
 * FUN_00523300 (184 B) — Switch-based float/int property getter.
 *
 * __thiscall (ECX = this). Reads a value from param_1[4], uses it as a switch
 * index to read a float or int from a struct at this+0x40ee8, converts float
 * to int via _ftol(), stores to *param_1[8].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __cdecl _ftol(void);

__declspec(naked) void FUN_00523300(void)
{
    

extern int DAT_0076d048;
__asm {
mov     eax, dword ptr [esp + 4]
        push    esi
        mov     esi, dword ptr [eax + 8]
        mov     eax, dword ptr [eax + 4]
        add     eax, -9
        cmp     eax, 0x13
        ja      l_default
        xor     edx, edx
        mov     dl, byte ptr [eax + 0x5233d0]
        jmp     dword ptr [edx*4 + 0x5233b8]
l_case9:
        mov     eax, dword ptr [ecx + 0x40ee8]
        fld     dword ptr [eax + 0x3c]
        fmul dword ptr [DAT_0076d048]
        call    _ftol
        mov     dword ptr [esi], eax
        mov     eax, 0x1
        pop     esi
        ret     0x8
l_case10:
        mov     ecx, dword ptr [ecx + 0x40ee8]
        fld     dword ptr [ecx + 0x38]
        fmul dword ptr [DAT_0076d048]
        call    _ftol
        mov     dword ptr [esi], eax
        mov     eax, 0x1
        pop     esi
        ret     0x8
l_case11:
        mov     edx, dword ptr [ecx + 0x40ee8]
        fld     dword ptr [edx + 0x34]
        fmul dword ptr [DAT_0076d048]
        call    _ftol
        mov     dword ptr [esi], eax
        mov     eax, 0x1
        pop     esi
        ret     0x8
l_case1b:
        mov     eax, dword ptr [ecx + 0x40ee8]
        mov     ecx, dword ptr [eax + 0x40]
        mov     dword ptr [esi], ecx
        mov     eax, 0x1
        pop     esi
        ret     0x8
l_case1c:
        mov     edx, dword ptr [ecx + 0x40ee8]
        mov     eax, dword ptr [edx + 0x44]
        mov     dword ptr [esi], eax
        mov     eax, 0x1
        pop     esi
        ret     0x8
l_default:
        mov     dword ptr [esi], 0x32
        or      eax, 0xffffffff
        pop     esi
        ret     0x8
    }


}
