/*
 * FUN_004C0420 (1102 B) — MLR node transform / bounding-sphere update (thiscall).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00419460(void *this);
extern void FUN_0040c5d0(void *this);
extern void FUN_00419480(void *this);
extern void FUN_0041c7d0(void *this);
extern void FUN_0040c9e0(void *this);
extern void FUN_0040caa0(void *this);
extern void FUN_0040d030(void *this);

__declspec(naked) void __fastcall FUN_004c0420(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x60
        push    ebx
        push    esi
        mov     ebx, ecx
        push    edi
        lea     eax, [ebx + 0x20]
        lea     esi, [ebx + 0x50]
        push    eax
        mov     ecx, esi
        call    FUN_00419460
        test    byte ptr [ebx + 0x18], 0x1
        jnz     l_identity

        mov     ecx, dword ptr [ebx + 0x10]
        add     ecx, 0x80
        lea     eax, [ebx + 0x80]
        mov     dword ptr [ebp - 0x4], ecx
        mov     dword ptr [ebp - 0xc], esi
        mov     dword ptr [ebp - 0x8], eax
        mov     edx, dword ptr [ebp - 0xc]
        push    esi
        mov     esi, dword ptr [ebp - 0x4]
        mov     eax, dword ptr [ebp - 0x8]

        fld     dword ptr [edx]
        fmul    dword ptr [esi]
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x4]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x4]
        fxch    st(1)
        fstp    dword ptr [eax]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x4]
        fxch    st(1)
        fstp    dword ptr [eax + 0x4]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x4]
        fxch    st(1)
        fstp    dword ptr [eax + 0x8]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fadd    dword ptr [esi + 0xc]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x18]
        fxch    st(1)
        fstp    dword ptr [eax + 0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x10]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x14]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x18]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fadd    dword ptr [esi + 0x1c]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x28]
        fxch    st(1)
        fstp    dword ptr [eax + 0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x20]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x24]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x28]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fadd    dword ptr [esi + 0x2c]
        fstp    dword ptr [eax + 0x2c]
        pop     esi
        jmp     l_after

    l_identity:
        mov     esi, dword ptr [ebx + 0x10]
        lea     edi, [ebx + 0x80]
        add     esi, 0x80
        mov     ecx, 0xc
        rep movsd

    l_after:
        push    0x7b8d88
        lea     ecx, [ebp - 0x18]
        call    FUN_0040c5d0
        mov     ax, word ptr [ebx + 0x14c]
        xor     edi, edi
        test    ax, ax
        jbe     l_skip1

        mov     edx, dword ptr [ebx + 0x144]
        and     eax, 0xffff
        mov     dword ptr [ebp - 0x4], edx
        mov     dword ptr [ebp - 0x8], eax
    l_loop1:
        mov     eax, dword ptr [ebp - 0x4]
        mov     esi, dword ptr [eax]
        mov     ecx, esi
        call    dword ptr [esi + 0x1c]
        mov     ecx, dword ptr [esi + 0x18]
        and     ecx, 0xc0
        cmp     cl, 0x40
        jnz     l_cont1
        lea     edx, [esi + 0x50]
        push    edx
        lea     ecx, [ebp - 0x60]
        inc     edi
        call    FUN_00419460
        add     esi, 0xb0
        push    esi
        lea     ecx, [ebp - 0x30]
        call    FUN_00419480
        lea     eax, [ebp - 0x60]
        push    eax
        lea     ecx, [ebp - 0x30]
        push    ecx
        lea     ecx, [ebp - 0x24]
        call    FUN_0041c7d0
        lea     edx, [ebp - 0x24]
        push    edx
        lea     eax, [ebp - 0x18]
        push    eax
        lea     ecx, [ebp - 0x18]
        call    FUN_0040c9e0
    l_cont1:
        mov     ecx, dword ptr [ebp - 0x4]
        mov     eax, dword ptr [ebp - 0x8]
        add     ecx, 0x4
        dec     eax
        mov     dword ptr [ebp - 0x4], ecx
        mov     dword ptr [ebp - 0x8], eax
        jnz     l_loop1
        test    di, di
        jnz     l_sphere

    l_skip1:
        mov     ecx, dword ptr [ebx + 0x18]
        mov     edx, dword ptr [ebx]
        and     ecx, 0xffffffbf
        or      ecx, 0x80
        mov     dword ptr [ebx + 0x18], ecx
        mov     ecx, ebx
        mov     dword ptr [ebx + 0xec], 0x0
        call    dword ptr [edx + 0x10]
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax + 0x14]
        jmp     l_end

    l_sphere:
        and     edi, 0xffff
        push    ecx
        mov     dword ptr [ebp - 0xc], edi
        fild    dword ptr [ebp - 0xc]
        lea     ecx, [ebp - 0x18]
        fstp    dword ptr [esp]
        push    ecx
        lea     ecx, [ebp - 0x18]
        call    FUN_0040caa0
        lea     edx, [ebp - 0x18]
        lea     ecx, [ebx + 0xb0]
        push    edx
        call    FUN_0040d030
        xor     eax, eax
        mov     ax, word ptr [ebx + 0x14c]
        test    ax, ax
        mov     dword ptr [ebx + 0xec], 0xbf800000
        jbe     l_after2

        mov     ecx, dword ptr [ebx + 0x144]
        and     eax, 0xffff
        mov     dword ptr [ebp - 0x4], ecx
        mov     dword ptr [ebp - 0x8], eax
    l_loop2:
        mov     edx, dword ptr [ebp - 0x4]
        mov     eax, dword ptr [edx]
        mov     ecx, dword ptr [eax + 0x18]
        and     ecx, 0xc0
        cmp     cl, 0x40
        jnz     l_cont2
        mov     edx, dword ptr [eax + 0xbc]
        lea     esi, [eax + 0x50]
        mov     ecx, 0xc
        lea     edi, [ebp - 0x60]
        rep movsd
        mov     ecx, dword ptr [eax + 0xcc]
        mov     dword ptr [ebp - 0x30], edx
        mov     edx, dword ptr [eax + 0xdc]
        mov     dword ptr [ebp - 0x2c], ecx
        lea     eax, [ebp - 0x60]
        push    eax
        lea     ecx, [ebp - 0x30]
        push    ecx
        lea     ecx, [ebp - 0x24]
        mov     dword ptr [ebp - 0x28], edx
        call    FUN_0041c7d0
        mov     edx, dword ptr [ebp - 0x4]
        fld     dword ptr [ebp - 0x24]
        mov     eax, dword ptr [edx]
        fsub    dword ptr [ebp - 0x18]
        fstp    dword ptr [ebp - 0x24]
        fld     dword ptr [ebp - 0x20]
        fsub    dword ptr [ebp - 0x14]
        fst     dword ptr [ebp - 0x20]
        fld     dword ptr [ebp - 0x1c]
        fsub    dword ptr [ebp - 0x10]
        fst     dword ptr [ebp - 0x1c]
        fld     dword ptr [ebp - 0x24]
        fmul    dword ptr [ebp - 0x24]
        fld     st(1)
        fmul    st(0), st(2)
        faddp   st(1), st(0)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fsqrt
        fstp    st(2)
        fstp    st(0)
        fadd    dword ptr [eax + 0xec]
        fcom    dword ptr [ebx + 0xec]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_skip_store
        fstp    dword ptr [ebx + 0xec]
        jmp     l_cont2
    l_skip_store:
        fstp    st(0)
    l_cont2:
        mov     ecx, dword ptr [ebp - 0x4]
        mov     eax, dword ptr [ebp - 0x8]
        add     ecx, 0x4
        dec     eax
        mov     dword ptr [ebp - 0x4], ecx
        mov     dword ptr [ebp - 0x8], eax
        jnz     l_loop2

    l_after2:
        lea     eax, [ebx + 0x80]
        lea     edi, [ebx + 0xb0]
        lea     ecx, [ebx + 0xf0]
        mov     dword ptr [ebp - 0x4], eax
        mov     dword ptr [ebp - 0x8], edi
        mov     dword ptr [ebp - 0xc], ecx
        mov     edx, dword ptr [ebp - 0x4]
        push    esi
        mov     esi, dword ptr [ebp - 0x8]
        mov     eax, dword ptr [ebp - 0xc]

        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x1c]
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi + 0x2c]
        fxch    st(1)
        fadd    dword ptr [edx + 0xc]
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x2c]
        fxch    st(1)
        fstp    dword ptr [eax + 0xc]
        fadd    dword ptr [edx + 0x1c]
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x2c]
        fxch    st(1)
        fstp    dword ptr [eax + 0x1c]
        fadd    dword ptr [edx + 0x2c]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        pop     esi
        faddp   st(1), st(0)
        fstp    dword ptr [eax + 0x2c]

        mov     eax, dword ptr [edi + 0x3c]
        mov     dword ptr [ecx + 0x3c], eax

    l_end:
        mov     eax, dword ptr [ebx + 0x18]
        mov     edx, dword ptr [ebx]
        and     eax, 0xfffffff3
        mov     ecx, ebx
        mov     dword ptr [ebx + 0x18], eax
        call    dword ptr [edx + 0x10]

        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
