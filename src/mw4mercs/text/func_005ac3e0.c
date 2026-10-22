/*
 * FUN_005ac3e0 (95 B) - __fastcall (ECX = param), returns float in ST0.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __fastcall FUN_005ac3e0(void *param)
{
    

/* extern data/function symbols for absolute-address references */
extern int DAT_0076c5b0;
extern int DAT_0076f5d8;
__asm {
push    ecx
        fld     dword ptr [ecx + 0x4C]
        mov     eax, dword ptr [ecx + 0x14]
L_loop:
        test    eax, eax
        jz      L_loopend
        mov     edx, dword ptr [eax]
        test    edx, edx
        mov     eax, dword ptr [eax + 4]
        jz      L_loopend
        fadd    dword ptr [edx + 0x14]
        jmp     L_loop
L_loopend:
        fcom dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_else
        fstp    st(0)
        fld dword ptr [DAT_0076c5b0]
        jmp     L_compare
L_else:
        fld     dword ptr [ecx + 0x50]
        fmul dword ptr [DAT_0076f5d8]
        /* __emit: MSVC6 encodes fstp dword ptr [esp] as D9 1C 24, not D9 5C 24 00 */
        __emit  0xD9
        __emit  0x5C
        __emit  0x24
        __emit  0x00   /* fstp dword ptr [esp] */
        /* __emit: MSVC6 encodes fcom dword ptr [esp] as D8 14 24, not D8 54 24 00 */
        __emit  0xD8
        __emit  0x54
        __emit  0x24
        __emit  0x00   /* fcom dword ptr [esp] */
        fnstsw  ax
        test    ah, 0x41
        jnz     L_compare
        fstp    st(0)
        /* __emit: MSVC6 encodes fld dword ptr [esp] as D9 04 24, not D9 44 24 00 */
        __emit  0xD9
        __emit  0x44
        __emit  0x24
        __emit  0x00   /* fld dword ptr [esp] */
L_compare:
        fcom    dword ptr [ecx + 0x4C]
        fnstsw  ax
        test    ah, 1
        jz      L_done
        fstp    st(0)
        fld     dword ptr [ecx + 0x4C]
L_done:
        pop     ecx
        ret
    }


}
