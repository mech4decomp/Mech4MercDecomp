/*
 * FUN_0048f160 (65 B) — Cleanup function.
 * If DAT_007da848 != 0, calls vtable[0](1) and sets to NULL.
 * If DAT_007da84c != 0, calls FUN_00415200() then FUN_004084e0().
 * Sets DAT_007da84c = 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_00415200(void *param_1);
extern void __cdecl FUN_004084e0(void *ptr);

extern int DAT_007da848;
extern int DAT_007da84c;

__declspec(naked) void FUN_0048f160(void)
{
    __asm {
        mov     ecx, dword ptr [DAT_007da848]   ; mov ecx, [0x007da848]
        test    ecx, ecx
        jz      l_check_second
        mov     eax, dword ptr [ecx]
        push    0x01
        call    dword ptr [eax]
        mov     dword ptr [DAT_007da848], 0     ; mov [0x007da848], 0
    l_check_second:
        push    esi
        mov     esi, dword ptr [DAT_007da84c]   ; mov esi, [0x007da84c]
        test    esi, esi
        jz      l_skip_second
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 0x04
    l_skip_second:
        mov     dword ptr [DAT_007da84c], 0     ; mov [0x007da84c], 0
        pop     esi
        ret
    }
}
