/*
 * FUN_00486450 (1398 B) - MLR vertex transform / cull (__thiscall, RET 0xc).
 * Transforms a batch of vertices by a matrix, applies frustum-cull tests
 * selected by a bitmask, and packs a color/alpha word.
 *
 * CFLAGS: /O1
 */

extern int  g_007da718;
extern float g_0076c5b0;
extern float g_007da87c;
extern float g_007da874;
extern float g_007da878;
extern float g_007da870;
extern float g_0076fbdc;
extern float g_0076d978;
extern int  g_00858940;
extern int  g_00858944;

__declspec(naked) void FUN_00486450(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x1c
        push    ebx
        mov     ebx, dword ptr [ebp + 0x8]
        push    esi
        push    edi
        xor     edi, edi
        test    bl, 0x3f
        mov     dword ptr [ebp - 0x8], ecx
        mov     dword ptr [ecx + 0x98], edi
        jz      L_4867a5
        mov     esi, dword ptr [ecx + 0xa0]
        cmp     esi, edi
        jbe     L_4867a5
        mov     al, byte ptr [ebp + 0x10]
        test    al, al
        jz      L_48648d
        mov     eax, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [eax + 0x30]
        jmp     L_486498
L_48648d:
        mov     edx, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [edx]
        shl     eax, 0x5
        add     eax, dword ptr [edx + 0x10]
L_486498:
        mov     edx, dword ptr [g_007da718]
        mov     edx, dword ptr [edx]
        mov     dword ptr [ecx + 0x94], eax
        xor     eax, eax
        cmp     dword ptr [esi], edi
        mov     dword ptr [ebp - 0xc], edx
        mov     dword ptr [ebp - 0x4], eax
        jle     L_486776
L_4864b6:
        mov     esi, dword ptr [ecx + 0x18]
        test    byte ptr [esi + eax*0x1], 0x2
        jz      L_486759
        mov     eax, ebx
        shr     eax, 0x5
        test    al, 0x1
        jz      L_4864dd
        fld     dword ptr [edx + 0xc]
        fcomp   dword ptr [edx + 0x8]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_486759
L_4864dd:
        mov     eax, ebx
        shr     eax, 0x4
        test    al, 0x1
        jz      L_4864fa
        fld     dword ptr [edx + 0x8]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_486759
L_4864fa:
        mov     eax, ebx
        shr     eax, 0x3
        test    al, 0x1
        jz      L_486516
        fld     dword ptr [edx]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_486759
L_486516:
        mov     eax, ebx
        shr     eax, 0x2
        test    al, 0x1
        jz      L_48652f
        fld     dword ptr [edx + 0xc]
        fcomp   dword ptr [edx]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_486759
L_48652f:
        mov     eax, ebx
        shr     eax, 0x1
        test    al, 0x1
        jz      L_48654b
        fld     dword ptr [edx + 0x4]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_486759
L_48654b:
        test    bl, 0x1
        jz      L_486561
        fld     dword ptr [edx + 0xc]
        fcomp   dword ptr [edx + 0x4]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_486759
L_486561:
        mov     edx, dword ptr [g_007da718]
        mov     eax, dword ptr [edx]
        mov     esi, dword ptr [ecx + 0x98]
        mov     edx, dword ptr [ecx + 0x94]
        mov     ebx, dword ptr [ecx + 0x14]
        shl     esi, 0x5
        add     esi, edx
        mov     dword ptr [ebp - 0x10], eax
        mov     dword ptr [ebp - 0x18], esi
        mov     ecx, dword ptr [ebp - 0x10]
        fld1
        mov     edi, dword ptr [ebp - 0x4]
        mov     eax, edi
        shl     eax, 0x4
        fdiv    dword ptr [eax + ecx*0x1 + 0xc]
        add     eax, ecx
        mov     edx, dword ptr [ebp - 0x18]
        fst     dword ptr [edx + 0xc]
        fld     st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx]
        fld     dword ptr [eax + 0x4]
        fmul    st(0), st(1)
        fstp    dword ptr [edx + 0x4]
        fmul    dword ptr [eax + 0x8]
        fstp    dword ptr [edx + 0x8]
        fld     dword ptr [g_007da87c]
        test    ebx, ebx
        fmul    dword ptr [esi]
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [esi]
        fld     dword ptr [g_007da878]
        fmul    dword ptr [esi + 0x4]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [esi + 0x4]
        jz      L_4865e3
        mov     ecx, dword ptr [ebp - 0x4]
        shl     ecx, 0x4
        add     ecx, ebx
        mov     dword ptr [ebp - 0x10], ecx
        jmp     L_4865ea
