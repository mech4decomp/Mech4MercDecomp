/*
 * FUN_00422080 (39 B) — MLR movie-texture destructor: releases the
 * object stored in g_007b95b8 (via FUN_00415200 + FUN_004084e0) and
 * clears the global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b95b8;
extern void __cdecl FUN_00415200(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00422080(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007b95b8]
        test    esi, esi
        jz      L42209b
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L42209b:
        mov     dword ptr [g_007b95b8], 0x0
        pop     esi
        ret
    }
}
