/* FUN_004e6480 - MLR/Adept armor-zone damage-tier selector (159 B) */

extern float g_76c5b0;   /* 0x0076c5b0 */
extern float g_76d5ec;   /* 0x0076d5ec */
extern float g_7704c0;   /* 0x007704c0 */
extern float g_76d070;   /* 0x0076d070 */
extern float g_76e22c;   /* 0x0076e22c */

__declspec(naked) void FUN_004e6480(void)
{
    __asm {
        push    ecx
        fld     dword ptr [ecx + 0x10]
        xor     edx, edx
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x40
        jnz     L_004e64aa
        fld     dword ptr [ecx + 0x14]
        fdiv    dword ptr [ecx + 0x10]
        /* __emit: MSVC6 drops 00 disp for [esp] -> D9 14 24; ref needs D9 54 24 00 */
        __emit 0xD9
        __emit 0x54
        __emit 0x24
        __emit 0x00
        fcomp   dword ptr [g_76d5ec]
        fnstsw  ax
        test    ah, 0x1
        jz      L_004e64d1
L_004e64aa:
        mov     ecx, dword ptr [ecx + 0x28]
        test    ecx, ecx
        jz      L_004e64c8
        fld     dword ptr [ecx + 0x14]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      L_004e64c8
        mov     eax, 5
        pop     ecx
        ret
L_004e64c8:
        mov     edx, 4
        mov     eax, edx
        pop     ecx
        ret
L_004e64d1:
        /* __emit: MSVC6 drops 00 disp for [esp] -> D9 04 24; ref needs D9 44 24 00 */
        __emit 0xD9
        __emit 0x44
        __emit 0x24
        __emit 0x00
        fcomp   dword ptr [g_7704c0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_004e64eb
        mov     edx, 3
        mov     eax, edx
        pop     ecx
        ret
L_004e64eb:
        /* __emit: MSVC6 drops 00 disp for [esp] -> D9 04 24; ref needs D9 44 24 00 */
        __emit 0xD9
        __emit 0x44
        __emit 0x24
        __emit 0x00
        fcomp   dword ptr [g_76d070]
        fnstsw  ax
        test    ah, 0x1
        jz      L_004e6505
        mov     edx, 2
        mov     eax, edx
        pop     ecx
        ret
L_004e6505:
        /* __emit: MSVC6 drops 00 disp for [esp] -> D9 04 24; ref needs D9 44 24 00 */
        __emit 0xD9
        __emit 0x44
        __emit 0x24
        __emit 0x00
        fcomp   dword ptr [g_76e22c]
        fnstsw  ax
        test    ah, 0x1
        jz      L_004e651b
        mov     edx, 1
L_004e651b:
        mov     eax, edx
        pop     ecx
        ret
    }
}
