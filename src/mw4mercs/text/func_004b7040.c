/*
 * FUN_004b7040 (2065 B) — MLR (MidLevelRenderer) __thiscall. Ray/box
 * intersection helper. Heavy FPU. RET 0x8.
 *
 * CFLAGS: /O1
 */

extern float g_0076d064;
extern float g_007b220c;
extern float g_0076c5b0;
extern float g_0076d070;
extern float g_0076dd60;
extern void FUN_0040cbb0(void);
extern void FUN_0040c9e0(void);
extern void FUN_0075db4a(void);   /* _ftol */

__declspec(naked) void FUN_004b7040(void)
{
    __asm {
        sub     esp, 0x44
        fld     dword ptr [g_0076d064]
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        fdiv    dword ptr [esi+0x158]
        mov     ebp, dword ptr [esp+0x54]
        push    edi
        mov     edi, dword ptr [ebp]
        lea     eax, [esp+0x48]
        push    eax
        push    edi
        lea     ecx, [esp+0x44]
        fstp    dword ptr [esp+0x34]
        fld     dword ptr [g_0076d064]
        fdiv    dword ptr [esi+0x154]
        fstp    dword ptr [esp+0x30]
        fld     dword ptr [edi]
        fsub    dword ptr [esi+0x160]
        fmul    dword ptr [esp+0x34]
        fstp    dword ptr [esp+0x60]
        fld     dword ptr [edi+0x8]
        fsub    dword ptr [esi+0x15c]
        fmul    dword ptr [esp+0x30]
        fstp    dword ptr [esp+0x2c]
        fld     dword ptr [edi+0x18]
        fld     st(0)
        fmul    dword ptr [edi+0xc]
        fstp    dword ptr [esp+0x50]
        fld     st(0)
        fmul    dword ptr [edi+0x10]
        fstp    dword ptr [esp+0x54]
        fmul    dword ptr [edi+0x14]
        fstp    dword ptr [esp+0x58]
        call    FUN_0040cbb0
        fld     dword ptr [esp+0x58]
        call    FUN_0075db4a
        fld     dword ptr [esp+0x24]
        mov     bl, al
        call    FUN_0075db4a
        fld     dword ptr [esp+0x3c]
        fsub    dword ptr [esi+0x160]
        mov     byte ptr [esp+0x20], al
        fmul    dword ptr [esp+0x2c]
        call    FUN_0075db4a
        cmp     bl, al
        jnz     L_4b714c
        fld     dword ptr [esp+0x44]
        fsub    dword ptr [esi+0x15c]
        fmul    dword ptr [esp+0x28]
        call    FUN_0075db4a
        mov     cl, byte ptr [esp+0x20]
        cmp     cl, al
        jnz     L_4b714c
        mov     al, byte ptr [esi+0x151]
        cmp     bl, al
        jnc     L_4b71a9
        cmp     cl, byte ptr [esi+0x150]
        jnc     L_4b71a9
        mov     edx, dword ptr [edi+0x18]
        movzx   ax, al
        movzx   cx, cl
        push    edx
        xor     dx, dx
        mov     dl, bl
        push    0x0
        push    ebp
        imul    eax, ecx
        add     eax, edx
        push    eax
        push    esi
        call    dword ptr [esp+0x70]
        add     esp, 0x14
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x44
        ret     0x8
L_4b714c:
        fld     dword ptr [esi+0x160]
        mov     eax, dword ptr [edi+0x18]
        fsub    dword ptr [edi]
        mov     dword ptr [esp+0x14], eax
        fld     dword ptr [edi+0xc]
        mov     dword ptr [esp+0x18], 0x0
        fchs
        fcom    dword ptr [g_007b220c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_4b71b5
        fxch
        fdiv    st(0), st(1)
        fchs
        fsub    dword ptr [g_007b220c]
        fxch
        fstp    st(0)
        fcom    dword ptr [esp+0x14]
        fnstsw  ax
        test    ah, 0x1
        jz      L_4b7196
        fstp    dword ptr [esp+0x14]
        jmp     L_4b7198
L_4b7196:
        fstp    st(0)
L_4b7198:
        fld     dword ptr [g_0076c5b0]
L_4b719e:
        fcomp   dword ptr [esp+0x14]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_4b7204
L_4b71a9:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x44
        ret     0x8
L_4b71b5:
        fld     dword ptr [g_007b220c]
        fchs
        fld     st(1)
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jz      L_4b71f5
        fxch
        fdiv    st(0), st(1)
        fsubr   dword ptr [g_007b220c]
        fxch
        fstp    st(0)
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_4b71ed
        fstp    dword ptr [esp+0x18]
        fld     dword ptr [esp+0x18]
        jmp     L_4b719e
L_4b71ed:
        fstp    st(0)
        fld     dword ptr [esp+0x18]
        jmp     L_4b719e
L_4b71f5:
        fstp    st(0)
        fcomp   dword ptr [g_007b220c]
        fnstsw  ax
        test    ah, 0x41
        jz      L_4b71a9
L_4b7204:
        mov     al, byte ptr [esi+0x151]
        mov     byte ptr [esp+0x30], al
        and     eax, 0xff
        mov     dword ptr [esp+0x58], eax
        fild    dword ptr [esp+0x58]
        fst     dword ptr [esp+0x34]
        fmul    dword ptr [esi+0x158]
        fadd    dword ptr [esi+0x160]
        fsubr   dword ptr [edi]
        fld     dword ptr [edi+0xc]
        fcom    dword ptr [g_007b220c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_4b725e
        fxch
        fdiv    st(0), st(1)
        fchs
        fsub    dword ptr [g_007b220c]
        fxch
        fstp    st(0)
        fcom    dword ptr [esp+0x14]
        fnstsw  ax
        test    ah, 0x1
        jz      L_4b7290
        fstp    dword ptr [esp+0x14]
        jmp     L_4b7292
L_4b725e:
        fld     dword ptr [g_007b220c]
        fchs
        fld     st(1)
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jz      L_4b72ad
        fxch
        fdiv    st(0), st(1)
        fsubr   dword ptr [g_007b220c]
        fxch
        fstp    st(0)
        fcom    dword ptr [esp+0x18]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_4b7290
        fstp    dword ptr [esp+0x18]
        jmp     L_4b7292
L_4b7290:
        fstp    st(0)
L_4b7292:
        fld     dword ptr [esp+0x18]
        fcomp   dword ptr [esp+0x14]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_4b72c0
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x44
        ret     0x8
L_4b72ad:
        fstp    st(0)
        fcomp   dword ptr [g_007b220c]
        fnstsw  ax
        test    ah, 0x41
        jz      L_4b71a9
L_4b72c0:
        fld     dword ptr [esi+0x15c]
        fsub    dword ptr [edi+0x8]
        fld     dword ptr [edi+0x14]
        fchs
        fcom    dword ptr [g_007b220c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_4b72fc
        fxch
        fdiv    st(0), st(1)
        fchs
        fsub    dword ptr [g_007b220c]
        fxch
        fstp    st(0)
        fcom    dword ptr [esp+0x14]
        fnstsw  ax
        test    ah, 0x1
        jz      L_4b732e
        fstp    dword ptr [esp+0x14]
        jmp     L_4b7330
L_4b72fc:
        fld     dword ptr [g_007b220c]
        fchs
        fld     st(1)
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jz      L_4b734b
        fxch
        fdiv    st(0), st(1)
        fsubr   dword ptr [g_007b220c]
        fxch
        fstp    st(0)
        fcom    dword ptr [esp+0x18]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_4b732e
        fstp    dword ptr [esp+0x18]
        jmp     L_4b7330
L_4b732e:
        fstp    st(0)
L_4b7330:
        fld     dword ptr [esp+0x18]
        fcomp   dword ptr [esp+0x14]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_4b735e
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x44
        ret     0x8
L_4b734b:
        fstp    st(0)
        fcomp   dword ptr [g_007b220c]
        fnstsw  ax
        test    ah, 0x41
        jz      L_4b71a9
L_4b735e:
        xor     ebx, ebx
        mov     bl, byte ptr [esi+0x150]
        mov     ecx, ebx
        and     ecx, 0xff
        mov     dword ptr [esp+0x58], ecx
        fild    dword ptr [esp+0x58]
        fst     dword ptr [esp+0x38]
        fmul    dword ptr [esi+0x154]
        fadd    dword ptr [esi+0x15c]
        fsubr   dword ptr [edi+0x8]
        fld     dword ptr [edi+0x14]
        fcom    dword ptr [g_007b220c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_4b73ba
        fxch
        fdiv    st(0), st(1)
        fchs
        fsub    dword ptr [g_007b220c]
        fxch
        fstp    st(0)
        fcom    dword ptr [esp+0x14]
        fnstsw  ax
        test    ah, 0x1
        jz      L_4b73ec
        fstp    dword ptr [esp+0x14]
        jmp     L_4b73ee
L_4b73ba:
        fld     dword ptr [g_007b220c]
        fchs
        fld     st(1)
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jz      L_4b7409
        fxch
        fdiv    st(0), st(1)
        fsubr   dword ptr [g_007b220c]
        fxch
        fstp    st(0)
        fcom    dword ptr [esp+0x18]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_4b73ec
        fstp    dword ptr [esp+0x18]
        jmp     L_4b73ee
L_4b73ec:
        fstp    st(0)
L_4b73ee:
        fld     dword ptr [esp+0x18]
        fcomp   dword ptr [esp+0x14]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_4b741c
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x44
        ret     0x8
L_4b7409:
        fstp    st(0)
        fcomp   dword ptr [g_007b220c]
        fnstsw  ax
        test    ah, 0x41
        jz      L_4b71a9
L_4b741c:
        fld     dword ptr [esp+0x18]
        lea     edx, [esp+0x48]
        fmul    dword ptr [edi+0xc]
        push    edx
        push    edi
        lea     ecx, [esp+0x44]
        fstp    dword ptr [esp+0x50]
        fld     dword ptr [esp+0x20]
        fmul    dword ptr [edi+0x10]
        fstp    dword ptr [esp+0x54]
        fld     dword ptr [esp+0x20]
        fmul    dword ptr [edi+0x14]
        fstp    dword ptr [esp+0x58]
        call    FUN_0040c9e0
        fld     dword ptr [esp+0x3c]
        fsub    dword ptr [esi+0x160]
        fmul    dword ptr [esp+0x2c]
        fstp    dword ptr [esp+0x58]
        fld     dword ptr [esp+0x44]
        fsub    dword ptr [esi+0x15c]
        fmul    dword ptr [esp+0x28]
        fstp    dword ptr [esp+0x24]
        fld     dword ptr [esp+0x58]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      L_4b7488
        mov     byte ptr [esp+0x1c], 0x0
        jmp     L_4b74c1
L_4b7488:
        fld     dword ptr [esp+0x58]
        fcomp   dword ptr [esp+0x34]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_4b74a5
        mov     cl, byte ptr [esp+0x30]
        mov     al, cl
        dec     al
        mov     byte ptr [esp+0x1c], al
        jmp     L_4b74c5
L_4b74a5:
        fld     dword ptr [esp+0x58]
        fsub    dword ptr [g_0076d070]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp+0x58]
        mov     al, byte ptr [esp+0x58]
        mov     byte ptr [esp+0x1c], al
L_4b74c1:
        mov     cl, byte ptr [esp+0x30]
L_4b74c5:
        fld     dword ptr [esp+0x24]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      L_4b74dd
        mov     byte ptr [esp+0x20], 0x0
        jmp     L_4b7512
L_4b74dd:
        fld     dword ptr [esp+0x24]
        fcomp   dword ptr [esp+0x38]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_4b74f6
        mov     al, bl
        dec     al
        mov     byte ptr [esp+0x20], al
        jmp     L_4b7512
L_4b74f6:
        fld     dword ptr [esp+0x24]
        fsub    dword ptr [g_0076d070]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp+0x58]
        mov     dl, byte ptr [esp+0x58]
        mov     byte ptr [esp+0x20], dl
L_4b7512:
        fld     dword ptr [esp+0x14]
        fmul    dword ptr [edi+0xc]
        fld     dword ptr [esp+0x14]
        fmul    dword ptr [edi+0x10]
        fstp    dword ptr [esp+0x4c]
        fld     dword ptr [esp+0x14]
        fmul    dword ptr [edi+0x14]
        fstp    dword ptr [esp+0x50]
        fadd    dword ptr [edi]
        fstp    dword ptr [esp+0x3c]
        fld     dword ptr [esp+0x4c]
        fadd    dword ptr [edi+0x4]
        fstp    dword ptr [esp+0x40]
        fld     dword ptr [esp+0x50]
        fadd    dword ptr [edi+0x8]
        fstp    dword ptr [esp+0x44]
        fld     dword ptr [esp+0x3c]
        fsub    dword ptr [esi+0x160]
        fmul    dword ptr [esp+0x2c]
        fstp    dword ptr [esp+0x58]
        fld     dword ptr [esp+0x44]
        fsub    dword ptr [esi+0x15c]
        fmul    dword ptr [esp+0x28]
        fstp    dword ptr [esp+0x30]
        fld     dword ptr [esp+0x58]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      L_4b7587
        mov     byte ptr [esp+0x58], 0x0
        jmp     L_4b75ba
L_4b7587:
        fld     dword ptr [esp+0x58]
        fcomp   dword ptr [esp+0x34]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_4b759e
        dec     cl
        mov     byte ptr [esp+0x58], cl
        jmp     L_4b75ba
L_4b759e:
        fld     dword ptr [esp+0x58]
        fsub    dword ptr [g_0076d070]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp+0x58]
        mov     al, byte ptr [esp+0x58]
        mov     byte ptr [esp+0x58], al
L_4b75ba:
        fld     dword ptr [esp+0x30]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      L_4b75d2
        mov     byte ptr [esp+0x13], 0x0
        jmp     L_4b7605
L_4b75d2:
        fld     dword ptr [esp+0x30]
        fcomp   dword ptr [esp+0x38]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_4b75e9
        dec     bl
        mov     byte ptr [esp+0x13], bl
        jmp     L_4b7605
L_4b75e9:
        fld     dword ptr [esp+0x30]
        fsub    dword ptr [g_0076d070]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp+0x38]
        mov     cl, byte ptr [esp+0x38]
        mov     byte ptr [esp+0x13], cl
L_4b7605:
        mov     edx, dword ptr [esp+0x18]
        mov     dword ptr [esp+0x28], edx
L_4b760d:
        fld     dword ptr [edi+0xc]
        mov     eax, dword ptr [esp+0x28]
        mov     ecx, dword ptr [esp+0x14]
        fchs
        fcom    dword ptr [g_007b220c]
        mov     dword ptr [esp+0x18], eax
        xor     edx, edx
        or      ebx, 0xffffffff
        mov     dword ptr [esp+0x24], ecx
        mov     ecx, dword ptr [esp+0x1c]
        fnstsw  ax
        mov     dword ptr [esp+0x30], edx
        test    ah, 0x41
        jnz     L_4b7672
        mov     eax, ecx
        and     eax, 0xff
        mov     dword ptr [esp+0x38], eax
        fild    dword ptr [esp+0x38]
        fmul    dword ptr [esi+0x158]
        fadd    dword ptr [esi+0x160]
        fsub    dword ptr [edi]
        fdivrp  st(1), st(0)
        fchs
        fcom    dword ptr [esp+0x14]
        fnstsw  ax
        test    ah, 0x1
        jz      L_4b7672
        fstp    dword ptr [esp+0x24]
        mov     dword ptr [esp+0x30], ebx
        jmp     L_4b7674
L_4b7672:
        fstp    st(0)
L_4b7674:
        fld     dword ptr [edi+0xc]
        fcom    dword ptr [g_007b220c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_4b76be
        and     ecx, 0xff
        inc     ecx
        mov     dword ptr [esp+0x38], ecx
        fild    dword ptr [esp+0x38]
        fmul    dword ptr [esi+0x158]
        fadd    dword ptr [esi+0x160]
        fsubr   dword ptr [edi]
        fdivrp  st(1), st(0)
        fchs
        fcom    dword ptr [esp+0x24]
        fnstsw  ax
        test    ah, 0x1
        jz      L_4b76be
        fstp    dword ptr [esp+0x24]
        mov     dword ptr [esp+0x30], 0x1
        jmp     L_4b76c0
L_4b76be:
        fstp    st(0)
L_4b76c0:
        fld     dword ptr [esp+0x14]
        mov     ecx, dword ptr [esp+0x20]
        fld     dword ptr [edi+0x14]
        mov     dword ptr [esp+0x2c], edx
        fchs
        fcom    dword ptr [g_007b220c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_4b771b
        mov     eax, ecx
        and     eax, 0xff
        mov     dword ptr [esp+0x38], eax
        fild    dword ptr [esp+0x38]
        fmul    dword ptr [esi+0x154]
        fadd    dword ptr [esi+0x15c]
        fsub    dword ptr [edi+0x8]
        fdivrp  st(1), st(0)
        fchs
        fst     dword ptr [esp+0x38]
        fcomp   dword ptr [esp+0x14]
        fnstsw  ax
        test    ah, 0x1
        jz      L_4b771d
        fstp    st(0)
        mov     dword ptr [esp+0x2c], ebx
        fld     dword ptr [esp+0x38]
        jmp     L_4b771d
L_4b771b:
        fstp    st(0)
L_4b771d:
        fld     dword ptr [edi+0x14]
        fcom    dword ptr [g_007b220c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_4b776c
        and     ecx, 0xff
        inc     ecx
        mov     dword ptr [esp+0x38], ecx
        fild    dword ptr [esp+0x38]
        fmul    dword ptr [esi+0x154]
        fadd    dword ptr [esi+0x15c]
        fsubr   dword ptr [edi+0x8]
        fdivrp  st(1), st(0)
        fchs
        fst     dword ptr [esp+0x38]
        fcomp
        fnstsw  ax
        test    ah, 0x1
        jz      L_4b776e
        fstp    st(0)
        mov     dword ptr [esp+0x2c], 0x1
        fld     dword ptr [esp+0x38]
        jmp     L_4b776e
L_4b776c:
        fstp    st(0)
L_4b776e:
        fld     st(0)
        fsub    dword ptr [g_007b220c]
        fcomp   dword ptr [esp+0x24]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_4b7785
        mov     dword ptr [esp+0x2c], edx
L_4b7785:
        fld     dword ptr [esp+0x24]
        fsub    dword ptr [g_007b220c]
        fld     st(1)
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jz      L_4b77a4
        fstp    dword ptr [esp+0x28]
        mov     dword ptr [esp+0x30], edx
        jmp     L_4b77ae
L_4b77a4:
        mov     ecx, dword ptr [esp+0x24]
        fstp    st(0)
        mov     dword ptr [esp+0x28], ecx
L_4b77ae:
        mov     edx, dword ptr [ebp]
        mov     eax, dword ptr [edx+0x18]
        mov     ecx, dword ptr [esp+0x28]
        mov     bl, byte ptr [esp+0x20]
        mov     edx, dword ptr [esp+0x18]
        push    ecx
        mov     dword ptr [esp+0x38], eax
        movzx   ax, byte ptr [esi+0x151]
        xor     cx, cx
        mov     cl, bl
        push    edx
        movzx   dx, byte ptr [esp+0x24]
        push    ebp
        imul    eax, ecx
        add     eax, edx
        push    eax
        push    esi
        call    dword ptr [esp+0x70]
        mov     ecx, eax
        add     esp, 0x14
        test    ecx, ecx
        jz      L_4b7806
        mov     edx, dword ptr [ebp]
        fld     dword ptr [edx+0x18]
        fcomp   dword ptr [esp+0x28]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_4b7845
        mov     eax, dword ptr [esp+0x34]
        mov     dword ptr [edx+0x18], eax
L_4b7806:
        mov     cl, byte ptr [esp+0x1c]
        cmp     cl, byte ptr [esp+0x58]
        jnz     L_4b781a
        cmp     bl, byte ptr [esp+0x13]
        jz      L_4b71a9
L_4b781a:
        mov     eax, dword ptr [esp+0x30]
        test    eax, eax
        jnz     L_4b782e
        mov     ecx, dword ptr [esp+0x2c]
        test    ecx, ecx
        jz      L_4b71a9
L_4b782e:
        mov     cl, byte ptr [esp+0x1c]
        add     cl, al
        add     bl, byte ptr [esp+0x2c]
        mov     byte ptr [esp+0x1c], cl
        mov     byte ptr [esp+0x20], bl
        jmp     L_4b760d
L_4b7845:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ecx
        pop     ebx
        add     esp, 0x44
        ret     0x8
    }
}
