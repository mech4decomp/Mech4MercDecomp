/*
 * FUN_004A94E0 (104 B) — __thiscall MLR sub-object registry init.
 *   Calls FUN_004ABAA0 (base init), zeroes a set of byte/dword fields,
 *   then initializes three sub-objects (FUN_004ADE00 / FUN_004AEB30) with
 *   the float constant 1.0f (0x3F800000).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_004abaa0(void);
extern void __cdecl FUN_004ade00(void);
extern void __cdecl FUN_004aeb30(void);

__declspec(naked) void __fastcall FUN_004a94e0(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        call    FUN_004abaa0
        xor     ebx, ebx
        mov     byte ptr [esi + 0x2b0], bl
        mov     byte ptr [esi + 0x2b2], bl
        mov     byte ptr [esi + 0x2b3], bl
        mov     byte ptr [esi + 0x2b1], bl
        mov     dword ptr [esi + 0x27c], ebx
        push    0x3f800000
        lea     ecx, [esi + 0x280]
        mov     byte ptr [esi + 0x28c], bl
        call    FUN_004ade00
        push    0x3f800000
        lea     ecx, [esi + 0x294]
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0x2a0]
        mov     byte ptr [esi + 0x2ac], bl
        call    FUN_004aeb30
        pop     esi
        pop     ebx
        ret
    }
}
