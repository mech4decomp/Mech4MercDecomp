/*
 * FUN_004E0300 (39 B) — __fastcall destructor with singleton fallback.
 *
 * If the singleton obtained via FUN_0041FD80(ecx+0x1c) is non-null,
 * calls its vtable[1](this). Otherwise, if this != NULL, calls
 * this->vtable[0](1) (scalar deleting destructor).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void *__fastcall FUN_0041fd80(void *this);

__declspec(naked) void __fastcall FUN_004e0300(void *this)
{
    __asm {
        push    esi
        mov     esi, ecx                     ; esi = this
        lea     ecx, [esi + 0x1c]            ; ecx = this + 0x1c
        call    FUN_0041fd80                 ; get singleton
        test    eax, eax
        jz      l_fallback
        mov     edx, dword ptr [eax]         ; edx = singleton vtable
        push    esi                          ; push this
        mov     ecx, eax                     ; ecx = singleton
        call    dword ptr [edx + 4]          ; singleton->vtable[1](this)
        pop     esi
        ret
    l_fallback:
        test    esi, esi
        jz      l_done
        mov     eax, dword ptr [esi]         ; eax = this vtable
        push    1
        mov     ecx, esi                     ; ecx = this
        call    dword ptr [eax]              ; this->vtable[0](1)
    l_done:
        pop     esi
        ret
    }
}
