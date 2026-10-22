/*
 * FUN_5e001000 (50 B) — DllMain-style dispatcher.
 *
 * param_2 == 0 -> FreeLibrary(DAT_5e03a4a4)
 * param_2 == 1 -> DAT_5e03a4a0 = param_1; return 1
 * otherwise    -> return 1
 *
 * __stdcall, RET 0xC (3 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e03a4a0;   /* DAT_5e03a4a0 */
extern int g_5e03a4a4;   /* DAT_5e03a4a4 (HMODULE) */
extern int (*g_5e035084)(void);  /* IAT: FreeLibrary */

__declspec(naked) void __stdcall FUN_5e001000(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        sub     eax, 0
        jz      L1
        dec     eax
        jnz     L2
        mov     eax, dword ptr [esp + 0x4]
        mov     dword ptr [g_5e03a4a0], eax
        mov     eax, 1
        ret     0xC
    L1:
        mov     ecx, dword ptr [g_5e03a4a4]
        push    ecx
        call    dword ptr [g_5e035084]
    L2:
        mov     eax, 1
        ret     0xC
    }
}
