/*
 * FUN_006038f0 (62 B) — __thiscall, RET 8.
 *
 * Calls FUN_0041fd80 on this+0x40; if non-zero and this->field_0x14 in
 * (10, 0x11], calls FUN_00603ea0(10,0,0); then calls FUN_00604270(param_1,param_2).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_00603ea0(void);
extern void __cdecl FUN_00604270(void);

__declspec(naked) void __fastcall FUN_006038f0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     ecx, [esi + 0x40]
        call    FUN_0041fd80
        test    eax, eax
        jz      L_skip
        mov     eax, dword ptr [esi + 0x14]
        cmp     eax, 0x0b
        jl      L_skip
        cmp     eax, 0x11
        jg      L_skip
        push    0
        push    0
        push    0x0a
        mov     ecx, esi
        call    FUN_00603ea0
    L_skip:
        mov     eax, dword ptr [esp + 0x0c]   ; param_2
        mov     ecx, dword ptr [esp + 0x08]   ; param_1
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_00604270
        pop     esi
        ret     8
    }
}
