/*
 * FUN_004A2950 (74 B) — __cdecl MLR singleton/registry init. Allocates
 *   0x1c bytes via FUN_004084d0, initializes an object via
 *   FUN_004151c0, sets two function pointers (0x4a2ae0/0x4a2520), and
 *   stores the result in global g_007da97c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);

extern int g_007da980;
extern int g_007da97c;

__declspec(naked) void FUN_004a2950(void)
{
    __asm {
        push    esi
        push    0x1c
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_298e
        mov     eax, dword ptr [g_007da980]
        push    eax
        push    0x7b2ebc
        push    0x52a
        mov     ecx, esi
        call    FUN_004151c0
        mov     dword ptr [esi + 0x14], 0x4a2ae0
        mov     dword ptr [esi + 0x18], 0x4a2520
        mov     dword ptr [g_007da97c], esi
        pop     esi
        ret
L_298e:
        mov     dword ptr [g_007da97c], 0x0
        pop     esi
        ret
    }
}
