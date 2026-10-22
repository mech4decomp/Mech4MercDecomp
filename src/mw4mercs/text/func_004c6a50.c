/*
 * FUN_004c6a50 (1157 B) - MLR node/mesh attribute parser. Reads a series of
 * named attributes ("LocalToParentIsIdentity", "BoundingSphere", "Stuff::OBB",
 * "VolumeCull"/"AlwaysCull"/"NeverCull", "AlignZUsingX/Y", "DisableShadow")
 * via FUN_004125e0 + FUN_00411bf0/FUN_00411ec0, parses floats with sscanf
 * (IAT 0x0076b2dc), compares strings with _stricmp (IAT 0x0076b2ac), and
 * sets flag bits on two output dwords.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00411ec0(void);
extern void __cdecl FUN_0040d9b0(void);
extern void __cdecl FUN_00411bf0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0041a070(void);

extern int   g_007b8d6c;   /* DAT_007b8d6c */
extern int   g_007b8d68;   /* DAT_007b8d68 */
extern int   g_007b8d70;   /* DAT_007b8d70 */
extern float g_00771730;   /* _DAT_00771730 */

extern int (*g_0076b2dc)(const char *, const char *, ...);  /* sscanf IAT */
extern int (*g_0076b2ac)(const char *, const char *);       /* _stricmp IAT */

