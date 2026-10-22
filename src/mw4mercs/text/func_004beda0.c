/*
 * FUN_004beda0 (62 B) — MLR subsystem teardown. If g_007daadc non-null,
 * calls FUN_00415200 (__thiscall, ecx=obj) then frees via FUN_004084e0.
 * Clears g_007daadc, calls FUN_006f4850(g_007daad8,1), clears g_007daad8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00415200(void);
extern void FUN_004084e0(void);
extern void FUN_006f4850(void);

extern int g_007daadc;
extern int g_007daad8;

__declspec(naked) void FUN_004beda0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007daadc]
        test    esi, esi
        jz      L_bedbb
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_bedbb:
        mov     eax, dword ptr [g_007daad8]
        push    1
        push    eax
        mov     dword ptr [g_007daadc], 0
        call    FUN_006f4850
        mov     dword ptr [g_007daad8], 0
        pop     esi
        ret
    }
}
