/*
 * FUN_005f0280 (109 B) — __fastcall (ECX = this).
 *
 * Decrements an animation counter: if this->0x184 != 0, subtracts
 * the per-frame delta from this->0x194 and the target object's
 * 0x3b8, decrements the counter (clamped at 0), and calls
 * FUN_005f0180().
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005f0180(void);

__declspec(naked) void __stdcall FUN_005f0280(void)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x184]
        test    eax, eax
        jz      L1
        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [eax + 4]
        mov     ecx, dword ptr [esi + 0x184]
        mov     dword ptr [esp + 4], ecx
        fild    dword ptr [esp + 4]
        fmul    dword ptr [eax + 0x38]
        mov     eax, dword ptr [esi + 0x190]
        fld     dword ptr [esi + 0x194]
        fsub    st, st(1)
        fstp    dword ptr [esi + 0x194]
        fld     dword ptr [eax + 0x3b8]
        fsub    st, st(1)
        fstp    dword ptr [eax + 0x3b8]
        lea     eax, [ecx - 1]
        test    eax, eax
        fstp    st
        mov     dword ptr [esi + 0x184], eax
        jge     L2
        mov     dword ptr [esi + 0x184], 0
L2:
        mov     ecx, esi
        call    FUN_005f0180
L1:
        pop     esi
        pop     ecx
        ret
    }
}
