/*
 * FUN_006A2850 (113 B) — __thiscall (ECX = this), RET 4 (1 stack param).
 *
 * Calls FUN_006A2340(param); if it returns 1, computes two floats via
 * FUN_006A5700 / FUN_006A5420, takes the min, and compares against a
 * global threshold. Returns a global float constant (or 0.0f).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char __cdecl FUN_006A2340(int param);
extern float __cdecl FUN_006A5700(int a, int b, int c);
extern float __cdecl FUN_006A5420(int a, int b, int c);
extern void __cdecl FUN_00664B40(int param);
extern float g_799d40;   /* DAT_00799d40 */
extern float g_76d064;   /* DAT_0076d064 */
extern float g_76c5b0;   /* DAT_0076c5b0 */

__declspec(naked) void __fastcall FUN_006a2850(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        push    edi
        push    esi
        mov     edi, ecx
        call    FUN_006A2340
        add     esp, 4
        cmp     al, 1
        jnz     L_ret0
        push    0x45
        push    0x44
        push    esi
        call    FUN_006A5700
        fstp    dword ptr [esp + 0x18]
        mov     eax, dword ptr [edi + 0xC]
        mov     ecx, dword ptr [edi + 8]
        push    eax
        push    ecx
        push    esi
        call    FUN_006A5420
        fcom    dword ptr [esp + 0x24]
        add     esp, 0x18
        fnstsw  ax
        test    ah, 1
        jnz     L_after_min
        fstp    st(0)
        fld     dword ptr [esp + 0xC]
L_after_min:
        fcomp   dword ptr [g_799d40]
        fnstsw  ax
        test    ah, 1
        jnz     L_ret0
        push    esi
        call    FUN_00664B40
        fld     dword ptr [g_76d064]
        add     esp, 4
        pop     edi
        pop     esi
        ret     4
L_ret0:
        fld     dword ptr [g_76c5b0]
        pop     edi
        pop     esi
        ret     4
    }
}
