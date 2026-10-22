/*
 * FUN_00655f10 (2836 B) — __thiscall ABL terrain path rasterizer.
 * Walks a list of 8-byte (x,y) waypoints, marks cells in a byte grid
 * at this+4, computes slope/height via heavy FPU (fcos/fsin, fadd
 * st0,st0, fcompp, fdivr, fidiv) and _ftol. RET 0x8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0080da60;
extern float g_0080da5c;
extern float g_0080da58;
extern float g_0080da54;
extern float g_00788100;
extern float g_00794944;
extern float g_00794988;
extern float g_0079498c;
extern float g_00783388;
extern float g_00770168;
extern float g_0077016c;
extern float g_0076d064;
extern float g_0076d070;
extern float g_007880fc;
extern int   g_007f2464;

extern void FUN_0075db4a(void);
extern void FUN_006f4950(void);
extern void FUN_006583c0(void);
extern void FUN_00658420(void);
extern void FUN_00658520(void);
extern void FUN_00658f50(void);
extern void FUN_00658470(void);
extern void FUN_00551870(void);
extern void FUN_00655a70(void);
extern void FUN_00658dc0(void);
extern void FUN_006583e0(void);
extern void FUN_00658500(void);
extern void FUN_006584c0(void);
extern void FUN_006583f0(void);
extern void FUN_00655a00(void);
extern void FUN_00658eb0(void);
extern void FUN_00658f00(void);
extern void FUN_00658e40(void);
extern void FUN_00658600(void);
extern void FUN_006f49a0(void);
extern void FUN_006584d0(void);
extern void FUN_00658f20(void);
extern void FUN_00658e00(void);
extern void FUN_00658af0(void);
extern void FUN_00658630(void);
extern void FUN_004084e0(void);

__declspec(naked) void FUN_00655f10(void)
{
    __asm {
        sub     esp, 0xcc
        fld     dword ptr [g_0080da60]
        push    ebx
        push    ebp
        mov     ebx, ecx
        push    esi
        push    edi
        mov     dword ptr [esp+0x8c], ebx
        call    FUN_0075db4a
        fld     dword ptr [g_0080da5c]
        mov     ecx, eax
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 2
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        mov     dword ptr [esp+0x2c], edx
        call    FUN_0075db4a
        mov     ecx, eax
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 2
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        mov     dword ptr [esp+0x24], edx
        mov     edx, dword ptr [g_007f2464]
        push    edx
        call    FUN_006f4950
        lea     eax, [esp+0x13]
        push    eax
        lea     ecx, [esp+0x78]
        call    FUN_006583c0
        lea     ecx, [esp+0x13]
        push    ecx
        lea     edx, [esp+0x2f]
        push    edx
        lea     ecx, [esp+0x70]
        call    FUN_00658420
        push    0
        lea     eax, [esp+0x2f]
        push    eax
        lea     ecx, [esp+0x48]
        call    FUN_00658520
        fld     dword ptr [esp+0xe4]
        fcomp   dword ptr [g_00783388]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_55fc3
        mov     dword ptr [esp+0xe4], 0x43fa0000
    L_55fc3:
        fld     dword ptr [esp+0xe4]
        mov     ecx, dword ptr [esp+0xe4]
        fcomp   dword ptr [g_00770168]
        mov     dword ptr [esp+0x20], ecx
        fnstsw  ax
        test    ah, 0x1
        __emit 0x0F      /* jnz L_5697a: MSVC6 miscomputes fwd rel (off-by-4) */
        __emit 0x85
        __emit 0x94
        __emit 0x09
        __emit 0x00
        __emit 0x00
        mov     ecx, dword ptr [esp+0x78]
        mov     esi, dword ptr [esp+0x74]
    L_55fee:
        push    esi
        xor     eax, eax
        push    ecx
        push    ecx
        mov     dword ptr [esp+0x44], eax
        mov     dword ptr [esp+0x94], eax
        call    FUN_00658f50
        add     esp, 0xc
        lea     ecx, [esp+0x68]
        mov     dword ptr [esp+0x78], eax
        call    FUN_00658470
        mov     edx, dword ptr [esp+0x20]
        mov     eax, dword ptr [esp+0xe0]
        push    edx
        sub     esp, 0xc
        mov     ecx, esp
        push    eax
        call    FUN_00551870
        lea     ecx, [esp+0x84]
        push    ecx
        call    FUN_00655a70
        mov     eax, 0x1010101
        lea     edi, [ebx+0x4]
        mov     ecx, 0x100000
        rep stosd
        mov     edi, dword ptr [esp+0x88]
        mov     ecx, dword ptr [esp+0x8c]
        add     esp, 0x14
        cmp     edi, ecx
        mov     eax, edi
        jz      L_561d9
        mov     edx, dword ptr [esp+0x2c]
        mov     esi, dword ptr [esp+0x24]
    L_56069:
        mov     ebp, dword ptr [eax]
        sub     ebp, edx
        shl     ebp, 0xb
        add     ebp, dword ptr [eax+0x4]
        add     eax, 8
        sub     ebp, esi
        cmp     eax, ecx
        mov     byte ptr [ebx+ebp+0x4], 0
        jnz     L_56069
        cmp     edi, ecx
        jz      L_561d9
    L_56089:
        mov     esi, dword ptr [esp+0x88]
        mov     edx, dword ptr [esp+0x2c]
        mov     ebp, dword ptr [edi+0x4]
        mov     ecx, dword ptr [esp+0x24]
        inc     esi
        mov     dword ptr [esp+0x88], esi
        mov     esi, dword ptr [edi]
        sub     esi, edx
        mov     eax, ebp
        sub     eax, ecx
        mov     ecx, dword ptr [ebx+0x400004]
        lea     edx, [esi+esi*2]
        mov     edx, dword ptr [ecx+edx*4]
        lea     ebx, [eax+eax*4]
        mov     ecx, dword ptr [edx+ebx*8+0x18]
        cmp     ecx, -1
        mov     dword ptr [esp+0x84], ecx
        jz      L_56194
        lea     eax, [esp+0x84]
        push    eax
        lea     ecx, [esp+0xd0]
        push    ecx
        lea     ecx, [esp+0x70]
        call    FUN_00658dc0
        mov     edx, dword ptr [eax]
        lea     eax, [esp+0xc8]
        push    eax
        lea     ecx, [esp+0x6c]
        mov     dword ptr [esp+0x84], edx
        call    FUN_006583e0
        mov     ecx, eax
        mov     eax, dword ptr [esp+0x80]
        cmp     eax, dword ptr [ecx]
        jz      L_5611a
        mov     edx, dword ptr [esp+0x84]
        cmp     edx, dword ptr [eax+0x10]
        jge     L_56163
    L_5611a:
        lea     eax, [esp+0x13]
        push    eax
        lea     ecx, [esp+0x88]
        push    ecx
        lea     ecx, [esp+0xdc]
        mov     byte ptr [esp+0x1b], 0
        call    FUN_00658500
        push    eax
        push    ecx
        lea     edx, [esp+0x88]
        mov     ecx, esp
        push    edx
        call    FUN_006584c0
        lea     eax, [esp+0xd8]
        push    eax
        lea     ecx, [esp+0x74]
        call    FUN_006583f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp+0x80], eax
    L_56163:
        mov     ebx, dword ptr [esp+0x2c]
        mov     ebp, dword ptr [esp+0x38]
        mov     edx, dword ptr [esp+0x24]
        mov     byte ptr [eax+0x14], 1
        mov     ecx, dword ptr [edi]
        mov     eax, dword ptr [edi+0x4]
        sub     ecx, ebx
        mov     ebx, dword ptr [esp+0x8c]
        shl     ecx, 0xb
        inc     ebp
        sub     ecx, edx
        add     ecx, eax
        mov     dword ptr [esp+0x38], ebp
        mov     byte ptr [ecx+ebx+0x4], 1
        jmp     L_561ca
    L_56194:
        mov     ebx, dword ptr [esp+0x8c]
        push    eax
        push    esi
        mov     ecx, ebx
        call    FUN_00655a00
        fcomp   dword ptr [g_0079498c]
        fnstsw  ax
        test    ah, 0x1
        jz      L_561ca
        mov     eax, dword ptr [esp+0x38]
        mov     ecx, dword ptr [esp+0x24]
        shl     esi, 0xb
        inc     eax
        sub     esi, ecx
        add     esi, ebp
        mov     dword ptr [esp+0x38], eax
        mov     byte ptr [esi+ebx+0x4], 1
    L_561ca:
        mov     eax, dword ptr [esp+0x78]
        add     edi, 8
        cmp     edi, eax
        jnz     L_56089
    L_561d9:
        fld     dword ptr [esp+0x20]
        mov     edi, dword ptr [esp+0xe0]
        fmul    dword ptr [g_00788100]
        mov     ebp, dword ptr [esp+0x24]
        mov     esi, dword ptr [esp+0x2c]
        mov     byte ptr [esp+0x13], 0
        fmul    dword ptr [g_00794944]
        mov     dword ptr [esp+0x3c], 0
        fadd    st(0), st(0)
        fdivr   dword ptr [g_0076d064]
        fmul    dword ptr [g_00794988]
        fstp    dword ptr [esp+0x14]
    L_56217:
        fld     dword ptr [g_00794944]
        fmul    dword ptr [esp+0x3c]
        fadd    st(0), st(0)
        fld     st(0)
        fcos
        fmul    dword ptr [esp+0x20]
        fadd    dword ptr [edi]
        fmul    dword ptr [g_00788100]
        fstp    dword ptr [esp+0x18]
        fsin
        fmul    dword ptr [esp+0x20]
        fadd    dword ptr [edi+0x8]
        fmul    dword ptr [g_00788100]
        call    FUN_0075db4a
        fld     dword ptr [esp+0x18]
        sub     eax, ebp
        push    eax
        call    FUN_0075db4a
        sub     eax, esi
        push    eax
        mov     ecx, ebx
        call    FUN_00655a00
        fcomp   dword ptr [g_0079498c]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_56953
        fld     dword ptr [esp+0x3c]
        fadd    dword ptr [esp+0x14]
        fst     dword ptr [esp+0x3c]
        fcomp   dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_56217
        mov     esi, dword ptr [esp+0x50]
        cmp     esi, dword ptr [esp+0x40]
        jz      L_562b7
    L_56295:
        cmp     esi, dword ptr [esp+0x54]
        jz      L_562a4
        sub     esi, 8
        mov     dword ptr [esp+0x50], esi
        jmp     L_562b1
    L_562a4:
        lea     ecx, [esp+0x40]
        call    FUN_00658eb0
        mov     esi, dword ptr [esp+0x50]
    L_562b1:
        cmp     esi, dword ptr [esp+0x40]
        jnz     L_56295
    L_562b7:
        fld     dword ptr [edi+0x8]
        fmul    dword ptr [g_00788100]
        fld     dword ptr [edi]
        fmul    dword ptr [g_00788100]
        fstp    dword ptr [esp+0x14]
        fld     dword ptr [g_0080da60]
        fmul    dword ptr [g_00788100]
        fld     dword ptr [esp+0x14]
        fcomp
        fnstsw  ax
        test    ah, 0x1
        jz      L_562eb
        fstp    dword ptr [esp+0x14]
        jmp     L_562ed
    L_562eb:
        __emit 0xDD      /* fstp st0: MSVC6 rejects st0 operand */
        __emit 0xD8
    L_562ed:
        fld     dword ptr [g_0080da5c]
        fmul    dword ptr [g_00788100]
        fstp    dword ptr [esp+0x1c]
        fcom    dword ptr [esp+0x1c]
        fnstsw  ax
        test    ah, 0x1
        jz      L_5630e
        __emit 0xDD      /* fstp st0: MSVC6 rejects st0 operand */
        __emit 0xD8
        fld     dword ptr [esp+0x1c]
    L_5630e:
        fld     dword ptr [g_0080da58]
        fmul    dword ptr [g_00788100]
        fld     dword ptr [esp+0x14]
        fcomp
        fnstsw  ax
        test    ah, 0x1
        jnz     L_56333
        fsub    dword ptr [g_0076d064]
        fstp    dword ptr [esp+0x14]
        jmp     L_56335
    L_56333:
        __emit 0xDD      /* fstp st0: MSVC6 rejects st0 operand */
        __emit 0xD8
    L_56335:
        fld     dword ptr [g_0080da54]
        fmul    dword ptr [g_00788100]
        fstp    dword ptr [esp+0x1c]
        fcom    dword ptr [esp+0x1c]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_5635c
        __emit 0xDD      /* fstp st0: MSVC6 rejects st0 operand */
        __emit 0xD8
        fld     dword ptr [esp+0x1c]
        fsub    dword ptr [g_0076d064]
    L_5635c:
        fld     dword ptr [esp+0x14]
        call    FUN_0075db4a
        mov     dword ptr [esp+0x90], eax
        call    FUN_0075db4a
        mov     edx, dword ptr [esp+0x58]
        add     edx, -8
        cmp     esi, edx
        mov     dword ptr [esp+0x94], eax
        jz      L_563a1
        lea     eax, [esp+0x90]
        push    eax
        push    esi
        call    FUN_00658f00
        mov     esi, dword ptr [esp+0x58]
        add     esp, 8
        add     esi, 8
        mov     dword ptr [esp+0x50], esi
        jmp     L_563b6
    L_563a1:
        lea     ecx, [esp+0x90]
        push    ecx
        lea     ecx, [esp+0x44]
        call    FUN_00658e40
        mov     esi, dword ptr [esp+0x50]
    L_563b6:
        cmp     esi, dword ptr [esp+0x40]
        jz      L_568fa
    L_563c0:
        mov     ecx, dword ptr [esp+0x5c]
        mov     edx, dword ptr [esp+0x54]
        mov     eax, dword ptr [esp+0x58]
        mov     dword ptr [esp+0xc4], ecx
        lea     ecx, [esp+0xb8]
        mov     dword ptr [esp+0xb8], esi
        mov     dword ptr [esp+0xbc], edx
        mov     dword ptr [esp+0xc0], eax
        call    FUN_00658600
        mov     eax, dword ptr [esp+0xb8]
        mov     edi, dword ptr [eax]
        mov     ebp, dword ptr [eax+0x4]
        mov     esi, dword ptr [esp+0x50]
        cmp     esi, dword ptr [esp+0x54]
        mov     dword ptr [esp+0x30], edi
        mov     dword ptr [esp+0x34], ebp
        jz      L_5641b
        sub     esi, 8
        mov     dword ptr [esp+0x50], esi
        jmp     L_56428
    L_5641b:
        lea     ecx, [esp+0x40]
        call    FUN_00658eb0
        mov     esi, dword ptr [esp+0x50]
    L_56428:
        mov     edx, dword ptr [esp+0x2c]
        mov     eax, dword ptr [esp+0x24]
        sub     edi, edx
        shl     edi, 0xb
        sub     edi, eax
        add     edi, ebp
        mov     cl, byte ptr [edi+ebx+0x4]
        test    cl, cl
        lea     eax, [edi+ebx+0x4]
        jnz     L_568f0
        fld     dword ptr [g_0080da60]
        mov     edx, dword ptr [esp+0x30]
        fmul    dword ptr [g_00788100]
        lea     ebp, [edx-1]
        mov     dword ptr [esp+0x18], ebp
        mov     byte ptr [eax], 1
        fstp    dword ptr [esp+0x14]
        fild    dword ptr [esp+0x18]
        fcomp   dword ptr [esp+0x14]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_56576
        mov     edi, dword ptr [esp+0x34]
        mov     dword ptr [esp+0x1c], ebp
        fild    dword ptr [esp+0x1c]
        mov     dword ptr [esp+0x18], edi
        fcomp   dword ptr [esp+0x14]
        fnstsw  ax
        test    ah, 0x1
        jz      L_564a4
        fld     dword ptr [esp+0x14]
        call    FUN_0075db4a
        mov     ebp, eax
        mov     dword ptr [esp+0x1c], ebp
    L_564a4:
        fld     dword ptr [g_0080da5c]
        fmul    dword ptr [g_00788100]
        fild    dword ptr [esp+0x34]
        fcomp
        fnstsw  ax
        test    ah, 0x1
        jz      L_564ca
        call    FUN_0075db4a
        mov     edi, eax
        mov     dword ptr [esp+0x18], edi
        jmp     L_564cc
    L_564ca:
        __emit 0xDD      /* fstp st0: MSVC6 rejects st0 operand */
        __emit 0xD8
    L_564cc:
        fild    dword ptr [esp+0x1c]
        fld     dword ptr [g_0080da58]
        fmul    dword ptr [g_00788100]
        fcompp
        fnstsw  ax
        test    ah, 0x41
        jz      L_564fb
        fld     dword ptr [g_0080da58]
        fmul    dword ptr [g_007880fc]
        call    FUN_0075db4a
        or      ebp, -1
        sub     ebp, eax
    L_564fb:
        fild    dword ptr [esp+0x18]
        fld     dword ptr [g_0080da54]
        fmul    dword ptr [g_00788100]
        fcompp
        fnstsw  ax
        test    ah, 0x41
        jz      L_5652a
        fld     dword ptr [g_0080da54]
        fmul    dword ptr [g_007880fc]
        call    FUN_0075db4a
        or      edi, -1
        sub     edi, eax
    L_5652a:
        mov     eax, dword ptr [esp+0x58]
        add     eax, -8
        cmp     esi, eax
        mov     dword ptr [esp+0x98], ebp
        mov     dword ptr [esp+0x9c], edi
        jz      L_56561
        lea     ecx, [esp+0x98]
        push    ecx
        push    esi
        call    FUN_00658f00
        mov     esi, dword ptr [esp+0x58]
        add     esp, 8
        add     esi, 8
        mov     dword ptr [esp+0x50], esi
        jmp     L_56576
    L_56561:
        lea     edx, [esp+0x98]
        push    edx
        lea     ecx, [esp+0x44]
        call    FUN_00658e40
        mov     esi, dword ptr [esp+0x50]
    L_56576:
        mov     eax, dword ptr [esp+0x34]
        fld     dword ptr [g_0080da5c]
        fmul    dword ptr [g_00788100]
        lea     edi, [eax-1]
        mov     dword ptr [esp+0x18], edi
        fstp    dword ptr [esp+0x1c]
        fild    dword ptr [esp+0x18]
        fcomp   dword ptr [esp+0x1c]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_566a0
        fld     dword ptr [g_0080da60]
        mov     ebp, dword ptr [esp+0x30]
        fmul    dword ptr [g_00788100]
        mov     dword ptr [esp+0x14], edi
        fild    dword ptr [esp+0x30]
        mov     dword ptr [esp+0x18], ebp
        fcomp
        fnstsw  ax
        test    ah, 0x1
        jz      L_565d6
        call    FUN_0075db4a
        mov     ebp, eax
        mov     dword ptr [esp+0x18], ebp
        jmp     L_565d8
    L_565d6:
        __emit 0xDD      /* fstp st0: MSVC6 rejects st0 operand */
        __emit 0xD8
    L_565d8:
        fild    dword ptr [esp+0x14]
        fcomp   dword ptr [esp+0x1c]
        fnstsw  ax
        test    ah, 0x1
        jz      L_565f6
        fld     dword ptr [esp+0x1c]
        call    FUN_0075db4a
        mov     edi, eax
        mov     dword ptr [esp+0x14], edi
    L_565f6:
        fild    dword ptr [esp+0x18]
        fld     dword ptr [g_0080da58]
        fmul    dword ptr [g_00788100]
        fcompp
        fnstsw  ax
        test    ah, 0x41
        jz      L_56625
        fld     dword ptr [g_0080da58]
        fmul    dword ptr [g_007880fc]
        call    FUN_0075db4a
        or      ebp, -1
        sub     ebp, eax
    L_56625:
        fild    dword ptr [esp+0x14]
        fld     dword ptr [g_0080da54]
        fmul    dword ptr [g_00788100]
        fcompp
        fnstsw  ax
        test    ah, 0x41
        jz      L_56654
        fld     dword ptr [g_0080da54]
        fmul    dword ptr [g_007880fc]
        call    FUN_0075db4a
        or      edi, -1
        sub     edi, eax
    L_56654:
        mov     ecx, dword ptr [esp+0x58]
        add     ecx, -8
        cmp     esi, ecx
        mov     dword ptr [esp+0xa8], ebp
        mov     dword ptr [esp+0xac], edi
        jz      L_5668b
        lea     edx, [esp+0xa8]
        push    edx
        push    esi
        call    FUN_00658f00
        mov     esi, dword ptr [esp+0x58]
        add     esp, 8
        add     esi, 8
        mov     dword ptr [esp+0x50], esi
        jmp     L_566a0
    L_5668b:
        lea     eax, [esp+0xa8]
        push    eax
        lea     ecx, [esp+0x44]
        call    FUN_00658e40
        mov     esi, dword ptr [esp+0x50]
    L_566a0:
        mov     ecx, dword ptr [esp+0x30]
        fld     dword ptr [g_0080da58]
        fmul    dword ptr [g_00788100]
        lea     ebp, [ecx+1]
        mov     dword ptr [esp+0x18], ebp
        fild    dword ptr [esp+0x18]
        fcomp
        fnstsw  ax
        test    ah, 0x1
        jz      L_567c6
        fld     dword ptr [g_0080da60]
        mov     edi, dword ptr [esp+0x34]
        fmul    dword ptr [g_00788100]
        mov     dword ptr [esp+0x14], ebp
        fild    dword ptr [esp+0x14]
        mov     dword ptr [esp+0x18], edi
        fcomp
        fnstsw  ax
        test    ah, 0x1
        jz      L_566fa
        call    FUN_0075db4a
        mov     ebp, eax
        mov     dword ptr [esp+0x14], ebp
        jmp     L_566fc
    L_566fa:
        __emit 0xDD      /* fstp st0: MSVC6 rejects st0 operand */
        __emit 0xD8
    L_566fc:
        fld     dword ptr [g_0080da5c]
        fmul    dword ptr [g_00788100]
        fild    dword ptr [esp+0x34]
        fcomp
        fnstsw  ax
        test    ah, 0x1
        jz      L_56722
        call    FUN_0075db4a
        mov     edi, eax
        mov     dword ptr [esp+0x18], edi
        jmp     L_56724
    L_56722:
        __emit 0xDD      /* fstp st0: MSVC6 rejects st0 operand */
        __emit 0xD8
    L_56724:
        fild    dword ptr [esp+0x14]
        fcomp
        fnstsw  ax
        __emit 0xDD      /* fstp st0: MSVC6 rejects st0 operand */
        __emit 0xD8
        test    ah, 0x1
        jnz     L_56749
        fld     dword ptr [g_0080da58]
        fmul    dword ptr [g_007880fc]
        call    FUN_0075db4a
        or      ebp, -1
        sub     ebp, eax
    L_56749:
        fild    dword ptr [esp+0x18]
        fld     dword ptr [g_0080da54]
        fmul    dword ptr [g_00788100]
        fcompp
        fnstsw  ax
        test    ah, 0x41
        jz      L_56778
        fld     dword ptr [g_0080da54]
        fmul    dword ptr [g_007880fc]
        call    FUN_0075db4a
        or      edi, -1
        sub     edi, eax
    L_56778:
        mov     edx, dword ptr [esp+0x58]
        add     edx, -8
        cmp     esi, edx
        mov     dword ptr [esp+0xa0], ebp
        mov     dword ptr [esp+0xa4], edi
        jz      L_567af
        lea     eax, [esp+0xa0]
        push    eax
        push    esi
        call    FUN_00658f00
        mov     esi, dword ptr [esp+0x58]
        add     esp, 8
        add     esi, 8
        mov     dword ptr [esp+0x50], esi
        jmp     L_567c8
    L_567af:
        lea     ecx, [esp+0xa0]
        push    ecx
        lea     ecx, [esp+0x44]
        call    FUN_00658e40
        mov     esi, dword ptr [esp+0x50]
        jmp     L_567c8
    L_567c6:
        __emit 0xDD      /* fstp st0: MSVC6 rejects st0 operand */
        __emit 0xD8
    L_567c8:
        mov     edx, dword ptr [esp+0x34]
        fld     dword ptr [g_0080da54]
        fmul    dword ptr [g_00788100]
        lea     edi, [edx+1]
        mov     dword ptr [esp+0x18], edi
        fild    dword ptr [esp+0x18]
        fcomp
        fnstsw  ax
        test    ah, 0x1
        jz      L_568ee
        fld     dword ptr [g_0080da60]
        mov     ebp, dword ptr [esp+0x30]
        fmul    dword ptr [g_00788100]
        mov     dword ptr [esp+0x14], edi
        fild    dword ptr [esp+0x30]
        mov     dword ptr [esp+0x18], ebp
        fcomp
        fnstsw  ax
        test    ah, 0x1
        jz      L_56822
        call    FUN_0075db4a
        mov     ebp, eax
        mov     dword ptr [esp+0x18], ebp
        jmp     L_56824
    L_56822:
        __emit 0xDD      /* fstp st0: MSVC6 rejects st0 operand */
        __emit 0xD8
    L_56824:
        fld     dword ptr [g_0080da5c]
        fmul    dword ptr [g_00788100]
        fild    dword ptr [esp+0x14]
        fcomp
        fnstsw  ax
        test    ah, 0x1
        jz      L_5684a
        call    FUN_0075db4a
        mov     edi, eax
        mov     dword ptr [esp+0x14], edi
        jmp     L_5684c
    L_5684a:
        __emit 0xDD      /* fstp st0: MSVC6 rejects st0 operand */
        __emit 0xD8
    L_5684c:
        fild    dword ptr [esp+0x18]
        fld     dword ptr [g_0080da58]
        fmul    dword ptr [g_00788100]
        fcompp
        fnstsw  ax
        test    ah, 0x41
        jz      L_5687b
        fld     dword ptr [g_0080da58]
        fmul    dword ptr [g_007880fc]
        call    FUN_0075db4a
        or      ebp, -1
        sub     ebp, eax
    L_5687b:
        fild    dword ptr [esp+0x14]
        fcomp
        fnstsw  ax
        __emit 0xDD      /* fstp st0: MSVC6 rejects st0 operand */
        __emit 0xD8
        test    ah, 0x1
        jnz     L_568a0
        fld     dword ptr [g_0080da54]
        fmul    dword ptr [g_007880fc]
        call    FUN_0075db4a
        or      edi, -1
        sub     edi, eax
    L_568a0:
        mov     eax, dword ptr [esp+0x58]
        add     eax, -8
        cmp     esi, eax
        mov     dword ptr [esp+0xb0], ebp
        mov     dword ptr [esp+0xb4], edi
        jz      L_568d7
        lea     ecx, [esp+0xb0]
        push    ecx
        push    esi
        call    FUN_00658f00
        mov     esi, dword ptr [esp+0x58]
        add     esp, 8
        add     esi, 8
        mov     dword ptr [esp+0x50], esi
        jmp     L_568f0
    L_568d7:
        lea     edx, [esp+0xb0]
        push    edx
        lea     ecx, [esp+0x44]
        call    FUN_00658e40
        mov     esi, dword ptr [esp+0x50]
        jmp     L_568f0
    L_568ee:
        __emit 0xDD      /* fstp st0: MSVC6 rejects st0 operand */
        __emit 0xD8
    L_568f0:
        cmp     esi, dword ptr [esp+0x40]
        jnz     L_563c0
    L_568fa:
        mov     esi, dword ptr [esp+0x74]
        mov     ecx, dword ptr [esp+0x78]
        cmp     esi, ecx
        mov     eax, esi
        jz      L_56931
        mov     edi, dword ptr [esp+0x2c]
    L_56908:
        mov     edx, dword ptr [eax]
        mov     ebp, dword ptr [esp+0x24]
        sub     edx, edi
        mov     edi, dword ptr [eax+0x4]
        shl     edx, 0xb
        add     edx, edi
        sub     edx, ebp
        cmp     byte ptr [edx+ebx+0x4], 0
        jnz     L_5692a
        mov     byte ptr [esp+0x13], 1
    L_5692a:
        add     eax, 8
        cmp     eax, ecx
        __emit 0x75      /* jnz L_56908: MSVC6 miscomputes backward rel (off-by-4) */
        __emit 0xD7
    L_56931:
        fild    dword ptr [esp+0x38]
        fidiv   dword ptr [esp+0x88]
        fcomp   dword ptr [g_0076d070]
        fnstsw  ax
        test    ah, 0x41
        jz      L_5695b
        mov     al, byte ptr [esp+0x13]
        test    al, al
        jz      L_5697a
        jmp     L_5695b
    L_56953:
        mov     ecx, dword ptr [esp+0x78]
        mov     esi, dword ptr [esp+0x74]
    L_5695b:
        fld     dword ptr [esp+0x20]
        fsub    dword ptr [g_0077016c]
        fst     dword ptr [esp+0x20]
        fcomp   dword ptr [g_00770168]
        fnstsw  ax
        test    ah, 0x1
        jz      L_55fee
    L_5697a:
        call    FUN_006f49a0
        mov     ecx, dword ptr [esp+0x50]
        sub     esp, 0x10
        mov     eax, esp
        mov     dword ptr [eax], ecx
        mov     edx, dword ptr [esp+0x64]
        mov     dword ptr [eax+0x4], edx
        mov     ecx, dword ptr [esp+0x68]
        mov     dword ptr [eax+0x8], ecx
        mov     edx, dword ptr [esp+0x6c]
        sub     esp, 0x10
        mov     dword ptr [eax+0xc], edx
        lea     eax, [esp+0x60]
        mov     ecx, esp
        push    eax
        call    FUN_006584d0
        call    FUN_00658f20
        add     esp, 0x20
        lea     ecx, [esp+0x40]
        call    FUN_00658e00
        mov     eax, dword ptr [esp+0x6c]
        xor     esi, esi
        cmp     eax, esi
        jz      L_569f3
        mov     ecx, dword ptr [esp+0x68]
        mov     edx, dword ptr [ecx+0x4]
        push    edx
        lea     ecx, [esp+0x6c]
        call    FUN_00658af0
        mov     eax, dword ptr [esp+0x68]
        mov     dword ptr [eax+0x8], eax
        mov     eax, dword ptr [esp+0x68]
        mov     dword ptr [eax+0x4], esi
        mov     eax, dword ptr [esp+0x68]
        mov     dword ptr [eax+0xc], eax
        mov     dword ptr [esp+0x6c], esi
    L_569f3:
        mov     ecx, dword ptr [esp+0x68]
        push    1
        push    ecx
        call    FUN_00658630
        mov     eax, dword ptr [esp+0x7c]
        add     esp, 8
        cmp     eax, esi
        jz      L_56a13
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L_56a13:
        fld     dword ptr [esp+0x20]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xcc
        ret     0x8
    }
}
