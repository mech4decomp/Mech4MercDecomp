/*
 * FUN_004883b0 (39 B) — MLRSortByOrder deinit.
 *
 * __cdecl. Destroys the MLRSortByOrder object and frees memory.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_00415200(int *this);
extern void __cdecl FUN_004084e0(void *ptr);

extern int DAT_007da738;

__declspec(naked) void FUN_004883b0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [DAT_007da738]
        test    esi, esi
        jz      l_skip
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 0x04
    l_skip:
        mov     dword ptr [DAT_007da738], 0x00000000
        pop     esi
        ret
    }
}
