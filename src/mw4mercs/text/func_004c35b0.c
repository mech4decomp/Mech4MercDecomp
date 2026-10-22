/*
 * FUN_004C35B0 (1000 B) — MLR camera-element update (thiscall).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00766050(void *this);
extern void FUN_004c41f0(void *this);
extern void FUN_00428830(void *this);
extern void FUN_00428730(void *this);
extern void FUN_0040c9e0(void *this);
extern void FUN_004c41d0(void *this);
extern void FUN_0040c0e0(void *this);

extern int g_7b8d68;
extern int g_7b8d6c;
extern int g_7b8d70;

__declspec(naked) void __fastcall FUN_004c35b0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x60
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 0x10]
        add     eax, 0x80
        lea     ecx, [edi + 0x50]
        lea     ebx, [edi + 0x80]
        mov     dword ptr [ebp - 0x8], eax
        mov     dword ptr [ebp - 0xc], ecx
        mov     dword ptr [ebp - 0x4], ebx
        mov     edx, dword ptr [ebp - 0xc]
        push    esi
        mov     esi, dword ptr [ebp - 0x8]
        mov     eax, dword ptr [ebp - 0x4]

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
        lea     esi, [edi + 0x1ac]
        mov     dword ptr [ebp - 0x4], 0x6
    l_loop1:
        push    ebx
        lea     edx, [esi - 0x60]
        push    edx
        mov     ecx, esi
        call    FUN_00766050
        mov     eax, dword ptr [ebp - 0x4]
        add     esi, 0x10
        dec     eax
        mov     dword ptr [ebp - 0x4], eax
        jnz     l_loop1

        mov     eax, dword ptr [ebx + 0xc]
        lea     esi, [edi + 0x228]
        mov     dword ptr [esi], eax
        mov     ecx, dword ptr [ebx + 0x1c]
        mov     eax, dword ptr [g_7b8d68]
        mov     dword ptr [esi + 0x4], ecx
        mov     ecx, dword ptr [g_7b8d6c]
        mov     edx, dword ptr [ebx + 0x2c]
        mov     dword ptr [ebp - 0x24], eax
        mov     dword ptr [ebp - 0x30], eax
        mov     dword ptr [ebp - 0x18], eax
        mov     dword ptr [esi + 0x8], edx
        mov     edx, dword ptr [g_7b8d70]
        lea     eax, [ebp - 0x3c]
        mov     dword ptr [ebp - 0x20], ecx
        mov     dword ptr [ebp - 0x2c], ecx
        mov     dword ptr [ebp - 0x14], ecx
        push    eax
        mov     ecx, ebx
        mov     dword ptr [ebp - 0x1c], edx
        mov     dword ptr [ebp - 0x28], edx
        mov     dword ptr [ebp - 0x10], edx
        call    FUN_004c41f0
        lea     ecx, [ebp - 0x48]
        push    ecx
        mov     ecx, ebx
        call    FUN_00428830
        lea     edx, [ebp - 0x54]
        push    edx
        mov     ecx, ebx
        call    FUN_00428730

        fld     dword ptr [edi + 0x210]
        fmul    dword ptr [edi + 0x220]
        fdiv    dword ptr [edi + 0x21c]
        fabs
        fld     dword ptr [ebp - 0x3c]
        fmul    st(0), st(1)
        fadd    dword ptr [ebp - 0x24]
        fstp    dword ptr [ebp - 0x24]
        fld     dword ptr [ebp - 0x38]
        fmul    st(0), st(1)
        fadd    dword ptr [ebp - 0x20]
        fstp    dword ptr [ebp - 0x20]
        fld     dword ptr [ebp - 0x34]
        fmul    st(0), st(1)
        fadd    dword ptr [ebp - 0x1c]
        fstp    dword ptr [ebp - 0x1c]
        fstp    st(0)
        fld     dword ptr [edi + 0x214]
        fmul    dword ptr [edi + 0x220]
        fdiv    dword ptr [edi + 0x21c]
        fabs
        fld     dword ptr [ebp - 0x48]
        fmul    st(0), st(1)
        fadd    dword ptr [ebp - 0x18]
        fstp    dword ptr [ebp - 0x18]
        fld     dword ptr [ebp - 0x44]
        fmul    st(0), st(1)
        fadd    dword ptr [ebp - 0x14]
        fstp    dword ptr [ebp - 0x14]
        fld     dword ptr [ebp - 0x40]
        fmul    st(0), st(1)
        fadd    dword ptr [ebp - 0x10]
        fstp    dword ptr [ebp - 0x10]
        fstp    st(0)
        fld     dword ptr [edi + 0x220]
        fabs
        fld     dword ptr [ebp - 0x54]
        fmul    st(0), st(1)
        fadd    dword ptr [ebp - 0x30]
        fstp    dword ptr [ebp - 0x30]
        fld     dword ptr [ebp - 0x50]
        fmul    st(0), st(1)
        fadd    dword ptr [ebp - 0x2c]
        fstp    dword ptr [ebp - 0x2c]
        fld     dword ptr [ebp - 0x4c]
        fmul    st(0), st(1)
        fadd    dword ptr [ebp - 0x28]
        lea     eax, [ebp - 0x18]
        fstp    dword ptr [ebp - 0x28]
        push    eax
        lea     ecx, [ebp - 0x30]
        fstp    st(0)
        lea     ebx, [edi + 0x234]
        push    ecx
        mov     ecx, ebx
        call    FUN_0040c9e0
        lea     edx, [ebp - 0x18]
        push    edx
        lea     eax, [ebp - 0x30]
        lea     ecx, [edi + 0x240]
        push    eax
        call    FUN_0040c9e0
        fld     dword ptr [ebp - 0x18]
        fchs
        lea     edx, [ebp - 0x18]
        fstp    dword ptr [ebp - 0x18]
        push    edx
        fld     dword ptr [ebp - 0x14]
        lea     eax, [ebp - 0x30]
        fchs
        lea     ecx, [edi + 0x24c]
        fstp    dword ptr [ebp - 0x14]
        push    eax
        fld     dword ptr [ebp - 0x10]
        fchs
        fstp    dword ptr [ebp - 0x10]
        call    FUN_0040c9e0
        lea     edx, [ebp - 0x18]
        push    edx
        lea     eax, [ebp - 0x30]
        lea     ecx, [edi + 0x258]
        push    eax
        call    FUN_0040c9e0
        lea     ecx, [ebp - 0x24]
        push    ecx
        lea     ecx, [edi + 0x240]
        push    ecx
        call    FUN_0040c9e0
        lea     edx, [ebp - 0x24]
        push    edx
        lea     ecx, [edi + 0x24c]
        push    ecx
        call    FUN_0040c9e0
        fld     dword ptr [ebp - 0x24]
        fchs
        lea     eax, [ebp - 0x24]
        fstp    dword ptr [ebp - 0x24]
        push    eax
        fld     dword ptr [ebp - 0x20]
        push    ebx
        fchs
        mov     ecx, ebx
        fstp    dword ptr [ebp - 0x20]
        fld     dword ptr [ebp - 0x1c]
        fchs
        fstp    dword ptr [ebp - 0x1c]
        call    FUN_0040c9e0
        lea     ecx, [ebp - 0x24]
        push    ecx
        lea     ecx, [edi + 0x258]
        push    ecx
        call    FUN_0040c9e0
        mov     dword ptr [ebp - 0x4], 0x4
    l_loop2:
        push    esi
        push    ebx
        mov     ecx, ebx
        call    FUN_0040c9e0
        mov     eax, dword ptr [ebp - 0x4]
        mov     dword ptr [ebx + 0x4], 0x0
        add     ebx, 0xc
        dec     eax
        mov     dword ptr [ebp - 0x4], eax
        jnz     l_loop2

        mov     dword ptr [edi + 0x22c], 0x0
        add     edi, 0x144
        push    edi
        lea     ecx, [ebp - 0x60]
        call    FUN_004c41d0
        lea     ecx, [ebp - 0x60]
        mov     dword ptr [ebp - 0x60], 0x7714a4
        call    FUN_0040c0e0
        test    eax, eax
        jz      l_end
    l_loop3:
        mov     ecx, eax
        call    dword ptr [eax + 0x1c]
        lea     ecx, [ebp - 0x60]
        call    FUN_0040c0e0
        test    eax, eax
        jnz     l_loop3

    l_end:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
