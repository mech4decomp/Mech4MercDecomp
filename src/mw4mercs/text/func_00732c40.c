/*
 * FUN_00732c40 (1180 B) — Font/text rendering helper (GDI + FPU).
 *
 * Walks a linked list of font objects (head DAT_008bc00c), matches by name
 * (mbscmp) / size / color, and renders text via GDI (SelectObject/SetBkColor/
 * SetTextColor/DeleteObject through IATs 0x0076b060-0x0076b078) with FPU
 * coordinate math. __cdecl, RET 0xC (3 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8bc00c;              /* DAT_008bc00c — font list head */
extern char g_8a9981;             /* DAT_008a9981 */
extern char g_8a9980;             /* DAT_008a9980 */
extern void *g_76b300;            /* function ptr (mbscmp) loaded into EDI */
extern char g_8816e5;             /* DAT_008816e5 */
extern int g_8816d0;              /* DAT_008816d0 */
extern int g_8816bc;              /* DAT_008816bc */
extern int g_858c00;              /* DAT_00858c00 */
extern int g_8816c0;              /* DAT_008816c0 */
extern float g_78d010;            /* 0x0078d010 */
extern int g_8a997c;              /* DAT_008a997c */
extern int g_8a9978;              /* DAT_008a9978 */
extern int g_8816d8;              /* DAT_008816d8 */
extern int g_8816e0;              /* DAT_008816e0 */
extern float g_8816b0;            /* DAT_008816b0 */
extern float g_8816b8;            /* DAT_008816b8 */
extern float g_76dd60;            /* 0x0076dd60 */
extern float g_76c5b0;            /* 0x0076c5b0 */
extern float g_76d070;            /* 0x0076d070 */
extern int g_8a9974;              /* DAT_008a9974 */
extern void *g_76b068;            /* function ptr (SelectObject) loaded into EDI */
extern int g_8492fc;              /* DAT_008492fc */
extern void *g_76b064;            /* IAT: SetBkColor */
extern void *g_76b060;            /* IAT: SetBkMode */
extern void *g_76b078;            /* IAT: SetTextColor */
extern void *g_76b074;            /* IAT: DeleteObject */

