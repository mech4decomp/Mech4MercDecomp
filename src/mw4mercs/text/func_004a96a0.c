/*
 * FUN_004A96A0 (74 B) — __cdecl MLR sub-object registry allocator.
 *   Allocates a 0x1c-byte object via FUN_004084D0, initializes it via
 *   FUN_004151C0 (registered-class ctor), zeroes two dword fields, and
 *   stores the pointer in the global registry slot 0x007DA998.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void *__cdecl FUN_004084d0(int);
extern void __cdecl FUN_004151c0(void);

extern unsigned long g_007da9a0;
extern unsigned long g_007da998;

__declspec(naked) void FUN_004a96a0(void)
{
    __asm {
        push    esi
        push    0x1c
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      l_zero
        mov     eax, dword ptr [g_007da9a0]
        push    eax
        push    0x7b30bc
        push    0x523
        mov     ecx, esi
        call    FUN_004151c0
        mov     dword ptr [esi + 0x14], 0
        mov     dword ptr [esi + 0x18], 0
        mov     dword ptr [g_007da998], esi
        pop     esi
        ret
    l_zero:
        mov     dword ptr [g_007da998], 0
        pop     esi
        ret
    }
}