L_4865e3:
        mov     dword ptr [ebp - 0x10], 0x7b9490
L_4865ea:
        fld     dword ptr [g_0076fbdc]
        mov     esi, dword ptr [ebp - 0x10]
        fld     dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi + 0xc]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x1c]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x1c]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     dword ptr [ebp - 0x14], ebx
        fld     dword ptr [esi]
        mov     ecx, dword ptr [esi]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x1c]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x1c]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x14]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x14], ecx
        fld     dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi + 0x4]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x1c]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x1c]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x14]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x14], ecx
        mov     ecx, dword ptr [esi + 0x8]
        fadd    dword ptr [esi + 0x8]
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x1c]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x1c]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x14]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x14], ecx
        mov     eax, dword ptr [ebp - 0x18]
        mov     edx, dword ptr [ebp - 0x14]
        mov     ecx, dword ptr [ebp - 0x8]
        xor     ebx, ebx
        mov     dword ptr [eax + 0x10], edx
        mov     edx, dword ptr [ecx + 0x9c]
        cmp     edx, ebx
        mov     dword ptr [eax + 0x18], ebx
        mov     dword ptr [eax + 0x1c], ebx
        mov     dword ptr [ebp - 0x18], edx
        jz      L_4866f7
        fild    dword ptr [ebp - 0x18]
        fmul    dword ptr [g_0076d978]
        jmp     L_4866fd
L_4866f7:
        fld     dword ptr [g_0076d978]
L_4866fd:
        mov     esi, dword ptr [ecx + 0x98]
        mov     edi, dword ptr [ecx + 0x94]
        mov     eax, esi
        shl     eax, 0x5
        fadd    dword ptr [edi + eax*0x1]
        add     edi, eax
        fild    dword ptr [g_00858940]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jnz     L_486750
        cmp     edx, ebx
        jz      L_486731
        fild    dword ptr [ebp - 0x18]
        fmul    dword ptr [g_0076d978]
        jmp     L_486737
L_486731:
        fld     dword ptr [g_0076d978]
L_486737:
        fadd    dword ptr [edi + 0x4]
        fild    dword ptr [g_00858944]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jnz     L_486750
        inc     esi
        mov     dword ptr [ecx + 0x98], esi
L_486750:
        mov     edx, dword ptr [ebp - 0xc]
        mov     ebx, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [ebp - 0x8]
L_486759:
        mov     eax, dword ptr [ebp - 0x4]
        mov     esi, dword ptr [ecx + 0xa0]
        mov     edi, dword ptr [esi]
        inc     eax
        add     edx, 0x10
        cmp     eax, edi
        mov     dword ptr [ebp - 0x4], eax
        mov     dword ptr [ebp - 0xc], edx
        jl      L_4864b6
L_486776:
        mov     al, byte ptr [ebp + 0x10]
        test    al, al
        jnz     L_48678c
        mov     eax, dword ptr [ebp + 0xc]
        mov     esi, dword ptr [eax]
        mov     edx, dword ptr [ecx + 0x98]
        add     esi, edx
        mov     dword ptr [eax], esi
L_48678c:
        mov     edx, dword ptr [ecx + 0x98]
        xor     eax, eax
        test    edx, edx
        setnz   al
        pop     edi
        pop     esi
        pop     ebx
        mov     dword ptr [ecx + 0x8], eax
        mov     esp, ebp
        pop     ebp
        ret     0xc
L_4867a5:
        mov     edx, dword ptr [ecx + 0xa0]
        cmp     edx, edi
        ja      L_4867bd
        mov     dword ptr [ecx + 0x8], edi
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
L_4867bd:
        mov     al, byte ptr [ebp + 0x10]
        test    al, al
        jz      L_4867cc
        mov     eax, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [eax + 0x30]
        jmp     L_4867d9
