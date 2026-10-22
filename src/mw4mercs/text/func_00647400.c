/*
 * FUN_00647400 (47 B) — cdecl, no params, RET.
 *
 * Decrements a global refcount; when it hits zero, destroys the object
 * held in a global pointer and clears it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f2d30;
extern int g_007f2d2c;
extern void __stdcall FUN_006471c0(void);
extern void __stdcall FUN_004084e0(void);

__declspec(naked) void __stdcall FUN_00647400(void)
{
    __asm {
        dec     dword ptr [g_007f2d30]
        jnz     L_done
        push    esi
        mov     esi, dword ptr [g_007f2d2c]
        test    esi, esi
        jz      L_clear
        mov     ecx, esi
        call    FUN_006471c0
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_clear:
        mov     dword ptr [g_007f2d2c], 0
        pop     esi
L_done:
        ret
    }
}
