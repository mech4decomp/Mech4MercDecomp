/*
 * FUN_0055d110 (2569 B) — terrain/geometry update (__thiscall, RET 0x60).
 * Reads 4 floats via FUN_006f2de0, sets up a "site" struct (0x5bc/0x5c8),
 * does vector normalization (fsqrt/fdivr), two 3x3 matrix multiplies, and a
 * long tail with FUN_006f23xx time/angle helpers and FUN_0075db86.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;   /* 0x007dab44 */
extern int g_007dab40;   /* 0x007dab40 */
extern float g_007b220c; /* 0x007b220c */
extern float g_007748c8; /* 0x007748c8 */
extern float g_0077deac; /* 0x0077deac */
extern float g_0077de8c; /* 0x0077de8c */
extern float g_0077dea8; /* 0x0077dea8 */
extern float g_007b8d18; /* 0x007b8d18 */
extern float g_007b8d1c; /* 0x007b8d1c */
extern float g_007b8d20; /* 0x007b8d20 */
extern float g_0076d064; /* 0x0076d064 */
extern double g_0076d970; /* 0x0076d970 */
extern double g_0076d588; /* 0x0076d588 */
extern double g_0077dea0; /* 0x0077dea0 */
extern double g_0076d968; /* 0x0076d968 */
extern double g_0077b640; /* 0x0077b640 */
extern float g_0076d040; /* 0x0076d040 */
extern int g_007dc728;   /* 0x007dc728 */

