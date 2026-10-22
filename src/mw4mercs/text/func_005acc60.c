/*
 * FUN_005acc60 (88 B) — __thiscall (ECX = this).
 *
 * Computes a value into this->0x1c based on float fields at 0x50/0x4c.
 * If this->0x50 <= 0.0f, stores 0. Otherwise computes
 * (this->0x4c / this->0x50) * 0x0076d048 via _ftol() and stores the int.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_0075db4a(void);

__declspec(naked) void __fastcall FUN_005acc60(void)
{
    

extern int DAT_0076c5b0;
extern int DAT_0076d048;
__asm {
push    esi
        mov     esi, ecx
        fld     dword ptr [esi + 0x50]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_af
        fld     dword ptr [esi + 0x4c]
        fcom dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_8d
        fstp    st(0)
        fld dword ptr [DAT_0076c5b0]
        jmp     L_9c
L_8d:
        fcom    dword ptr [esi + 0x50]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_9c
        fstp    st(0)
        fld     dword ptr [esi + 0x50]
L_9c:
        fdiv    dword ptr [esi + 0x50]
        fmul dword ptr [DAT_0076d048]
        call    FUN_0075db4a
        mov     dword ptr [esi + 0x1c], eax
        pop     esi
        ret
L_af:
        mov     dword ptr [esi + 0x1c], 0
        pop     esi
        ret
    }


}
