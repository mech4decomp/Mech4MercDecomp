/*
 * FUN_00661CB0 (57 B) — __fastcall (ECX = this).
 *
 * Constructor: calls FUN_006A24C0, sets vtable 0x7952D0, calls
 * FUN_006A2400(this+0xc, 1, 0x3f800000), FUN_006A2800(this+0x1c,
 * 0x3fc00000, 0x41200000), sets vtable 0x7952C0, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_006a24c0(void *this);
extern void __fastcall FUN_006a2400(void *this, int a, int b);
extern void __fastcall FUN_006a2800(void *this, int a, int b);

__declspec(naked) void *__fastcall FUN_00661cb0(void *this)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_006a24c0
        push    0x3f800000
        push    0x1
        lea     ecx, [esi + 0xc]
        mov     dword ptr [esi], 0x7952d0
        call    FUN_006a2400
        push    0x41200000
        push    0x3fc00000
        lea     ecx, [esi + 0x1c]
        call    FUN_006a2800
        mov     dword ptr [esi], 0x7952c0
        mov     eax, esi
        pop     esi
        ret
    }
}
