/*
 * FUN_004A29A0 (39 B) — __cdecl MLR singleton teardown. If global
 *   g_007da97c is non-null, calls FUN_00415200 (thiscall) and frees it
 *   via FUN_004084e0, then clears the global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_00415200(void);
extern void __cdecl FUN_004084e0(void);

extern int g_007da97c;

__declspec(naked) void FUN_004a29a0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007da97c]
        test    esi, esi
        jz      L_29bb
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_29bb:
        mov     dword ptr [g_007da97c], 0x0
        pop     esi
        ret
    }
}
