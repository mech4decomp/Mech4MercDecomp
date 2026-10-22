/*
 * FUN_005acd20 (132 B) — __thiscall (ECX = this), RET 4 (one float param).
 *
 * Updates this->0x4c = param * this->0x50; sets this->0x24=1 if changed;
 * then computes this->0x1c from (param / this->0x50) * 0x0076d048 via
 * _ftol() (or 0 if this->0x50 <= 0.0f).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_0075db4a(void);

__declspec(naked) void __fastcall FUN_005acd20(void)
{
    

extern int DAT_0076c5b0;
extern int DAT_0076d048;
__asm {
push    esi
        mov     esi, ecx
        fld     dword ptr [esi + 0x4c]
        fld     dword ptr [esp + 0x8]
        fmul    dword ptr [esi + 0x50]
        fstp    dword ptr [esp + 0x8]
        fcomp   dword ptr [esp + 0x8]
        mov     eax, dword ptr [esp + 0x8]
        mov     dword ptr [esi + 0x4c], eax
        fnstsw  ax
        test    ah, 0x40
        jnz     L_4a
        mov     dword ptr [esi + 0x24], 1
L_4a:
        fld     dword ptr [esi + 0x50]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_99
        fld     dword ptr [esp + 0x8]
        fcom dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_75
        fstp    st(0)
        fld dword ptr [DAT_0076c5b0]
        jmp     L_84
L_75:
        fcom    dword ptr [esi + 0x50]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_84
        fstp    st(0)
        fld     dword ptr [esi + 0x50]
L_84:
        fdiv    dword ptr [esi + 0x50]
        fmul dword ptr [DAT_0076d048]
        call    FUN_0075db4a
        mov     dword ptr [esi + 0x1c], eax
        pop     esi
        ret     4
L_99:
        mov     dword ptr [esi + 0x1c], 0
        pop     esi
        ret     4
    }


}
