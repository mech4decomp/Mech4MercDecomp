/*
 * FUN_004422b0 (1539 B) - MLR mesh/render helper (__thiscall, RET 0x14).
 * Builds a transformed vertex/index buffer for a mesh: resolves a texture
 * format via a virtual call, computes a scale factor, transforms vertices
 * by a matrix, and writes index/vertex data. Calls FUN_00491cd0,
 * FUN_00421f00, FUN_0043e0e0 and virtual slots 0x4/0x98.
 *
 * CFLAGS: /O1
 */

extern int DAT_007da848;   /* pointer to object table */
extern int DAT_007da864;   /* format/scale int */
extern float DAT_0076d064; /* constant */
extern float DAT_007da87c;
extern float DAT_007da874;
extern float DAT_007da878;
extern float DAT_007da870;
extern int DAT_007da600;   /* pointer */
extern int DAT_007da5f4;   /* pointer */
extern char DAT_007da86c;  /* flags byte */
extern int DAT_007b9864;   /* pointer */
extern int DAT_007d98fc;   /* pointer */

extern void __cdecl FUN_00491cd0(void);
extern void __cdecl FUN_00421f00(void);
extern void __cdecl FUN_0043e0e0(void);

__declspec(naked) void FUN_004422b0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x28
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x24]
        and     eax, 0x3fff
        push    esi
        mov     byte ptr [ebp - 0x1], 0x0
        mov     dword ptr [ebp - 0x10], 0x0
        mov     dword ptr [ebp - 0x14], 0x0
        jz      L42390
        test    eax, eax
        jle     L42390
        mov     ecx, dword ptr [DAT_007da848]
        mov     esi, dword ptr [ecx + eax*4 + 0x24]
        test    esi, esi
        jz      L42390
        mov     edx, dword ptr [esi]
        push    0x0
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        mov     ecx, eax
        call    FUN_00491cd0
        cmp     eax, 0x100
        jl      L42317
        mov     dword ptr [DAT_007da864], 0x1
        jmp     L42372
L42317:
        cmp     eax, 0x80
        jl      L4232a
        mov     dword ptr [DAT_007da864], 0x2
        jmp     L42372
L4232a:
        cmp     eax, 0x40
        jl      L4233b
        mov     dword ptr [DAT_007da864], 0x4
        jmp     L42372
L4233b:
        cmp     eax, 0x20
        jl      L4234c
        mov     dword ptr [DAT_007da864], 0x8
        jmp     L42372
L4234c:
        cmp     eax, 0x10
        jl      L4235d
        mov     dword ptr [DAT_007da864], 0x10
        jmp     L42372
L4235d:
        xor     ecx, ecx
        cmp     eax, 0x8
        setl    cl
        dec     ecx
        and     ecx, 0xffffffe0
        add     ecx, 0x40
        mov     dword ptr [DAT_007da864], ecx
L42372:
        mov     al, byte ptr [esi + 0x24]
        test    al, al
        jnz     L4239f
        mov     esi, dword ptr [esi + 0x28]
        test    esi, esi
        jz      L4239f
        mov     edx, dword ptr [esi + 0xc]
        mov     eax, dword ptr [esi + 0x1c]
        mov     byte ptr [ebp - 0x1], 0x1
        mov     dword ptr [ebp - 0x10], edx
        mov     dword ptr [ebp - 0x14], eax
L42390:
        mov     dl, byte ptr [ebp + 0x18]
        test    dl, dl
        mov     ecx, dword ptr [ebp + 0xc]
        jz      L423a5
        mov     eax, dword ptr [ecx + 0x38]
        jmp     L423b4
L4239f:
        mov     byte ptr [ebp - 0x1], 0x0
        jmp     L42390
L423a5:
        mov     eax, dword ptr [ecx + 0x4]
        mov     ecx, dword ptr [ecx + 0x18]
        lea     eax, [eax + eax*4]
        lea     eax, [ecx + eax*8]
        mov     ecx, dword ptr [ebp + 0xc]
