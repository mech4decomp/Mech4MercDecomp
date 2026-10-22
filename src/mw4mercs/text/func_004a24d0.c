/*
 * FUN_004A24D0 (75 B) — __thiscall MLR object destructor. Sets vtable
 *   0x7702cc, frees three heap pointers (0x160/0x14c/0x130) via
 *   FUN_004084e0, then calls FUN_004a35d0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004a35d0(void);

__declspec(naked) void __fastcall FUN_004a24d0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x7702cc
        mov     eax, dword ptr [esi + 0x160]
        test    eax, eax
        jz      L_24ec
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_24ec:
        mov     eax, dword ptr [esi + 0x14c]
        test    eax, eax
        jz      L_24ff
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_24ff:
        mov     eax, dword ptr [esi + 0x130]
        test    eax, eax
        jz      L_2512
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_2512:
        mov     ecx, esi
        call    FUN_004a35d0
        pop     esi
        ret
    }
}
