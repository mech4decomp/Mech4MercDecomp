/*
 * FUN_00628c80 (62 B) — __thiscall, RET 4.
 *
 * Stores param_1 into this+0x16d; if this+0x3c==0 calls virtual (vtable+0x14)
 * on this+0x154; then calls virtual (vtable+0x10) if param_1 else (vtable+0x14).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

__declspec(naked) void __fastcall FUN_00628c80(void)
{
    __asm {
        push    ebx
        mov     bl, byte ptr [esp + 0x08]   ; param_1 (char)
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x3c]
        test    eax, eax
        mov     byte ptr [esi + 0x16d], bl
        jnz     L_skip1
        mov     ecx, dword ptr [esi + 0x154]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x14]
    L_skip1:
        test    bl, bl
        mov     ecx, dword ptr [esi + 0x154]
        jz      L_else
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x10]
        pop     esi
        pop     ebx
        ret     4
    L_else:
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x14]
        pop     esi
        pop     ebx
        ret     4
    }
}
