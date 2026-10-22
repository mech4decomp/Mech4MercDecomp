/*
 * FUN_004ccde0 (2205 B) — MLR subsystem: big switch dispatcher over a
 * per-type table (jump table at 0x4cd680, byte table at 0x4cd6a0).
 * __thiscall (this in ECX). Handles object creation/registration,
 * stream I/O, and a global hash-table bookkeeping (0x7dab40/0x7dab44).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;
extern int g_007db090;
extern int g_007db098;
extern int g_007db094;
extern double g_007db8c0;
extern void* g_0076b420;   /* IAT function pointer */

extern void FUN_00718300(void);
extern void FUN_004cdf50(void);
extern void FUN_00707e70(void);
extern void FUN_0041e690(void);
extern void FUN_0041e710(void);
extern void FUN_0041e720(void);
extern void FUN_004084d0(void);
extern void FUN_0041ee70(void);
extern void FUN_004cd950(void);
extern void FUN_004cd7a0(void);
extern void FUN_006fab90(void);
extern void FUN_004cdf10(void);
extern void FUN_00701f20(void);
extern void FUN_004ce9d0(void);
extern void FUN_004ccaa0(void);
extern void FUN_004d6350(void);
extern void FUN_004cdff0(void);

__declspec(naked) void FUN_004ccde0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x150
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        call    FUN_00718300
        mov     ebx, eax
        test    ebx, ebx
        jnz     L_4cce02
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L_4cce02:
        mov     eax, dword ptr [ebx]
        push    eax
        mov     ecx, esi
        mov     dword ptr [ebp-4], eax
        call    FUN_004cdf50
        mov     edi, eax
        test    edi, edi
        mov     dword ptr [ebp-0x10], edi
        jz      L_4cceb6
        mov     edx, dword ptr [g_007dab44]
        mov     ecx, dword ptr [g_007dab40]
        xor     eax, eax
        mov     al, byte ptr [edi+0x28]
        push    0
        mov     edi, eax
        xor     ecx, dword ptr [edx]
        mov     eax, dword ptr [ecx+0x14]
        lea     edx, [ecx+0x14]
        xor     eax, 0x85739531
        mov     eax, dword ptr [eax+0x1814]
        mov     ecx, dword ptr [eax+edi*4+0xa8b0]
        add     eax, 0xa8a8
        inc     ecx
        mov     dword ptr [eax+edi*4+8], ecx
        inc     dword ptr [eax+0xc00]
        mov     ecx, dword ptr [edx]
        mov     edx, dword ptr [edx]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx+0x1814]
        mov     ecx, 0x150
        add     dword ptr [eax+edi*4+8], ecx
        add     dword ptr [eax+0xc00], ecx
        xor     ecx, ecx
        mov     cx, word ptr [ebx+0x12]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx+0x1814]
        mov     edx, dword ptr [eax+edi*4+0xc0c8]
        add     eax, 0xc0c0
        shl     ecx, 3
        add     edx, ecx
        mov     dword ptr [eax+edi*4+8], edx
        add     dword ptr [eax+0xc00], ecx
        call    FUN_00707e70
        __emit 0xDD  /* __emit: fstp qword ptr [edi*8+0x7db8c0] no-base SIB (DD 1C FD); MSVC6 re-bases via ebx */
        __emit 0x1C
        __emit 0xFD
        __emit 0xC0
        __emit 0xB8
        __emit 0x7D
        __emit 0x00
        mov     edi, dword ptr [ebp-0x10]
L_4cceb6:
        mov     al, byte ptr [ebx+0x14]
        cmp     al, 8
        mov     byte ptr [ebp-8], al
        jc      L_4ccf81
        cmp     al, 0x98
        jnc     L_4ccf81
        mov     eax, dword ptr [ebp-4]
        push    eax
        mov     ecx, esi
        call    FUN_004cdf50
        or      edi, 0xffffffff
        test    eax, eax
        jz      L_4ccee5
        xor     ecx, ecx
        mov     cl, byte ptr [eax+0x28]
        mov     edi, ecx
