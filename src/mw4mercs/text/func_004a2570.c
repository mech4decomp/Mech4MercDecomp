/*
 * FUN_004A2570 (203 B) — __thiscall MLR object initializer. Calls
 *   FUN_004a3660, initializes sub-objects (FUN_004add70/FUN_004ae560/
 *   FUN_004adf40), and invokes virtual method [vtable+0x24] on the
 *   param object for several sub-objects. RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_004a3660(void);
extern void __cdecl FUN_004add70(void);
extern void __cdecl FUN_004ae560(void);
extern void __cdecl FUN_004adf40(void);

__declspec(naked) void __fastcall FUN_004a2570(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        mov     edi, ecx
        push    esi
        call    FUN_004a3660
        push    esi
        lea     ecx, [edi + 0x124]
        call    FUN_004add70
        push    esi
        lea     ecx, [edi + 0x12c]
        call    FUN_004ae560
        mov     eax, dword ptr [esi]
        push    0x1
        lea     ecx, [edi + 0x138]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        push    esi
        lea     ecx, [edi + 0x140]
        call    FUN_004add70
        push    esi
        lea     ecx, [edi + 0x148]
        call    FUN_004ae560
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x154]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea     ecx, [edi + 0x15c]
        call    FUN_004ae560
        push    esi
        lea     ecx, [edi + 0x168]
        call    FUN_004adf40
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x17c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea     ecx, [edi + 0x180]
        call    FUN_004add70
        push    esi
        lea     ecx, [edi + 0x188]
        call    FUN_004add70
        push    esi
        lea     ecx, [edi + 0x190]
        call    FUN_004add70
        push    esi
        lea     ecx, [edi + 0x198]
        call    FUN_004add70
        mov     edx, dword ptr [esi]
        push    0x1
        add     edi, 0x1a0
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        pop     edi
        pop     esi
        ret     0x4
    }
}
