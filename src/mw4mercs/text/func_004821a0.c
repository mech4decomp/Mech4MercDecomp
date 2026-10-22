/*
 * FUN_004821A0 (57 B) — Serialize write (__thiscall, RET 4).
 *
 * Calls FUN_00490370(param), then writes inner/outer radius via
 * FUN_00411DC0 with string keys "InnerRadius" and "OuterRadius".
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_00490370(void *this, int param);
extern int __fastcall FUN_00411dc0(void *this, const char *key, int value);

__declspec(naked) void __fastcall FUN_004821a0(void *this, int param)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x0c]   ; param
        mov     esi, ecx
        push    edi
        call    FUN_00490370
        mov     eax, dword ptr [esi + 0x80]
        push    eax
        push    0x76fa80                     ; "InnerRadius"
        mov     ecx, edi
        call    FUN_00411dc0
        mov     ecx, dword ptr [esi + 0x84]
        push    ecx
        push    0x76fa74                     ; "OuterRadius"
        mov     ecx, edi
        call    FUN_00411dc0
        pop     edi
        pop     esi
        ret     4
    }
}
