/*
 * FUN_00415340 (62 B) — archive/database registered-class subsystem
 * teardown. If g_007b8c10 (registered "Stuff::Plug" object) is non-null,
 * unregisters it (FUN_00415200) and frees it (FUN_004084e0). Clears
 * g_007b8c10, pops the "Stuff" context (FUN_006f4850(g_007b8c14,1)), and
 * clears g_007b8c14. __cdecl, no args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_007b8c10;
extern int  g_007b8c14;

extern void __cdecl FUN_00415200(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_006f4850(void);

__declspec(naked) void func_00415340(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007b8c10]
        test    esi, esi
        jz      L1
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 4
    L1:
        mov     eax, dword ptr [g_007b8c14]
        push    1
        push    eax
        mov     dword ptr [g_007b8c10], 0
        call    FUN_006f4850
        mov     dword ptr [g_007b8c14], 0
        pop     esi
        ret
    }
}
