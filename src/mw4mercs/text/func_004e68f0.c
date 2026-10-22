/* FUN_004e68f0 - MLR/Adept armor-zone position update (161 B) */

extern float g_76d064;   /* 0x0076d064 */

__declspec(naked) void FUN_004e68f0(void)
{
    __asm {
        push    ecx
        fld     dword ptr [esp + 8]
        mov     edx, dword ptr [ecx + 0x40]
        test    edx, edx
        fadd    dword ptr [ecx + 0x10]
        fst     dword ptr [ecx + 0x10]
        fld     dword ptr [esp + 8]
        fadd    dword ptr [ecx + 0x14]
        /* __emit: MSVC6 drops 00 disp for [esp] -> D9 14 24; ref needs D9 54 24 00 */
        __emit 0xD9
        __emit 0x54
        __emit 0x24
        __emit 0x00
        fstp    dword ptr [ecx + 0x14]
        jz      L_004e6918
        fld     dword ptr [esp + 8]
        fadd    dword ptr [edx]
        fstp    dword ptr [edx]
L_004e6918:
        fcom    dword ptr [g_76d064]
        fnstsw  ax
        test    ah, 0x1
        jz      L_004e6930
        fstp    st(0)
        mov     dword ptr [ecx + 0x10], 0x3f800000
        jmp     L_004e6940
L_004e6930:
        fcomp   dword ptr [ecx + 0x1c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_004e6940
        mov     eax, dword ptr [ecx + 0x1c]
        mov     dword ptr [ecx + 0x10], eax
L_004e6940:
        /* __emit: MSVC6 drops 00 disp for [esp] -> D9 04 24; ref needs D9 44 24 00 */
        __emit 0xD9
        __emit 0x44
        __emit 0x24
        __emit 0x00
        fcomp   dword ptr [ecx + 0x1c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_004e695d
        test    edx, edx
        jz      L_004e695d
        /* __emit: MSVC6 drops 00 disp for [esp] -> D9 04 24; ref needs D9 44 24 00 */
        __emit 0xD9
        __emit 0x44
        __emit 0x24
        __emit 0x00
        fsub    dword ptr [ecx + 0x1c]
        fsubr   dword ptr [edx]
        fstp    dword ptr [edx]
L_004e695d:
        /* __emit: MSVC6 drops 00 disp for [esp] -> D9 04 24; ref needs D9 44 24 00 */
        __emit 0xD9
        __emit 0x44
        __emit 0x24
        __emit 0x00
        fcomp   dword ptr [g_76d064]
        fnstsw  ax
        test    ah, 0x1
        jz      L_004e6979
        mov     dword ptr [ecx + 0x14], 0x3f800000
        pop     ecx
        ret     4
L_004e6979:
        /* __emit: MSVC6 drops 00 disp for [esp] -> D9 04 24; ref needs D9 44 24 00 */
        __emit 0xD9
        __emit 0x44
        __emit 0x24
        __emit 0x00
        fcomp   dword ptr [ecx + 0x1c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_004e698d
        mov     edx, dword ptr [ecx + 0x1c]
        mov     dword ptr [ecx + 0x14], edx
L_004e698d:
        pop     ecx
        ret     4
    }
}
