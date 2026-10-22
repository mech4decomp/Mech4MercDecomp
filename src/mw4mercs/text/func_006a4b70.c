/*
 * FUN_006a4b70 (40 B) — __cdecl, 2 args (int *param_1, float param_2).
 *
 * fVar1 = (*(code**)(*param_1 + 0x48))();
 * if (fVar1 <= param_2*param_2) return _DAT_0076d064;
 * else return _DAT_0076c5b0;
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d064;
extern float g_0076c5b0;

__declspec(naked) float __cdecl FUN_006a4b70(int *param_1, float param_2)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x48]
        fld     dword ptr [esp + 0x8]
        fmul    dword ptr [esp + 0x8]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jnz     L_else
        fld     dword ptr [g_0076d064]
        ret
L_else:
        fld     dword ptr [g_0076c5b0]
        ret
    }
}
