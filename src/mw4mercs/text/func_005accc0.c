/*
 * FUN_005accc0 (89 B) — __thiscall (ECX = this), RET 4 (one float param).
 *
 * Updates this->0x54 = param * this->0x58; sets this->0x28=1 if old 0x54
 * != this->0x4c; then computes this->0x20 from (param / this->0x58) * 0x0076d048
 * via _ftol() (or 0 if this->0x58 <= 0.0f).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_0075db4a(void);

__declspec(naked) void __fastcall FUN_005accc0(void)
{
    

extern int DAT_0076c5b0;
extern int DAT_0076d048;
__asm {
push    esi
        mov     esi, ecx
        fld     dword ptr [esi + 0x54]
        fld     dword ptr [esp + 0x8]
        fmul    dword ptr [esi + 0x58]
        fst     dword ptr [esp + 0x8]
        fstp    dword ptr [esi + 0x54]
        fcomp   dword ptr [esi + 0x4c]
        fnstsw  ax
        test    ah, 0x40
        jnz     L_e5
        mov     dword ptr [esi + 0x28], 1
L_e5:
        fld     dword ptr [esi + 0x58]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_0e
        fld     dword ptr [esp + 0x8]
        fdiv    dword ptr [esi + 0x58]
        fmul dword ptr [DAT_0076d048]
        call    FUN_0075db4a
        mov     dword ptr [esi + 0x20], eax
        pop     esi
        ret     4
L_0e:
        mov     dword ptr [esi + 0x20], 0
        pop     esi
        ret     4
    }


}
