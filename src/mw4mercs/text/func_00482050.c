/*
 * FUN_00482050 (91 B) — Constructor with params (__thiscall, RET 0xC).
 *
 * Calls FUN_0048FD20, sets vtable + field_78, then reads back inner/outer
 * radius via virtual calls, and calls FUN_004821F0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_0048fd20(void *this, int param1, int param2, int param3);
extern void __fastcall FUN_004821f0(void *this, float inner, float outer);

__declspec(naked) void * __fastcall FUN_00482050(void *this, int param1, int param2, int param3)
{
    __asm {
        mov     eax, dword ptr [esp + 0x0c]   ; param3
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]   ; param2
        push    eax
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x10]   ; param1
        push    edi
        push    ecx
        mov     ecx, esi
        call    FUN_0048fd20
        mov     edx, dword ptr [edi]
        push    4
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esi], 0x76fa18
        mov     dword ptr [esi + 0x78], 0x120
        call    dword ptr [edx + 0x20]        ; virtual read
        mov     edx, dword ptr [eax]
        push    4
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]        ; virtual read
        mov     edx, dword ptr [esp + 0x14]   ; outer
        mov     eax, dword ptr [esp + 0x10]   ; inner
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_004821f0
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x0c
    }
}