extern void __cdecl FUN_00732b60(void);
extern void __cdecl FUN_00758ca0(void);
extern void __cdecl FUN_00704a80(void);
extern void __cdecl FUN_00759610(void);
extern void __cdecl FUN_00758b90(void);
extern void __cdecl FUN_007330e0(void);
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_00758a20(void);
extern void __cdecl FUN_00735310(void);
extern void __cdecl FUN_00731c80(void);
extern void __cdecl FUN_00735350(void);
extern void __cdecl FUN_00758cd0(void);
extern void __cdecl FUN_00758b10(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void __cdecl FUN_00732c40(void)
{
    __asm {
        sub     esp, 0x14
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x20]
        xor     ebx, ebx
        cmp     ebp, ebx
        push    esi
        push    edi
        jz      L_30d0

        cmp     byte ptr [ebp], bl
        jz      L_30d0
        mov     esi, dword ptr [g_8bc00c]
        cmp     esi, ebx
        mov     byte ptr [g_8a9981], 0x1
        mov     byte ptr [g_8a9980], bl
        jz      L_2cc6
        mov     edi, dword ptr [g_76b300]

L_2c7b:
        mov     al, byte ptr [esi + 0x2054]
        cmp     al, byte ptr [g_8816e5]
        jnz     L_2cbf
        cmp     byte ptr [esi + 0x204d], bl
        jz      L_2c9c
        mov     ecx, dword ptr [esi + 0x14]
        cmp     ecx, dword ptr [g_8816d0]
        jnz     L_2cbf

L_2c9c:
        fild    dword ptr [esp + 0x2c]
        fcomp   dword ptr [esi + 0x2050]
        __emit 0xDF  /* __emit: fnstsw ax — MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6  /* __emit: test ah,imm8 — MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x40
        jz      L_2cbf
        lea     edx, [esi + 0x4c]
        push    edx
        push    ebp
        call    edi
        add     esp, 0x8
        test    eax, eax
        jz      L_2d71

L_2cbf:
        mov     esi, dword ptr [esi + 0x24]
        cmp     esi, ebx
        jnz     L_2c7b

L_2cc6:
        mov     edx, dword ptr [g_8816bc]
        fild    dword ptr [esp + 0x2c]
        mov     eax, dword ptr [g_858c00]
        mov     esi, dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [g_8816c0]
        fst     dword ptr [esp + 0x18]
        fmul    dword ptr [g_78d010]
        push    esi
        mov     dword ptr [esp + 0x24], edx
        lea     edx, [esp + 0x18]
        mov     dword ptr [g_8a997c], eax
        push    edx
        lea     eax, [esp + 0x30]
        mov     dword ptr [esp + 0x18], ecx
        mov     ecx, dword ptr [g_8816d8]
        fstp    dword ptr [g_8816d8]
        push    eax
        push    ebp
        mov     dword ptr [g_8a9978], ebx
        mov     dword ptr [esp + 0x2c], ecx
        mov     dword ptr [esp + 0x38], ebx
        mov     dword ptr [esp + 0x24], ebx
        call    FUN_00732b60
        mov     eax, dword ptr [g_8816e0]
        cmp     eax, 0x1
        jz      L_2e5b
        jbe     L_2e85
        cmp     eax, 0x3
        ja      L_2e85
        fld     dword ptr [g_8816b0]
        fsub    dword ptr [g_8816b8]
        fadd    dword ptr [g_76dd60]
        fstp    dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [esp + 0x2c]
        and     ecx, 0x7fffff
        sub     ecx, 0x400000
        mov     dword ptr [esp + 0x28], ecx
        jmp     L_2e85

L_2d71:
        cmp     byte ptr [esi + 0x204d], bl
        jnz     L_2d8e
        mov     eax, dword ptr [g_8816d0]
        cmp     eax, dword ptr [esi + 0x2058]
        jz      L_2d8e
        push    eax
        mov     ecx, esi
        call    FUN_00758ca0

L_2d8e:
        push    ebx
        push    ebx
        push    ebx
        push    0x2
        call    FUN_00704a80
        test    eax, eax
        jz      L_2da4
        fld     dword ptr [g_76c5b0]
        jmp     L_2daa

L_2da4:
        fld     dword ptr [g_76d070]

L_2daa:
        fild    dword ptr [g_8816bc]
        mov     eax, dword ptr [esi + 0x1c]
        push    ecx
        fsub    dword ptr [esi + 0x30]
        fadd    st(0), st(1)
        fisub   dword ptr [eax + 0x8]
        fstp    dword ptr [esp]
        fild    dword ptr [g_8816c0]
        push    ecx
        mov     ecx, esi
        fsub    dword ptr [esi + 0x2c]
        fadd    st(0), st(1)
        fstp    dword ptr [esp]
        fstp    st(0)
        call    FUN_00759610
        fild    dword ptr [g_8816c0]
        mov     al, byte ptr [esp + 0x30]
        cmp     al, bl
        fstp    dword ptr [esi + 0x2c]
        fild    dword ptr [g_8816bc]
        fstp    dword ptr [esi + 0x30]
        jz      L_2df8
        mov     ecx, esi
        call    FUN_00758b90

L_2df8:
        mov     ecx, dword ptr [esi + 0x2058]
        push    ecx
        mov     ecx, esi
        call    FUN_00758ca0
        fld     dword ptr [esi + 0x3c]
        fadd    dword ptr [g_76dd60]
        pop     edi
        mov     byte ptr [g_8a9981], bl
        fstp    dword ptr [esp + 0x2c]
        fld     dword ptr [esi + 0x40]
        mov     edx, dword ptr [esp + 0x2c]
        fadd    dword ptr [g_76dd60]
        and     edx, 0x7fffff
        sub     edx, 0x400000
        fstp    dword ptr [esp + 0x2c]
        mov     dword ptr [g_8816c0], edx
        mov     eax, dword ptr [esp + 0x2c]
        and     eax, 0x7fffff
        sub     eax, 0x400000
        mov     dword ptr [g_8816bc], eax
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x14
        ret     0xc

L_2e5b:
        fld     dword ptr [g_8816b0]
        fsub    dword ptr [g_8816b8]
        fadd    dword ptr [g_76dd60]
        fstp    dword ptr [esp + 0x2c]
        mov     edx, dword ptr [esp + 0x2c]
        and     edx, 0x7fffff
        sub     edx, 0x400000
        mov     dword ptr [esp + 0x28], edx

L_2e85:
        push    esi
        push    ebp
        call    FUN_007330e0
        mov     eax, dword ptr [g_8a9978]
        mov     ecx, dword ptr [g_8a997c]
        mov     edi, dword ptr [g_76b068]
        push    eax
        push    ecx
        call    edi
        mov     edx, dword ptr [g_8492fc]
        push    edx
        push    0x205c
        call    FUN_004084c0
        add     esp, 0x8
        cmp     eax, ebx
        jz      L_2ed8
        mov     edx, dword ptr [esp + 0x14]
        xor     ecx, ecx
        mov     cl, byte ptr [g_8a9980]
        push    ecx
        mov     ecx, dword ptr [esp + 0x2c]
        push    edx
        push    ecx
        push    ebp
        mov     ecx, eax
        call    FUN_00758a20
        mov     esi, eax
        jmp     L_2eda

L_2ed8:
        xor     esi, esi

L_2eda:
        fild    dword ptr [g_8816c0]
        mov     al, byte ptr [g_8816e5]
        mov     edx, dword ptr [esp + 0x18]
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
        jz      L_30a0
        mov     edx, dword ptr [eax + 0xc]
        push    0x8a997c
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
        jz      L_2f93
        mov     eax, dword ptr [g_8816d0]
        test    eax, 0xffffff
        jnz     L_2f77
        push    0x10101
        jmp     L_2f98

L_2f77:
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
        jmp     L_2f9f

L_2f93:
        push    0xffffff

L_2f98:
        mov     ecx, dword ptr [g_8a997c]
        push    ecx

L_2f9f:
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
        __emit 0xDF  /* __emit: fnstsw ax — MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6  /* __emit: test ah,imm8 — MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L_300d
        fld     dword ptr [g_8816b8]
        fadd    dword ptr [g_76dd60]
        fstp    dword ptr [esp + 0x2c]
        mov     eax, dword ptr [esp + 0x2c]
        and     eax, 0x7fffff
        sub     eax, 0x400000
        mov     dword ptr [g_8816c0], eax
        mov     dword ptr [esp + 0x10], eax

L_300d:
        fild    dword ptr [esp + 0x20]
        push    ecx
        fiadd   dword ptr [esi + 0x38]
        fstp    dword ptr [esp]
        push    ecx
        fild    dword ptr [esi + 0x34]
        mov     ecx, esi
        fiadd   dword ptr [esp + 0x18]
        fstp    dword ptr [esp]
        call    FUN_00759610
        cmp     byte ptr [esp + 0x30], bl
        jz      L_3037
        mov     ecx, esi
        call    FUN_00758b90

L_3037:
        mov     ecx, dword ptr [g_8a9974]
        push    ecx
        call    dword ptr [g_76b074]
        mov     edx, dword ptr [esi + 0x34]
        mov     edi, dword ptr [g_8816c0]
        mov     eax, dword ptr [esi + 0x38]
        mov     ecx, dword ptr [g_8816bc]
        add     edi, edx
        mov     dword ptr [g_8816c0], edi
        fild    dword ptr [g_8816c0]
        add     ecx, eax
        mov     dword ptr [g_8816bc], ecx
        mov     ecx, dword ptr [esp + 0x1c]
        fstp    dword ptr [esi + 0x3c]
        fild    dword ptr [g_8816bc]
        pop     edi
        mov     eax, esi
        mov     dword ptr [g_8a9974], ebx
        fstp    dword ptr [esi + 0x40]
        pop     esi
        pop     ebp
        mov     byte ptr [g_8a9981], bl
        mov     dword ptr [g_8a997c], ebx
        mov     dword ptr [g_8816d8], ecx
        pop     ebx
        add     esp, 0x14
        ret     0xc

L_30a0:
        mov     edx, dword ptr [g_8a9974]
        push    edx
        call    dword ptr [g_76b074]
        cmp     esi, ebx
        mov     dword ptr [g_8a9974], ebx
        jz      L_30c7
        mov     ecx, esi
        call    FUN_00758b10
        push    esi
        call    FUN_004084e0
        add     esp, 0x4

L_30c7:
        mov     eax, dword ptr [esp + 0x1c]
        mov     dword ptr [g_8816d8], eax

L_30d0:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x14
        ret     0xc
    }
}
