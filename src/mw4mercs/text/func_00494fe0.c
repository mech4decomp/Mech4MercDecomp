/*
 * FUN_00494FE0 (74 B) — __cdecl.
 * Allocates 0x1c bytes, initializes via FUN_004151c0, sets function
 * pointers at +0x14 and +0x18, stores result in DAT_007da958.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern void *__cdecl FUN_004084d0(int size);
extern int __fastcall FUN_004151c0(void *this, int type, const char *name, void *param);

extern int DAT_007da958;
extern int DAT_007da9a0;

__declspec(naked) void FUN_00494fe0(void)
{
    __asm {
        push    esi
        push    0x1c
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      l_null
        _emit 0xA1  /* mov eax, [0x007da9a0] */
        _emit 0xA0
        _emit 0xA9
        _emit 0x7D
        _emit 0x00
        push    eax
        push    0x7b2aa8
        push    0x531
        mov     ecx, esi
        call    FUN_004151c0
        mov     dword ptr [esi + 0x14], 0x4951e0
        mov     dword ptr [esi + 0x18], 0x494d80
        _emit 0x89  /* mov dword ptr [0x007da958], esi */
        _emit 0x35
        _emit 0x58
        _emit 0xA9
        _emit 0x7D
        _emit 0x00
        pop     esi
        ret
    l_null:
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
