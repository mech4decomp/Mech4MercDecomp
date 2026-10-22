/*
 * FUN_007323D0 (514 B) — Text-format tag parser (color=/bold=/proportional=/italic=).
 *
 * __stdcall, RET 8 (2 params: char *param_1, char param_2).
 * Parses a leading "/" tag; dispatches on _strnicmp against string constants.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned char g_8816e7;                       /* DAT_008816e7 */
extern int (__cdecl *g_76b2b0)(const char *, const char *, unsigned int); /* _strnicmp IAT */
extern unsigned char g_8aa610[];                     /* hex-value lookup table */
extern unsigned int g_8a997c;                        /* DAT_008a997c (HDC) */
extern int (__stdcall *g_76b078)(void *, unsigned int); /* SetTextColor IAT */
extern unsigned int g_8816d0;                        /* DAT_008816d0 */
extern unsigned char g_8a9980;                       /* DAT_008a9980 */
extern unsigned char g_8816e5;                       /* DAT_008816e5 (bold) */
extern unsigned char g_8816e4;                       /* DAT_008816e4 (proportional) */
extern unsigned char g_8816e6;                       /* DAT_008816e6 (italic) */
extern void __cdecl FUN_00732870(int);

__declspec(naked) int __stdcall FUN_007323d0(char *param_1, char param_2)
{
    __asm {
        mov     al, byte ptr [g_8816e7]
        push    ebx
        push    ebp
        xor     ebx, ebx
        cmp     al, bl
        push    esi
        push    edi
        jnz     L_ret0
        mov     ebp, dword ptr [esp + 0x14]
        cmp     byte ptr [ebp], 0x2f
        jnz     L_ret0
        mov     al, byte ptr [ebp + 0x1]
        cmp     al, 0x2f
        lea     esi, [ebp + 0x1]
        jnz     L_407
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x1
        pop     ebx
        ret     0x8
L_407:
        mov     edi, dword ptr [g_76b2b0]
        push    0x6
        push    esi
        push    0x7a5748
        call    edi
        add     esp, 0xc
        test    eax, eax
        jnz     L_4b8
        cmp     byte ptr [esp + 0x18], bl
        jnz     L_4a5
        add     ebp, 0x7
        mov     ecx, 0x8
L_430:
        xor     eax, eax
        mov     al, byte ptr [ebp]
        xor     edx, edx
        shl     ebx, 0x4
        inc     ebp
        mov     dl, byte ptr [eax + g_8aa610]
        mov     eax, edx
        cmp     eax, 0x30
        jc      L_44d
        cmp     eax, 0x39
        jbe     L_457
L_44d:
        cmp     eax, 0x61
        jc      L_464
        cmp     eax, 0x66
        ja      L_464
L_457:
        sub     eax, 0x30
        cmp     eax, 0x9
        jbe     L_462
        sub     eax, 0x27
L_462:
        add     ebx, eax
L_464:
        dec     ecx
        jnz     L_430
        test    ebx, 0xffffff
        jnz     L_47c
        add     ebx, 0x10101
        push    0x10101
        jmp     L_493
L_47c:
        xor     ecx, ecx
        mov     cl, bh
        mov     edx, ebx
        shr     edx, 0x10
        and     edx, 0xff
        mov     ch, bl
        shl     ecx, 0x8
        or      ecx, edx
        push    ecx
L_493:
        mov     eax, dword ptr [g_8a997c]
        push    eax
        call    dword ptr [g_76b078]
        mov     dword ptr [g_8816d0], ebx
L_4a5:
        pop     edi
        pop     esi
        pop     ebp
        mov     byte ptr [g_8a9980], 0x1
        mov     eax, 0xf
        pop     ebx
        ret     0x8
L_4b8:
        push    0x6
        push    esi
        push    0x7a5768
        call    edi
        add     esp, 0xc
        test    eax, eax
        jnz     L_4e7
        cmp     byte ptr [esp + 0x18], bl
        jnz     L_4db
        push    ebx
        mov     byte ptr [g_8816e5], bl
        call    FUN_00732870
L_4db:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x7
        pop     ebx
        ret     0x8
L_4e7:
        push    0x6
        push    esi
        push    0x7a5770
        call    edi
        add     esp, 0xc
        test    eax, eax
        jnz     L_517
        cmp     byte ptr [esp + 0x18], bl
        jnz     L_50b
        push    ebx
        mov     byte ptr [g_8816e5], 0x1
        call    FUN_00732870
L_50b:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x7
        pop     ebx
        ret     0x8
L_517:
        push    0xe
        push    esi
        push    0x7a5778
        call    edi
        add     esp, 0xc
        test    eax, eax
        jnz     L_541
        cmp     byte ptr [esp + 0x18], bl
        jnz     L_535
        mov     byte ptr [g_8816e4], 0x1
L_535:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xf
        pop     ebx
        ret     0x8
L_541:
        push    0xe
        push    esi
        push    0x7a5788
        call    edi
        add     esp, 0xc
        test    eax, eax
        jnz     L_56a
        cmp     byte ptr [esp + 0x18], bl
        jnz     L_55e
        mov     byte ptr [g_8816e4], bl
L_55e:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xf
        pop     ebx
        ret     0x8
L_56a:
        push    0x8
        push    esi
        push    0x7a575c
        call    edi
        add     esp, 0xc
        test    eax, eax
        jnz     L_599
        cmp     byte ptr [esp + 0x18], bl
        jnz     L_58d
        push    ebx
        mov     byte ptr [g_8816e6], bl
        call    FUN_00732870
L_58d:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x9
        pop     ebx
        ret     0x8
L_599:
        push    0x8
        push    esi
        push    0x7a5750
        call    edi
        add     esp, 0xc
        test    eax, eax
        jnz     L_ret0
        cmp     byte ptr [esp + 0x18], bl
        jnz     L_5bd
        push    ebx
        mov     byte ptr [g_8816e6], 0x1
        call    FUN_00732870
L_5bd:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x9
        pop     ebx
        ret     0x8
L_ret0:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     0x8
    }
}
