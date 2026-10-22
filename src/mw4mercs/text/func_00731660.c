/*
 * FUN_00731660 (1003 B) — Font/texture cache lookup + creation.
 *
 * __stdcall RET 4, one string param (EBP). Searches a linked list of
 * cached font objects (head g_8bc00c) for a match; if found, refreshes
 * it; otherwise builds a new font via GDI (SelectObject/SetBkColor/
 * SetBkMode/SetTextColor/DeleteObject) and registers it.
 *
 * Uses fnstsw ax (no-WAIT DF E0) + test ah,imm8 (F6 C4) for FPU compares,
 * which MSVC6 inline asm cannot encode natively -> __emit.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00732a20(void);
extern void FUN_00732870(void);
extern void FUN_004084c0(void);
extern void FUN_00758a20(void);
extern void FUN_00758ca0(void);
extern void FUN_00758b90(void);
extern void FUN_00735310(void);
extern void FUN_00731c80(void);
extern void FUN_00735350(void);
extern void FUN_00758cd0(void);
extern void FUN_00759610(void);

extern int g_8bc00c;
extern char g_8a9981;
extern char g_8a9980;
extern void *g_76b300;   /* _mbscmp (IAT) */
extern int g_8816c0;
extern int g_8816bc;
extern char g_8816e5;
extern int g_8816d0;
extern float g_8816d8;
extern int g_858c00;
extern int g_8a997c;
extern int g_8a9978;
extern int g_8816e0;
extern float g_8816b0;
extern float g_8816b8;
extern float g_76dd60;
extern void *g_76b068;   /* SelectObject (IAT) */
extern int g_8492fc;
extern int g_8a9974;
extern void *g_76b064;   /* SetBkColor (IAT) */
extern void *g_76b060;   /* SetBkMode (IAT) */
extern void *g_76b078;   /* SetTextColor (IAT) */
extern void *g_76b074;   /* DeleteObject (IAT) */

