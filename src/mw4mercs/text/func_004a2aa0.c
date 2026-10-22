/*
 * FUN_004A2AA0 (53 B) — __thiscall MLR object destructor. Sets vtable
 *   0x7702e0, calls virtual method [vtable+0] on sub-object at
 *   this+0xf4 (if non-null), frees this+0xa0 via FUN_004084e0, then
 *   calls FUN_00494140.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00494140(void);

__declspec(naked) void __fastcall FUN_004a2aa0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0xf4]
        test    ecx, ecx
        mov     dword ptr [esi], 0x7702e0
        jz      L_2ab9
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
L_2ab9:
        mov     eax, dword ptr [esi + 0xa0]
        test    eax, eax
        jz      L_2acc
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_2acc:
        mov     ecx, esi
        call    FUN_00494140
        pop     esi
        ret
    }
}