L423b4:
        mov     dword ptr [ebx + 0x84], eax
        mov     eax, dword ptr [ebx + 0x64]
        and     eax, 0x3fff
        jz      L423d5
        test    eax, eax
        jle     L423d5
        mov     esi, dword ptr [DAT_007da848]
        mov     eax, dword ptr [esi + eax*4 + 0x24]
        mov     dword ptr [ebp - 0x28], eax
L423d5:
        mov     esi, dword ptr [ebx + 0x18]
        cmp     esi, 0x100
        mov     dword ptr [ebp - 0x1c], esi
        jle     L423ed
        mov     dword ptr [ebp - 0x1c], 0x100
        mov     esi, dword ptr [ebp - 0x1c]
L423ed:
        test    dl, dl
        push    edi
        jz      L423f7
        mov     eax, dword ptr [ecx + 0x30]
        jmp     L42401
L423f7:
        mov     eax, dword ptr [ecx]
        mov     edi, dword ptr [ecx + 0x10]
        shl     eax, 0x5
        add     eax, edi
L42401:
        test    dl, dl
        mov     dword ptr [ebx + 0x44], eax
        jz      L4240d
        mov     eax, dword ptr [ecx + 0x38]
        jmp     L42419
L4240d:
        mov     eax, dword ptr [ecx + 0x4]
        lea     edx, [eax + eax*4]
        mov     eax, dword ptr [ecx + 0x18]
        lea     eax, [eax + edx*8]
L42419:
        xor     edi, edi
        cmp     word ptr [ebx + 0x56], di
        mov     dword ptr [ebx + 0x84], eax
        mov     word ptr [ebx + 0xa], di
        jnz     L42435
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [edx + 0x98]
L42435:
        xor     eax, eax
        cmp     esi, eax
        mov     dword ptr [ebp - 0x18], eax
        jle     L426d2
        lea     ecx, [esi*8 + 0x0]
        mov     dword ptr [ebp - 0xc], eax
        mov     dword ptr [ebp - 0x20], eax
        mov     dword ptr [ebp - 0x8], ecx
L42452:
        mov     edx, dword ptr [DAT_007da600]
        mov     ecx, dword ptr [edx]
        cmp     byte ptr [ecx + edi], 0x0
        jnz     L42468
        inc     dword ptr [ebp - 0x18]
        jmp     L426ba