L_4867cc:
        mov     esi, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [esi]
        mov     ebx, dword ptr [esi + 0x10]
        shl     eax, 0x5
        add     eax, ebx
L_4867d9:
        mov     esi, dword ptr [edx]
        mov     dword ptr [ecx + 0x94], eax
        xor     eax, eax
        cmp     esi, edi
        mov     dword ptr [ebp - 0x4], eax
        jle     L_486997
L_4867ee:
        mov     edx, dword ptr [ecx + 0x18]
        test    byte ptr [edx + eax*0x1], 0x2
        jz      L_486983
        mov     eax, dword ptr [g_007da718]
        mov     edx, dword ptr [eax]
        mov     esi, dword ptr [ecx + 0x98]
        mov     ebx, dword ptr [ecx + 0x14]
        mov     dword ptr [ebp + 0x8], edx
        mov     edx, dword ptr [ecx + 0x94]
        shl     esi, 0x5
        add     esi, edx
        mov     dword ptr [ebp - 0x14], esi
        mov     ecx, dword ptr [ebp + 0x8]
        fld1
        mov     edi, dword ptr [ebp - 0x4]
        mov     eax, edi
        shl     eax, 0x4
        fdiv    dword ptr [eax + ecx*0x1 + 0xc]
        add     eax, ecx
        mov     edx, dword ptr [ebp - 0x14]
        fst     dword ptr [edx + 0xc]
        fld     st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx]
        fld     dword ptr [eax + 0x4]
        fmul    st(0), st(1)
        fstp    dword ptr [edx + 0x4]
        fmul    dword ptr [eax + 0x8]
        fstp    dword ptr [edx + 0x8]
        fld     dword ptr [g_007da87c]
        test    ebx, ebx
        fmul    dword ptr [esi]
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [esi]
        fld     dword ptr [g_007da878]
        fmul    dword ptr [esi + 0x4]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [esi + 0x4]
        jz      L_48687c
        mov     eax, dword ptr [ebp - 0x4]
        shl     eax, 0x4
        add     eax, ebx
        mov     dword ptr [ebp + 0x8], eax
        jmp     L_486883
L_48687c:
        mov     dword ptr [ebp + 0x8], 0x7b9490
L_486883:
        fld     dword ptr [g_0076fbdc]
        mov     esi, dword ptr [ebp + 0x8]
        fld     dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi + 0xc]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x1c]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x1c]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     dword ptr [ebp - 0x18], ebx
        fld     dword ptr [esi]
        mov     ecx, dword ptr [esi]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x1c]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x1c]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x18]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x18], ecx
        fld     dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi + 0x4]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x1c]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x1c]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x18]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x18], ecx
        mov     ecx, dword ptr [esi + 0x8]
        fadd    dword ptr [esi + 0x8]
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x1c]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x1c]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x18]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x18], ecx
        mov     eax, dword ptr [ebp - 0x14]
        mov     ecx, dword ptr [ebp - 0x18]
        mov     dword ptr [eax + 0x10], ecx
        xor     ecx, ecx
        mov     dword ptr [eax + 0x18], ecx
        mov     dword ptr [eax + 0x1c], ecx
        mov     eax, dword ptr [ebp - 0x8]
        inc     dword ptr [eax + 0x98]
        mov     ecx, eax
        mov     eax, dword ptr [ebp - 0x4]
L_486983:
        mov     edx, dword ptr [ecx + 0xa0]
        mov     esi, dword ptr [edx]
        inc     eax
        cmp     eax, esi
        mov     dword ptr [ebp - 0x4], eax
        jl      L_4867ee
L_486997:
        mov     al, byte ptr [ebp + 0x10]
        test    al, al
        jnz     L_4869ad
        mov     eax, dword ptr [ebp + 0xc]
        mov     esi, dword ptr [eax]
        mov     edx, dword ptr [ecx + 0x98]
        add     esi, edx
        mov     dword ptr [eax], esi
L_4869ad:
        mov     edx, dword ptr [ecx + 0x98]
        xor     eax, eax
        test    edx, edx
        setnz   al
        pop     edi
        pop     esi
        pop     ebx
        mov     dword ptr [ecx + 0x8], eax
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }
}
