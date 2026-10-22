/*
 * FUN_004015b0 (1108 B) — game-list / save-game initialization. __stdcall,
 * RET 0xC. Builds a string table from a global array, and if the table is
 * empty, initializes defaults and probes the "m4c"/".m4c" file extension
 * via a vtable call + sprintf loop.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004c9040(void);
extern void __cdecl FUN_00401d10(void);
extern void __cdecl FUN_00405f30(void);
extern void __cdecl FUN_007005d0(void);
extern void __cdecl FUN_004014d0(void);
extern void __cdecl FUN_00401560(void);
extern void __cdecl FUN_006fc4d0(void);

extern int  g_007b7e2c;
extern int  g_007b7df4;
extern int  g_007b7e28;
extern int  g_007b7df0;
extern int  g_007b7e14;
extern char g_007b7960[];
extern int  g_007b7968;
extern char g_007b796a;
extern int  g_007b7dfc;
extern char g_007b7a06;
extern char g_007b7a07[];
extern int  g_007b7e00;
extern int  g_007b796c;
extern int  g_007b7e04;
extern int  g_007b7e08;
extern int  g_007b7e54;
extern int  g_007b7e7c;
extern char g_007b7970[];
extern char g_007b7a39[];
extern int  g_007b7e74;
extern char g_007b7a9d[];
extern int  g_007b7e34;
extern char g_007b7b01[];
extern int  g_007b7e38;
extern int  g_007b7e30;
extern int  g_007b7b6c;
extern int  g_007b7b68;
extern int  g_007dab44;
extern int  g_007dab40;
extern int (*g_sprintf)(const char *, ...);   /* 0x0076b420 */
extern char g_m4c[];            /* 0x76b78c "m4c" */
extern char g_dotm4c[];         /* 0x76b784 ".m4c" */
extern char g_fmt[];            /* 0x76b77c "%s %d" */

