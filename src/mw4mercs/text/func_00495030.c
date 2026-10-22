/*
 * FUN_00495030 (39 B) — __cdecl.
 * If DAT_007da958 is non-null, calls FUN_00415200 then frees it,
 * then sets DAT_007da958 to NULL.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern void __fastcall FUN_00415200(void *this);
extern void __cdecl FUN_004084e0(void *);

extern int DAT_007da958;

__declspec(naked) void FUN_00495030(void)
{
    __asm {
        push    esi
        _emit 0x8B  /* mov esi, [0x007da958] */
        _emit 0x35
        _emit 0x58
        _emit 0xA9
        _emit 0x7D
        _emit 0x00
        test    esi, esi
        jz      l_clear
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
    l_clear:
        _emit 0xC7  /* mov dword ptr [0x007da958], 0 */
        _emit 0x05
        _emit 0x58
        _emit 0xA9
        _emit 0x7D
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        pop     esi
        ret
    }
}
