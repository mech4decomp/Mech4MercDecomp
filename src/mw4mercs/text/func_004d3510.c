/*
 * FUN_004D3510 (39 B) - Constructor.
 *
 * __thiscall (ECX = this), RET 0xC, 3 stack params.
 * Calls FUN_004DD1F0(param_1, param_2), sets vtable to 0x7727DC,
 * sets field_18 = param_3, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_004DD1F0(void *this, void *param_1, void *param_2);

__declspec(naked) void __stdcall FUN_004D3510(void)
{
    __asm {
        mov     eax, [esp + 0x08]       ; param_2
        push    esi
        mov     esi, ecx                ; this
        mov     ecx, [esp + 0x08]       ; param_1
        push    eax                     ; param_2
        push    ecx                     ; param_1
        mov     ecx, esi                ; this
        call    FUN_004DD1F0
        mov     edx, [esp + 0x10]       ; param_3
        mov     dword ptr [esi], 0x007727DC  ; vtable
        mov     [esi + 0x18], edx       ; field_18 = param_3
        mov     eax, esi                ; return this
        pop     esi
        ret     0x0C
    }
}
