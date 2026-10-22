/*
 * FUN_006af020 (1025 B) — __thiscall, RET 4. Vector/object update helper
 * with FPU math and multiple sub-object setup paths.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7f2464;          /* 0x007f2464 */
extern float g_76d070;        /* 0x0076d070 */
extern float g_770168;        /* 0x00770168 */
extern int g_7b220c;          /* 0x007b220c */

extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_0068d4c0(void);
extern void __cdecl FUN_0040c9c0(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_00686640(void);
extern void __cdecl FUN_0041c540(void);
extern void __cdecl FUN_00687ca0(void);
extern void __cdecl FUN_00587830(void);
extern void __cdecl FUN_0040ccd0(void);
extern void __cdecl FUN_00687c70(void);
extern void __cdecl FUN_00687ae0(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_006b0310(void);

__declspec(naked) void FUN_006af020(void)
{
    __asm {
        mov     eax, dword ptr [g_7f2464]
        sub     esp, 0x58
        push    ebp
        push    esi
        push    edi
        push    eax
        mov     edi, ecx
        call    FUN_006f4950
        mov     ecx, dword ptr [edi + 0x34]
        mov     ecx, dword ptr [ecx + 0x48]
        lea     ebp, [edi + 0xc]
        push    ebp
        call    FUN_0068d4c0
        mov     esi, eax
        test    esi, esi
        jz      L_af377
        mov     al, byte ptr [esi + 0x14]
        test    al, al
        mov     dword ptr [esp + 0x14], 0
        jz      L_af1bb
        fld     dword ptr [esi + 4]
        push    ecx
        fsub    dword ptr [esi]
        lea     ecx, [esp + 0x44]
        fmul    dword ptr [g_76d070]
        fadd    dword ptr [esi]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [esi + 0xc]
        mov     ebp, dword ptr [esp + 0x10]
        fadd    dword ptr [g_770168]
        fstp    dword ptr [esp]
        push    0
        push    ebp
        call    FUN_0040c9c0
        lea     edx, [esp + 0x40]
        push    edx
        lea     ecx, [esp + 0x50]
        call    FUN_0040c5d0
        lea     eax, [esp + 0x4c]
        push    eax
        lea     ecx, [esp + 0x2c]
        call    FUN_0040c410
        fld     dword ptr [esi + 8]
        fsub    dword ptr [g_770168]
        push    ecx
        lea     ecx, [esp + 0x50]
        fstp    dword ptr [esp]
        push    0
        push    ebp
        call    FUN_0040c9c0
        lea     ecx, [esp + 0x4c]
        push    ecx
        lea     ecx, [esp + 0x44]
        call    FUN_0040c5d0
        lea     edx, [esp + 0x40]
        push    edx
        lea     ecx, [esp + 0x20]
        call    FUN_0040c410
        mov     ecx, dword ptr [esp + 0x68]
        fld     dword ptr [ecx + 8]
        fcomp   dword ptr [esp + 0x24]
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L_af0fe
        mov     eax, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x24]
        mov     dword ptr [esp + 0x10], eax
        jmp     L_af10a
L_af0fe:
        mov     eax, dword ptr [esp + 0x28]
        mov     edx, dword ptr [esp + 0x30]
        mov     dword ptr [esp + 0x10], eax
L_af10a:
        mov     esi, dword ptr [edi + 0x28]
        push    esi
        lea     eax, [esp + 0x14]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x58]
        push    ecx
        mov     ecx, dword ptr [edi + 0x34]
        mov     dword ptr [esp + 0x28], edx
        call    FUN_00686640
        push    eax
        lea     ecx, [esp + 0x38]
        call    FUN_0040c410
        mov     edx, dword ptr [g_7b220c]
        push    edx
        lea     eax, [esp + 0x44]
        push    eax
        lea     ecx, [esp + 0x3c]
        push    ecx
        mov     dword ptr [esp + 0x4c], 0xbf800000
        mov     dword ptr [esp + 0x50], 0xbf800000
        mov     dword ptr [esp + 0x54], 0xbf800000
        call    FUN_0041c540
        add     esp, 0xc
        test    al, al
        jnz     L_af309
        lea     edx, [esp + 0x34]
        push    edx
        lea     ecx, [esp + 0x50]
        call    FUN_0040c410
        mov     ebp, dword ptr [edi + 0x54]
        mov     eax, dword ptr [edi + 0x58]
        cmp     ebp, eax
        mov     dword ptr [esp + 0x58], esi
        lea     esi, [edi + 0x50]
        mov     byte ptr [esp + 0x5c], 0
        mov     dword ptr [esp + 0x60], 0xffffffff
        jz      L_af1af
        test    ebp, ebp
        jz      L_af1a4
        lea     eax, [esp + 0x4c]
        push    eax
        mov     ecx, ebp
        call    FUN_00687ca0
L_af1a4:
        add     ebp, 0x18
        mov     dword ptr [esi + 4], ebp
        jmp     L_af309
L_af1af:
        push    1
        lea     ecx, [esp + 0x50]
        push    ecx
        jmp     L_af301
L_af1bb:
        fld     dword ptr [esi + 0xc]
        fsub    dword ptr [esi + 8]
        fmul    dword ptr [g_76d070]
        fadd    dword ptr [esi + 8]
        fstp    dword ptr [esp + 0xc]
        mov     ebp, dword ptr [esp + 0xc]
        fld     dword ptr [esi + 4]
        fadd    dword ptr [g_770168]
        push    ebp
        push    0
        push    ecx
        lea     ecx, [esp + 0x4c]
        fstp    dword ptr [esp]
        call    FUN_00587830
        push    eax
        lea     ecx, [esp + 0x50]
        call    FUN_0040c5d0
        lea     edx, [esp + 0x4c]
        push    edx
        lea     ecx, [esp + 0x2c]
        call    FUN_0040c410
        fld     dword ptr [esi]
        fsub    dword ptr [g_770168]
        push    ebp
        push    0
        push    ecx
        lea     ecx, [esp + 0x4c]
        fstp    dword ptr [esp]
        call    FUN_00587830
        push    eax
        lea     ecx, [esp + 0x50]
        call    FUN_0040c5d0
        lea     eax, [esp + 0x4c]
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_0040c410
        mov     ecx, dword ptr [esp + 0x68]
        fld     dword ptr [ecx]
        fcomp   dword ptr [esp + 0x1c]
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L_af252
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x24]
        mov     dword ptr [esp + 0x10], edx
        jmp     L_af25e
L_af252:
        mov     edx, dword ptr [esp + 0x28]
        mov     eax, dword ptr [esp + 0x30]
        mov     dword ptr [esp + 0x10], edx
L_af25e:
        mov     esi, dword ptr [edi + 0x28]
        push    esi
        lea     edx, [esp + 0x14]
        push    edx
        mov     dword ptr [esp + 0x20], eax
        push    ecx
        mov     ecx, dword ptr [edi + 0x34]
        lea     eax, [esp + 0x58]
        push    eax
        call    FUN_00686640
        push    eax
        lea     ecx, [esp + 0x38]
        call    FUN_0040c410
        push    0xbf800000
        push    0xbf800000
        push    0xbf800000
        lea     ecx, [esp + 0x58]
        call    FUN_0040c9c0
        mov     ecx, dword ptr [g_7b220c]
        push    ecx
        lea     edx, [esp + 0x50]
        push    edx
        lea     eax, [esp + 0x3c]
        push    eax
        call    FUN_0041c540
        add     esp, 0xc
        test    al, al
        jnz     L_af309
        lea     ecx, [esp + 0x34]
        push    ecx
        lea     ecx, [esp + 0x50]
        call    FUN_0040ccd0
        mov     ebp, dword ptr [edi + 0x54]
        mov     eax, dword ptr [edi + 0x58]
        cmp     ebp, eax
        mov     dword ptr [esp + 0x58], esi
        lea     esi, [edi + 0x50]
        mov     byte ptr [esp + 0x5c], 0
        mov     dword ptr [esp + 0x60], 0xffffffff
        jz      L_af2fa
        lea     edx, [esp + 0x4c]
        push    edx
        push    ebp
        call    FUN_00687c70
        add     esp, 8
        add     ebp, 0x18
        mov     dword ptr [esi + 4], ebp
        jmp     L_af309
L_af2fa:
        push    1
        lea     eax, [esp + 0x50]
        push    eax
L_af301:
        push    ebp
        mov     ecx, esi
        call    FUN_00687ae0
L_af309:
        lea     eax, [edi + 0xc]
        push    eax
        lea     ecx, [esp + 0x50]
        call    FUN_0040ccd0
        mov     eax, dword ptr [edi + 0x58]
        lea     esi, [edi + 0x50]
        mov     edi, dword ptr [esi + 4]
        cmp     edi, eax
        mov     dword ptr [esp + 0x58], 0x80
        mov     byte ptr [esp + 0x5c], 1
        mov     dword ptr [esp + 0x60], 0xffffffff
        jz      L_af35a
        lea     ecx, [esp + 0x4c]
        push    ecx
        push    edi
        call    FUN_00687c70
        add     edi, 0x18
        add     esp, 8
        mov     dword ptr [esi + 4], edi
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0x58
        ret     4
L_af35a:
        push    1
        lea     edx, [esp + 0x50]
        push    edx
        push    edi
        mov     ecx, esi
        call    FUN_00687ae0
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0x58
        ret     4
L_af377:
        mov     eax, dword ptr [ebp]
        mov     esi, dword ptr [edi + 0x28]
        mov     ecx, dword ptr [edi + 0x14]
        push    esi
        lea     edx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], eax
        mov     eax, dword ptr [esp + 0x6c]
        push    edx
        mov     dword ptr [esp + 0x20], ecx
        push    eax
        lea     ecx, [esp + 0x58]
        push    ecx
        mov     ecx, dword ptr [edi + 0x34]
        mov     dword ptr [esp + 0x24], 0
        call    FUN_00686640
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_0040c410
        push    0xbf800000
        push    0xbf800000
        push    0xbf800000
        lea     ecx, [esp + 0x58]
        call    FUN_0040c9c0
        mov     edx, dword ptr [g_7b220c]
        push    edx
        lea     eax, [esp + 0x50]
        push    eax
        lea     ecx, [esp + 0x18]
        push    ecx
        call    FUN_0041c540
        add     esp, 0xc
        test    al, al
        jnz     L_af413
        lea     edx, [esp + 0x10]
        push    edx
        lea     ecx, [esp + 0x50]
        call    FUN_0040ccd0
        lea     eax, [esp + 0x4c]
        push    eax
        lea     ecx, [edi + 0x50]
        mov     dword ptr [esp + 0x5c], esi
        mov     byte ptr [esp + 0x60], 0
        mov     dword ptr [esp + 0x64], 0xffffffff
        call    FUN_006b0310
L_af413:
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0x58
        ret     4
    }
}
