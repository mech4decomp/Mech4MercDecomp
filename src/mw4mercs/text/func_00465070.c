/*
 * FUN_00465070 (62 B) — MLR_I_DeT_PMesh teardown/cleanup.
 * Destroys the instance in g_007d993c and releases the class registration
 * in g_007d9940.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007d993c;
extern int g_007d9940;

extern void __cdecl FUN_00415200(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_006f4850(void);

__declspec(naked) void FUN_00465070(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007d993c]
        test    esi, esi
        jz      L_508b
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_508b:
        mov     eax, dword ptr [g_007d9940]
        push    1
        push    eax
        mov     dword ptr [g_007d993c], 0
        call    FUN_006f4850
        mov     dword ptr [g_007d9940], 0
        pop     esi
        ret
    }
}
