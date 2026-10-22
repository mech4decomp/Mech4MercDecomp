/*
 * FUN_005d6480 (75 B) — __thiscall (ECX = this), returns bool in AL.
 *
 * Compares this->[0x4D4] against a global constant; if not equal, calls
 * FUN_00707E70(0) and does a range check against this->[0x4D4] + global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00707E70(int param);

__declspec(naked) unsigned char FUN_005d6480(void)
{
    

extern int DAT_0076c5b0;
extern int DAT_0077016c;
__asm {
push    esi
        mov     esi, ecx
        fld     dword ptr [esi + 0x4D4]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jnz     ret_zero
        push    0
        call    FUN_00707E70
        fcom    dword ptr [esi + 0x4D4]
        fnstsw  ax
        test    ah, 0x41
        jnz     ret_zero2
        fld     dword ptr [esi + 0x4D4]
        fadd dword ptr [DAT_0077016c]
        fxch
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jz      ret_zero
        mov     al, 1
        pop     esi
        ret
ret_zero2:
        fstp    st(0)
ret_zero:
        xor     al, al
        pop     esi
        ret
    }


}