L42468:
        mov     esi, dword ptr [ebp - 0x18]
        mov     ecx, dword ptr [DAT_007da5f4]
        mov     edx, edi
        sub     edx, esi
        mov     dword ptr [ecx + edi*2], edx
        test    byte ptr [DAT_007da86c], 0x2
        jle     L425db
        mov     ecx, dword ptr [ebx + 0x28]
        test    ch, 0x3c
        jz      L425db
        mov     edx, dword ptr [ebx + 0x14]
        mov     ecx, dword ptr [ebx + 0x84]
        mov     esi, dword ptr [ebx + 0x1c]
        add     edx, eax
        xor     eax, eax
        mov     ax, word ptr [ebx + 0xa]
        mov     dword ptr [ebp - 0x28], edx
        lea     eax, [eax + eax*4]
        lea     ecx, [ecx + eax*8]
        mov     dword ptr [ebp - 0x24], ecx
        mov     edx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ebp - 0x28]
        fld     dword ptr [eax]
        fld     dword ptr [eax + 0x4]
        fld     dword ptr [eax + 0x8]
        mov     eax, dword ptr [ebp - 0x24]
        fld     dword ptr [edx + 0x34]
        fmul    st(0), st(2)
        fld     dword ptr [edx + 0x38]
        fmul    st(0), st(2)
        fxch    st(1)
        fadd    dword ptr [edx + 0x3c]
        fld     dword ptr [edx + 0x30]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    st(0), st(4)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    st(0), st(3)
        fxch    st(1)
        fstp    dword ptr [eax + 0xc]
        fadd    dword ptr [edx + 0x1c]
        fld     dword ptr [edx + 0x10]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x24]
        fmul    st(0), st(4)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x28]
        fmul    st(0), st(3)
        fxch    st(1)
        fstp    dword ptr [eax + 0x4]
        fadd    dword ptr [edx + 0x2c]
        fld     dword ptr [edx + 0x20]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    st(0), st(4)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    st(0), st(3)
        fxch    st(1)
        fstp    dword ptr [eax + 0x8]
        fadd    dword ptr [edx + 0xc]
        fld     dword ptr [edx]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fstp    st(1)
        fstp    st(1)
        fstp    st(1)
        fstp    dword ptr [eax]
        fld     dword ptr [DAT_0076d064]
        fdiv    dword ptr [ecx + 0xc]
        mov     eax, dword ptr [esi + edi*8 + 0x4]
        mov     edx, dword ptr [esi + edi*8]
        mov     dword ptr [ecx + 0x1c], eax
        mov     eax, dword ptr [ebp - 0x8]
        mov     dword ptr [ecx + 0x18], edx
        mov     edx, dword ptr [esi + eax]
        mov     eax, dword ptr [esi + eax + 0x4]
        mov     esi, dword ptr [ebp + 0x10]
        mov     dword ptr [ecx + 0x24], eax
        xor     eax, eax
        test    esi, esi
        mov     ax, word ptr [ebx + 0xa]
        mov     dword ptr [ecx + 0x20], edx
        mov     edx, dword ptr [ebx + 0x84]
        fst     dword ptr [ecx + 0xc]
        fld     st(0)
        fmul    dword ptr [ecx + 0x8]
        fstp    dword ptr [ecx + 0x8]
        fld     st(0)
        fmul    dword ptr [ecx]
        fmul    dword ptr [DAT_007da87c]
        fadd    dword ptr [DAT_007da874]
        fstp    dword ptr [ecx]
        fmul    dword ptr [ecx + 0x4]
        fmul    dword ptr [DAT_007da878]
        fadd    dword ptr [DAT_007da870]
        fstp    dword ptr [ecx + 0x4]
        lea     ecx, [eax + eax*4]
        mov     eax, dword ptr [ebp + 0x14]
        mov     dword ptr [edx + ecx*8 + 0x10], eax
        jz      L42653
        mov     edx, dword ptr [ebp - 0xc]
        mov     ecx, dword ptr [ebx + 0x14]
        add     ecx, edx
        push    ecx
        mov     ecx, esi
        call    FUN_00421f00
        xor     ecx, ecx
        mov     cx, word ptr [ebx + 0xa]
        lea     edx, [ecx + ecx*4]
        mov     ecx, dword ptr [ebx + 0x84]
        mov     byte ptr [ecx + edx*8 + 0x17], al
        jmp     L42653
L425db:
        mov     ecx, dword ptr [ebx + 0x44]
        mov     esi, dword ptr [ebx + 0x1c]
        xor     edx, edx
        mov     dx, word ptr [ebx + 0xa]
        shl     edx, 0x5
        add     ecx, edx
        mov     edx, dword ptr [ebx + 0x14]
        add     eax, edx
        mov     edx, dword ptr [ebp + 0x8]
        push    edx
        push    eax
        mov     dword ptr [ebp - 0x24], ecx
        mov     dword ptr [ebp - 0x28], eax
        call    FUN_0043e0e0
        mov     eax, dword ptr [ebp - 0x24]
        mov     ecx, dword ptr [esi + edi*8]
        mov     edx, dword ptr [esi + edi*8 + 0x4]
        mov     dword ptr [eax + 0x18], ecx
        mov     ecx, dword ptr [ebp - 0x20]
        mov     dword ptr [eax + 0x1c], edx
        mov     eax, ecx
        add     ecx, 0x8
        mov     dword ptr [ebp - 0x20], ecx
        mov     ecx, dword ptr [DAT_007b9864]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [ebp - 0x8]
        mov     ecx, dword ptr [esi + ecx]
        mov     dword ptr [edx + eax], ecx
        mov     ecx, dword ptr [ebp - 0x8]
        mov     ecx, dword ptr [esi + ecx + 0x4]
        mov     dword ptr [edx + eax + 0x4], ecx
        mov     eax, dword ptr [ebp + 0x10]
        test    eax, eax
        jz      L42650
        mov     edx, dword ptr [ebp - 0x28]
        push    edx
        mov     ecx, eax
        call    FUN_00421f00
        mov     ecx, dword ptr [ebp - 0x24]
        mov     byte ptr [ecx + 0x17], al
