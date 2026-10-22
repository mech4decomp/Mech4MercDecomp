/*
 * FUN_00761050 (51 B) — Teardown helper.
 *
 * If DAT_008bd2f4 is non-null, calls FUN_00761360 on it and clears it.
 * Calls FUN_00761140(). If DAT_008bd2f8 is null, calls FreeLibrary(NULL)
 * via IAT at 0x0076b0b8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8bd2f4;                 /* DAT_008bd2f4 */
extern int g_8bd2f8;                 /* DAT_008bd2f8 */
extern void *g_76b0b8;               /* IAT slot for FreeLibrary */
extern void __cdecl FUN_00761360(void *param);
extern void __cdecl FUN_00761140(void);

__declspec(naked) void FUN_00761050(void)
{
    __asm {
        mov     eax, dword ptr [g_8bd2f4]
        test    eax, eax
        jz      skip_free
        push    eax
        call    FUN_00761360
        add     esp, 4
        mov     dword ptr [g_8bd2f4], 0
skip_free:
        call    FUN_00761140
        mov     eax, dword ptr [g_8bd2f8]
        test    eax, eax
        jnz     done
        push    0
        call    dword ptr [g_76b0b8]
done:
        ret
    }
}
