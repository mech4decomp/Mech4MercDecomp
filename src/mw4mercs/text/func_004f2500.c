/*
 * FUN_004f2500 (62 B) -- MLR/Adept audio renderer shutdown (__cdecl, no
 * params). If g_007dc864 non-null, destroys it via FUN_004d5d20 + free
 * (FUN_004084e0), zeroes it, then releases g_007dc86c via FUN_006f4850(,1)
 * and zeroes it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004d5d20(void);
extern void __stdcall FUN_004084e0(void *ptr);
extern void __cdecl FUN_006f4850(void);

extern int g_007dc864;   /* DAT_007dc864 */
extern int g_007dc86c;   /* DAT_007dc86c */

__declspec(naked) void func_004f2500(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007dc864]
        test    esi, esi
        jz      l_1b
        mov     ecx, esi
        call    FUN_004d5d20
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_1b:
        mov     eax, dword ptr [g_007dc86c]
        push    1
        push    eax
        mov     dword ptr [g_007dc864], 0
        call    FUN_006f4850
        mov     dword ptr [g_007dc86c], 0
        pop     esi
        ret
    }
}
