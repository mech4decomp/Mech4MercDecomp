/*
 * FUN_006a2990 (62 B) — cdecl helper returning a float in ST(0).
 *
 * Calls FUN_006a49e0(param_1); if the result >= g_799d40, calls
 * FUN_00664b50/FUN_00664b20 and returns g_76d064; else returns g_76c5b0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float __cdecl FUN_006a49e0(void *a);
extern void __cdecl FUN_00664b50(void *a);
extern void __cdecl FUN_00664b20(void *a);
extern float g_799d40;
extern float g_76d064;
extern float g_76c5b0;

__declspec(naked) void FUN_006a2990(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    esi
        call    FUN_006a49e0
        fcomp   dword ptr [g_799d40]
        add     esp, 0x4
        fnstsw  ax
        test    ah, 0x1
        jnz     L_ret2
        push    esi
        call    FUN_00664b50
        push    esi
        call    FUN_00664b20
        fld     dword ptr [g_76d064]
        add     esp, 0x8
        pop     esi
        ret     0x4
    L_ret2:
        fld     dword ptr [g_76c5b0]
        pop     esi
        ret     0x4
    }
}
