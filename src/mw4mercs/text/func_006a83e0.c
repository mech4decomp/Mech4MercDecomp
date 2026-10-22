/*
 * FUN_006a83e0 (76 B) — __thiscall (ECX = this), RET 8.
 *
 * If this->0x38 (float) == _DAT_0076c5b0, calls FUN_00699160() and
 * zeroes this->0x20. Otherwise computes
 * (iVar1->0xc - iVar1->0x8) * this->0x38 where
 * iVar1 = *(*(this->0x34 + 0x18) + 4), passes it to FUN_006992f0,
 * and zeroes this->0x20.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00699160(void);
extern void __cdecl FUN_006992f0(float);

extern float g_0076c5b0;

__declspec(naked) void __stdcall FUN_006a83e0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        fld     dword ptr [esi + 0x38]
        mov     ecx, dword ptr [esi + 0x34]
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      L_else
        fstp    st(0)
        call    FUN_00699160
        mov     dword ptr [esi + 0x20], 0x0
        pop     esi
        ret     8
L_else:
        mov     eax, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [eax + 0x4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 0x8]
        fmul    st(0), st(1)
        fstp    dword ptr [esp]
        fstp    st(0)
        call    FUN_006992f0
        mov     dword ptr [esi + 0x20], 0x0
        pop     esi
        ret     8
    }
}
