/*
 * FUN_00676EA0 (837 B) — GameData distributive-value validator.
 *
 * Calls FUN_00674890(param_1,param_2,param_3,param_4), then switches on
 * param_2[4] (0xb..0x12) to validate/accumulate armor-distribution floats
 * and emit error strings via _snprintf_exref (0x76b424).
 *
 * __cdecl, returns byte in AL.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_00674890(void);

extern void *g_76b424;          /* _snprintf_exref function pointer @ 0x76b424 */
extern float g_76c5b0;          /* float constant 0.0 @ 0x76c5b0 */
extern float g_76d064;          /* float constant 1.0 @ 0x76d064 */

extern const char g_str_797a64; /* "{[GameData]ArmDistributive=%f}: value must be >= 0!" */
extern const char g_str_797a30; /* "{[GameData]LegDistributive=%f}: value must be >= 0!" */
extern const char g_str_7979f4; /* "{[GameData]SideFrontDistributive=%f}: value must be >= 0!" */
extern const char g_str_7979b8; /* "{[GameData]CenterFrontDistributive=%f}: value must be >= 0!" */
extern const char g_str_79797c; /* "{[GameData]CenterRearDistributive=%f}: value must be >= 0!" */
extern const char g_str_79794c; /* "{Your Armor distributions have gone over 1.0}" */
extern const char g_str_797914; /* "{[GameData]PointsPerFerroTon=%f}: value must be > 0!" */
extern const char g_str_7978d8; /* "{[GameData]PointsPerReflectiveTon=%f}: value must be > 0!" */
extern const char g_str_7978a0; /* "{[GameData]PointsPerReactiveTon=%f}: value must be > 0!" */

