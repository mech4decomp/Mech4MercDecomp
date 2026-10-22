/*
 * FUN_0049A880 (108 B) — __thiscall, RET.
 * MLR particle/flare subsystem. Initializes sub-objects with default scalar
 * values and resets curve sizes.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern void __cdecl FUN_00493880(void);
extern void __cdecl FUN_004aeb30(void);
extern void __cdecl FUN_004adfb0(void);

__declspec(naked) void FUN_0049a880(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00493880
        push    0x3f800000
        lea     ecx, [esi + 0x60]
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0x6c]
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0x78]
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0x84]
        call    FUN_004aeb30
        push    0x0
        lea     ecx, [esi + 0x90]
        call    FUN_004adfb0
        push    0x41200000
        lea     ecx, [esi + 0xa4]
        call    FUN_004adfb0
        mov     byte ptr [esi + 0xb8], 0x0
        mov     byte ptr [esi + 0xb9], 0x1
        pop     esi
        ret
    }
}
