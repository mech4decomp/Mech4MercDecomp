/*
 * FUN_00428ac0 (39 B) — MLRFootStep static teardown: if the singleton
 * g_007b964c is non-null, calls its __thiscall destructor FUN_00415200
 * then frees it via FUN_004084e0; always zeroes g_007b964c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415200(void);
extern void __cdecl FUN_004084e0(void *);
extern int g_007b964c;

__declspec(naked) void FUN_00428ac0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007b964c]
        test    esi, esi
        jz      L_done
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_done:
        mov     dword ptr [g_007b964c], 0
        pop     esi
        ret
    }
}
