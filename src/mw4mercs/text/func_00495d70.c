/*
 * FUN_00495D70 (89 B) — __fastcall (ECX = this).
 * Constructor helper: calls FUN_004abaa0, then initializes sub-objects
 * at +0x278 and +0x284 via FUN_004aeb30(1.0f), zeroes field_290,
 * field_298, field_2a0, sets field_2a8=1.0f, field_2b0=1.0f.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern void __fastcall FUN_004abaa0(void);
extern void __fastcall FUN_004aeb30(float val);

__declspec(naked) void __fastcall FUN_00495d70(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004abaa0
        push    0x3f800000
        lea     ecx, [esi + 0x278]
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0x284]
        mov     byte ptr [esi + 0x290], 0x0
        call    FUN_004aeb30
        mov     dword ptr [esi + 0x298], 0x0
        mov     dword ptr [esi + 0x2a0], 0x0
        mov     dword ptr [esi + 0x2a8], 0x3f800000
        mov     dword ptr [esi + 0x2b0], 0x3f800000
        pop     esi
        ret
    }
}
