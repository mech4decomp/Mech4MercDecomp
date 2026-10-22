/*
 * FUN_00482160 (51 B) — Serialize read (__thiscall, RET 4).
 *
 * Calls FUN_00490310(param), then reads inner/outer radius via virtual
 * calls (vtable+0x24) into this+0x80 and this+0x84.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_00490310(void *this, int param);

__declspec(naked) void __fastcall FUN_00482160(void *this, int param)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x0c]   ; param
        mov     esi, ecx
        push    edi
        call    FUN_00490310
        mov     eax, dword ptr [edi]
        push    4
        lea     ecx, [esi + 0x80]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax + 0x24]        ; virtual read
        mov     edx, dword ptr [eax]
        push    4
        add     esi, 0x84
        push    esi
        mov     ecx, eax
        call    dword ptr [edx + 0x24]        ; virtual read
        pop     edi
        pop     esi
        ret     4
    }
}
