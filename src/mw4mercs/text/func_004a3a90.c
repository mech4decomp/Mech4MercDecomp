/*
 * FUN_004A3A90 (74 B) — allocates a 0x1c-byte object via FUN_004084d0,
 *   initializes it via FUN_004151c0, and stores it in global g_7da980.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void *__stdcall FUN_004084d0(void);
extern void __fastcall FUN_004151c0(void);

extern unsigned int g_7da93c;
extern void *g_7da980;

__declspec(naked) void __stdcall FUN_004a3a90(void)
{
    __asm {
        push    esi
        push    0x1c
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      l_3ace
        mov     eax, dword ptr [g_7da93c]
        push    eax
        push    0x7b2ec8
        push    0x529
        mov     ecx, esi
        call    FUN_004151c0
        mov     dword ptr [esi + 0x14], 0
        mov     dword ptr [esi + 0x18], 0
        mov     dword ptr [g_7da980], esi
        pop     esi
        ret
    l_3ace:
        mov     dword ptr [g_7da980], 0
        pop     esi
        ret
    }
}
