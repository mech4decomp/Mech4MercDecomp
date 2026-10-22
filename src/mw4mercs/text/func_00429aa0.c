/*
 * FUN_00429aa0 (39 B) — __cdecl singleton dtor for MLRShadowLight: if the
 * global g_007b96b4 is non-null, destroy it (FUN_00415200) and free it,
 * then clear the global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b96b4;
extern void __cdecl FUN_00415200(void);
extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void FUN_00429aa0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007b96b4]
        test    esi, esi
        jz      L_429abb
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_429abb:
        mov     dword ptr [g_007b96b4], 0
        pop     esi
        ret
    }
}