__declspec(naked) void FUN_00731660(void)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x18]
        xor     ebx, ebx
        cmp     ebp, ebx
        push    esi
        push    edi
        jz      L_1a41
        cmp     byte ptr [ebp], bl
        jz      L_1a41
        mov     esi, dword ptr [g_8bc00c]
        cmp     esi, ebx
        mov     byte ptr [g_8a9981], 0x1
        mov     byte ptr [g_8a9980], bl
        jz      L_1708
    L_169b:
        mov     edi, dword ptr [g_76b300]
        fild    dword ptr [g_8816c0]
        fcomp   dword ptr [esi + 0x2c]
        __emit 0xDF  /* fnstsw ax: MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6  /* test ah,0x40: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x40
        jz      L_1701
        fild    dword ptr [g_8816bc]
        fcomp   dword ptr [esi + 0x30]
        __emit 0xDF  /* fnstsw ax no-WAIT */
        __emit 0xE0
        __emit 0xF6  /* test ah,0x40 */
        __emit 0xC4
        __emit 0x40
        jz      L_1701
        mov     al, byte ptr [esi + 0x2054]
        cmp     al, byte ptr [g_8816e5]
        jnz     L_1701
        cmp     byte ptr [esi + 0x204d], bl
        jz      L_16dc
        mov     ecx, dword ptr [esi + 0x14]
        cmp     ecx, dword ptr [g_8816d0]
        jnz     L_1701
    L_16dc:
        fld     dword ptr [esi + 0x2050]
        fcomp   dword ptr [g_8816d8]
        __emit 0xDF  /* fnstsw ax no-WAIT */
        __emit 0xE0
        __emit 0xF6  /* test ah,0x40 */
        __emit 0xC4
        __emit 0x40
        jz      L_1701
        lea     edx, [esi + 0x4c]
        push    edx
        push    ebp
        call    edi
        add     esp, 0x8
        test    eax, eax
        jz      L_1791
    L_1701:
        mov     esi, dword ptr [esi + 0x24]
        cmp     esi, ebx
        __emit 0x75  /* jnz L_169b: MSVC6 miscomputes backward rel8 (off-by-6); use exact ref bytes 75 93 */
        __emit 0x93
    L_1708:
        mov     eax, dword ptr [g_8816c0]
        mov     ecx, dword ptr [g_8816bc]
        mov     edx, dword ptr [g_858c00]
        mov     dword ptr [esp + 0x10], eax
        lea     eax, [esp + 0x14]
        mov     dword ptr [esp + 0x18], ecx
        push    eax
        lea     ecx, [esp + 0x24]
        push    ecx
        push    ebp
        mov     dword ptr [g_8a997c], edx
        mov     dword ptr [g_8a9978], ebx
        mov     dword ptr [esp + 0x2c], ebx
        mov     dword ptr [esp + 0x20], ebx
        call    FUN_00732a20
        mov     eax, dword ptr [g_8816e0]
        cmp     eax, 0x1
        jz      L_1819
        jbe     L_1841
        cmp     eax, 0x3
        ja      L_1841
        fld     dword ptr [g_8816b0]
        fsub    dword ptr [g_8816b8]
        fadd    dword ptr [g_76dd60]
        fstp    dword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0x20]
        and     edx, 0x7fffff
        sub     edx, 0x400000
        mov     dword ptr [esp + 0x20], edx
        jmp     L_1841
    L_1791:
        cmp     byte ptr [esi + 0x204d], bl
        jnz     L_17ae
        mov     eax, dword ptr [g_8816d0]
        cmp     eax, dword ptr [esi + 0x2058]
        jz      L_17ae
        push    eax
        mov     ecx, esi
        call    FUN_00758ca0
    L_17ae:
        mov     ecx, esi
        call    FUN_00758b90
        mov     eax, dword ptr [esi + 0x2058]
        push    eax
        mov     ecx, esi
        call    FUN_00758ca0
        fld     dword ptr [esi + 0x3c]
        fadd    dword ptr [g_76dd60]
        pop     edi
        mov     byte ptr [g_8a9981], bl
        fstp    dword ptr [esp + 0xc]
        fld     dword ptr [esi + 0x40]
        mov     ecx, dword ptr [esp + 0xc]
        fadd    dword ptr [g_76dd60]
        and     ecx, 0x7fffff
        pop     esi
        fstp    dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x18]
        sub     ecx, 0x400000
        and     edx, 0x7fffff
        sub     edx, 0x400000
        pop     ebp
        mov     dword ptr [g_8816c0], ecx
        mov     dword ptr [g_8816bc], edx
        pop     ebx
        add     esp, 0xc
        ret     0x4
    L_1819:
        fld     dword ptr [g_8816b0]
        fsub    dword ptr [g_8816b8]
        fadd    dword ptr [g_76dd60]
        fstp    dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x20]
        and     eax, 0x7fffff
        sub     eax, 0x400000
        mov     dword ptr [esp + 0x20], eax
    L_1841:
        push    ebp
        call    FUN_00732870
        mov     ecx, dword ptr [g_8a9978]
        mov     edx, dword ptr [g_8a997c]
        mov     edi, dword ptr [g_76b068]
        push    ecx
        push    edx
        call    edi
        mov     eax, dword ptr [g_8492fc]
        push    eax
        push    0x205c
        call    FUN_004084c0
        add     esp, 0x8
        cmp     eax, ebx
        jz      L_1893
        mov     edx, dword ptr [esp + 0x14]
        xor     ecx, ecx
        mov     cl, byte ptr [g_8a9980]
        push    ecx
        mov     ecx, dword ptr [esp + 0x24]
        push    edx
        push    ecx
        push    ebp
        mov     ecx, eax
        call    FUN_00758a20
        mov     esi, eax
        jmp     L_1895
    L_1893:
        xor     esi, esi
    L_1895:
        fild    dword ptr [g_8816c0]
        mov     al, byte ptr [g_8816e5]
        mov     edx, dword ptr [g_8816d8]
        mov     ecx, dword ptr [g_8816d0]
        fstp    dword ptr [esi + 0x2c]
        mov     byte ptr [esi + 0x2054], al
        fild    dword ptr [g_8816bc]
        mov     eax, dword ptr [esi + 0x1c]
        cmp     eax, ebx
        mov     dword ptr [esi + 0x2050], edx
        fstp    dword ptr [esi + 0x30]
        mov     dword ptr [esi + 0x2058], ecx
        mov     dword ptr [esi + 0x34], ebx
        mov     dword ptr [esi + 0x38], ebx
        jz      L_19ee
        mov     edx, dword ptr [eax + 0xc]
        push    offset g_8a997c
        push    edx
        call    FUN_00735310
        mov     eax, dword ptr [g_8a9974]
        mov     ecx, dword ptr [g_8a997c]
        push    eax
        push    ecx
        call    edi
        mov     edx, dword ptr [g_8a997c]
        push    ebx
        push    edx
        mov     dword ptr [g_8a9978], eax
        call    dword ptr [g_76b064]
        mov     eax, dword ptr [g_8a997c]
        push    0x1
        push    eax
        call    dword ptr [g_76b060]
        cmp     byte ptr [g_8a9980], bl
        jz      L_1950
        mov     eax, dword ptr [g_8816d0]
        test    eax, 0xffffff
        jnz     L_1934
        push    0x10101
        jmp     L_1955
    L_1934:
        xor     edx, edx
        mov     dl, ah
        mov     dh, al
        shr     eax, 0x10
        and     eax, 0xff
        shl     edx, 0x8
        or      edx, eax
        mov     eax, dword ptr [g_8a997c]
        push    edx
        push    eax
        jmp     L_195c
    L_1950:
        push    0xffffff
    L_1955:
        mov     ecx, dword ptr [g_8a997c]
        push    ecx
    L_195c:
        call    dword ptr [g_76b078]
        push    esi
        push    ebp
        call    FUN_00731c80
        mov     edx, dword ptr [g_8a9978]
        mov     eax, dword ptr [g_8a997c]
        push    edx
        push    eax
        call    edi
        mov     ecx, dword ptr [g_8a997c]
        mov     edx, dword ptr [esi + 0x1c]
        mov     eax, dword ptr [edx + 0xc]
        push    ecx
        push    eax
        call    FUN_00735350
        mov     ecx, esi
        call    FUN_00758cd0
        fild    dword ptr [esp + 0x10]
        fcomp   dword ptr [g_8816b8]
        __emit 0xDF  /* fnstsw ax no-WAIT */
        __emit 0xE0
        __emit 0xF6  /* test ah,0x1 */
        __emit 0xC4
        __emit 0x01
        jz      L_19ca
        fld     dword ptr [g_8816b8]
        fadd    dword ptr [g_76dd60]
        fstp    dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x10]
        and     eax, 0x7fffff
        sub     eax, 0x400000
        mov     dword ptr [g_8816c0], eax
        mov     dword ptr [esp + 0x10], eax
    L_19ca:
        fild    dword ptr [esp + 0x18]
        push    ecx
        fiadd   dword ptr [esi + 0x38]
        fstp    dword ptr [esp]
        push    ecx
        fild    dword ptr [esi + 0x34]
        mov     ecx, esi
        fiadd   dword ptr [esp + 0x18]
        fstp    dword ptr [esp]
        call    FUN_00759610
        mov     ecx, esi
        call    FUN_00758b90
    L_19ee:
        mov     ecx, dword ptr [g_8a9974]
        push    ecx
        call    dword ptr [g_76b074]
        mov     edi, dword ptr [g_8816c0]
        mov     edx, dword ptr [esi + 0x34]
        mov     ecx, dword ptr [g_8816bc]
        mov     eax, dword ptr [esi + 0x38]
        add     edi, edx
        mov     dword ptr [g_8816c0], edi
        fild    dword ptr [g_8816c0]
        add     ecx, eax
        mov     dword ptr [g_8816bc], ecx
        fstp    dword ptr [esi + 0x3c]
        mov     dword ptr [g_8a9974], ebx
        fild    dword ptr [g_8816bc]
        mov     byte ptr [g_8a9981], bl
        mov     dword ptr [g_8a997c], ebx
        fstp    dword ptr [esi + 0x40]
    L_1a41:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     0x4
    }
}
