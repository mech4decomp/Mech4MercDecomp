/*
 * FUN_00742E00 (2055 B) — util: pixel/color format conversion routine
 * (RGB565/RGB555/RGB888 via MMX), with a byte-lookup table at 0x859c2c.
 * __cdecl, RET 0x24.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_007353f0(void);
extern void __cdecl FUN_00742ba0(void);
extern void __cdecl FUN_00742a70(void);
extern void __cdecl FUN_00742a90(void);
extern void __cdecl FUN_00742ab0(void);
extern void __cdecl FUN_00735440(void);

extern unsigned char g_0085a26c;
extern unsigned int g_00858a98;
extern unsigned char g_00859c2c;

__declspec(naked) void FUN_00742E00(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xb8
        mov     edx, dword ptr [ebp + 8]
        cmp     edx, 0x20
        push    ebx
        push    esi
        push    edi
        jne     L_742f57
        mov     edi, dword ptr [ebp + 0x14]
        mov     ebx, dword ptr [ebp + 0x24]
        mov     ecx, dword ptr [ebp + 0xc]
        push    0
        push    0x821
        lea     eax, [ebp - 0xb8]
        push    eax
        shr     edi, 2
        push    0
        sub     edi, ebx
        push    ecx
        mov     dword ptr [ebp + 0x14], edi
        mov     dword ptr [ebp - 0xb8], 0x7c
        call    FUN_007353f0
        mov     eax, dword ptr [ebp - 0xa8]
        mov     edx, dword ptr [ebp + 0x1c]
        sar     eax, 2
        mov     ecx, eax
        imul    eax, dword ptr [ebp + 0x20]
        add     eax, edx
        mov     edx, dword ptr [ebp - 0x94]
        lea     edx, [edx + eax*4]
        mov     al, byte ptr [g_0085a26c]
        sub     ecx, ebx
        test    al, al
        mov     dword ptr [ebp + 0x18], ecx
        je      L_742f00
        mov     eax, dword ptr [ebp + 0x28]
        test    eax, eax
        jbe     L_7435f3
        mov     esi, dword ptr [ebp + 0x10]
        mov     dword ptr [ebp + 0x28], eax
L_742e89:
        test    ebx, ebx
        jbe     L_742eec
        mov     dword ptr [ebp + 0x10], ebx
L_742e90:
        mov     eax, dword ptr [esi]
        xor     ecx, ecx
        mov     dword ptr [ebp + 0x20], eax
        mov     cl, byte ptr [ebp + 0x22]
        xor     ebx, ebx
        add     esi, 4
        add     edx, 4
        mov     bl, byte ptr [ecx + g_00859c2c]
        xor     ecx, ecx
        mov     cl, ah
        mov     edi, ebx
        xor     ebx, ebx
        mov     bl, byte ptr [ecx + g_00859c2c]
        shl     edi, 8
        mov     ecx, eax
        and     ecx, 0xff
        and     eax, 0xff000000
        add     edi, ebx
        xor     ebx, ebx
        mov     bl, byte ptr [ecx + g_00859c2c]
        shl     edi, 8
        add     edi, ebx
        add     edi, eax
        mov     eax, dword ptr [ebp + 0x10]
        mov     dword ptr [edx - 4], edi
        dec     eax
        mov     dword ptr [ebp + 0x10], eax
        jne     L_742e90
        mov     ebx, dword ptr [ebp + 0x24]
        mov     ecx, dword ptr [ebp + 0x18]
        mov     edi, dword ptr [ebp + 0x14]
L_742eec:
        mov     eax, dword ptr [ebp + 0x28]
        dec     eax
        lea     edx, [edx + ecx*4]
        lea     esi, [esi + edi*4]
        mov     dword ptr [ebp + 0x28], eax
        jne     L_742e89
        jmp     L_7435f3
L_742f00:
        mov     esi, dword ptr [ebp + 0x28]
        test    esi, esi
        jbe     L_7435f3
        lea     eax, [ebx*4]
        mov     dword ptr [ebp + 0x14], eax
        lea     eax, [ecx + ebx]
        add     edi, ebx
        shl     eax, 2
        shl     edi, 2
        mov     dword ptr [ebp + 0x24], esi
        mov     esi, dword ptr [ebp + 0x10]
        mov     dword ptr [ebp + 0x28], edi
L_742f29:
        mov     ecx, dword ptr [ebp + 0x14]
        mov     ebx, ecx
        shr     ecx, 2
        mov     edi, edx
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
        mov     esi, dword ptr [ebp + 0x10]
        mov     edi, dword ptr [ebp + 0x28]
        mov     ecx, dword ptr [ebp + 0x24]
        add     esi, edi
        add     edx, eax
        dec     ecx
        mov     dword ptr [ebp + 0x10], esi
        mov     dword ptr [ebp + 0x24], ecx
        jne     L_742f29
        jmp     L_7435f3
L_742f57:
        mov     eax, dword ptr [g_00858a98]
        test    eax, eax
        je      L_742f6e
        mov     al, byte ptr [g_0085a26c]
        test    al, al
        mov     edi, 4
        je      L_742f73
L_742f6e:
        mov     edi, 2
L_742f73:
        mov     ebx, dword ptr [ebp + 0x1c]
        mov     esi, dword ptr [ebp + 0x14]
        lea     eax, [edi - 1]
        mov     ecx, eax
        and     ecx, ebx
        mov     dword ptr [ebp - 4], eax
        jne     L_742f8a
        cmp     dword ptr [ebp + 0x24], edi
        jae     L_742fd3
L_742f8a:
        mov     eax, dword ptr [ebp + 0x24]
        sub     edi, ecx
        cmp     edi, eax
        mov     dword ptr [ebp + 0x14], edi
        jbe     L_742f9b
        mov     dword ptr [ebp + 0x14], eax
        mov     edi, eax
L_742f9b:
        mov     ecx, dword ptr [ebp + 0x28]
        mov     eax, dword ptr [ebp + 0x20]
        push    ecx
        mov     ecx, dword ptr [ebp + 0x18]
        push    edi
        push    eax
        mov     eax, dword ptr [ebp + 0x10]
        push    ebx
        push    ecx
        mov     ecx, dword ptr [ebp + 0xc]
        push    esi
        push    eax
        push    ecx
        push    edx
        call    FUN_00742ba0
        mov     eax, dword ptr [ebp + 0x14]
        mov     edx, dword ptr [ebp + 0x10]
        mov     ecx, dword ptr [ebp + 0x24]
        add     ebx, eax
        sub     ecx, eax
        mov     eax, dword ptr [ebp - 4]
        lea     edi, [edx + edi*4]
        mov     dword ptr [ebp + 0x10], edi
        mov     dword ptr [ebp + 0x24], ecx
        jmp     L_742fd6
L_742fd3:
        mov     edi, dword ptr [ebp + 0x10]
L_742fd6:
        mov     edx, dword ptr [ebp + 0x24]
        mov     ecx, eax
        and     ecx, edx
        mov     dword ptr [ebp + 0x14], ecx
        je      L_743014
        not     eax
        and     eax, edx
        mov     edx, dword ptr [ebp + 0x28]
        push    edx
        push    ecx
        mov     ecx, dword ptr [ebp + 0x20]
        push    ecx
        mov     ecx, dword ptr [ebp + 0x18]
        lea     edx, [eax + ebx]
        push    edx
        push    ecx
        mov     ecx, dword ptr [ebp + 8]
        push    esi
        lea     edx, [edi + eax*4]
        mov     eax, dword ptr [ebp + 0xc]
        push    edx
        push    eax
        push    ecx
        call    FUN_00742ba0
        mov     eax, dword ptr [ebp + 0x24]
        mov     edx, dword ptr [ebp + 0x14]
        sub     eax, edx
        mov     dword ptr [ebp + 0x24], eax
L_743014:
        mov     eax, dword ptr [ebp + 0x24]
        mov     ecx, dword ptr [ebp + 0xc]
        push    0
        shr     esi, 2
        sub     esi, eax
        push    0x821
        lea     eax, [ebp - 0xb8]
        push    eax
        push    0
        push    ecx
        mov     dword ptr [ebp + 0x14], esi
        mov     dword ptr [ebp - 0xb8], 0x7c
        call    FUN_007353f0
        mov     eax, dword ptr [ebp - 0xa8]
        mov     edx, dword ptr [ebp + 0x24]
        mov     ecx, dword ptr [ebp - 0x94]
        sar     eax, 2
        mov     esi, eax
        imul    eax, dword ptr [ebp + 0x20]
        shr     edx, 1
        shr     ebx, 1
        add     eax, ebx
        sub     esi, edx
        lea     edx, [ecx + eax*4]
        mov     eax, dword ptr [ebp - 0x60]
        push    eax
        mov     dword ptr [ebp + 0x1c], esi
        mov     dword ptr [ebp + 0x20], edx
        call    FUN_00742a70
        mov     ecx, dword ptr [ebp - 0x60]
        push    ecx
        mov     dword ptr [ebp - 0x2c], eax
        call    FUN_00742a90
        mov     edx, dword ptr [ebp - 0x60]
        push    edx
        mov     ebx, eax
        call    FUN_00742ab0
        mov     dword ptr [ebp - 0x24], eax
        mov     eax, dword ptr [ebp - 0x5c]
        push    eax
        call    FUN_00742a70
        mov     ecx, dword ptr [ebp - 0x5c]
        push    ecx
        mov     dword ptr [ebp - 0x34], eax
        call    FUN_00742a90
        mov     edx, dword ptr [ebp - 0x5c]
        push    edx
        mov     dword ptr [ebp + 0x18], eax
        call    FUN_00742ab0
        mov     dword ptr [ebp - 0x3c], eax
        mov     eax, dword ptr [ebp - 0x58]
        push    eax
        call    FUN_00742a70
        mov     ecx, dword ptr [ebp - 0x58]
        push    ecx
        mov     dword ptr [ebp - 4], eax
        call    FUN_00742a90
        mov     edx, dword ptr [ebp - 0x54]
        push    edx
        mov     dword ptr [ebp - 0x20], eax
        call    FUN_00742a70
        mov     dword ptr [ebp - 0x18], eax
        mov     eax, dword ptr [ebp - 0x54]
        push    eax
        call    FUN_00742a90
        mov     ecx, dword ptr [ebp - 0x54]
        push    ecx
        mov     dword ptr [ebp + 8], eax
        call    FUN_00742ab0
        mov     ecx, dword ptr [ebp + 0x18]
        mov     edx, dword ptr [ebp - 0x20]
        mov     dword ptr [ebp - 0x10], eax
        mov     eax, ebx
        shl     eax, 0x10
        add     eax, ebx
        mov     dword ptr [ebp - 0x38], eax
        mov     eax, ecx
        shl     eax, 0x10
        add     eax, ecx
        mov     dword ptr [ebp + 0x18], eax
        mov     ecx, edx
        shl     ecx, 0x10
        add     ecx, edx
        mov     edx, dword ptr [ebp + 8]
        mov     dword ptr [ebp - 0x20], ecx
        mov     ecx, edx
        shl     ecx, 0x10
        add     ecx, edx
        mov     dl, byte ptr [g_0085a26c]
        test    dl, dl
        mov     dword ptr [ebp + 8], ecx
        je      L_743290
        mov     eax, dword ptr [ebp + 0x28]
        test    eax, eax
        jbe     L_7435f3
        mov     dword ptr [ebp - 0xc], eax
L_74313b:
        mov     eax, dword ptr [ebp + 0x24]
        test    eax, eax
        jbe     L_74326f
        inc     eax
        shr     eax, 1
        mov     dword ptr [ebp - 0x30], eax
L_74314c:
        mov     ecx, dword ptr [edi]
        mov     edx, dword ptr [edi + 4]
        mov     dword ptr [ebp + 0x10], ecx
        mov     dword ptr [ebp + 0x28], edx
        xor     edx, edx
        xor     eax, eax
        mov     al, byte ptr [ebp + 0x12]
        add     edi, 4
        xor     ebx, ebx
        add     edi, 4
        mov     dl, byte ptr [eax + g_00859c2c]
        mov     eax, edx
        xor     edx, edx
        mov     dl, ch
        shl     eax, 8
        mov     bl, byte ptr [edx + g_00859c2c]
        mov     edx, ecx
        and     edx, 0xff
        and     ecx, 0xff000000
        add     eax, ebx
        xor     ebx, ebx
        mov     bl, byte ptr [edx + g_00859c2c]
        shl     eax, 8
        xor     edx, edx
        add     eax, ebx
        add     eax, ecx
        xor     ecx, ecx
        mov     cl, byte ptr [ebp + 0x2a]
        xor     ebx, ebx
        mov     dword ptr [ebp + 0x10], eax
        mov     dl, byte ptr [ecx + g_00859c2c]
        mov     ecx, dword ptr [ebp + 0x28]
        mov     esi, edx
        xor     edx, edx
        mov     dl, ch
        shl     esi, 8
        mov     bl, byte ptr [edx + g_00859c2c]
        mov     edx, ecx
        and     edx, 0xff
        and     ecx, 0xff000000
        add     esi, ebx
        xor     ebx, ebx
        mov     bl, byte ptr [edx + g_00859c2c]
        xor     edx, edx
        shl     esi, 8
        mov     dl, ah
        add     esi, ebx
        add     esi, ecx
        mov     ecx, esi
        and     ecx, 0xff00
        shl     ecx, 8
        add     edx, ecx
        mov     ecx, dword ptr [ebp - 0x34]
        shr     edx, cl
        mov     ecx, dword ptr [ebp + 0x18]
        xor     ebx, ebx
        mov     bl, byte ptr [ebp + 0x12]
        and     edx, ecx
        mov     ecx, dword ptr [ebp - 0x3c]
        shl     edx, cl
        mov     ecx, esi
        and     ecx, 0xff0000
        add     ebx, ecx
        mov     ecx, dword ptr [ebp - 0x2c]
        shr     ebx, cl
        and     ebx, dword ptr [ebp - 0x38]
        mov     ecx, dword ptr [ebp - 0x24]
        shl     ebx, cl
        mov     ecx, eax
        shr     ecx, 0x18
        or      edx, ebx
        mov     ebx, esi
        shr     ebx, 8
        and     ebx, 0xff0000
        add     ebx, ecx
        mov     ecx, dword ptr [ebp - 0x18]
        shr     ebx, cl
        and     ebx, dword ptr [ebp + 8]
        mov     ecx, dword ptr [ebp - 0x10]
        and     esi, 0xff
        and     eax, 0xff
        shl     esi, 0x10
        add     esi, eax
        mov     eax, dword ptr [ebp - 0x20]
        shl     ebx, cl
        mov     ecx, dword ptr [ebp - 4]
        shr     esi, cl
        or      edx, ebx
        and     esi, eax
        mov     eax, dword ptr [ebp + 0x20]
        or      edx, esi
        mov     dword ptr [eax], edx
        add     eax, 4
        mov     dword ptr [ebp + 0x20], eax
        dec     dword ptr [ebp - 0x30]
        jne     L_74314c
        mov     esi, dword ptr [ebp + 0x1c]
L_74326f:
        mov     edx, dword ptr [ebp + 0x20]
        mov     ecx, dword ptr [ebp + 0x14]
        lea     eax, [edx + esi*4]
        mov     dword ptr [ebp + 0x20], eax
        mov     eax, dword ptr [ebp - 0xc]
        dec     eax
        lea     edi, [edi + ecx*4]
        mov     dword ptr [ebp - 0xc], eax
        jne     L_74313b
        jmp     L_7435f3
L_743290:
        mov     edx, dword ptr [g_00858a98]
        test    edx, edx
        mov     edx, dword ptr [ebp + 0x24]
        je      L_743515
        test    edx, edx
        je      L_743515
        cmp     eax, 0x3f003f
        jne     L_743365
        mov     eax, 0xf800
        mov     dword ptr [ebp - 8], eax
        mov     dword ptr [ebp - 4], eax
        mov     eax, 0xfc0000
        mov     dword ptr [ebp - 0x14], eax
        mov     dword ptr [ebp - 0x10], eax
        mov     eax, 0xf8000000
        mov     dword ptr [ebp - 0x1c], eax
        mov     dword ptr [ebp - 0x18], eax
        movq    mm6, qword ptr [ebp - 0x1c]
        movq    mm5, qword ptr [ebp - 0x14]
        movq    mm4, qword ptr [ebp - 8]
        mov     eax, dword ptr [ebp + 0x1c]
        mov     ecx, dword ptr [ebp + 0x14]
        mov     esi, dword ptr [ebp + 0x10]
        mov     edi, dword ptr [ebp + 0x20]
        mov     edx, dword ptr [ebp + 0x28]
L_7432f0:
        mov     ebx, dword ptr [ebp + 0x24]
L_7432f3:
        movq    mm0, qword ptr [esi]
        psllq   mm0, 8
        movq    mm1, mm0
        movq    mm2, mm0
        pand    mm0, mm4
        psrad   mm0, 0xb
        pand    mm1, mm5
        psrad   mm1, 0xd
        por     mm0, mm1
        pand    mm2, mm6
        psrad   mm2, 0x10
        por     mm0, mm2
        movq    mm3, qword ptr [esi + 8]
        psllq   mm3, 8
        movq    mm1, mm3
        movq    mm2, mm3
        pand    mm1, mm4
        psrad   mm1, 0xb
        pand    mm2, mm5
        psrad   mm2, 0xd
        por     mm1, mm2
        pand    mm3, mm6
        psrad   mm3, 0x10
        por     mm3, mm1
        packssdw mm0, mm3
        add     esi, 0x10
        sub     ebx, 4
        movq    qword ptr [edi], mm0
        lea     edi, [edi + 8]
        jne     L_7432f3
        dec     edx
        lea     esi, [esi + ecx*4]
        lea     edi, [edi + eax*4]
        jne     L_7432f0
        emms
        jmp     L_7435f3
L_743365:
        cmp     ecx, 0xf000f
        jne     L_743443
        mov     eax, 0xf0
        mov     dword ptr [ebp - 8], eax
        mov     dword ptr [ebp - 4], eax
        mov     eax, 0xf000
        mov     dword ptr [ebp - 0x14], eax
        mov     dword ptr [ebp - 0x10], eax
        mov     eax, 0xf00000
        mov     dword ptr [ebp - 0x1c], eax
        mov     dword ptr [ebp - 0x18], eax
        mov     eax, 0xf0000000
        mov     dword ptr [ebp - 0x28], eax
        mov     dword ptr [ebp - 0x24], eax
        movq    mm7, qword ptr [ebp - 0x28]
        movq    mm6, qword ptr [ebp - 0x1c]
        movq    mm5, qword ptr [ebp - 0x14]
        movq    mm4, qword ptr [ebp - 8]
        mov     eax, dword ptr [ebp + 0x1c]
        mov     ecx, dword ptr [ebp + 0x14]
        mov     esi, dword ptr [ebp + 0x10]
        mov     edi, dword ptr [ebp + 0x20]
        mov     edx, dword ptr [ebp + 0x28]
L_7433bc:
        mov     ebx, dword ptr [ebp + 0x24]
L_7433bf:
        movq    mm0, qword ptr [esi]
        movq    mm1, mm0
        movq    mm2, mm0
        pand    mm0, mm4
        psrad   mm0, 4
        pand    mm1, mm5
        psrad   mm1, 8
        por     mm0, mm1
        movq    mm1, mm2
        pand    mm1, mm6
        psrad   mm1, 0xc
        por     mm0, mm1
        pand    mm2, mm7
        psrad   mm2, 0x10
        por     mm0, mm2
        movq    mm3, qword ptr [esi + 8]
        movq    mm1, mm3
        movq    mm2, mm3
        pand    mm1, mm4
        psrad   mm1, 4
        pand    mm2, mm5
        psrad   mm2, 8
        por     mm1, mm2
        movq    mm2, mm3
        pand    mm3, mm6
        psrad   mm3, 0xc
        pand    mm2, mm7
        psrad   mm2, 0x10
        por     mm3, mm1
        por     mm3, mm2
        packssdw mm0, mm3
        add     esi, 0x10
        sub     ebx, 4
        movq    qword ptr [edi], mm0
        lea     edi, [edi + 8]
        jne     L_7433bf
        dec     edx
        lea     esi, [esi + ecx*4]
        lea     edi, [edi + eax*4]
        jne     L_7433bc
        emms
        jmp     L_7435f3
L_743443:
        mov     eax, 0xf8
        mov     dword ptr [ebp - 8], eax
        mov     dword ptr [ebp - 4], eax
        mov     eax, 0xf800
        mov     dword ptr [ebp - 0x14], eax
        mov     dword ptr [ebp - 0x10], eax
        mov     eax, 0xf80000
        mov     dword ptr [ebp - 0x1c], eax
        mov     dword ptr [ebp - 0x18], eax
        mov     eax, 0x80000000
        mov     dword ptr [ebp - 0x28], eax
        mov     dword ptr [ebp - 0x24], eax
        movq    mm7, qword ptr [ebp - 0x28]
        movq    mm6, qword ptr [ebp - 0x1c]
        movq    mm5, qword ptr [ebp - 0x14]
        movq    mm4, qword ptr [ebp - 8]
        mov     eax, dword ptr [ebp + 0x1c]
        mov     ecx, dword ptr [ebp + 0x14]
        mov     esi, dword ptr [ebp + 0x10]
        mov     edi, dword ptr [ebp + 0x20]
        mov     edx, dword ptr [ebp + 0x28]
L_74348e:
        mov     ebx, dword ptr [ebp + 0x24]
L_743491:
        movq    mm0, qword ptr [esi]
        movq    mm1, mm0
        movq    mm2, mm0
        pand    mm0, mm4
        psrad   mm0, 3
        pand    mm1, mm5
        psrad   mm1, 6
        por     mm0, mm1
        movq    mm1, mm2
        pand    mm1, mm6
        psrad   mm1, 9
        por     mm0, mm1
        pand    mm2, mm7
        psrad   mm2, 0x10
        por     mm0, mm2
        movq    mm3, qword ptr [esi + 8]
        movq    mm1, mm3
        movq    mm2, mm3
        pand    mm1, mm4
        psrad   mm1, 3
        pand    mm2, mm5
        psrad   mm2, 6
        por     mm1, mm2
        movq    mm2, mm3
        pand    mm3, mm6
        psrad   mm3, 9
        pand    mm2, mm7
        psrad   mm2, 0x10
        por     mm3, mm1
        por     mm3, mm2
        packssdw mm0, mm3
        add     esi, 0x10
        sub     ebx, 4
        movq    qword ptr [edi], mm0
        lea     edi, [edi + 8]
        jne     L_743491
        dec     edx
        lea     esi, [esi + ecx*4]
        lea     edi, [edi + eax*4]
        jne     L_74348e
        emms
        jmp     L_7435f3
L_743515:
        mov     ecx, dword ptr [ebp + 0x28]
        test    ecx, ecx
        jbe     L_7435f3
        mov     dword ptr [ebp - 0xc], ecx
L_743523:
        test    edx, edx
        jbe     L_7435db
        lea     ecx, [edx + 1]
        shr     ecx, 1
        mov     dword ptr [ebp + 0x28], ecx
        jmp     L_743538
L_743535:
        mov     eax, dword ptr [ebp + 0x18]
L_743538:
        mov     edx, dword ptr [edi]
        mov     esi, dword ptr [edi + 4]
        xor     ebx, ebx
        mov     bl, dh
        add     edi, 4
        mov     ecx, esi
        and     ecx, 0xff00
        shl     ecx, 8
        mov     dword ptr [ebp + 0x10], edx
        add     edi, 4
        add     ebx, ecx
        mov     ecx, dword ptr [ebp - 0x34]
        shr     ebx, cl
        mov     ecx, dword ptr [ebp - 0x3c]
        and     ebx, eax
        xor     eax, eax
        mov     al, byte ptr [ebp + 0x12]
        shl     ebx, cl
        mov     ecx, esi
        and     ecx, 0xff0000
        add     eax, ecx
        mov     ecx, dword ptr [ebp - 0x2c]
        shr     eax, cl
        and     eax, dword ptr [ebp - 0x38]
        mov     ecx, dword ptr [ebp - 0x24]
        shl     eax, cl
        mov     ecx, edx
        shr     ecx, 0x18
        and     edx, 0xff
        or      ebx, eax
        mov     eax, esi
        shr     eax, 8
        and     eax, 0xff0000
        add     eax, ecx
        mov     ecx, dword ptr [ebp - 0x18]
        shr     eax, cl
        mov     ecx, dword ptr [ebp + 8]
        and     esi, 0xff
        shl     esi, 0x10
        and     eax, ecx
        mov     ecx, dword ptr [ebp - 0x10]
        shl     eax, cl
        mov     ecx, dword ptr [ebp - 4]
        add     esi, edx
        shr     esi, cl
        or      ebx, eax
        and     esi, dword ptr [ebp - 0x20]
        mov     eax, dword ptr [ebp + 0x20]
        or      ebx, esi
        mov     dword ptr [eax], ebx
        add     eax, 4
        mov     dword ptr [ebp + 0x20], eax
        dec     dword ptr [ebp + 0x28]
        jne     L_743535
        mov     esi, dword ptr [ebp + 0x1c]
        mov     eax, dword ptr [ebp + 0x18]
        mov     edx, dword ptr [ebp + 0x24]
L_7435db:
        mov     ecx, dword ptr [ebp + 0x20]
        lea     ecx, [ecx + esi*4]
        mov     dword ptr [ebp + 0x20], ecx
        mov     ecx, dword ptr [ebp + 0x14]
        lea     edi, [edi + ecx*4]
        dec     dword ptr [ebp - 0xc]
        jne     L_743523
L_7435f3:
        mov     edx, dword ptr [ebp + 0xc]
        push    0
        push    edx
        call    FUN_00735440
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x24
    }
}
