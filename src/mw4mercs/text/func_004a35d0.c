/*
 * FUN_004A35D0 (129 B) — __thiscall MLR object destructor. Sets vtable
 *   pointer 0x770304, frees six member pointers via FUN_004084e0, then calls
 *   FUN_004937f0(this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __stdcall FUN_004084e0(void *ptr);
extern void __fastcall FUN_004937f0(void);

__declspec(naked) void __stdcall FUN_004a35d0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x770304
        mov     eax, dword ptr [esi + 0x110]
        test    eax, eax
        jz      l_35ec
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_35ec:
        mov     eax, dword ptr [esi + 0x104]
        test    eax, eax
        jz      l_35ff
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_35ff:
        mov     eax, dword ptr [esi + 0xc8]
        test    eax, eax
        jz      l_3612
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_3612:
        mov     eax, dword ptr [esi + 0xa8]
        test    eax, eax
        jz      l_3625
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_3625:
        mov     eax, dword ptr [esi + 0x88]
        test    eax, eax
        jz      l_3638
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_3638:
        mov     eax, dword ptr [esi + 0x68]
        test    eax, eax
        jz      l_3648
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_3648:
        mov     ecx, esi
        call    FUN_004937f0
        pop     esi
        ret
    }
}