L42650:
        mov     esi, dword ptr [ebp + 0x10]
L42653:
        mov     al, byte ptr [ebp - 0x1]
        test    al, al
        jz      L4268c
        mov     eax, dword ptr [ebx + 0x44]
        fld     dword ptr [ebp - 0x10]
        xor     edx, edx
        mov     dx, word ptr [ebx + 0xa]
        xor     ecx, ecx
        shl     edx, 0x5
        fadd    dword ptr [edx + eax + 0x18]
        lea     eax, [edx + eax + 0x18]
        fstp    dword ptr [eax]
        mov     cx, word ptr [ebx + 0xa]
        mov     edx, dword ptr [ebx + 0x44]
        fld     dword ptr [ebp - 0x14]
        shl     ecx, 0x5
        fadd    dword ptr [ecx + edx + 0x1c]
        lea     eax, [ecx + edx + 0x1c]
        fstp    dword ptr [eax]
L4268c:
        test    esi, esi
        jz      L426b0
        mov     edx, dword ptr [ebp - 0xc]
        mov     eax, dword ptr [ebx + 0x14]
        add     eax, edx
        push    eax
        mov     ecx, esi
        call    FUN_00421f00
        mov     edx, dword ptr [ebx + 0x44]
        xor     ecx, ecx
        mov     cx, word ptr [ebx + 0xa]
        shl     ecx, 0x5
        mov     byte ptr [ecx + edx + 0x17], al
L426b0:
        inc     word ptr [ebx + 0xa]
        mov     eax, dword ptr [ebp - 0xc]
        mov     esi, dword ptr [ebp - 0x1c]
L426ba:
        mov     ecx, dword ptr [ebp - 0x8]
        inc     edi
        add     ecx, 0x8
        add     eax, 0xc
        cmp     edi, esi
        mov     dword ptr [ebp - 0x8], ecx
        mov     dword ptr [ebp - 0xc], eax
        jl      L42452
L426d2:
        test    byte ptr [DAT_007da86c], 0x2
        jle     L427be
        mov     eax, dword ptr [ebx + 0x28]
        test    ah, 0x3c
        jz      L427be
        mov     al, byte ptr [ebp + 0x18]
        test    al, al
        jnz     L428a8
        mov     eax, dword ptr [ebp + 0xc]
        mov     edx, dword ptr [eax + 0x4]
        xor     ecx, ecx
        mov     cx, word ptr [ebx + 0xa]
        add     edx, ecx
        mov     dword ptr [eax + 0x4], edx
L42707:
        mov     ecx, dword ptr [eax + 0xc]
        mov     edx, dword ptr [eax + 0x28]
        lea     eax, [edx + ecx*2]
L42710:
        mov     ecx, dword ptr [ebx + 0x58]
        xor     edx, edx
        xor     esi, esi
        cmp     ecx, edx
        mov     dword ptr [ebx + 0x50], eax
        mov     word ptr [ebx + 0x54], si
        mov     dword ptr [ebp + 0x8], edx
        mov     dword ptr [ebp + 0x10], edx
        jle     L4278e
        mov     ecx, dword ptr [DAT_007d98fc]
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [ebp + 0x14], ecx
        mov     ecx, dword ptr [DAT_007da5f4]
L42739:
        mov     edi, dword ptr [ebp + 0x14]
        cmp     byte ptr [edi + edx], 0x0
        jz      L4277f
        mov     edx, dword ptr [ebx + 0x48]
        mov     edi, dword ptr [ebp + 0x10]
        add     edi, edx
        xor     edx, edx
        mov     dl, byte ptr [edi]
        add     eax, 0x2
        inc     esi
        add     eax, 0x2
        mov     dx, word ptr [ecx + edx*2]
        mov     word ptr [eax - 0x4], dx
        xor     edx, edx
        mov     dl, byte ptr [edi + 0x2]
        inc     esi
        mov     dx, word ptr [ecx + edx*2]
        mov     word ptr [eax - 0x2], dx
        xor     edx, edx
        mov     dl, byte ptr [edi + 0x1]
        inc     esi
        add     eax, 0x2
        mov     dx, word ptr [ecx + edx*2]
        mov     word ptr [eax - 0x2], dx
        mov     edx, dword ptr [ebp + 0x8]
