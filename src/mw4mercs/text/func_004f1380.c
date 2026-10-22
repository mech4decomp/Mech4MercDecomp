/*
 * FUN_004F1380 (39 B) — Virtual method call with conditional destructor.
 *
 * __thiscall (ECX = this).
 * Calls vtable[0xC](field_3C, this+0x30, this+0x30, field_34).
 * If return value is non-zero, calls FUN_004F14A0 as destructor.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_004f14a0(void *this);

__declspec(naked) void FUN_004f1380(void)
{
    __asm {
        push    esi
        push    edi
        mov     esi, ecx
        mov     edi, [esi + 0x3C]
        mov     ecx, [esi + 0x38]
        mov     edx, [ecx]              ; vtable
        push    edi
        lea     eax, [esi + 0x30]
        push    eax
        push    eax
        mov     eax, [esi + 0x34]
        push    eax
        call    dword ptr [edx + 0x0C]
        test    al, al
        jz      l_skip
        mov     ecx, esi
        call    FUN_004f14a0
    l_skip:
        pop     edi
        pop     esi
        ret
    }
}
