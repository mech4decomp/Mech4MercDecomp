/*
 * FUN_004308d0 (39 B) — MLR look-up-light teardown: if the global
 * object pointer is non-null, release it (thiscall) and free it,
 * then null the global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b97fc;
extern void FUN_00415200(void);
extern void FUN_004084e0(void);

__declspec(naked) void FUN_004308d0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007b97fc]
        test    esi, esi
        jz      done
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 4
done:
        mov     dword ptr [g_007b97fc], 0
        pop     esi
        ret
    }
}
