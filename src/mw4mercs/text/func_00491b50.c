/*
 * FUN_00491b50 (63 B) — __thiscall, RET 4 (1 stack param).
 * Constructor for object with vtable 0x7700e8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_00415180(int);
extern void __cdecl FUN_00412780(int);

__declspec(naked) void __fastcall FUN_00491b50(void)
{
    __asm {
        _emit 0xA1  /* mov eax, [0x007b8c10] */
        _emit 0x10
        _emit 0x8C
        _emit 0x7B
        _emit 0x00
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        mov     edx, dword ptr [esp + 0xc]
        xor     edi, edi
        lea     ecx, [esi + 0x10]
        mov     dword ptr [ecx], edi
        push    edx
        mov     dword ptr [esi + 0x8], edi
        mov     dword ptr [esi + 0xc], edi
        mov     dword ptr [esi], 0x7700e8
        call    FUN_00412780
        mov     dword ptr [esi + 0x18], edi
        mov     dword ptr [esi + 0x14], edi
        mov     dword ptr [esi + 0x1c], edi
        mov     dword ptr [esi + 0x20], edi
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
