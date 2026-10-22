/*
 * FUN_006622b0 (39 B) — __cdecl, 1 stack param.
 *
 * Calls virtual method at vtable+0xE4 on param, compares the returned
 * float against 0x0076c5b0; returns 0x0076d064 if not equal, else
 * 0x0076c5b0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76c5b0;   /* 0x0076c5b0 */
extern float g_76d064;   /* 0x0076d064 */

__declspec(naked) void __stdcall FUN_006622b0(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0xe4]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x40
        jnz     L_ret_b0
        fld     dword ptr [g_76d064]
        ret
L_ret_b0:
        fld     dword ptr [g_76c5b0]
        ret
    }
}
