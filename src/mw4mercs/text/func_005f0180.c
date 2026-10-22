/*
 * FUN_005f0180 (89 B) — __fastcall (ECX = this).
 *
 * Computes f = this->0x184 * v[0x3c] + this->0x17c, stores to
 * this->0x18c, then clamps it to [this->0x17c, this->0x180].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005f0180(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [eax + 4]
        fild    dword ptr [esi + 0x184]
        fmul    dword ptr [eax + 0x3c]
        fadd    dword ptr [esi + 0x17c]
        fcom    dword ptr [esi + 0x17c]
        fst     dword ptr [esi + 0x18c]
        fnstsw  ax
        test    ah, 1
        jz      L1
        mov     ecx, dword ptr [esi + 0x17c]
        fstp    st
        mov     dword ptr [esi + 0x18c], ecx
        pop     esi
        ret
L1:
        fcomp   dword ptr [esi + 0x180]
        fnstsw  ax
        test    ah, 0x41
        jnz     L2
        mov     edx, dword ptr [esi + 0x180]
        mov     dword ptr [esi + 0x18c], edx
L2:
        pop     esi
        ret
    }
}