L4277f:
        add     dword ptr [ebp + 0x10], 0x3
        mov     edi, dword ptr [ebx + 0x58]
        inc     edx
        cmp     edx, edi
        mov     dword ptr [ebp + 0x8], edx
        jl      L42739
L4278e:
        mov     al, byte ptr [ebp + 0x18]
        test    al, al
        mov     word ptr [ebx + 0x54], si
        pop     edi
        jnz     L427ab
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [eax + 0xc]
        and     esi, 0xffff
        add     ecx, esi
        mov     dword ptr [eax + 0xc], ecx
L427ab:
        cmp     word ptr [ebx + 0xa], 0x0
        pop     esi
        setnz   al
        mov     byte ptr [ebx + 0x10], al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x14
L427be:
        mov     eax, dword ptr [ebx + 0x64]
        and     eax, 0x3fff
        jz      L427f8
        test    eax, eax
        jle     L427f8
        mov     edx, dword ptr [DAT_007da848]
        mov     eax, dword ptr [edx + eax*4 + 0x24]
        test    eax, eax
        jz      L427f8
        mov     cl, byte ptr [eax + 0x24]
        test    cl, cl
        jnz     L42859
        mov     eax, dword ptr [eax + 0x28]
        test    eax, eax
        jz      L42859
        mov     ecx, dword ptr [eax + 0xc]
        mov     edx, dword ptr [eax + 0x1c]
        mov     byte ptr [ebp - 0x1], 0x1
        mov     dword ptr [ebp - 0x10], ecx
        mov     dword ptr [ebp - 0x14], edx
L427f8:
        mov     esi, dword ptr [ebx + 0x44]
        xor     ecx, ecx
        mov     cx, word ptr [ebx + 0xa]
        shl     ecx, 0x5
        lea     edi, [esi + ecx]
        mov     eax, ecx
        shr     ecx, 0x2
        rep movsd
        mov     ecx, eax
        mov     al, byte ptr [ebp - 0x1]
        and     ecx, 0x3
        test    al, al
        rep movsb
        jz      L4285f
        xor     edx, edx
        mov     dx, word ptr [ebx + 0xa]
        test    edx, edx
        jle     L42891
        mov     ecx, dword ptr [DAT_007b9864]
        mov     eax, dword ptr [ecx]
        mov     esi, dword ptr [ebx + 0x44]
        mov     ecx, edx
        shl     ecx, 0x5
        lea     ecx, [ecx + esi + 0x1c]
        mov     esi, edx
L4283c:
        fld     dword ptr [ebp - 0x10]
        add     eax, 0x8
        fadd    dword ptr [eax - 0x8]
        add     ecx, 0x20
        dec     esi
        fstp    dword ptr [ecx - 0x24]
        fld     dword ptr [ebp - 0x14]
        fadd    dword ptr [eax - 0x4]
        fstp    dword ptr [ecx - 0x20]
        jnz     L4283c
        jmp     L42891
L42859:
        mov     byte ptr [ebp - 0x1], 0x0
        jmp     L427f8
L4285f:
        xor     edx, edx
        mov     dx, word ptr [ebx + 0xa]
        test    edx, edx
        jle     L42891
        mov     esi, dword ptr [ebx + 0x44]
        mov     eax, dword ptr [DAT_007b9864]
        mov     eax, dword ptr [eax]
        mov     ecx, edx
        shl     ecx, 0x5
        lea     ecx, [ecx + esi + 0x1c]
        mov     esi, edx
L4287e:
        mov     edi, dword ptr [eax]
        mov     dword ptr [ecx - 0x4], edi
        mov     edi, dword ptr [eax + 0x4]
        mov     dword ptr [ecx], edi
        add     eax, 0x8
        add     ecx, 0x20
        dec     esi
        jnz     L4287e
L42891:
        mov     al, byte ptr [ebp + 0x18]
        test    al, al
        jnz     L428a8
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [eax]
        add     edx, edx
        add     ecx, edx
        mov     dword ptr [eax], ecx
        jmp     L42707
L428a8:
        mov     eax, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [eax + 0x48]
        jmp     L42710
    }
}
