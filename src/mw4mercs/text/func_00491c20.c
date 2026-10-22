/*
 * FUN_00491c20 (92 B) — __thiscall, RET 0x10 (4 stack params).
 * Constructor for object with vtable 0x7700e8, calls FUN_00717a10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_00415180(int);
extern void __cdecl FUN_00412780(int);
extern int __cdecl FUN_00717a10(int, int, int, int, int, int);

__declspec(naked) void __fastcall FUN_00491c20(void)
{
    __asm {
        _emit 0xA1  /* mov eax, [0x007b8c10] */
        _emit 0x10
        _emit 0x8C
        _emit 0x7B
        _emit 0x00
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        mov     edi, dword ptr [esp + 0x14]
        xor     ebx, ebx
        lea     ecx, [esi + 0x10]
        mov     dword ptr [ecx], ebx
        push    edi
        mov     dword ptr [esi + 0x8], ebx
        mov     dword ptr [esi + 0xc], ebx
        mov     dword ptr [esi], 0x7700e8
        call    FUN_00412780
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x10]
        push    ebx
        push    ebx
        push    ecx
        push    edx
        push    edi
        push    eax
        mov     dword ptr [esi + 0x18], 0x1
        mov     dword ptr [esi + 0x14], ebx
        call    FUN_00717a10
        mov     dword ptr [esi + 0x1c], eax
        pop     edi
        mov     dword ptr [esi + 0x20], ebx
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0x10
    }
}
