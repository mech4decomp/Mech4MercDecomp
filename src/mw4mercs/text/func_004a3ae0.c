/*
 * FUN_004A3AE0 (39 B) — frees the global object g_7da980 (via FUN_00415200
 *   then FUN_004084e0) and clears the global to NULL.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_00415200(void);
extern void __stdcall FUN_004084e0(void *ptr);

extern void *g_7da980;

__declspec(naked) void __stdcall FUN_004a3ae0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_7da980]
        test    esi, esi
        jz      l_3afb
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_3afb:
        mov     dword ptr [g_7da980], 0
        pop     esi
        ret
    }
}
