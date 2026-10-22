/*
 * FUN_004A3790 (241 B) — __thiscall MLR object reset/init. Calls sub-object
 *   initializers (FUN_004aeb30/FUN_004ade00) with 1.0f and zeroes a set of
 *   flag bytes.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_00493880(void);
extern void __fastcall FUN_004aeb30(void);
extern void __fastcall FUN_004ade00(void);

__declspec(naked) void __stdcall FUN_004a3790(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        call    FUN_00493880
        push    0x3f800000
        lea     ecx, [esi + 0x64]
        call    FUN_004aeb30
        xor     ebx, ebx
        push    0x3f800000
        lea     ecx, [esi + 0x70]
        mov     byte ptr [esi + 0x7c], bl
        call    FUN_004ade00
        push    0x3f800000
        lea     ecx, [esi + 0x84]
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0x90]
        mov     byte ptr [esi + 0x9c], bl
        call    FUN_004ade00
        push    0x3f800000
        lea     ecx, [esi + 0xa4]
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0xb0]
        mov     byte ptr [esi + 0xbc], bl
        call    FUN_004ade00
        push    0x3f800000
        lea     ecx, [esi + 0xc4]
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0xd0]
        mov     byte ptr [esi + 0xdc], bl
        call    FUN_004ade00
        mov     dword ptr [esi + 0xe8], ebx
        push    0x3f800000
        lea     ecx, [esi + 0xec]
        mov     byte ptr [esi + 0xf8], bl
        call    FUN_004ade00
        push    0x3f800000
        lea     ecx, [esi + 0x100]
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0x10c]
        mov     byte ptr [esi + 0x118], bl
        call    FUN_004aeb30
        mov     byte ptr [esi + 0x11c], bl
        mov     byte ptr [esi + 0x11d], bl
        mov     byte ptr [esi + 0x11e], bl
        pop     esi
        pop     ebx
        ret
    }
}
