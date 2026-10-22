/*
 * FUN_006a2a30 (71 B) — __thiscall (ECX = this), RET 4.
 *
 * Calls FUN_006a29d0(param_1); if the result is > 0.0 (0x0076C5B0), calls
 * the virtual method at this[0x28] with param_1 and re-checks. Returns
 * 0x0076C5B0 (0.0) if either check passes, else 0x0076D064.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76c5b0;             /* 0x0076C5B0 — 0.0f constant */
extern float g_76d064;             /* 0x0076D064 — constant */
extern float __stdcall FUN_006a29d0(int param);

__declspec(naked) float __stdcall FUN_006a2a30(void *this, int param_1)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     esi, ecx
        push    edi
        call    FUN_006a29d0
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      L_6c
        mov     eax, dword ptr [esi + 0x28]
        lea     ecx, [esi + 0x28]
        push    edi
        call    dword ptr [eax]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      L_6c
        fld     dword ptr [g_76c5b0]
        pop     edi
        pop     esi
        ret     4
    L_6c:
        fld     dword ptr [g_76d064]
        pop     edi
        pop     esi
        ret     4
    }
}
