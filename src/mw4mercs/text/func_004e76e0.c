/*
 * FUN_004e76e0 (122 B) — MLR/Adept __thiscall: scans an array of
 * (short,short,float) entries to find the one whose ratio
 * (field+0x14 / field+0x10) is closest to the global 0x76d064 threshold,
 * returning the matching (short,short) tag. __thiscall, RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d064;   /* _DAT_0076d064 */
extern short g_007db0ac;   /* DAT_007db0ac */
extern short g_007db0ae;   /* DAT_007db0ae */

__declspec(naked) void FUN_004e76e0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x20]
        fld     dword ptr [g_0076d064]
        mov     dx, word ptr [g_007db0ac]
        sub     esp, 0x8
        test    eax, eax
        push    esi
        mov     si, word ptr [g_007db0ae]
        jbe     L7746
        fld     dword ptr [ecx + 0x14]
        push    edi
        fdiv    dword ptr [ecx + 0x10]
        mov     ecx, dword ptr [ecx + 0x1c]
        mov     edi, eax
        fstp    dword ptr [esp + 0xc]
L770F:
        mov     eax, dword ptr [ecx + 0x4]
        mov     dword ptr [esp + 0x8], eax
        fld     dword ptr [esp + 0x8]
        fcomp   dword ptr [esp + 0xc]
        __emit  0xDF                    /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit  0xE0
        __emit  0xF6                    /* test ah,0x1: MSVC6 rejects test ah,imm8 */
        __emit  0xC4
        __emit  0x01
        jnz     L773F
        fld     dword ptr [esp + 0x8]
        fcomp
        __emit  0xDF                    /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit  0xE0
        __emit  0xF6                    /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit  0xC4
        __emit  0x41
        jz      L773F
        mov     dx, word ptr [ecx]
        fstp    st(0)
        fld     dword ptr [esp + 0x8]
        mov     si, word ptr [ecx + 0x2]
L773F:
        add     ecx, 0x8
        dec     edi
        jnz     L770F
        pop     edi
L7746:
        mov     eax, dword ptr [esp + 0x10]
        fstp    st(0)
        mov     word ptr [eax + 0x2], si
        mov     word ptr [eax], dx
        pop     esi
        add     esp, 0x8
        ret     0x4
    }
}
