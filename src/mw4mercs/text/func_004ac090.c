/*
 * FUN_004AC090 (74 B) — ParticleCloud init.
 *   Allocates 0x1c bytes, initializes, stores to global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __stdcall FUN_004084d0(int size);
extern void __stdcall FUN_004151c0(int id, const char *name, int param);
extern int DAT_007da93c;
extern int DAT_007da9a0;

__declspec(naked) void __stdcall FUN_004ac090(void)
{
    __asm {
        push    esi
        push    0x1c
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      l_set_null
        mov     eax, dword ptr [DAT_007da93c]    ; mov eax, [0x007da93c]
        push    eax
        push    0x7b3230
        push    0x521
        mov     ecx, esi
        call    FUN_004151c0
        mov     dword ptr [esi + 0x14], 0
        mov     dword ptr [esi + 0x18], 0
        mov     dword ptr [DAT_007da9a0], esi    ; mov [0x007da9a0], esi
        pop     esi
        ret
    l_set_null:
        mov     dword ptr [DAT_007da9a0], 0      ; mov [0x007da9a0], 0
        pop     esi
        ret
    }
}
