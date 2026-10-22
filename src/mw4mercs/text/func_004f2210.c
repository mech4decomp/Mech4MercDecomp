/*
 * FUN_004F2210 (39 B) - vcall-0x20 wrapper.
 *
 * Calls vtable[0x20] twice: first with &param_1, then with &local.
 * Reads/writes 4 bytes via the interface.
 *
 * __stdcall RET 4, 1 param (pointer to 4-byte value).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

__declspec(naked) void __stdcall FUN_004F2210(void)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, [esp + 0x0C]       ; param_1
        mov     eax, [esi]              ; vtable
        push    0x4
        lea     ecx, [esp + 0x10]       ; &param_1 on stack
        push    ecx
        mov     ecx, esi                ; this
        call    dword ptr [eax + 0x20]  ; vcall(0x20)(&param_1, 4)
        mov     edx, [esi]              ; vtable
        push    0x4
        lea     eax, [esp + 0x08]       ; &local
        push    eax
        mov     ecx, esi                ; this
        call    dword ptr [edx + 0x20]  ; vcall(0x20)(&local, 4)
        pop     esi
        pop     ecx
        ret     0x4
    }
}