__declspec(naked) int __stdcall FUN_004015b0(int a, int b, int c)
{
    __asm {
        mov     eax, dword ptr [g_007b7e2c]
        sub     esp, 0x258
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        call    FUN_004c9040
        mov     ecx, dword ptr [g_007b7df4]
        mov     dword ptr [g_007b7e28], eax
        mov     eax, dword ptr [g_007b7df0]
        add     esp, 0x4
        cmp     eax, ecx
        jge     L1714
        mov     ecx, dword ptr [g_007b7e14]
        mov     edx, dword ptr [ecx + eax*4]
        push    0x1
        push    edx
        push    offset g_007b7960
        call    FUN_00401d10
        mov     eax, dword ptr [g_007b7968]
        mov     ecx, eax
        and     ecx, 0xff
        xor     edx, edx
        mov     dl, byte ptr [g_007b796a]
        mov     dword ptr [g_007b7dfc], ecx
        xor     ecx, ecx
        mov     cl, ah
        xor     eax, eax
        mov     al, byte ptr [g_007b7a06]
        add     esp, 0xc
        mov     dword ptr [g_007b7e00], edx
        mov     edx, dword ptr [g_007b796c]
        xor     ebx, ebx
        mov     dword ptr [g_007b7e04], ecx
        mov     dword ptr [g_007b7e08], edx
        mov     dword ptr [g_007b7e54], eax
        xor     edi, edi
        mov     esi, offset g_007b7970
L1645:
        mov     ecx, dword ptr [g_007b7e7c]
        lea     edx, [edi + ecx*1]
        push    esi
        push    edx
        call    FUN_00405f30
        add     esi, 0x1e
        add     esp, 0x8
        add     edi, 0x4
        cmp     esi, offset g_007b7a06
        jl      L1645
        push    offset g_007b7a39
        push    offset g_007b7e74
        call    FUN_00405f30
        push    offset g_007b7a9d
        push    offset g_007b7e34
        call    FUN_00405f30
        push    offset g_007b7b01
        push    offset g_007b7e38
        call    FUN_00405f30
        mov     eax, dword ptr [g_007b7e28]
        xor     edi, edi
        add     esp, 0x18
        cmp     eax, ebx
        mov     dword ptr [g_007b7e30], edi
        jle     L16F3
        mov     ebp, dword ptr [g_007b7e2c]
L16AD:
        mov     eax, dword ptr [ebp + edi*4]
        mov     esi, offset g_007b7a07
L16B6:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     L16DA
        cmp     cl, bl
        jz      L16D6
        mov     dl, byte ptr [eax + 0x1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 0x1]
        jnz     L16DA
        add     eax, 0x2
        add     esi, 0x2
        cmp     cl, bl
        jnz     L16B6
L16D6:
        xor     eax, eax
        jmp     L16DF
L16DA:
        sbb     eax, eax
        sbb     eax, -1
L16DF:
        cmp     eax, ebx
        jz      L16F3
        mov     eax, dword ptr [g_007b7e28]
        inc     edi
        cmp     edi, eax
        mov     dword ptr [g_007b7e30], edi
        jl      L16AD
L16F3:
        cmp     edi, dword ptr [g_007b7e28]
        jnz     L19F5
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [g_007b7e30], ebx
        xor     eax, eax
        pop     ebx
        add     esp, 0x258
        ret     0xc
L1714:
        xor     ebx, ebx
        cmp     ecx, ebx
        jnz     L1835
        mov     dword ptr [g_007b7dfc], ebx
        call    FUN_007005d0
        mov     edx, dword ptr [g_007b7e74]
        push    offset g_007b7960
        mov     dword ptr [g_007b7e04], ebx
        mov     dword ptr [g_007b7e08], ebx
        mov     dword ptr [g_007b7e54], 0x1
        and     eax, 0xff
        mov     dword ptr [g_007b7e00], eax
        mov     eax, dword ptr [g_007b7e7c]
        mov     ecx, dword ptr [eax]
        mov     byte ptr [ecx], bl
        mov     dword ptr [g_007b7e30], ebx
        mov     byte ptr [edx], bl
        mov     dword ptr [g_007b7b6c], ebx
        mov     dword ptr [g_007b7b68], ebx
        call    FUN_004014d0
        push    offset g_007b7960
        call    FUN_00401560
        mov     ebp, dword ptr [g_007b7e7c]
        add     esp, 0x8
        mov     edx, offset g_007b7970
L178E:
        mov     edi, dword ptr [ebp]
        or      ecx, -1
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        add     edx, 0x1e
        add     ebp, 0x4
        cmp     edx, offset g_007b7a06
        rep     movsb
        jl      L178E
        mov     ecx, dword ptr [g_007b7e2c]
        mov     edx, dword ptr [g_007b7e30]
        mov     edi, dword ptr [ecx + edx*4]
        or      ecx, -1
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        mov     edi, offset g_007b7a07
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        mov     edi, dword ptr [g_007b7e34]
        or      ecx, -1
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 0x2
        mov     esi, edi
        mov     edi, offset g_007b7a9d
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        mov     edi, dword ptr [g_007b7e38]
        or      ecx, -1
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 0x2
        mov     edi, offset g_007b7b01
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
L1835:
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx + 0xc]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        push    0x754b
        call    dword ptr [eax + 0x34]
        or      ecx, -1
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        lea     edx, [esp + 0x13c]
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        or      ecx, -1
        xor     eax, eax
        mov     edi, offset g_m4c
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        lea     edx, [esp + 0x10]
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        or      ecx, -1
        xor     eax, eax
        lea     edi, [esp + 0x13c]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebp, ecx
        or      ecx, -1
        mov     esi, edi
        lea     edx, [esp + 0x10]
        mov     edi, edx
        repne   scasb
        dec     edi
        mov     ecx, ebp
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, ebp
        and     ecx, 0x3
        rep     movsb
        or      ecx, -1
        mov     edi, offset g_dotm4c
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebp, ecx
        or      ecx, -1
        mov     esi, edi
        lea     edx, [esp + 0x10]
        mov     edi, edx
        repne   scasb
        mov     ecx, ebp
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebp
        lea     eax, [esp + 0x10]
        and     ecx, 0x3
        push    eax
        rep     movsb
        call    FUN_006fc4d0
        test    al, al
        jz      L19E0
        mov     ebp, dword ptr [g_sprintf]
L1916:
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx + 0xc]
        inc     ebx
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        push    ebx
        push    0x754b
        call    dword ptr [eax + 0x34]
        push    eax
        lea     ecx, [esp + 0x144]
        push    offset g_fmt
        push    ecx
        call    ebp
        or      ecx, -1
        xor     eax, eax
        add     esp, 0x10
        mov     edi, offset g_m4c
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        lea     edx, [esp + 0x10]
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        or      ecx, -1
        xor     eax, eax
        lea     edi, [esp + 0x13c]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        lea     edx, [esp + 0x10]
        mov     edi, edx
        mov     edx, ecx
        or      ecx, -1
        repne   scasb
        dec     edi
        mov     ecx, edx
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        or      ecx, -1
        mov     edi, offset g_dotm4c
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        lea     edx, [esp + 0x10]
        mov     edi, edx
        mov     edx, ecx
        or      ecx, -1
        repne   scasb
        mov     ecx, edx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, edx
        lea     eax, [esp + 0x10]
        and     ecx, 0x3
        push    eax
        rep     movsb
        call    FUN_006fc4d0
        test    al, al
        jnz     L1916
L19E0:
        lea     ecx, [esp + 0x13c]
        push    ecx
        push    offset g_007b7e74
        call    FUN_00405f30
        add     esp, 0x8
L19F5:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x258
        ret     0xc
    }
}
