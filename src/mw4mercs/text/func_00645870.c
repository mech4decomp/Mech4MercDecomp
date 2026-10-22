/*
 * FUN_00645870 (84 B) — Writes two floats (with conditional scaling) and
 * an int into a 12-byte output struct.
 *
 * __thiscall (ECX = this), RET 4 (one stack param: output pointer).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d064;
extern float g_0077dff8;
extern float g_0077dff4;

__declspec(naked) void __fastcall FUN_00645870(void *this_, float *param1)
{
    __asm {
        sub     esp, 0xc
        fld     dword ptr [ecx + 0x14]
        mov     eax, dword ptr [ecx + 0x1c]
        fld     dword ptr [ecx + 0x18]
        mov     dword ptr [esp + 8], eax
        fld     st(1)
        fcomp   dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jz      L1
        fxch
        fmul    dword ptr [g_0077dff8]
        fxch
L1:
        fcom    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jz      L2
        fmul    dword ptr [g_0077dff4]
L2:
        mov     eax, dword ptr [esp + 0x10]
        fxch
        mov     ecx, dword ptr [esp + 8]
        fstp    dword ptr [eax]
        mov     dword ptr [eax + 8], ecx
        fstp    dword ptr [eax + 4]
        add     esp, 0xc
        ret     4
    }
}