__declspec(naked) unsigned char __cdecl FUN_00676ea0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0xc
        mov     eax, dword ptr [ebp + 0x10]
        mov     ecx, dword ptr [ebp + 0x14]
        push    ebx
        mov     bl, byte ptr [eax]
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        push    edi
        mov     edi, dword ptr [ebp + 0xc]
        test    bl, bl
        mov     ebx, dword ptr [ebp + 0x18]
        push    ebx
        push    ecx
        push    eax
        push    edi
        push    esi
        setnz   byte ptr [esp + 0x27]
        call    FUN_00674890
        mov     cl, al
        mov     eax, dword ptr [edi + 0x10]
        add     eax, -0xb
        add     esp, 0x14
        cmp     eax, 0x7
        ja      L_71dc
        __emit  0xFF  /* __emit: jmp dword ptr [eax*4+0x6771e8] jump-table dispatch; MSVC6 re-bases via EBX */
        __emit  0x24
        __emit  0x85
        __emit  0xE8
        __emit  0x71
        __emit  0x67
        __emit  0x00

    L_6ee9:  /* case 0xb */
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     L_6f08
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x0
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
    L_6f08:
        fld     dword ptr [esi + 0x34]
        mov     edi, dword ptr [g_76b424]
        fadd    dword ptr [esi + 0x58]
        fstp    dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x14]
        fld     dword ptr [esi + 0x34]
        mov     dword ptr [esi + 0x58], edx
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_6f4b
        fld     dword ptr [esi + 0x34]
        mov     eax, dword ptr [ebp + 0x14]
        mov     ecx, dword ptr [eax]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    offset g_str_797a64
        push    ebx
        push    ecx
        call    edi
        add     esp, 0x14
        xor     cl, cl
    L_6f4b:
        fld     dword ptr [esp + 0x14]
        jmp     L_70f8

    L_6f54:  /* case 0xc */
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     L_6f73
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x0
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
    L_6f73:
        fld     dword ptr [esi + 0x58]
        mov     edi, dword ptr [g_76b424]
        fadd    dword ptr [esi + 0x38]
        fstp    dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x14]
        fld     dword ptr [esi + 0x38]
        mov     dword ptr [esi + 0x58], edx
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_6fb6
        fld     dword ptr [esi + 0x38]
        mov     eax, dword ptr [ebp + 0x14]
        mov     ecx, dword ptr [eax]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    offset g_str_797a30
        push    ebx
        push    ecx
        call    edi
        add     esp, 0x14
        xor     cl, cl
    L_6fb6:
        fld     dword ptr [esp + 0x14]
        jmp     L_70f8

    L_6fbf:  /* case 0xd */
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     L_6fde
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x0
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
    L_6fde:
        fld     dword ptr [esi + 0x58]
        mov     edi, dword ptr [g_76b424]
        fadd    dword ptr [esi + 0x3c]
        fstp    dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x14]
        fld     dword ptr [esi + 0x3c]
        mov     dword ptr [esi + 0x58], edx
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_7021
        fld     dword ptr [esi + 0x3c]
        mov     eax, dword ptr [ebp + 0x14]
        mov     ecx, dword ptr [eax]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    offset g_str_7979f4
        push    ebx
        push    ecx
        call    edi
        add     esp, 0x14
        xor     cl, cl
    L_7021:
        fld     dword ptr [esp + 0x14]
        jmp     L_70f8

    L_702a:  /* case 0xe */
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     L_7049
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x0
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
    L_7049:
        fld     dword ptr [esi + 0x58]
        mov     edi, dword ptr [g_76b424]
        fadd    dword ptr [esi + 0x40]
        fstp    dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x14]
        fld     dword ptr [esi + 0x40]
        mov     dword ptr [esi + 0x58], edx
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_708c
        fld     dword ptr [esi + 0x40]
        mov     eax, dword ptr [ebp + 0x14]
        mov     ecx, dword ptr [eax]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    offset g_str_7979b8
        push    ebx
        push    ecx
        call    edi
        add     esp, 0x14
        xor     cl, cl
    L_708c:
        fld     dword ptr [esp + 0x14]
        jmp     L_70f8

    L_7092:  /* case 0xf */
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     L_70b1
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x0
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
    L_70b1:
        fld     dword ptr [esi + 0x58]
        mov     edi, dword ptr [g_76b424]
        fadd    dword ptr [esi + 0x48]
        fstp    dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x14]
        fld     dword ptr [esi + 0x48]
        mov     dword ptr [esi + 0x58], edx
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_70f4
        fld     dword ptr [esi + 0x48]
        mov     eax, dword ptr [ebp + 0x14]
        mov     ecx, dword ptr [eax]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    offset g_str_79797c
        push    ebx
        push    ecx
        call    edi
        add     esp, 0x14
        xor     cl, cl
    L_70f4:
        fld     dword ptr [esp + 0x14]

    L_70f8:
        fcomp   dword ptr [g_76d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_71dc
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [edx]
        push    offset g_str_79794c
        push    ebx
        push    eax
        call    edi
        add     esp, 0xc
        xor     cl, cl
        mov     al, cl
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    L_7125:  /* case 0x10 */
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     L_7144
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x1
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
    L_7144:
        mov     esi, dword ptr [esi + 0x4c]
        test    esi, esi
        jg      L_71dc
        push    esi
        push    offset g_str_797914
        jmp     L_71ca

    L_7157:  /* case 0x11 */
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     L_7176
        mov     eax, dword ptr [edi]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x1
        call    dword ptr [eax + 0x4]
        mov     cl, 0x1
    L_7176:
        mov     esi, dword ptr [esi + 0x50]
        test    esi, esi
        jg      L_71dc
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [edx]
        push    esi
        push    offset g_str_7978d8
        push    ebx
        push    eax
        call    dword ptr [g_76b424]
        add     esp, 0x10
        xor     cl, cl
        mov     al, cl
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    L_719e:  /* case 0x12 */
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     L_71bd
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x1
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
    L_71bd:
        mov     esi, dword ptr [esi + 0x54]
        test    esi, esi
        jg      L_71dc
        push    esi
        push    offset g_str_7978a0
    L_71ca:
        mov     ecx, dword ptr [ebp + 0x14]
        mov     edx, dword ptr [ecx]
        push    ebx
        push    edx
        call    dword ptr [g_76b424]
        add     esp, 0x10
        xor     cl, cl
    L_71dc:
        pop     edi
        pop     esi
        mov     al, cl
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
