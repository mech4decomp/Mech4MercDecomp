/*
 * FUN_00491de0 (90 B) — __thiscall, RET 4 (1 stack param).
 * Constructor for object with vtable 0x7700f8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_00412b30(void);
extern void *__cdecl FUN_004084d0(int);

__declspec(naked) void __fastcall FUN_00491de0(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        lea     ecx, [esi + 0x4]
        call    FUN_00412b30
        mov     al, byte ptr [esp + 0xc]
        xor     ebx, ebx
        mov     dword ptr [esi + 0x40], ebx
        mov     dword ptr [esi + 0x48], ebx
        mov     byte ptr [esi + 0x50], al
        mov     dword ptr [esi + 0x44], ebx
        push    0x18
        mov     dword ptr [esi + 0x4c], ebx
        mov     dword ptr [esi + 0x50], ebx
        call    FUN_004084d0
        mov     cl, byte ptr [esp + 0x10]
        mov     dl, byte ptr [esp + 0x10]
        mov     byte ptr [eax], bl
        mov     dword ptr [eax + 0x4], ebx
        mov     dword ptr [esi + 0x50], eax
        mov     dword ptr [eax + 0x8], eax
        add     esp, 0x4
        mov     dword ptr [esi + 0x54], ebx
        mov     dword ptr [eax + 0xc], eax
        mov     byte ptr [esi + 0x58], cl
        mov     dword ptr [esi], 0x7700f8
        mov     byte ptr [esi + 0x3c], dl
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0x4
    }
}
