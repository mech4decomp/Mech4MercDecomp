/*
 * FUN_00684d10 (193 B) — __thiscall constructor (RET 8). Initializes a
 * structure, calls four helper functions, returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_00687920(void);
extern void __cdecl FUN_00687940(void);
extern int __cdecl FUN_00687f20(int, int, int, int, int);
extern int __cdecl FUN_00687ee0(int, int, int, int, int);

__declspec(naked) void* __fastcall FUN_00684d10(void* this, int a, int b)
{
    __asm {
        sub     esp, 0x8
        push    ebx
        mov     eax, 0xbf800000
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], eax
        mov     dword ptr [esi + 0x4], eax
        mov     dword ptr [esi + 0x8], eax
        mov     dword ptr [esi + 0xc], eax
        mov     dword ptr [esi + 0x10], eax
        mov     dword ptr [esi + 0x14], eax
        lea     eax, [esp + 0xc]
        push    eax
        lea     ecx, [esp + 0xf]
        xor     ebx, ebx
        push    ecx
        lea     ecx, [esi + 0x4c]
        mov     dword ptr [esi + 0x44], ebx
        mov     dword ptr [esi + 0x48], ebx
        mov     dword ptr [esp + 0x14], ebx
        call    FUN_00687920
        lea     edx, [esp + 0xc]
        push    edx
        lea     eax, [esp + 0xf]
        push    eax
        lea     ecx, [esi + 0x58]
        mov     dword ptr [esi + 0x50], ebx
        mov     dword ptr [esi + 0x54], ebx
        mov     dword ptr [esp + 0x14], ebx
        call    FUN_00687940
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esi + 0x54]
        push    ebx
        mov     dword ptr [esi + 0x24], ecx
        mov     ecx, dword ptr [esp + 0x1c]
        push    ecx
        mov     dword ptr [esi + 0x34], edx
        mov     edx, dword ptr [esi + 0x50]
        push    edx
        push    eax
        push    eax
        mov     dword ptr [esi + 0x38], ebx
        mov     byte ptr [esi + 0x40], bl
        mov     byte ptr [esi + 0x3e], bl
        mov     dword ptr [esi + 0x64], ebx
        mov     byte ptr [esi + 0x3d], bl
        mov     dword ptr [esi + 0x2c], ebx
        mov     dword ptr [esi + 0x30], ebx
        mov     byte ptr [esi + 0x3c], bl
        mov     dword ptr [esi + 0x5c], ebx
        call    FUN_00687f20
        mov     ecx, dword ptr [esp + 0x2c]
        mov     edx, dword ptr [esi + 0x44]
        push    ebx
        push    ecx
        mov     dword ptr [esi + 0x54], eax
        mov     eax, dword ptr [esi + 0x48]
        push    edx
        push    eax
        push    eax
        call    FUN_00687ee0
        mov     dword ptr [esi + 0x48], eax
        mov     eax, dword ptr [esi + 0x50]
        add     esp, 0x28
        mov     dword ptr [esi + 0x60], eax
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x8
        ret     0x8
    }
}