extern void __cdecl FUN_006f2de0(void);
extern void __cdecl FUN_0041c540(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040d560(void);
extern void __cdecl FUN_004e2f40(void);
extern void __cdecl FUN_004e8dc0(void);
extern void __cdecl FUN_00419e70(void);
extern void __cdecl FUN_0041fde0(void);
extern void __cdecl FUN_0040d030(void);
extern void __cdecl FUN_00428850(void);
extern void __cdecl FUN_004206b0(void);
extern void __cdecl FUN_004daa20(void);
extern void __cdecl FUN_006f23a0(void);
extern void __cdecl FUN_006f23f0(void);
extern void __cdecl FUN_006f23c0(void);
extern void __cdecl FUN_006f23e0(void);
extern void __cdecl FUN_0075db86(void);

__declspec(naked) void FUN_0055d110(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x160
        mov     eax, dword ptr [g_007dab44]
        mov     edx, dword ptr [g_007dab40]
        push    ebx
        mov     ebx, ecx
        mov     ecx, dword ptr [eax]
        push    esi
        xor     ecx, edx
        mov     esi, dword ptr [ecx + 0x24]
        push    edi
        xor     esi, 0x85739531
        push    0x12
        mov     ecx, esi
        mov     dword ptr [ebx + 0x618], 0xb
        mov     dword ptr [ebx + 0x61c], 0x0
        mov     dword ptr [ebp - 0x48], esi
        call    FUN_006f2de0
        fstp    dword ptr [ebp - 0x34]
        push    0x13
        mov     ecx, esi
        call    FUN_006f2de0
        fstp    dword ptr [ebp - 0x38]
        push    0x14
        mov     ecx, esi
        call    FUN_006f2de0
        fstp    dword ptr [ebp + 0xffffff7c]
        push    0x16
        mov     ecx, esi
        call    FUN_006f2de0
        fstp    dword ptr [ebp - 0x4c]
        mov     edx, dword ptr [g_007b220c]
        push    edx
        lea     edi, [ebx + 0x5bc]
        push    0x7b8d88
        push    edi
        call    FUN_0041c540
        add     esp, 0xc
        test    al, al
        jz      L55d52c
        mov     ecx, dword ptr [ebp + 0x24]
        mov     edx, dword ptr [ebp + 0x34]
        mov     eax, dword ptr [ebp + 0x14]
        mov     dword ptr [edi + 0x4], ecx
        fld     dword ptr [ebx + 0x5c0]
        fadd    dword ptr [g_007748c8]
        mov     dword ptr [edi + 0x8], edx
        lea     esi, [ebx + 0x5c8]
        mov     dword ptr [esi + 0x4], ecx
        fstp    dword ptr [ebx + 0x5c0]
        mov     dword ptr [edi], eax
        fld     dword ptr [ebx + 0x5c4]
        push    edi
        fsub    dword ptr [g_0077deac]
        lea     ecx, [ebp - 0x30]
        mov     dword ptr [esi], eax
        mov     dword ptr [esi + 0x8], edx
        fstp    dword ptr [ebx + 0x5c4]
        call    FUN_0040c410
        lea     ecx, [ebp - 0x74]
        lea     edx, [ebp - 0x44]
        lea     eax, [ebp - 0x68]
        mov     dword ptr [ebp + 0xffffff64], ecx
        push    edx
        lea     ecx, [ebp - 0x5c]
        mov     dword ptr [ebp + 0xffffff60], eax
        mov     dword ptr [ebp + 0xffffff68], 0x0
        mov     dword ptr [ebp + 0xffffff70], ebx
        mov     dword ptr [ebp + 0xffffff74], 0x1000
        mov     dword ptr [ebp - 0x50], 0x43160000
        mov     dword ptr [ebp - 0x44], 0x0
        mov     dword ptr [ebp - 0x40], 0xbf800000
        mov     dword ptr [ebp - 0x3c], 0x0
        call    FUN_0040d560
        lea     eax, [ebp - 0x30]
        push    eax
        lea     ecx, [ebp - 0x68]
        call    FUN_0040c410
        fld     dword ptr [ebp - 0x64]
        fadd    dword ptr [g_0077de8c]
        lea     ecx, [ebp + 0xffffff60]
        push    ecx
        mov     ecx, dword ptr [g_007dc728]
        fstp    dword ptr [ebp - 0x64]
        mov     dword ptr [ebp - 0x10], 0x0
        call    FUN_004e2f40
        test    eax, eax
        jz      L55d293
        mov     eax, dword ptr [ebp - 0x50]
        lea     edx, [ebp - 0x30]
        push    edx
        push    eax
        lea     ecx, [ebp - 0x68]
        call    FUN_004e8dc0
        fld     dword ptr [ebp - 0x2c]
        fadd    dword ptr [g_0077dea8]
        jmp     L55d296
L55d293:
        fld     dword ptr [ebp - 0x10]
L55d296:
        fld     st(0)
        mov     dword ptr [ebx + 0x5c0], 0x0
        fmul    dword ptr [g_007b8d18]
        push    esi
        lea     ecx, [ebp - 0x1c]
        fadd    dword ptr [edi]
        fstp    dword ptr [edi]
        fld     st(0)
        fmul    dword ptr [g_007b8d1c]
        fadd    dword ptr [edi + 0x4]
        fstp    dword ptr [edi + 0x4]
        fmul    dword ptr [g_007b8d20]
        fadd    dword ptr [edi + 0x8]
        fstp    dword ptr [edi + 0x8]
        call    FUN_0040c410
        fld     dword ptr [ebp - 0x1c]
        lea     ecx, [ebp + 0xffffff00]
        fsub    dword ptr [edi]
        fld     dword ptr [ebp - 0x18]
        fsub    dword ptr [edi + 0x4]
        fstp    dword ptr [ebp - 0x8]
        fld     dword ptr [ebp - 0x14]
        fsub    dword ptr [edi + 0x8]
        fstp    dword ptr [ebp - 0x4]
        fld     st(0)
        fmul    st(0), st(1)
        fld     dword ptr [ebp - 0x4]
        fmul    dword ptr [ebp - 0x4]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x8]
        fmul    dword ptr [ebp - 0x8]
        faddp   st(1), st(0)
        fsqrt
        fdivr   dword ptr [g_0076d064]
        fst     dword ptr [ebp - 0x10]
        fmul    st(0), st(1)
        fstp    dword ptr [ebp - 0xc]
        fstp    st(0)
        fld     dword ptr [ebp - 0x8]
        fmul    dword ptr [ebp - 0x10]
        fstp    dword ptr [ebp - 0x8]
        fld     dword ptr [ebp - 0x4]
        fmul    dword ptr [ebp - 0x10]
        fstp    dword ptr [ebp - 0x4]
        call    FUN_00419e70
        push    0x0
        push    0x1
        push    0x2
        lea     ecx, [ebp - 0xc]
        push    ecx
        lea     ecx, [ebp + 0xffffff00]
        call    FUN_0041fde0
        push    edi
        lea     ecx, [ebp + 0xffffff00]
        call    FUN_0040d030
        lea     edx, [ebp + 0x8]
        push    edx
        lea     ecx, [ebp + 0xffffff30]
        call    FUN_00428850
        lea     eax, [ebp + 0xffffff30]
        push    eax
        lea     ecx, [ebp + 0x8]
        call    FUN_004206b0
        lea     ecx, [ebp + 0xffffff00]
        lea     edx, [ebp + 0xfffffed0]
        mov     dword ptr [ebp + 0xffffff78], eax
        mov     dword ptr [ebp - 0x20], ecx
        mov     dword ptr [ebp - 0x10], edx
        /* ---- matrix block 1 ---- */
        mov     edx, dword ptr [ebp - 0x20]
        push    esi
        mov     esi, dword ptr [ebp + 0xffffff78]
        mov     eax, dword ptr [ebp - 0x10]
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
        fxch
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
        fxch
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
        fxch
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
        fxch
        fadd    dword ptr [esi + 0xc]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x18]
        fxch
        fstp    dword ptr [eax + 0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x14]
        fxch
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
        fxch
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
        fxch
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
        fxch
        fadd    dword ptr [esi + 0x1c]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x28]
        fxch
        fstp    dword ptr [eax + 0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x24]
        fxch
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
        fxch
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
        fxch
        fstp    dword ptr [eax + 0x28]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fadd    dword ptr [esi + 0x2c]
        fstp    dword ptr [eax + 0x2c]
        pop     esi
        lea     eax, [ebp + 0xfffffed0]
        push    eax
        mov     ecx, ebx
        call    FUN_004daa20
        mov     edx, dword ptr [ebx]
        push    0x1
        mov     ecx, ebx
        call    dword ptr [edx + 0x48]
        mov     ecx, dword ptr [ebp - 0x48]
        mov     byte ptr [ebx + 0x338], 0x1
        call    FUN_006f23a0
        mov     esi, dword ptr [ebp - 0x48]
