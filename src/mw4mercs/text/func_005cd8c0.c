/*
 * FUN_005CD8C0 (39 B) — __cdecl, RET 0.
 * If global 0x007f23d8 is non-null, calls FUN_00501b40 (thiscall) then
 * frees it via FUN_004084e0; then zeroes the global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __fastcall FUN_00501b40(void *this);
extern void __stdcall FUN_004084e0(int ptr);

__declspec(naked) void FUN_005cd8c0(void)
{
    

extern int DAT_007f23d8;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f23d8]
        test    esi, esi
        jz      l_8db
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
    l_8db:
        mov dword ptr [DAT_007f23d8], 0x0
        pop     esi
        ret
    }


}
