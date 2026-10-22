/*
 * FUN_005acb80 (156 B) - __fastcall (ECX = param), returns float in ST0.
 * Byte-identical to FUN_005acae0.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __fastcall FUN_005acb80(void *param)
{
    

/* extern data/function symbols for absolute-address references */
extern int DAT_0076c5b0;
extern int DAT_0076d064;
extern int DAT_0076d070;
__asm {
push    ecx
        fld     dword ptr [ecx + 0x50]
        /* __emit: MSVC6 encodes mov dword ptr [esp] as C7 04 24, not C7 44 24 00 */
        __emit  0xC7
        __emit  0x44
        __emit  0x24
        __emit  0x00
        __emit  0x00
        __emit  0x00
        __emit  0x80
        __emit  0x3F   /* mov dword ptr [esp], 0x3f800000 */
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      L_else
        fld dword ptr [DAT_0076c5b0]
        jmp     L_compare
L_else:
        fld     dword ptr [ecx + 0x4C]
        fdiv    dword ptr [ecx + 0x50]
        fcom dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_else2
        fstp    st(0)
        fld dword ptr [DAT_0076c5b0]
        jmp     L_compare
L_else2:
        fcom dword ptr [DAT_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_compare
        fstp    st(0)
        fld dword ptr [DAT_0076d064]
L_compare:
        fcom    dword ptr [ecx + 0x6C]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_ret1
        fsub    dword ptr [ecx + 0x6C]
        fsubr dword ptr [DAT_0076d064]
        fcom dword ptr [DAT_0076d070]
        fnstsw  ax
        test    ah, 1
        jz      L_else3
        fstp    st(0)
        fld dword ptr [DAT_0076d070]
        pop     ecx
        ret
L_else3:
        fcom dword ptr [DAT_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_done
        fstp    st(0)
        fld dword ptr [DAT_0076d064]
        pop     ecx
        ret
L_ret1:
        fstp    st(0)
        /* __emit: MSVC6 encodes fld dword ptr [esp] as D9 04 24, not D9 44 24 00 */
        __emit  0xD9
        __emit  0x44
        __emit  0x24
        __emit  0x00   /* fld dword ptr [esp] */
L_done:
        pop     ecx
        ret
    }


}