L55d52c:
        mov     ecx, esi
        call    FUN_006f23f0
        fcomp   qword ptr [g_0076d970]
        fnstsw  ax
        test    ah, 0x1
        jz      L55db0e
        mov     al, byte ptr [ebx + 0x5d6]
        test    al, al
        jnz     L55d55c
        mov     ecx, esi
        call    FUN_006f23c0
        mov     byte ptr [ebx + 0x5d6], 0x1
L55d55c:
        fld     dword ptr [ebp - 0x4c]
        mov     ecx, esi
        fstp    qword ptr [ebp - 0x24]
        call    FUN_006f23e0
        fsubr   qword ptr [ebp - 0x24]
        mov     ecx, esi
        fdiv    dword ptr [ebp - 0x4c]
        fstp    qword ptr [ebp - 0x24]
        call    FUN_006f23e0
        fcomp   qword ptr [g_0076d970]
        fnstsw  ax
        test    ah, 0x41
        jz      L55d598
        mov     byte ptr [ebx + 0x5d6], 0x0
        mov     al, 0x1
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x60
L55d598:
        fld     qword ptr [ebp - 0x24]
        fcomp   qword ptr [g_0076d588]
        fnstsw  ax
        test    ah, 0x1
        jz      L55d5ba
        fld     qword ptr [ebp - 0x24]
        fadd    st(0), st(0)
        fld     qword ptr [g_0077dea0]
        call    FUN_0075db86
        jmp     L55d5d6
L55d5ba:
        fld     qword ptr [g_0076d968]
        fsub    qword ptr [ebp - 0x24]
        fadd    st(0), st(0)
        fld     qword ptr [g_0077dea0]
        call    FUN_0075db86
        fsubr   qword ptr [g_0077b640]
