/*
 * FUN_004AA3E0 (57 B) — __thiscall MLR object constructor (RET 0xc).
 *   Forwards (this, param_1, param_2, param_3) to FUN_004AB1E0, then sets
 *   the vtable pointer 0x00770464 and two size fields, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_004ab1e0(void);

__declspec(naked) void __fastcall FUN_004aa3e0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 4]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0xc]
        push    eax
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_004ab1e0
        mov     dword ptr [esi], 0x770464
        mov     dword ptr [esi + 0x26c], 0x4c
        mov     dword ptr [esi + 0x270], 0x30
        mov     eax, esi
        pop     esi
        ret     0xc
    }
}
