/*
 * FUN_006a4b00 (37 B) - __cdecl, 2 params (this, float), RET (no cleanup).
 *
 * Calls virtual method vtable[0x94] on this, compares its float result
 * with param2, and returns one of two constant floats.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76d064;
extern float g_76c5b0;

__declspec(naked) void __stdcall FUN_006a4b00(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 4]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x94]
        fcomp   dword ptr [esp + 8]
        __emit 0xDF /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref needs no-WAIT DF E0 */
        __emit 0xE0
        test    ah, 1
        jnz     L_else
        fld     dword ptr [g_76d064]
        ret
L_else:
        fld     dword ptr [g_76c5b0]
        ret
    }
}