L55d5d6:
        fmul    qword ptr [g_0076d588]
        lea     eax, [ebp - 0x44]
        push    eax
        mov     ecx, edi
        fst     qword ptr [ebp - 0x24]
        fld     dword ptr [ebp + 0x44]
        fsub    dword ptr [edi]
        fmul    st(0), st(1)
        fadd    dword ptr [edi]
        fstp    dword ptr [ebp - 0x44]
        fld     dword ptr [ebp + 0x54]
        fsub    dword ptr [ebx + 0x5c0]
        fmul    st(0), st(1)
        fadd    dword ptr [ebx + 0x5c0]
        fstp    dword ptr [ebp - 0x40]
        fld     dword ptr [ebp + 0x64]
        fsub    dword ptr [ebx + 0x5c4]
        fmul    st(0), st(1)
        fadd    dword ptr [ebx + 0x5c4]
        fstp    dword ptr [ebp - 0x3c]
        fstp    st(0)
        call    FUN_0040c410
        mov     ecx, dword ptr [edi]
        mov     eax, dword ptr [edi + 0x8]
        mov     edx, dword ptr [edi + 0x4]
        mov     dword ptr [ebp - 0x30], ecx
        mov     dword ptr [ebp - 0x28], eax
        lea     ecx, [ebp + 0xffffff44]
        mov     dword ptr [ebp - 0x2c], edx
        xor     esi, esi
        lea     eax, [ebp + 0x5c]
        mov     dword ptr [ebp - 0x64], ecx
        lea     edx, [ebp + 0xffffff6c]
        push    eax
        lea     ecx, [ebp + 0xffffff50]
        mov     dword ptr [ebp - 0x60], edx
        mov     dword ptr [ebp - 0x5c], esi
        mov     dword ptr [ebp - 0x54], ebx
        mov     dword ptr [ebp - 0x50], 0x1000
        mov     dword ptr [ebp + 0xffffff5c], 0x43160000
        mov     dword ptr [ebp + 0x5c], esi
        mov     dword ptr [ebp + 0x60], 0xbf800000
        mov     dword ptr [ebp + 0x64], esi
        call    FUN_0040d560
        fld     dword ptr [ebp - 0x2c]
        mov     ecx, dword ptr [ebp - 0x30]
        fadd    dword ptr [g_0077de8c]
        mov     edx, dword ptr [ebp - 0x28]
        lea     eax, [ebp - 0x64]
        mov     dword ptr [ebp + 0xffffff44], ecx
        fstp    dword ptr [ebp + 0xffffff48]
        mov     ecx, dword ptr [g_007dc728]
        push    eax
        mov     dword ptr [ebp + 0xffffff4c], edx
        mov     dword ptr [ebp + 0x64], esi
        call    FUN_004e2f40
        test    eax, eax
        jz      L55d6d0
        mov     edx, dword ptr [ebp + 0xffffff5c]
        lea     ecx, [ebp - 0x30]
        push    ecx
        push    edx
        lea     ecx, [ebp + 0xffffff44]
        call    FUN_004e8dc0
        fld     dword ptr [ebp - 0x2c]
        fadd    dword ptr [g_0076d040]
        jmp     L55d6d3
L55d6d0:
        fld     dword ptr [ebp + 0x64]
