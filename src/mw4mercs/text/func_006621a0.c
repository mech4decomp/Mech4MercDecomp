/*
 * FUN_006621a0 (42 B) — float-returning comparison helper.
 *
 * Calls FUN_006a5020(param, 1) (returns float in ST(0)), compares it
 * against [0x0076d070]; if less, returns [0x0076d064], else [0x0076c5b0].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76d070;
extern float g_76d064;
extern float g_76c5b0;
extern float __cdecl FUN_006a5020(int a, int b);

__declspec(naked) float __cdecl FUN_006621a0(int param)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    1
        push    eax
        call    FUN_006a5020
        fcomp   dword ptr [g_76d070]
        add     esp, 8
        fnstsw  ax
        test    ah, 1
        jz      L_else
        fld     dword ptr [g_76d064]
        ret
L_else:
        fld     dword ptr [g_76c5b0]
        ret
    }
}
