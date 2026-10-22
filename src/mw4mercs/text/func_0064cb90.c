/*
 * FUN_0064cb90 (742 B) ? ABL symbol-table switch dispatcher. Reads
 * DAT_008058ac, dispatches through a jump table (0x64ce78) indexed by a
 * lookup table (0x64ce90). Cases build/register string-literal symbols.
 *
 * __cdecl, no params, plain RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_008058ac;
extern int g_0080da28;
extern char g_7f3a54[];
extern int g_008050a0;
extern int g_0080d9bc;
extern int g_008050a4;
extern int g_0080d9b4;
extern int g_008050a8;
extern char g_008050ac[];
extern int g_0080d9b8;
extern int g_008058b4;
extern char g_792ce4[];
extern int g_0080da38;
extern char g_64ce90[];
extern int g_64ce78[];
extern void __cdecl FUN_0064fc80(void);
extern void __cdecl FUN_00649ec0(void);
extern void __cdecl FUN_00649150(void);
extern void __cdecl FUN_0061e600(void);
extern void __cdecl FUN_0064ca50(void);
extern void __cdecl FUN_0064ff50(void);
extern void __cdecl FUN_00650120(void);
extern void __cdecl FUN_0069b0a0(void);
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0061ef00(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00562f10(void);
extern void __cdecl FUN_00562f40(void);
extern void __cdecl FUN_0064d170(void);
extern void __cdecl FUN_0069ae70(void);
extern void __cdecl FUN_0064cb90(void);

__declspec(naked) void __cdecl FUN_0064cb90(void)
{
    __asm {
        mov     eax, dword ptr [g_008058ac]
        sub     esp, 0x14
        dec     eax
        cmp     eax, 0x31
        push    esi
        ja      L_ce62
        xor     ecx, ecx
        mov     cl, byte ptr [eax + g_64ce90]
        jmp     dword ptr [ecx*4 + g_64ce78]

    L_cbb2:
        lea     edx, [esp + 0x4]
        push    edx
        mov     dword ptr [esp + 0x8], 0x0
        call    FUN_0064fc80
        mov     eax, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [eax + 0x18]
        add     esp, 0x4
        dec     ecx
        jz      L_cc02
        sub     ecx, 0x7
        push    eax
        jz      L_cbe4
        call    FUN_0064ca50
        add     esp, 0x4
        pop     esi
        add     esp, 0x14
        ret
    L_cbe4:
        call    FUN_00649ec0
        call    FUN_00649150
        mov     eax, dword ptr [esp + 0x8]
        push    0x1
        push    eax
        call    FUN_0061e600
        add     esp, 0xc
        pop     esi
        add     esp, 0x14
        ret
    L_cc02:
        push    eax
        call    FUN_00649ec0
        add     esp, 0x4
        call    FUN_00649150
        mov     ecx, dword ptr [esp + 0x4]
        mov     eax, dword ptr [ecx + 0x3c]
        pop     esi
        add     esp, 0x14
        ret

    L_cc1c:
        mov     edx, dword ptr [g_0080da28]
        push    edx
        push    offset g_7f3a54
        call    FUN_0064ff50
        add     esp, 0x8
        test    eax, eax
        jnz     L_cc46
        push    offset g_0080da28
        push    offset g_7f3a54
        call    FUN_00650120
        add     esp, 0x8
    L_cc46:
        mov     ecx, dword ptr [g_008050a0]
        test    ecx, ecx
        jnz     L_cc63
        mov     ecx, dword ptr [g_0080d9bc]
        mov     edx, dword ptr [g_008050a4]
        mov     dword ptr [eax + 0x3c], ecx
        mov     esi, ecx
        jmp     L_cc74
    L_cc63:
        mov     ecx, dword ptr [g_0080d9b4]
        mov     edx, dword ptr [g_008050a8]
        mov     dword ptr [eax + 0x3c], ecx
        mov     esi, ecx
    L_cc74:
        push    eax
        mov     dword ptr [eax + 0x1c], edx
        call    FUN_00649ec0
        add     esp, 0x4
        call    FUN_00649150
        mov     eax, esi
        pop     esi
        add     esp, 0x14
        ret

    L_cc8c:
        push    ebp
        push    edi
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_008050ac
        repne scasb
        mov     eax, dword ptr [g_0080da28]
        not     ecx
        push    eax
        dec     ecx
        push    offset g_7f3a54
        mov     esi, ecx
        call    FUN_0064ff50
        mov     ebp, eax
        add     esp, 0x8
        test    ebp, ebp
        mov     dword ptr [esp + 0xc], ebp
        jnz     L_ccd4
        push    offset g_0080da28
        push    offset g_7f3a54
        call    FUN_00650120
        add     esp, 0x8
        mov     dword ptr [esp + 0xc], eax
        mov     ebp, eax
    L_ccd4:
        cmp     esi, 0x1
        jnz     L_cced
        mov     cl, byte ptr [g_008050ac]
        mov     esi, dword ptr [g_0080d9b8]
        mov     byte ptr [ebp + 0x1c], cl
        jmp     L_ce1d
    L_cced:
        push    ebx
        push    esi
        call    FUN_0069b0a0
        mov     ebx, dword ptr [g_008058b4]
        mov     dword ptr [esp + 0x24], eax
        mov     dword ptr [ebp + 0x3c], eax
        mov     eax, dword ptr [ebx + 0xc]
        add     esp, 0x4
        test    eax, eax
        jz      L_cddf
        push    eax
        inc     esi
        push    esi
        call    FUN_006f3c80
        mov     esi, dword ptr [ebx + 0x14]
        cmp     esi, dword ptr [ebx + 0x18]
        mov     dword ptr [esp + 0x14], eax
        jz      L_cd36
        test    esi, esi
        jz      L_cd29
        mov     dword ptr [esi], eax
    L_cd29:
        add     esi, 0x4
        mov     dword ptr [ebx + 0x14], esi
        mov     ebx, eax
        jmp     L_cde1
    L_cd36:
        mov     edi, dword ptr [ebx + 0x10]
        mov     eax, esi
        sub     eax, edi
        sar     eax, 0x2
        cmp     eax, 0x1
        mov     dword ptr [esp + 0x18], 0x1
        mov     dword ptr [esp + 0x1c], eax
        lea     ecx, [esp + 0x18]
        jc      L_cd59
        lea     ecx, [esp + 0x1c]
    L_cd59:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp + 0x1c], ecx
        jz      L_cd77
        lea     edx, [ecx*4 + 0x0]
        push    edx
        call    FUN_004084d0
        add     esp, 0x4
        mov     ebp, eax
        jmp     L_cd79
    L_cd77:
        xor     ebp, ebp
    L_cd79:
        mov     eax, dword ptr [esp + 0x20]
        push    0x0
        push    eax
        push    ebp
        push    esi
        push    edi
        call    FUN_0061ef00
        add     esp, 0x14
        test    eax, eax
        jz      L_cd95
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [eax], ecx
    L_cd95:
        mov     ecx, esi
        sub     ecx, esi
        add     eax, 0x4
        sar     ecx, 0x2
        test    ecx, ecx
        mov     edi, eax
        jle     L_cdb2
        sub     esi, eax
    L_cda7:
        mov     edx, dword ptr [esi + edi]
        mov     dword ptr [edi], edx
        add     edi, 0x4
        dec     ecx
        jnz     L_cda7
    L_cdb2:
        mov     eax, dword ptr [ebx + 0x10]
        test    eax, eax
        jz      L_cdc2
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_cdc2:
        mov     eax, dword ptr [esp + 0x1c]
        lea     ecx, [ebp + eax*4]
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [ebx + 0x10], ebp
        mov     ebp, dword ptr [esp + 0x10]
        mov     dword ptr [ebx + 0x14], edi
        mov     dword ptr [ebx + 0x18], ecx
        mov     ebx, eax
        jmp     L_cde1
    L_cddf:
        xor     ebx, ebx
    L_cde1:
        test    ebx, ebx
        mov     dword ptr [ebp + 0x14], ebx
        jnz     L_cdf6
        push    offset g_792ce4
        push    ebx
        call    FUN_00562f10
        add     esp, 0x8
    L_cdf6:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_008050ac
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        shr     ecx, 0x2
        mov     edi, ebx
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        mov     esi, dword ptr [esp + 0x20]
        pop     ebx
    L_ce1d:
        push    ebp
        call    FUN_00649ec0
        add     esp, 0x4
        call    FUN_00649150
        pop     edi
        pop     ebp
        mov     eax, esi
        pop     esi
        add     esp, 0x14
        ret

    L_ce34:
        call    FUN_00649150
        call    FUN_0064cb90
        pop     esi
        add     esp, 0x14
        ret

    L_ce43:
        call    FUN_00649150
        call    FUN_0064d170
        push    0xb
        push    0x7
        mov     esi, eax
        call    FUN_0069ae70
        add     esp, 0x8
        mov     eax, esi
        pop     esi
        add     esp, 0x14
        ret

    L_ce62:
        push    0xc
        call    FUN_00562f40
        add     esp, 0x4
        mov     eax, offset g_0080da38
        pop     esi
        add     esp, 0x14
        ret
    }
}