L55d6d3:
        fld     st(0)
        mov     dword ptr [ebx + 0x5c0], esi
        fmul    dword ptr [g_007b8d18]
        fadd    dword ptr [edi]
        fstp    dword ptr [edi]
        fld     st(0)
        fmul    dword ptr [g_007b8d1c]
        fadd    dword ptr [edi + 0x4]
        fstp    dword ptr [edi + 0x4]
        mov     eax, dword ptr [ebx + 0x5cc]
        fmul    dword ptr [g_007b8d20]
        fadd    dword ptr [edi + 0x8]
        fstp    dword ptr [edi + 0x8]
        mov     ecx, dword ptr [ebx + 0x5d0]
        fld     dword ptr [edi]
        fsub    dword ptr [ebx + 0x5c8]
        fld     dword ptr [edi + 0x4]
        fsub    dword ptr [ebx + 0x5cc]
        fstp    dword ptr [ebp - 0x8]
        fld     dword ptr [edi + 0x8]
        fsub    dword ptr [ebx + 0x5d0]
        fstp    dword ptr [ebp - 0x4]
        fld     st(0)
        fmul    st(0), st(1)
        fld     dword ptr [ebp - 0x4]
        fmul    dword ptr [ebp - 0x4]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x8]
        fmul    dword ptr [ebp - 0x8]
        faddp   st(1), st(0)
        fsqrt
        fdivr   dword ptr [g_0076d064]
        fst     dword ptr [ebp + 0x64]
        fmulp   st(1), st(0)
        fld     dword ptr [ebp - 0x8]
        fmul    dword ptr [ebp + 0x64]
        fld     dword ptr [ebp - 0x4]
        fmul    dword ptr [ebp + 0x64]
        fld     st(1)
        fmul    dword ptr [g_007b8d20]
        fld     st(1)
        fmul    dword ptr [g_007b8d1c]
        fsubp   st(1), st(0)
        fstp    dword ptr [ebp + 0x5c]
        fmul    dword ptr [g_007b8d18]
        fld     st(2)
        fmul    dword ptr [g_007b8d20]
        fsubp   st(1), st(0)
        fstp    dword ptr [ebp + 0x60]
        mov     dword ptr [ebp + 0x60], eax
        fxch
        fmul    dword ptr [g_007b8d1c]
        fxch
        fmul    dword ptr [g_007b8d18]
        fsubp   st(1), st(0)
        fstp    dword ptr [ebp + 0x64]
        mov     dword ptr [ebp + 0x64], ecx
        fld     dword ptr [ebx + 0x5c8]
        fsub    dword ptr [edi]
        fld     dword ptr [ebp + 0x60]
        fsub    dword ptr [edi + 0x4]
        fstp    dword ptr [ebp - 0x8]
        fld     dword ptr [ebp + 0x64]
        fsub    dword ptr [edi + 0x8]
        fstp    dword ptr [ebp - 0x4]
        fld     st(0)
        fmul    st(0), st(1)
        fld     dword ptr [ebp - 0x4]
        fmul    dword ptr [ebp - 0x4]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x8]
        fmul    dword ptr [ebp - 0x8]
        faddp   st(1), st(0)
        fsqrt
        fdivr   dword ptr [g_0076d064]
        fst     dword ptr [ebp + 0x64]
        fmulp   st(1), st(0)
        fld     dword ptr [ebp - 0x8]
        fmul    dword ptr [ebp + 0x64]
        fstp    dword ptr [ebp - 0x8]
        fld     dword ptr [ebp - 0x4]
        fmul    dword ptr [ebp + 0x64]
        fstp    dword ptr [ebp - 0x4]
        fld     dword ptr [ebp - 0x8]
        fmul    dword ptr [g_007b8d20]
        fld     dword ptr [ebp - 0x4]
        fmul    dword ptr [g_007b8d1c]
        fsubp   st(1), st(0)
        fstp    dword ptr [ebp - 0x80]
        fld     dword ptr [ebp - 0x4]
        fmul    dword ptr [g_007b8d18]
        fld     st(1)
        fmul    dword ptr [g_007b8d20]
        fsubp   st(1), st(0)
        fstp    dword ptr [ebp - 0x7c]
        fld     st(0)
        fmul    dword ptr [g_007b8d1c]
        fld     dword ptr [ebp - 0x8]
        fmul    dword ptr [g_007b8d18]
        fsubp   st(1), st(0)
        fstp    dword ptr [ebp - 0x78]
        fld     dword ptr [ebp + 0xffffff7c]
        fmul    qword ptr [ebp - 0x24]
        fst     dword ptr [ebp + 0x64]
        fmulp   st(1), st(0)
        fadd    dword ptr [edi]
        fld     dword ptr [ebp - 0x8]
        fmul    dword ptr [ebp + 0x64]
        fadd    dword ptr [edi + 0x4]
        fstp    dword ptr [ebp - 0x70]
        fld     dword ptr [ebp - 0x4]
        fmul    dword ptr [ebp + 0x64]
        fadd    dword ptr [edi + 0x8]
        fstp    dword ptr [ebp - 0x6c]
        fld     dword ptr [ebp - 0x34]
        fmul    qword ptr [ebp - 0x24]
        fstp    dword ptr [ebp + 0x64]
        fld     dword ptr [ebp - 0x80]
        fmul    dword ptr [ebp + 0x64]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x7c]
        fmul    dword ptr [ebp + 0x64]
        fadd    dword ptr [ebp - 0x70]
        fstp    dword ptr [ebp - 0x8]
        fld     dword ptr [ebp - 0x78]
        fmul    dword ptr [ebp + 0x64]
        fadd    dword ptr [ebp - 0x6c]
        fstp    dword ptr [ebp - 0x4]
        fld     dword ptr [ebp - 0x38]
        fmul    qword ptr [ebp - 0x24]
        fst     dword ptr [ebp + 0x64]
        fmul    dword ptr [g_007b8d18]
        fadd    st(0), st(1)
        fstp    dword ptr [edi]
        fstp    st(0)
        fld     dword ptr [ebp + 0x64]
        fmul    dword ptr [g_007b8d1c]
        fadd    dword ptr [ebp - 0x8]
        fstp    dword ptr [edi + 0x4]
        fld     dword ptr [ebp + 0x64]
        fmul    dword ptr [g_007b8d20]
        fadd    dword ptr [ebp - 0x4]
        fstp    dword ptr [edi + 0x8]
        fld     dword ptr [ebx + 0x5c8]
        fsub    dword ptr [edi]
        fld     dword ptr [ebx + 0x5cc]
        fsub    dword ptr [edi + 0x4]
        fstp    dword ptr [ebp - 0x18]
        fld     dword ptr [ebx + 0x5d0]
        fsub    dword ptr [edi + 0x8]
        fst     dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp - 0x14]
        fld     dword ptr [ebp - 0x18]
        fmul    dword ptr [ebp - 0x18]
        faddp   st(1), st(0)
        fld     st(1)
        fmul    st(0), st(2)
        faddp   st(1), st(0)
        fsqrt
        lea     ecx, [ebp + 0xffffff00]
        fdivr   dword ptr [g_0076d064]
        fst     dword ptr [ebp + 0x64]
        fmul    st(0), st(1)
        fstp    dword ptr [ebp - 0x1c]
        fstp    st(0)
        fld     dword ptr [ebp - 0x18]
        fmul    dword ptr [ebp + 0x64]
        fstp    dword ptr [ebp - 0x18]
        fld     dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp + 0x64]
        fstp    dword ptr [ebp - 0x14]
        call    FUN_00419e70
        push    esi
        push    0x1
        push    0x2
        lea     edx, [ebp - 0x1c]
        push    edx
        lea     ecx, [ebp + 0xffffff00]
        call    FUN_0041fde0
        mov     eax, dword ptr [edi]
        mov     ecx, dword ptr [edi + 0x4]
        mov     edx, dword ptr [edi + 0x8]
        mov     dword ptr [ebp + 0xffffff0c], eax
        lea     eax, [ebp + 0x8]
        mov     dword ptr [ebp + 0xffffff1c], ecx
        push    eax
        lea     ecx, [ebp + 0xfffffea0]
        mov     dword ptr [ebp + 0xffffff2c], edx
        call    FUN_00428850
        lea     ecx, [ebp + 0xfffffea0]
        push    ecx
        lea     ecx, [ebp + 0x8]
        call    FUN_004206b0
        mov     dword ptr [ebp - 0x38], eax
        lea     edx, [ebp + 0xffffff00]
        lea     eax, [ebp + 0xfffffed0]
        mov     dword ptr [ebp - 0x34], edx
        mov     dword ptr [ebp + 0x64], eax
        /* ---- matrix block 2 ---- */
        mov     edx, dword ptr [ebp - 0x34]
        push    esi
        mov     esi, dword ptr [ebp - 0x38]
        mov     eax, dword ptr [ebp + 0x64]
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
        fxch
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
        fxch
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
        fxch
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
        fxch
        fadd    dword ptr [esi + 0xc]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x18]
        fxch
        fstp    dword ptr [eax + 0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x14]
        fxch
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
        fxch
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
        fxch
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
        fxch
        fadd    dword ptr [esi + 0x1c]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x28]
        fxch
        fstp    dword ptr [eax + 0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x24]
        fxch
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
        fxch
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
        fxch
        fstp    dword ptr [eax + 0x28]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fadd    dword ptr [esi + 0x2c]
        fstp    dword ptr [eax + 0x2c]
        pop     esi
        lea     ecx, [ebp + 0xfffffed0]
        push    ecx
        mov     ecx, ebx
        call    FUN_004daa20
        mov     edx, dword ptr [ebx]
        push    0x1
        mov     ecx, ebx
        call    dword ptr [edx + 0x48]
        mov     byte ptr [ebx + 0x338], 0x1
L55db0e:
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x60
    }
}