__declspec(naked) void FUN_004c6a50(void)
{
    __asm {
        sub     esp, 0x20
        mov     eax, dword ptr [esp + 0x28]
        push    ebx
        mov     ebx, dword ptr [esp + 0x34]
        push    ebp
        push    esi
        mov     esi, dword ptr [eax]
        push    edi
        push    0x7717e4
        push    esi
        lea     ecx, [esp + 0x20]
        mov     dword ptr [ebx], 0x0
        mov     dword ptr [esp + 0x28], esi
        call    FUN_004125e0
        mov     edx, dword ptr [esp + 0x18]
        mov     edi, dword ptr [esp + 0x34]
        push    0x0
        lea     ecx, [esp + 0x14]
        push    ecx
        push    edx
        mov     ecx, edi
        call    FUN_00411ec0
        lea     ecx, [esp + 0x18]
        mov     byte ptr [esp + 0x38], al
        call    FUN_0040d9b0
        mov     al, byte ptr [esp + 0x38]
        test    al, al
        mov     ebp, dword ptr [esp + 0x3c]
        jz      L6AC0
        mov     al, byte ptr [esp + 0x10]
        test    al, al
        mov     eax, dword ptr [ebp]
        jz      L6ABA
        or      eax, 0x1
        jmp     L6ABD
L6ABA:
        and     eax, 0xfffffffe
L6ABD:
        mov     dword ptr [ebp], eax
L6AC0:
        push    0x7717d4
        push    esi
        lea     ecx, [esp + 0x44]
        mov     dword ptr [esp + 0x24], 0x0
        call    FUN_004125e0
        mov     ecx, dword ptr [esp + 0x3c]
        push    0x0
        lea     eax, [esp + 0x20]
        push    eax
        push    ecx
        mov     ecx, edi
        call    FUN_00411bf0
        lea     ecx, [esp + 0x3c]
        mov     byte ptr [esp + 0x38], al
        call    FUN_0040d9b0
        mov     al, byte ptr [esp + 0x38]
        test    al, al
        jz      L6B7C
        mov     edx, dword ptr [ebp]
        mov     dword ptr [ebx], 0x20
        mov     ebx, dword ptr [esp + 0x44]
        and     edx, 0xffffffdf
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        mov     edi, ebx
        rep movsd
        lea     eax, [ebx + 0x3c]
        push    eax
        lea     ecx, [ebx + 0x2c]
        push    ecx
        mov     ecx, dword ptr [esp + 0x24]
        mov     dword ptr [ebp], edx
        mov     dword ptr [esp + 0x40], edx
        lea     edx, [ebx + 0x1c]
        push    edx
        lea     eax, [ebx + 0xc]
        push    eax
        push    0x76d944
        push    ecx
        call    dword ptr [g_0076b2dc]
        mov     eax, dword ptr [g_007b8d6c]
        mov     edx, dword ptr [g_007b8d68]
        mov     ecx, dword ptr [g_007b8d70]
        mov     dword ptr [ebx + 0x34], eax
        mov     eax, dword ptr [esp + 0x50]
        mov     dword ptr [ebx + 0x30], edx
        mov     edx, dword ptr [esp + 0x58]
        add     esp, 0x18
        or      eax, 0x2
        mov     dword ptr [ebx + 0x38], ecx
        mov     dword ptr [ebp], eax
        mov     dword ptr [edx], 0x22
        mov     ebx, edx
        jmp     L6CC1
L6B7C:
        push    0x7717c8
        push    esi
        lea     ecx, [esp + 0x40]
        mov     dword ptr [esp + 0x44], 0x0
        call    FUN_004125e0
        mov     ecx, dword ptr [esp + 0x38]
        push    0x0
        lea     eax, [esp + 0x40]
        push    eax
        push    ecx
        mov     ecx, edi
        call    FUN_00411bf0
        mov     byte ptr [esp + 0x40], al
        mov     eax, dword ptr [esp + 0x38]
        test    eax, eax
        jz      L6BC5
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L6BC5
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L6BC5:
        mov     al, byte ptr [esp + 0x40]
        test    al, al
        jz      L6C8D
        mov     esi, dword ptr [esp + 0x44]
        mov     edx, dword ptr [ebp]
        or      edx, 0x20
        lea     eax, [esi + 0x38]
        push    eax
        lea     ecx, [esi + 0x34]
        push    ecx
        mov     dword ptr [ebp], edx
        mov     dword ptr [esp + 0x48], edx
        lea     edi, [esi + 0x30]
        push    edi
        lea     edx, [esp + 0x38]
        push    edx
        lea     eax, [esp + 0x38]
        push    eax
        lea     ecx, [esp + 0x38]
        push    ecx
        lea     edx, [esi + 0x2c]
        push    edx
        mov     edx, dword ptr [esp + 0x58]
        lea     eax, [esi + 0x1c]
        push    eax
        lea     ecx, [esi + 0xc]
        push    ecx
        push    0x7717ac
        push    edx
        mov     dword ptr [ebx], 0x20
        call    dword ptr [g_0076b2dc]
        fld     dword ptr [esp + 0x50]
        fmul    dword ptr [g_00771730]
        add     esp, 0x2c
        lea     eax, [esp + 0x24]
        push    eax
        fstp    dword ptr [esp + 0x28]
        mov     ecx, esi
        fld     dword ptr [esp + 0x2c]
        fmul    dword ptr [g_00771730]
        fstp    dword ptr [esp + 0x2c]
        fld     dword ptr [esp + 0x30]
        fmul    dword ptr [g_00771730]
        fstp    dword ptr [esp + 0x30]
        call    FUN_0041a070
        fld     dword ptr [edi + 0x8]
        mov     eax, dword ptr [esp + 0x40]
        fld     dword ptr [edi + 0x4]
        or      eax, 0x2
        fld     dword ptr [edi]
        mov     dword ptr [ebp], eax
        fld     st(0)
        mov     dword ptr [ebx], 0x22
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fsqrt
        fstp    dword ptr [esi + 0x3c]
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        jmp     L6CC1
L6C8D:
        mov     eax, dword ptr [esp + 0x44]
        mov     edx, dword ptr [g_007b8d6c]
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        mov     edi, eax
        rep movsd
        mov     ecx, dword ptr [g_007b8d68]
        mov     dword ptr [eax + 0x30], ecx
        mov     ecx, dword ptr [g_007b8d70]
        mov     dword ptr [eax + 0x34], edx
        mov     dword ptr [eax + 0x38], ecx
        mov     dword ptr [eax + 0x3c], 0xbf800000
L6CC1:
        mov     edx, dword ptr [esp + 0x20]
        push    0x7717a4
        push    edx
        lea     ecx, [esp + 0x4c]
        mov     dword ptr [esp + 0x1c], 0x0
        call    FUN_004125e0
        mov     ecx, dword ptr [esp + 0x44]
        push    0x0
        lea     eax, [esp + 0x18]
        push    eax
        push    ecx
        mov     ecx, dword ptr [esp + 0x40]
        call    FUN_00411bf0
        mov     byte ptr [esp + 0x40], al
        mov     eax, dword ptr [esp + 0x44]
        test    eax, eax
        jz      L6D10
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L6D10
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L6D10:
        mov     al, byte ptr [esp + 0x40]
        test    al, al
        jz      L6D93
        mov     edx, dword ptr [ebx]
        mov     esi, dword ptr [ebp]
        or      edx, 0xc0
        mov     dword ptr [ebx], edx
        mov     edi, edx
        mov     edx, dword ptr [esp + 0x14]
        push    0x771798
        and     esi, 0xffffff3f
        push    edx
        mov     dword ptr [ebp], esi
        call    dword ptr [g_0076b2ac]
        add     esp, 0x8
        test    eax, eax
        jnz     L6D4F
        or      esi, 0x40
        mov     dword ptr [ebp], esi
        jmp     L6D93
L6D4F:
        mov     eax, dword ptr [esp + 0x14]
        push    0x77178c
        push    eax
        call    dword ptr [g_0076b2ac]
        add     esp, 0x8
        test    eax, eax
        jnz     L6D6E
        or      esi, 0xc2
        jmp     L6D8B
L6D6E:
        mov     ecx, dword ptr [esp + 0x14]
        push    0x771780
        push    ecx
        call    dword ptr [g_0076b2ac]
        add     esp, 0x8
        test    eax, eax
        jnz     L6D93
        or      esi, 0x82
L6D8B:
        or      edi, 0x2
        mov     dword ptr [ebp], esi
        mov     dword ptr [ebx], edi
L6D93:
        mov     esi, dword ptr [esp + 0x20]
        push    0x771770
        push    esi
        lea     ecx, [esp + 0x4c]
        call    FUN_004125e0
        mov     eax, dword ptr [esp + 0x44]
        mov     edi, dword ptr [esp + 0x34]
        push    0x0
        lea     edx, [esp + 0x15]
        push    edx
        push    eax
        mov     ecx, edi
        call    FUN_00411ec0
        mov     byte ptr [esp + 0x40], al
        mov     eax, dword ptr [esp + 0x44]
        test    eax, eax
        jz      L6DDC
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L6DDC
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L6DDC:
        mov     al, byte ptr [esp + 0x40]
        test    al, al
        jz      L6E01
        mov     al, byte ptr [esp + 0x11]
        test    al, al
        jz      L6E01
        mov     ecx, dword ptr [ebp]
        mov     eax, dword ptr [ebx]
        or      ecx, 0x110
        or      eax, 0x110
        mov     dword ptr [ebp], ecx
        mov     dword ptr [ebx], eax
L6E01:
        push    0x771760
        push    esi
        lea     ecx, [esp + 0x4c]
        call    FUN_004125e0
        mov     edx, dword ptr [esp + 0x44]
        push    0x0
        lea     ecx, [esp + 0x16]
        push    ecx
        push    edx
        mov     ecx, edi
        call    FUN_00411ec0
        mov     byte ptr [esp + 0x40], al
        mov     eax, dword ptr [esp + 0x44]
        test    eax, eax
        jz      L6E42
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L6E42
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L6E42:
        mov     al, byte ptr [esp + 0x40]
        test    al, al
        jz      L6E67
        mov     al, byte ptr [esp + 0x12]
        test    al, al
        jz      L6E67
        mov     ecx, dword ptr [ebp]
        mov     eax, dword ptr [ebx]
        or      ecx, 0x210
        or      eax, 0x210
        mov     dword ptr [ebp], ecx
        mov     dword ptr [ebx], eax
L6E67:
        push    0x771750
        push    esi
        lea     ecx, [esp + 0x4c]
        call    FUN_004125e0
        mov     ecx, dword ptr [esp + 0x44]
        push    0x0
        lea     eax, [esp + 0x17]
        push    eax
        push    ecx
        mov     ecx, edi
        call    FUN_00411ec0
        mov     byte ptr [esp + 0x40], al
        mov     eax, dword ptr [esp + 0x44]
        test    eax, eax
        jz      L6EA8
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L6EA8
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L6EA8:
        mov     al, byte ptr [esp + 0x40]
        test    al, al
        jz      L6ECD
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jz      L6ECD
        mov     ecx, dword ptr [ebp]
        mov     eax, dword ptr [ebx]
        or      ecx, 0x4000
        or      eax, 0x4000
        mov     dword ptr [ebp], ecx
        mov     dword ptr [ebx], eax
L6ECD:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x20
        ret
    }
}
