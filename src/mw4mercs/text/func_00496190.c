/*
 * FUN_00496190 (39 B) — __cdecl.
 * Releases singleton at 0x007DA960 via FUN_00415200 + FUN_004084e0, sets to NULL.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern void __fastcall FUN_00415200(void *this);
extern void __stdcall FUN_004084e0(void *ptr);

extern int DAT_007da960;

__declspec(naked) void FUN_00496190(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [DAT_007da960]   ; mov esi, [0x007da960]
        test    esi, esi
        jz      l_null
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 0x04
    l_null:
        mov     dword ptr [DAT_007da960], 0     ; mov [0x007da960], 0
        pop     esi
        ret
    }
}
