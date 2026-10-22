/*
 * FUN_004961C0 (49 B) — __thiscall (ECX = this), RET 0x8.
 * Constructor: calls FUN_004a29d0(singleton, param1, param2), sets vtable,
 * zeroes field at +0x18c.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern void __fastcall FUN_004a29d0(void *singleton, void *param1, void *param2);

extern int DAT_007da960;

__declspec(naked) void __fastcall FUN_004961c0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x08]
        mov     edx, dword ptr [DAT_007da960]   ; mov edx, [0x007da960]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x08]
        push    eax
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_004a29d0
        mov     dword ptr [esi], 0x007701ac
        mov     dword ptr [esi + 0x18c], 0x00000000
        mov     eax, esi
        pop     esi
        ret     0x08
    }
}