L_4ccee5:
        xor     eax, eax
        mov     ax, word ptr [ebx+0x12]
        test    ax, ax
        jbe     L_4ccf2a
        mov     edx, dword ptr [ebx+0x15]
        push    0
        and     eax, 0xffff
        push    eax
        push    edx
        lea     ecx, [ebp-0x30]
        call    FUN_0041e690
        lea     eax, [ebp-0x30]
        push    eax
        mov     eax, dword ptr [ebp-8]
        and     eax, 0xff
        push    eax
        push    edi
        mov     ecx, esi
        call    FUN_004cd950
        lea     ecx, [ebp-0x30]
        call    FUN_0041e710
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L_4ccf2a:
        mov     ebx, dword ptr [ebx+0x15]
        test    ebx, ebx
        push    0
        jz      L_4ccf67
        push    0x100
        push    ebx
        lea     ecx, [ebp-0x30]
        call    FUN_0041e690
        mov     eax, dword ptr [ebp-8]
        lea     ecx, [ebp-0x30]
        push    ecx
        and     eax, 0xff
        push    eax
        push    edi
        mov     ecx, esi
        call    FUN_004cd950
        lea     ecx, [ebp-0x30]
        call    FUN_0041e710
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L_4ccf67:
        mov     eax, dword ptr [ebp-8]
        and     eax, 0xff
        push    eax
        push    edi
        mov     ecx, esi
        call    FUN_004cd950
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L_4ccf81:
        and     eax, 0xff
        dec     eax
        cmp     eax, 0xf1
        ja      L_4cd674
        xor     edx, edx
        mov     dl, byte ptr [eax+0x4cd6a0]
        __emit 0xFF  /* __emit: jump-table dispatch FF 24 95 [edx*4+imm32]; MSVC6 re-bases via EBX */
        __emit 0x24
        __emit 0x95
        __emit 0x80
        __emit 0xD6
        __emit 0x4C
        __emit 0x00
L_4ccfa1:
        test    edi, edi
        jz      L_4cd674
        mov     ecx, dword ptr [ebx+0x15]
        xor     eax, eax
        mov     ax, word ptr [ebx+0x12]
        push    0
        push    eax
        push    ecx
        lea     ecx, [ebp-0x50]
        call    FUN_0041e690
        xor     ebx, ebx
        mov     bl, byte ptr [edi+0x28]
        push    1
        mov     edx, ebx
        shl     edx, 4
        lea     eax, [edx+esi]
        lea     ecx, [eax+0x18]
        mov     dword ptr [ecx], 0
        lea     edi, [eax+0x14]
        add     eax, 0x1c
        push    ecx
        mov     dword ptr [edi], 0
        lea     ecx, [ebp-0x50]
        mov     dword ptr [ebp-0x10], eax
        mov     dword ptr [eax], 0
        call    FUN_0041e720
        push    4
        push    edi
        lea     ecx, [ebp-0x50]
        call    FUN_0041e720
        mov     eax, dword ptr [ebp-0x10]
        push    4
        push    eax
        lea     ecx, [ebp-0x50]
        call    FUN_0041e720
        push    0x28
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_4cd027
        mov     ecx, dword ptr [edi]
        push    ecx
        mov     ecx, eax
        call    FUN_0041ee70
        jmp     L_4cd029
L_4cd027:
        xor     eax, eax
