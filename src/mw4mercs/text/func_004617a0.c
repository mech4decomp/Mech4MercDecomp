/*
 * FUN_004617a0 (62 B) — MLR_I_C_DeT_PMesh teardown/cleanup.
 * Destroys the instance in g_007d9928 and releases the class registration
 * in g_007d992c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007d9928;
extern int g_007d992c;

extern void __cdecl FUN_00415200(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_006f4850(void);

__declspec(naked) void FUN_004617a0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007d9928]
        test    esi, esi
        jz      L_17bb
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_17bb:
        mov     eax, dword ptr [g_007d992c]
        push    1
        push    eax
        mov     dword ptr [g_007d9928], 0
        call    FUN_006f4850
        mov     dword ptr [g_007d992c], 0
        pop     esi
        ret
    }
}
