/*
 * FUN_004A2640 (148 B) — __thiscall MLR object reset/init. Calls
 *   FUN_004a3790, zeroes/initializes fields, sets several sub-objects
 *   via FUN_004aeb30 / FUN_004adfb0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_004a3790(void);
extern void __cdecl FUN_004aeb30(void);
extern void __cdecl FUN_004adfb0(void);

__declspec(naked) void __fastcall FUN_004a2640(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        call    FUN_004a3790
        xor     ebx, ebx
        mov     edi, 0x3f800000
        mov     byte ptr [esi + 0x11d], bl
        mov     byte ptr [esi + 0x11e], bl
        mov     dword ptr [esi + 0x128], edi
        push    edi
        lea     ecx, [esi + 0x12c]
        mov     byte ptr [esi + 0x138], bl
        call    FUN_004aeb30
        mov     dword ptr [esi + 0x144], edi
        push    edi
        lea     ecx, [esi + 0x148]
        mov     byte ptr [esi + 0x154], bl
        call    FUN_004aeb30
        push    ebx
        lea     ecx, [esi + 0x15c]
        call    FUN_004aeb30
        push    edi
        lea     ecx, [esi + 0x168]
        mov     byte ptr [esi + 0x17c], bl
        call    FUN_004adfb0
        mov     dword ptr [esi + 0x184], ebx
        mov     dword ptr [esi + 0x18c], ebx
        mov     dword ptr [esi + 0x194], edi
        mov     dword ptr [esi + 0x19c], edi
        pop     edi
        mov     byte ptr [esi + 0x1a0], bl
        mov     byte ptr [esi + 0x1a1], 0x1
        pop     esi
        pop     ebx
        ret
    }
}