L_4cd029:
        mov     ecx, dword ptr [ebp-0x3c]
        mov     edi, dword ptr [ebp-0x34]
        lea     edx, [ebx+2]
        shl     edx, 4
        mov     dword ptr [edx+esi], eax
        mov     esi, dword ptr [ebp-0x40]
        mov     edx, dword ptr [eax]
        sub     esi, ecx
        add     esi, edi
        push    esi
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x24]
        mov     eax, dword ptr [ebp-0x50]
        push    0
        lea     ecx, [ebp-0x50]
        call    dword ptr [eax+0xc]
        mov     edx, dword ptr [g_007dab44]
        mov     ecx, dword ptr [g_007dab40]
        mov     dword ptr [ebp-0x48], 0xffffffec
        xor     ecx, dword ptr [edx]
        mov     eax, dword ptr [ecx+0x14]
        xor     eax, 0x85739531
        mov     eax, dword ptr [eax+0x1814]
        mov     esi, dword ptr [eax+ebx*4+0x1820]
        add     eax, 0x1818
        mov     ecx, 3
        add     esi, ecx
        mov     dword ptr [eax+ebx*4+8], esi
        mov     edx, dword ptr [eax+0xc00]
        add     edx, ecx
        lea     ecx, [ebp-0x50]
        mov     dword ptr [eax+0xc00], edx
        call    FUN_0041e710
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L_4cd0ac:
        mov     ecx, dword ptr [ebp-4]
        push    ecx
        mov     ecx, esi
        call    FUN_004cdf50
        mov     edi, eax
        test    edi, edi
        jz      L_4cd674
        mov     eax, dword ptr [ebx+0x15]
        xor     edx, edx
        mov     dx, word ptr [ebx+0x12]
        push    0
        lea     ecx, [ebp-0x30]
        push    edx
        push    eax
        call    FUN_0041e690
        mov     eax, dword ptr [ebp-0x1c]
        mov     ebx, dword ptr [ebp-0x14]
        xor     ecx, ecx
        mov     cl, byte ptr [edi+0x28]
        add     ecx, 2
        shl     ecx, 4
        mov     esi, dword ptr [ecx+esi]
        mov     ecx, dword ptr [ebp-0x20]
        mov     edx, dword ptr [esi]
        sub     ecx, eax
        add     ecx, ebx
        push    ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x24]
        mov     edx, dword ptr [ebp-0x30]
        push    0
        lea     ecx, [ebp-0x30]
        call    dword ptr [edx+0xc]
        lea     ecx, [ebp-0x30]
        mov     dword ptr [ebp-0x28], 0xffffffec
        call    FUN_0041e710
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L_4cd11d:
        mov     eax, dword ptr [ebp-4]
        push    eax
        mov     ecx, esi
        call    FUN_004cdf50
        mov     edi, eax
        test    edi, edi
        jz      L_4cd674
        mov     edx, dword ptr [ebx+0x15]
        xor     ecx, ecx
        mov     cx, word ptr [ebx+0x12]
        push    0
        push    ecx
        push    edx
        lea     ecx, [ebp-0x30]
        call    FUN_0041e690
        mov     ecx, dword ptr [ebp-0x20]
        xor     eax, eax
        mov     al, byte ptr [edi+0x28]
        add     eax, 2
        shl     eax, 4
        mov     ebx, dword ptr [eax+esi]
        mov     eax, dword ptr [ebp-0x1c]
        mov     edx, dword ptr [ebx]
        sub     ecx, eax
        add     ecx, dword ptr [ebp-0x14]
        push    ecx
        push    eax
        mov     ecx, ebx
        call    dword ptr [edx+0x24]
        mov     edx, dword ptr [ebx]
        push    0
        mov     ecx, ebx
        call    dword ptr [edx+0xc]
        mov     dword ptr [ebx+8], 0xffffffec
        mov     eax, dword ptr [ebp-0x30]
        xor     ebx, ebx
        push    ebx
        lea     ecx, [ebp-0x30]
        call    dword ptr [eax+0xc]
        xor     eax, eax
        mov     dword ptr [ebp-0x28], 0xffffffec
        mov     al, byte ptr [edi+0x28]
        mov     dword ptr [ebp-0x10], ebx
        mov     dword ptr [ebp-4], eax
        add     eax, 2
        shl     eax, 4
        mov     edi, dword ptr [eax+esi]
        add     eax, esi
        mov     dword ptr [ebp-8], eax
        mov     eax, dword ptr [edi+0x1c]
        test    eax, eax
        jbe     L_4cd1d2
L_4cd1ac:
        mov     edx, dword ptr [edi]
        push    1
        lea     eax, [ebp-0xc]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx+0x20]
        mov     ecx, dword ptr [ebp-0xc]
        mov     edx, dword ptr [ebp-0x10]
        mov     eax, dword ptr [edi+0x1c]
        and     ecx, 0xff
        add     edx, ecx
        inc     ebx
        cmp     ebx, eax
        mov     dword ptr [ebp-0x10], edx
        jc      L_4cd1ac
L_4cd1d2:
        mov     edx, dword ptr [edi]
        push    0
        mov     ecx, edi
        call    dword ptr [edx+0xc]
        mov     ecx, dword ptr [ebp-4]
        mov     eax, dword ptr [edi+0x1c]
        shl     ecx, 4
        lea     ebx, [ecx+esi]
        mov     ecx, dword ptr [ebx+0x14]
        cmp     eax, ecx
        mov     dword ptr [edi+8], 0xffffffec
        jnc     L_4cd1fb
        test    edi, edi
        jz      L_4cd21f
        jmp     L_4cd217
L_4cd1fb:
        jbe     L_4cd20b
        test    edi, edi
        jz      L_4cd21f
        mov     eax, dword ptr [edi]
        push    1
        mov     ecx, edi
        call    dword ptr [eax]
        jmp     L_4cd21f
L_4cd20b:
        mov     eax, dword ptr [ebp-0x10]
        cmp     eax, dword ptr [ebx+0x1c]
        jz      L_4cd24f
        test    edi, edi
        jz      L_4cd21f
L_4cd217:
        mov     edx, dword ptr [edi]
        push    1
        mov     ecx, edi
        call    dword ptr [edx]
