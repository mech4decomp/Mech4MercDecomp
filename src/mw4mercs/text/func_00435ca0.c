/*
 * FUN_00435ca0 (62 B) — MLR renderer singleton teardown. Frees the
 * renderer object and releases the log handle.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b9824;
extern int g_007b9828;

extern void __cdecl FUN_00415200(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_006f4850(void);

__declspec(naked) void FUN_00435ca0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007b9824]
        test    esi, esi
        jz      L_435cbb
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_435cbb:
        mov     eax, dword ptr [g_007b9828]
        push    0x1
        push    eax
        mov     dword ptr [g_007b9824], 0x0
        call    FUN_006f4850
        mov     dword ptr [g_007b9828], 0x0
        pop     esi
        ret
    }
}
