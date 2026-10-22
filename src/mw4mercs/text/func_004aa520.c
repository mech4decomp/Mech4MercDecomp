/*
 * FUN_004AA520 (74 B) — __cdecl MLR sub-object registry allocator.
 *   Allocates a 0x1c-byte object via FUN_004084D0, initializes it via
 *   FUN_004151C0 (registered-class ctor), stores two function pointers,
 *   and stores the pointer in the global registry slot 0x007DA99C.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void *__cdecl FUN_004084d0(int);
extern void __cdecl FUN_004151c0(void);

extern unsigned long g_007da9a0;
extern unsigned long g_007da99c;

__declspec(naked) void FUN_004aa520(void)
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
        push    0x7b3120
        push    0x522
        mov     ecx, esi
        call    FUN_004151c0
        mov     dword ptr [esi + 0x14], 0x4aa6b0
        mov     dword ptr [esi + 0x18], 0x4aa480
        mov     dword ptr [g_007da99c], esi
        pop     esi
        ret
    l_zero:
        mov     dword ptr [g_007da99c], 0
        pop     esi
        ret
    }
}