L_4cd21f:
        mov     ecx, dword ptr [ebp-8]
        mov     edx, dword ptr [ebp-4]
        xor     eax, eax
        mov     dword ptr [ecx], eax
        mov     dword ptr [ebx+0x14], eax
        mov     dword ptr [ebx+0x18], 0xffffffff
        push    edx
        mov     ecx, esi
        mov     dword ptr [ebx+0x1c], eax
        call    FUN_004cd7a0
        lea     ecx, [ebp-0x30]
        call    FUN_0041e710
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L_4cd24f:
        mov     eax, dword ptr [ebx+0x18]
        mov     ecx, dword ptr [ebp-4]
        push    edi
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_004cd950
        mov     esi, dword ptr [ebp-8]
        mov     ecx, dword ptr [esi]
        xor     edi, edi
        cmp     ecx, edi
        jz      L_4cd270
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
L_4cd270:
        mov     dword ptr [esi], edi
        mov     dword ptr [ebx+0x14], edi
        mov     dword ptr [ebx+0x18], 0xffffffff
        lea     ecx, [ebp-0x30]
        mov     dword ptr [ebx+0x1c], edi
        call    FUN_0041e710
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L_4cd290:
        push    0x771ae4
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L_4cd2a2
        int     3
L_4cd2a2:
        mov     eax, dword ptr [ebx]
        push    eax
        mov     ecx, esi
        call    FUN_004cdf50
        test    eax, eax
        jz      L_4cd674
        cmp     eax, dword ptr [g_007db090]
        jz      L_4cd674
        cmp     eax, dword ptr [g_007db098]
        jz      L_4cd674
        xor     ecx, ecx
        mov     cl, byte ptr [ebx+0x14]
        push    ecx
        mov     ecx, esi
        call    FUN_004cdf10
        test    eax, eax
        jz      L_4cd674
        mov     ecx, dword ptr [ebx+0x15]
        mov     edx, dword ptr [eax]
        push    ecx
        push    ebx
        mov     ecx, eax
        call    dword ptr [edx+0xc]
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L_4cd2f6:
        push    0
        push    0
        push    1
        call    FUN_00701f20
        test    eax, eax
        jz      L_4cd674
        mov     edx, dword ptr [ebp-4]
        push    edx
        mov     ecx, esi
        call    FUN_004cdf50
        test    eax, eax
        jnz     L_4cd47f
        mov     edx, dword ptr [esi+0x1800]
        mov     eax, dword ptr [esi+0x1808]
        inc     edx
        mov     dword ptr [esi+0x1800], edx
        mov     ecx, dword ptr [esi+eax*4+0x1818]
        xor     edi, edi
        test    ecx, ecx
        jz      L_4cd380
L_4cd33c:
        inc     eax
        cmp     eax, 0xff
        mov     dword ptr [esi+0x1808], eax
        jl      L_4cd354
        mov     dword ptr [esi+0x1808], 2
L_4cd354:
        inc     edi
        cmp     edi, 0xff
        jl      L_4cd36f
        push    0x771ad0
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L_4cd36f
        int     3
L_4cd36f:
        mov     eax, dword ptr [esi+0x1808]
        mov     ecx, dword ptr [esi+eax*4+0x1818]
        test    ecx, ecx
        jnz     L_4cd33c
L_4cd380:
        mov     ebx, dword ptr [ebx]
        push    0
        push    0
        push    ebx
        push    9
        call    FUN_00701f20
        push    eax
        push    7
        call    FUN_00701f20
        mov     edi, eax
        push    0x2048
        mov     dword ptr [ebp-0xc], edi
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_4cd3c2
        xor     ecx, ecx
        mov     cl, byte ptr [esi+0x1808]
        push    edi
        push    ebx
        push    ecx
        mov     ecx, eax
        call    FUN_004ce9d0
        mov     edi, eax
        jmp     L_4cd3c4
L_4cd3c2:
        xor     edi, edi
L_4cd3c4:
        mov     ecx, dword ptr [g_007dab44]
        mov     eax, dword ptr [g_007dab40]
        xor     edx, edx
        mov     dl, byte ptr [edi+0x28]
        push    edx
        xor     eax, dword ptr [ecx]
        mov     ecx, dword ptr [eax+0x14]
        xor     ecx, 0x85739531
        call    FUN_004ccaa0
        mov     eax, dword ptr [g_007dab44]
        mov     ebx, dword ptr [eax]
        mov     edx, dword ptr [g_007dab40]
        xor     edx, ebx
        mov     ecx, dword ptr [edx+0xc]
        mov     ebx, dword ptr [esi+0x1808]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    edi
        push    ebx
        call    dword ptr [edx+0x38]
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [g_007dab40]
        xor     eax, edx
        mov     ecx, dword ptr [eax+0xc]
        mov     edx, dword ptr [ebp-0xc]
        mov     dword ptr [esi+ebx*4+0x1818], edi
        mov     edi, dword ptr [esi+0x1808]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        push    edx
        inc     edi
        push    0x7544
        mov     dword ptr [esi+0x1808], edi
        call    dword ptr [eax+0x34]
        push    eax
        lea     ecx, [ebp-0x150]
        push    ecx
        call    dword ptr [g_0076b420]
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [g_007dab40]
        add     esp, 0xc
        xor     edx, ecx
        mov     ecx, dword ptr [edx+0xc]
        lea     eax, [ebp-0x150]
        push    eax
        push    0
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0
        push    1
        call    dword ptr [edx+0x30]
