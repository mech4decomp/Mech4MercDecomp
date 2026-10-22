/*
 * FUN_0040c630 (902 B) — engine/loader init: builds a large stack frame
 * of vectors/matrices from constants and globals, calls many helper
 * initializers (vector/matrix math), and returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d060;
extern float g_0076d064;

extern void FUN_0040c5d0(void);
extern void FUN_0040c9c0(void);
extern void FUN_0040c410(void);
extern void FUN_0040c5f0(void);
extern void FUN_0040c9e0(void);
extern void FUN_0040cbb0(void);
extern void FUN_0040ca10(void);
extern void FUN_0040cbe0(void);
extern void FUN_0040c610(void);
extern void FUN_0040ca40(void);
extern void FUN_0040cc10(void);
extern void FUN_0040ca70(void);
extern void FUN_0040cc40(void);
extern void FUN_0040caa0(void);
extern void FUN_0040cc70(void);
extern void FUN_0040cad0(void);
extern void FUN_0040cca0(void);
extern void FUN_00419f90(void);
extern void FUN_0041c7d0(void);
extern void FUN_0040cb00(void);
extern void FUN_0040cb20(void);
extern void FUN_0040cb70(void);
extern void FUN_0041c7a0(void);
extern void FUN_0041af70(void);
extern void FUN_0040ccd0(void);

__declspec(naked) void FUN_0040c630(void)
{
    __asm {
        sub     esp, 0xa4
        push    0x7b8d88
        lea     ecx, [esp+0x9c]
        call    FUN_0040c5d0
        push    0x40400000
        push    0x40000000
        push    0x3f800000
        lea     ecx, [esp+0x18]
        call    FUN_0040c9c0
        push    0x3f800000
        push    0x40400000
        push    0x40000000
        lea     ecx, [esp+0x24]
        call    FUN_0040c9c0
        lea     eax, [esp+0xc]
        push    eax
        lea     ecx, [esp+0x4]
        call    FUN_0040c410
        lea     ecx, [esp+0xc]
        push    ecx
        lea     ecx, [esp+0x4]
        call    FUN_0040c5f0
        lea     edx, [esp+0x18]
        push    edx
        lea     eax, [esp+0x10]
        push    eax
        lea     ecx, [esp+0x8]
        call    FUN_0040c9e0
        lea     ecx, [esp+0xc]
        push    ecx
        lea     ecx, [esp+0x4]
        call    FUN_0040c410
        lea     edx, [esp+0x18]
        push    edx
        lea     eax, [esp+0x4]
        push    eax
        lea     ecx, [esp+0x8]
        call    FUN_0040cbb0
        lea     ecx, [esp+0xc]
        push    ecx
        lea     edx, [esp+0x1c]
        push    edx
        lea     ecx, [esp+0x8]
        call    FUN_0040ca10
        lea     eax, [esp+0x18]
        push    eax
        lea     ecx, [esp+0x4]
        call    FUN_0040c410
        lea     ecx, [esp+0xc]
        push    ecx
        lea     edx, [esp+0x4]
        push    edx
        lea     ecx, [esp+0x8]
        call    FUN_0040cbe0
        lea     eax, [esp+0x18]
        push    eax
        lea     ecx, [esp+0x10]
        call    FUN_0040c610
        fstp    st(0)
        fld     dword ptr [esp+0x20]
        push    0x40000000
        fmul    dword ptr [esp+0x14]
        lea     ecx, [esp+0x10]
        fld     dword ptr [esp+0x20]
        push    ecx
        fmul    dword ptr [esp+0x1c]
        lea     ecx, [esp+0x8]
        fsubp   st(1), st(0)
        fstp    dword ptr [esp+0x8]
        fld     dword ptr [esp+0x1c]
        fmul    dword ptr [esp+0x20]
        fld     dword ptr [esp+0x28]
        fmul    dword ptr [esp+0x14]
        fsubp   st(1), st(0)
        fstp    dword ptr [esp+0xc]
        fld     dword ptr [esp+0x24]
        fmul    dword ptr [esp+0x14]
        fld     dword ptr [esp+0x18]
        fmul    dword ptr [esp+0x20]
        fsubp   st(1), st(0)
        fstp    dword ptr [esp+0x10]
        call    FUN_0040ca40
        lea     edx, [esp+0xc]
        push    edx
        lea     ecx, [esp+0x4]
        call    FUN_0040c410
        push    0x40000000
        lea     eax, [esp+0x4]
        push    eax
        lea     ecx, [esp+0x8]
        call    FUN_0040cc10
        lea     ecx, [esp+0x18]
        push    ecx
        lea     edx, [esp+0x10]
        push    edx
        lea     ecx, [esp+0x8]
        call    FUN_0040ca70
        lea     eax, [esp+0xc]
        push    eax
        lea     ecx, [esp+0x4]
        call    FUN_0040c410
        lea     ecx, [esp+0x18]
        push    ecx
        lea     edx, [esp+0x4]
        push    edx
        lea     ecx, [esp+0x8]
        call    FUN_0040cc40
        push    0x40000000
        lea     eax, [esp+0x10]
        push    eax
        lea     ecx, [esp+0x8]
        call    FUN_0040caa0
        lea     ecx, [esp+0xc]
        push    ecx
        lea     ecx, [esp+0x4]
        call    FUN_0040c410
        push    0x40000000
        lea     edx, [esp+0x4]
        push    edx
        lea     ecx, [esp+0x8]
        call    FUN_0040cc70
        lea     eax, [esp+0x18]
        push    eax
        lea     ecx, [esp+0x10]
        push    ecx
        lea     ecx, [esp+0x8]
        call    FUN_0040cad0
        lea     edx, [esp+0xc]
        push    edx
        lea     ecx, [esp+0x4]
        call    FUN_0040c410
        lea     eax, [esp+0x18]
        push    eax
        lea     ecx, [esp+0x4]
        push    ecx
        lea     ecx, [esp+0x8]
        call    FUN_0040cca0
        fld     dword ptr [g_0076d060]
        lea     edx, [esp+0x30]
        fstp    dword ptr [esp+0x30]
        push    edx
        lea     ecx, [esp+0x50]
        mov     dword ptr [esp+0x38], 0x0
        mov     dword ptr [esp+0x3c], 0x0
        call    FUN_00419f90
        mov     eax, dword ptr [esp+0xc]
        mov     ecx, dword ptr [esp+0x10]
        mov     edx, dword ptr [esp+0x14]
        mov     dword ptr [esp+0x58], eax
        /* __emit: MSVC6 drops the 00 disp byte for mov [esp+0],eax */
        __emit 0x89
        __emit 0x44
        __emit 0x24
        __emit 0x00
        mov     dword ptr [esp+0x68], ecx
        mov     dword ptr [esp+0x4], ecx
        lea     eax, [esp+0x4c]
        push    eax
        lea     ecx, [esp+0x10]
        push    ecx
        lea     ecx, [esp+0x8]
        mov     dword ptr [esp+0x80], edx
        mov     dword ptr [esp+0x10], edx
        call    FUN_0041c7d0
        lea     edx, [esp+0xc]
        push    edx
        lea     ecx, [esp+0x4]
        call    FUN_0040c410
        /* __emit: MSVC6 drops the 00 disp byte for lea eax,[esp+0] */
        __emit 0x8D
        __emit 0x44
        __emit 0x24
        __emit 0x00
        push    eax
        lea     ecx, [esp+0x28]
        call    FUN_0040c5d0
        lea     ecx, [esp+0x4c]
        push    ecx
        lea     edx, [esp+0x28]
        push    edx
        lea     ecx, [esp+0x8]
        call    FUN_0041c7d0
        lea     ecx, [esp+0xc]
        call    FUN_0040cb00
        fstp    st(0)
        lea     ecx, [esp+0xc]
        call    FUN_0040cb00
        fsqrt
        push    0x40000000
        lea     eax, [esp+0x1c]
        push    eax
        push    0x40000000
        lea     ecx, [esp+0x18]
        push    ecx
        lea     ecx, [esp+0x10]
        fdivr   dword ptr [g_0076d064]
        fld     st(0)
        fmul    dword ptr [esp+0x1c]
        fstp    dword ptr [esp+0x10]
        fld     dword ptr [esp+0x20]
        fmul    st(0), st(1)
        fstp    dword ptr [esp+0x14]
        fld     dword ptr [esp+0x24]
        fmul    st(0), st(1)
        fstp    dword ptr [esp+0x18]
        fstp    st(0)
        call    FUN_0040cb20
        push    0x3f000000
        lea     edx, [esp+0x1c]
        push    edx
        lea     eax, [esp+0x14]
        push    eax
        lea     ecx, [esp+0xc]
        call    FUN_0040cb70
        lea     ecx, [esp+0x3c]
        push    ecx
        lea     ecx, [esp+0x4]
        mov     dword ptr [esp+0x40], 0x40000000
        mov     dword ptr [esp+0x44], 0x40800000
        mov     dword ptr [esp+0x48], 0x40c00000
        mov     dword ptr [esp+0x4c], 0x40000000
        call    FUN_0041c7a0
        push    0x40800000
        push    0x40400000
        push    0x40000000
        lea     ecx, [esp+0x30]
        call    FUN_0040c9c0
        lea     edx, [esp+0x24]
        push    edx
        lea     ecx, [esp+0x80]
        call    FUN_0040c410
        lea     eax, [esp+0x24]
        push    eax
        lea     ecx, [esp+0x8c]
        mov     dword ptr [esp+0x28], 0x0
        mov     dword ptr [esp+0x2c], 0x0
        mov     dword ptr [esp+0x30], 0x0
        call    FUN_0041af70
        lea     ecx, [esp+0x7c]
        push    ecx
        lea     ecx, [esp+0x4]
        call    FUN_0040ccd0
        mov     al, 0x1
        add     esp, 0xa4
        ret
    }
}
