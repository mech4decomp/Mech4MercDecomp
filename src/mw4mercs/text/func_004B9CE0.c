/*
 * FUN_004B9CE0 (100 B) — __stdcall, 3 args (ret 0xc), ecx=this. Copies a
 * 6-dword struct and dispatches a virtual call.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_00491280(void);

__declspec(naked) void FUN_004B9CE0(void)
{
    __asm {
        sub     esp, 0x24
        push    ebx
        push    esi
        mov     ebx, ecx
        push    edi
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x10], 0
        call    FUN_00491280
        mov     eax, dword ptr [esp + 0x3c]
        mov     edx, dword ptr [esp + 0x34]
        mov     esi, dword ptr [esp + 0x38]
        and     eax, 0x3f
        mov     dword ptr [esp + 0x10], eax
        mov     eax, dword ptr [edx + 0x26c]
        lea     ecx, [ebx + 0x80]
        mov     dword ptr [esp + 0xc], ecx
        mov     ecx, 6
        lea     edi, [esp + 0x14]
        rep     movsd
        mov     ecx, dword ptr [ebx + 0x144]
        mov     dword ptr [esp + 0x2c], eax
        mov     edx, dword ptr [ecx]
        lea     eax, [esp + 0xc]
        push    eax
        call    dword ptr [edx + 0x14]
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x24
        ret     0xc
    }
}