L_4cd47f:
        mov     ecx, esi
        call    FUN_004cdff0
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L_4cd48f:
        push    0
        push    0
        push    1
        call    FUN_00701f20
        test    eax, eax
        jz      L_4cd5e9
        mov     edi, dword ptr [esi+0x1800]
        mov     ecx, dword ptr [ebp-4]
        push    ecx
        dec     edi
        mov     ecx, esi
        mov     dword ptr [esi+0x1800], edi
        call    FUN_004cdf50
        mov     ebx, eax
        test    ebx, ebx
        jz      L_4cd674
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [g_007dab40]
        xor     edx, ecx
        mov     ecx, dword ptr [edx+0xc]
        mov     edx, dword ptr [ebx+0x30]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        push    edx
        push    0x7545
        call    dword ptr [eax+0x34]
        push    eax
        lea     ecx, [ebp-0x150]
        push    ecx
        call    dword ptr [g_0076b420]
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [g_007dab40]
        add     esp, 0xc
        xor     edx, ecx
        mov     ecx, dword ptr [edx+0xc]
        lea     eax, [ebp-0x150]
        push    eax
        push    0
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0
        push    1
        call    dword ptr [edx+0x30]
        mov     cl, byte ptr [ebx+0x28]
        mov     byte ptr [ebp-0xc], cl
        mov     edi, dword ptr [ebp-0xc]
        and     edi, 0xff
        lea     edx, [edi+2]
        shl     edx, 4
        mov     ecx, dword ptr [edx+esi]
        test    ecx, ecx
        lea     eax, [edx+esi]
        mov     dword ptr [ebp-0xc], eax
        jz      L_4cd569
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
        mov     eax, dword ptr [ebp-0xc]
        xor     ecx, ecx
        mov     dword ptr [eax], ecx
        mov     edx, edi
        shl     edx, 4
        lea     eax, [edx+esi]
        mov     dword ptr [eax+0x14], ecx
        mov     dword ptr [eax+0x18], 0xffffffff
        mov     dword ptr [eax+0x1c], ecx
L_4cd569:
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [g_007dab40]
        xor     eax, edx
        mov     ecx, dword ptr [eax+0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    ebx
        push    edi
        call    dword ptr [edx+0x3c]
        mov     eax, dword ptr [ebx]
        push    1
        mov     ecx, ebx
        call    dword ptr [eax]
        mov     ecx, dword ptr [g_007dab44]
        mov     ebx, dword ptr [ecx]
        mov     eax, dword ptr [g_007dab40]
        xor     eax, ebx
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        call    FUN_004d6350
        test    al, al
        jz      L_4cd5ce
L_4cd5b0:
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [g_007dab40]
        xor     eax, dword ptr [edx]
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        call    FUN_004d6350
        test    al, al
        jnz     L_4cd5b0
L_4cd5ce:
        mov     ecx, esi
        mov     dword ptr [esi+edi*4+0x1818], 0
        call    FUN_004cdff0
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L_4cd5e9:
        mov     eax, dword ptr [ebp-4]
        push    eax
        mov     ecx, esi
        call    FUN_004cdf50
        cmp     eax, dword ptr [g_007db094]
        jnz     L_4cd638
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [edx]
        mov     ecx, dword ptr [g_007dab40]
        xor     ecx, eax
        mov     ecx, dword ptr [ecx+0xc]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax+0x28]
        mov     edx, dword ptr [g_007dab44]
        mov     ecx, dword ptr [g_007dab40]
        xor     ecx, dword ptr [edx]
        mov     ecx, dword ptr [ecx+0xc]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax+0x2c]
L_4cd638:
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [edx]
        mov     ecx, dword ptr [g_007dab40]
        xor     ecx, eax
        mov     ecx, dword ptr [ecx+0xc]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax+0x28]
        mov     edx, dword ptr [g_007dab44]
        mov     ecx, dword ptr [g_007dab40]
        xor     ecx, dword ptr [edx]
        mov     ecx, dword ptr [ecx+0xc]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax+0x2c]
L_4cd674:
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
