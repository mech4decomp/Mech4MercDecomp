/*
 * FUN_00481560 (43 B) — Base destructor / refcount decrement.
 *
 * __fastcall (ECX = this). Sets vtable to 0x76F988, decrements
 * refcount at this+0x8C->refcount, calls virtual destructor if
 * refcount reaches 0, then calls FUN_00482150.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_00482150(void *this);

__declspec(naked) void __fastcall FUN_00481560(void *this)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x8c]
        test    ecx, ecx
        mov     dword ptr [esi], 0x76f988
        jz      l_call_sub
        dec     dword ptr [ecx + 8]
        jnz     l_call_sub
        test    ecx, ecx
        jz      l_call_sub
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
    l_call_sub:
        mov     ecx, esi
        call    FUN_00482150
        pop     esi
        ret
    }
}
