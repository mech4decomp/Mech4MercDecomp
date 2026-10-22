/*
 * FUN_0042aab0 (39 B) — MLRProjectLight static-teardown: if the
 * global project-light object exists, destroy it (FUN_00415200) and
 * free it (FUN_004084e0), then clear the global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b96cc;
extern void __cdecl FUN_00415200(void);
extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void FUN_0042aab0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007b96cc]
        test    esi, esi
        jz      L_clear
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_clear:
        mov     dword ptr [g_007b96cc], 0
        pop     esi
        ret
    }
}
