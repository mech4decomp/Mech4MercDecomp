/*
 * FUN_00481BA0 (43 B) — Refcount release + vtable set + sub-dtor.
 *
 * __fastcall (ECX = this). Releases refcounted pointer at +0x8C,
 * sets vtable to 0x76F9C8, calls FUN_00482150.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_00482150(void *this);

__declspec(naked) void __fastcall FUN_00481ba0(void *this)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x8c]
        test    ecx, ecx
        mov     dword ptr [esi], 0x76f9c8
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
