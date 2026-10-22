/*
 * FUN_0065cdc0 (976 B) — two-pass list processing with a 9-entry switch
 * (jump table at 0x65d190) over string/type codes.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7f23b0;          /* 0x007f23b0 */
extern char g_76b768[];       /* 0x0076b768 */
extern char g_794d18[];       /* 0x00794d18 */
extern char g_7831c8[];       /* 0x007831c8 */
extern char g_794d10[];       /* 0x00794d10 */
extern char g_794d08[];       /* 0x00794d08 */
extern char g_794d00[];       /* 0x00794d00 */
extern char g_794cf8[];       /* 0x00794cf8 */
extern char g_794cec[];       /* 0x00794cec */
extern char g_794ce0[];       /* 0x00794ce0 */
extern char g_794cd8[];       /* 0x00794cd8 */

extern void __cdecl FUN_0065a720(void);
extern void __cdecl FUN_005faef0(void);
extern void __cdecl FUN_0063b190(void);
extern void __cdecl FUN_0064e100(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_0065cd00(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004ebcf0(void);
extern void __cdecl FUN_004ebe90(void);

__declspec(naked) void FUN_0065cdc0(void)
{
    __asm {
        sub     esp, 0x3c
        mov     eax, dword ptr [esp + 0x40]
        push    ebx
        push    esi
        mov     esi, dword ptr [eax]
        push    edi
        mov     edi, dword ptr [eax + 4]
        xor     bl, bl
        cmp     esi, edi
        mov     dword ptr [esp + 0x14], 0
        mov     dword ptr [esp + 0x40], esi
        mov     dword ptr [esp + 0x3c], edi
        jz      L_d189
L_cde9:
        mov     eax, dword ptr [esi]
        push    eax
        call    FUN_0065a720
        add     esp, 4
        test    eax, eax
        jz      L_ce33
        mov     ecx, eax
        mov     bl, 1
        call    FUN_005faef0
        mov     eax, dword ptr [eax]
        mov     ecx, dword ptr [eax]
        push    ecx
        call    FUN_0063b190
        add     esp, 4
        mov     ecx, eax
        call    FUN_0064e100
        mov     eax, dword ptr [eax]
        mov     edx, dword ptr [eax]
        push    edx
        call    FUN_0065a720
        add     esp, 4
        test    eax, eax
        jz      L_ce33
        cmp     dword ptr [eax + 0x5d0], -1
        jz      L_cf34
L_ce33:
        add     esi, 4
        cmp     esi, edi
        jnz     L_cde9
        test    bl, bl
        jz      L_d189
L_ce42:
        mov     esi, dword ptr [esp + 0x40]
        cmp     esi, edi
        mov     byte ptr [esp + 0x4c], 0
        mov     dword ptr [esp + 0x10], esi
        jz      L_d189
        mov     ebx, dword ptr [esp + 0x50]
L_ce5b:
        mov     eax, dword ptr [esi]
        push    eax
        call    FUN_0065a720
        add     esp, 4
        test    eax, eax
        jz      L_d17a
        cmp     eax, dword ptr [esp + 0x14]
        jz      L_d17a
        mov     esi, dword ptr [eax + 0x2fc]
        test    esi, esi
        jz      L_d176
        mov     eax, dword ptr [g_7f23b0]
        mov     ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp     al, 1
        jnz     L_d176
        mov     eax, dword ptr [g_7f23b0]
        mov     ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L_d176
        mov     esi, dword ptr [esi + 0x5f4]
        test    esi, 0xfffffffc
        jz      L_d176
        and     esi, 0xfffffffc
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x18]
        cmp     al, 1
        jnz     L_d176
        mov     al, byte ptr [esp + 0x4c]
        test    al, al
        jnz     L_d0fe
        push    offset g_76b768
        lea     ecx, [esp + 0x54]
        mov     byte ptr [esp + 0x50], 1
        call    FUN_00412570
        lea     eax, [ebx + 0xffffec77]
        cmp     eax, 8
        ja      L_d099
        __emit 0xFF /* jmp dword ptr [eax*4+0x65d190]: no-base SIB dispatch, MSVC6 re-bases via EBX */
        __emit 0x24
        __emit 0x85
        __emit 0x90
        __emit 0xD1
        __emit 0x65
        __emit 0x00
L_cf0b:
        push    offset g_794d18
        lea     ecx, [esp + 0x1c]
        call    FUN_00412570
        lea     eax, [esp + 0x50]
        push    eax
        lea     ecx, [esp + 0x1c]
        push    ecx
        call    FUN_0065cd00
        mov     eax, dword ptr [esp + 0x20]
        add     esp, 8
        jmp     L_d04e
L_cf34:
        mov     dword ptr [esp + 0x14], eax
        jmp     L_ce42
L_cf3d:
        push    offset g_7831c8
        lea     ecx, [esp + 0x20]
        call    FUN_00412570
        lea     edx, [esp + 0x50]
        push    edx
        lea     eax, [esp + 0x20]
        push    eax
        call    FUN_0065cd00
        mov     eax, dword ptr [esp + 0x24]
        add     esp, 8
        jmp     L_d04e
L_cf66:
        push    offset g_794d10
        lea     ecx, [esp + 0x24]
        call    FUN_00412570
        lea     ecx, [esp + 0x50]
        push    ecx
        lea     edx, [esp + 0x24]
        push    edx
        call    FUN_0065cd00
        mov     eax, dword ptr [esp + 0x28]
        add     esp, 8
        jmp     L_d04e
L_cf8f:
        push    offset g_794d08
        lea     ecx, [esp + 0x28]
        call    FUN_00412570
        lea     eax, [esp + 0x50]
        push    eax
        lea     ecx, [esp + 0x28]
        push    ecx
        call    FUN_0065cd00
        mov     eax, dword ptr [esp + 0x2c]
        add     esp, 8
        jmp     L_d04e
L_cfb8:
        push    offset g_794d00
        lea     ecx, [esp + 0x2c]
        call    FUN_00412570
        lea     edx, [esp + 0x50]
        push    edx
        lea     eax, [esp + 0x2c]
        push    eax
        call    FUN_0065cd00
        mov     eax, dword ptr [esp + 0x30]
        add     esp, 8
        jmp     L_d04e
L_cfde:
        push    offset g_794cf8
        lea     ecx, [esp + 0x30]
        call    FUN_00412570
        lea     ecx, [esp + 0x50]
        push    ecx
        lea     edx, [esp + 0x30]
        push    edx
        call    FUN_0065cd00
        mov     eax, dword ptr [esp + 0x34]
        add     esp, 8
        jmp     L_d04e
L_d004:
        push    offset g_794cec
        lea     ecx, [esp + 0x34]
        call    FUN_00412570
        lea     eax, [esp + 0x50]
        push    eax
        lea     ecx, [esp + 0x34]
        push    ecx
        call    FUN_0065cd00
        mov     eax, dword ptr [esp + 0x38]
        add     esp, 8
        jmp     L_d04e
L_d02a:
        push    offset g_794ce0
        lea     ecx, [esp + 0x38]
        call    FUN_00412570
        lea     edx, [esp + 0x50]
        push    edx
        lea     eax, [esp + 0x38]
        push    eax
        call    FUN_0065cd00
        mov     eax, dword ptr [esp + 0x3c]
        add     esp, 8
L_d04e:
        test    eax, eax
        jz      L_d099
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_d099
        jmp     L_d090
L_d05e:
        push    offset g_794cd8
        lea     ecx, [esp + 0x3c]
        call    FUN_00412570
        lea     ecx, [esp + 0x50]
        push    ecx
        lea     edx, [esp + 0x3c]
        push    edx
        call    FUN_0065cd00
        mov     eax, dword ptr [esp + 0x40]
        add     esp, 8
        test    eax, eax
        jz      L_d099
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_d099
L_d090:
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_d099:
        mov     edx, dword ptr [esp + 0x50]
        test    edx, edx
        jz      L_d0fe
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne scasb
        not     ecx
        dec     ecx
        mov     dword ptr [esp + 0x44], ecx
        jz      L_d0e3
        push    0x3f4ccccd
        push    0x3f000000
        push    0x3f800000
        push    0x3f800000
        push    edx
        push    1
        call    FUN_004ebcf0
        add     esp, 0x18
        test    eax, eax
        jz      L_d0df
        push    0
        mov     ecx, eax
        call    FUN_004ebe90
L_d0df:
        mov     edx, dword ptr [esp + 0x50]
L_d0e3:
        test    edx, edx
        jz      L_d0fa
        mov     al, byte ptr [edx - 1]
        dec     edx
        dec     al
        mov     byte ptr [edx], al
        jnz     L_d0fa
        push    edx
        call    FUN_004084e0
        add     esp, 4
L_d0fa:
        mov     edi, dword ptr [esp + 0x3c]
L_d0fe:
        mov     edx, dword ptr [esp + 0x40]
        mov     eax, dword ptr [esi]
        mov     ecx, edi
        sub     ecx, edx
        and     ecx, 0xfffffffc
        cmp     ecx, 4
        setz    dl
        lea     ecx, [esp + 0xc]
        push    edx
        push    ebx
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x28]
        mov     ecx, dword ptr [esp + 0xc]
        test    ecx, 0xfffffffc
        jz      L_d139
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0xc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0xc]
        mov     ecx, dword ptr [esp + 0xc]
L_d139:
        mov     edx, ecx
        and     edx, 1
        cmp     dl, 1
        jnz     L_d16e
        mov     eax, ecx
        and     eax, 2
        cmp     al, 2
        jnz     L_d15e
        and     ecx, 0xfffffffc
        mov     dword ptr [esp + 0xc], ecx
        jz      L_d16e
        mov     edx, dword ptr [ecx]
        push    3
        call    dword ptr [edx + 0xc]
        jmp     L_d16e
L_d15e:
        and     ecx, 0xfffffffc
        mov     dword ptr [esp + 0xc], ecx
        jz      L_d16e
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax + 0xc]
L_d16e:
        mov     dword ptr [esp + 0xc], 0
L_d176:
        mov     esi, dword ptr [esp + 0x10]
L_d17a:
        add     esi, 4
        cmp     esi, edi
        mov     dword ptr [esp + 0x10], esi
        jnz     L_ce5b
L_d189:
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x3c
        ret
        /* jump table data at 0x65d190 (relocated dword entries; inline asm has no dd) */
        __emit 0x0B
        __emit 0xCF
        __emit 0x65
        __emit 0x00
        __emit 0x3D
        __emit 0xCF
        __emit 0x65
        __emit 0x00
        __emit 0x66
        __emit 0xCF
        __emit 0x65
        __emit 0x00
        __emit 0x8F
        __emit 0xCF
        __emit 0x65
        __emit 0x00
        __emit 0xB8
        __emit 0xCF
        __emit 0x65
        __emit 0x00
        __emit 0xDE
        __emit 0xCF
        __emit 0x65
        __emit 0x00
        __emit 0x04
        __emit 0xD0
        __emit 0x65
        __emit 0x00
        __emit 0x2A
        __emit 0xD0
        __emit 0x65
        __emit 0x00
        __emit 0x5E
        __emit 0xD0
        __emit 0x65
        __emit 0x00
    }
}
