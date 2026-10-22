/*
 * FUN_0049A6C0 (96 B) — __thiscall, RET.
 * MLR particle/flare subsystem. Constructor: initializes sub-objects, sets
 * vtable and default curve sizes.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern void __cdecl FUN_004937b0(void);
extern void __cdecl FUN_004ae3c0(void);

__declspec(naked) void FUN_0049a6c0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    0x52e
        call    FUN_004937b0
        lea     ecx, [esi + 0x60]
        call    FUN_004ae3c0
        lea     ecx, [esi + 0x6c]
        call    FUN_004ae3c0
        lea     ecx, [esi + 0x78]
        call    FUN_004ae3c0
        lea     ecx, [esi + 0x84]
        call    FUN_004ae3c0
        mov     eax, 0x2
        mov     dword ptr [esi + 0x90], eax
        mov     dword ptr [esi + 0xa4], eax
        xor     eax, eax
        mov     dword ptr [esi + 0xbc], eax
        mov     byte ptr [esi + 0xb8], al
        mov     dword ptr [esi], 0x7701f8
        mov     byte ptr [esi + 0xb9], 0x1
        mov     eax, esi
        pop     esi
        ret
    }
}
