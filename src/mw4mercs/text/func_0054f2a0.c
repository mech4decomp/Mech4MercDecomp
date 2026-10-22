/*
 * FUN_0054f2a0 (2800 B) — terrain/geometry update (__fastcall, ECX=this).
 * Builds several 3x3+translation matrices (local_180/1b0/d8/e4) via four
 * identical FPU matrix-multiply blocks, calls a chain of matrix/vector
 * helpers (FUN_0040c5d0, FUN_0041acb0, FUN_0041a070, FUN_0040d030,
 * FUN_00419460, FUN_00419e70, FUN_0040c9c0, FUN_0040cb70, FUN_0040c410,
 * FUN_0054fd90, FUN_00766c60, FUN_004e2f40, FUN_00766cb0, FUN_0040ca40,
 * FUN_0040cbb0, FUN_004206b0, FUN_004daa20), then a virtual call
 * (vtable+0x48).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8cec;   /* 0x007b8cec */
extern int g_007b8ce8;   /* 0x007b8ce8 */
extern int g_007b8cf0;   /* 0x007b8cf0 */
extern int g_007dc728;   /* 0x007dc728 */
extern int g_007dab44;   /* 0x007dab44 */
extern int g_007dab40;   /* 0x007dab40 */
extern float g_0076d5f0; /* 0x0076d5f0 */
extern float g_0076d070; /* 0x0076d070 */
extern float g_0077d0d8; /* 0x0077d0d8 */
extern float g_0076c5b0; /* 0x0076c5b0 */
extern float g_007b220c; /* 0x007b220c */
extern float g_0076d3c8; /* 0x0076d3c8 */

extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_00428850(void);
extern void __cdecl FUN_0041acb0(void);
extern void __cdecl FUN_0041a070(void);
extern void __cdecl FUN_0040d030(void);
extern void __cdecl FUN_00603d70(void);
extern void __cdecl FUN_0055e370(void);
extern void __cdecl FUN_00419460(void);
extern void __cdecl FUN_00419e70(void);
extern void __cdecl FUN_0040c9c0(void);
extern void __cdecl FUN_0040cb70(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0054fd90(void);
extern void __cdecl FUN_00766c60(void);
extern void __cdecl FUN_004e2f40(void);
extern void __cdecl FUN_00766cb0(void);
extern void __cdecl FUN_0040ca40(void);
extern void __cdecl FUN_0040cbb0(void);
extern void __cdecl FUN_004206b0(void);
extern void __cdecl FUN_004daa20(void);

__declspec(naked) void FUN_0054f2a0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x20c
        push    ebx
        mov     ebx, ecx
        push    esi
        push    edi
        xor     edi, edi
        lea     eax, [ebx + 0x518]
        mov     dword ptr [ebx + 0x528], edi
        push    eax
        lea     ecx, [ebp - 0x18]
        mov     dword ptr [ebx + 0x52c], edi
        call    FUN_0040c5d0
        mov     ecx, dword ptr [ebx + 0x530]
        mov     dword ptr [ebp - 0x10], ecx
        push    0x7b9460
        lea     ecx, [ebp + 0xfffffee4]
        call    FUN_00428850
        mov     esi, dword ptr [ebx + 0x384]
        mov     edx, dword ptr [esi + 0xd8]
        add     edx, 0x80
        push    edx
        lea     ecx, [ebp - 0x30]
        call    FUN_0041acb0
        mov     eax, dword ptr [g_007b8cec]
        mov     ecx, dword ptr [g_007b8ce8]
        mov     edx, dword ptr [g_007b8cf0]
        mov     dword ptr [ebp - 0x20], eax
        mov     dword ptr [ebp - 0x24], ecx
        mov     dword ptr [ebp - 0x1c], edx
        mov     eax, dword ptr [esi + 0x4]
        cmp     dword ptr [eax], 0x429
        jnz     L54f344
        mov     ecx, dword ptr [esi + 0x9ac]
        add     ecx, 0xa4
        push    ecx
        lea     ecx, [ebp - 0x24]
        call    FUN_0041acb0
        fld     dword ptr [ebp - 0x30]
        fadd    dword ptr [ebp - 0x24]
        fstp    dword ptr [ebp - 0x24]
        jmp     L54f34a
L54f344:
        mov     edx, dword ptr [ebp - 0x30]
        mov     dword ptr [ebp - 0x24], edx
L54f34a:
        lea     eax, [ebp - 0x24]
        push    eax
        lea     ecx, [ebp + 0xfffffee4]
        call    FUN_0041a070
        push    0x7b9460
        lea     ecx, [ebp + 0xfffffe84]
        call    FUN_00428850
        lea     ecx, [ebp - 0x18]
        push    ecx
        lea     ecx, [ebp + 0xfffffe84]
        call    FUN_0040d030
        mov     al, byte ptr [ebx + 0x339]
        test    al, al
        jz      L54f628
        mov     esi, dword ptr [esi + 0x2f4]
        mov     al, byte ptr [esi + 0x1d]
        test    al, al
        jz      L54f3e3
        mov     ecx, esi
        call    FUN_00603d70
        cmp     eax, 0x26
        jnz     L54f3c1
        lea     esi, [ebx + 0x308]
        mov     ecx, esi
        call    FUN_0055e370
        fstp    dword ptr [esi + 0x8]
        mov     dword ptr [esi], 0x3e800000
        mov     dword ptr [esi + 0x4], edi
        mov     dword ptr [esi + 0xc], 0x3f800000
        jmp     L54f3e3
L54f3c1:
        cmp     dword ptr [esi + 0x14], 0x26
        jnz     L54f3e3
        lea     esi, [ebx + 0x308]
        mov     ecx, esi
        call    FUN_0055e370
        fstp    dword ptr [esi + 0x8]
        mov     dword ptr [esi], 0x3e800000
        mov     dword ptr [esi + 0x4], edi
        mov     dword ptr [esi + 0xc], edi
L54f3e3:
        lea     edx, [ebp + 0xfffffe84]
        push    edx
        lea     ecx, [ebp + 0xfffffe24]
        call    FUN_00419460
        lea     ecx, [ebp + 0xfffffdf4]
        call    FUN_00419e70
        push    edi
        push    edi
        push    edi
        lea     ecx, [ebp - 0x78]
        call    FUN_0040c9c0
        lea     eax, [ebp - 0x78]
        push    eax
        lea     ecx, [ebp + 0xffffff14]
        call    FUN_0040c5d0
        push    edi
        push    0x40a00000
        push    edi
        lea     ecx, [ebp - 0x78]
        call    FUN_0040c9c0
        lea     ecx, [ebp - 0x78]
        push    ecx
        lea     ecx, [ebp - 0x6c]
        call    FUN_0040c5d0
        lea     ecx, [ebx + 0x308]
        call    FUN_0055e370
        fstp    dword ptr [ebp - 0x4]
        mov     edx, dword ptr [ebp - 0x4]
        push    edx
        lea     eax, [ebp - 0x6c]
        push    eax
        lea     ecx, [ebp + 0xffffff14]
        push    ecx
        lea     ecx, [ebp - 0x78]
        call    FUN_0040cb70
        lea     edx, [ebp - 0x78]
        push    edx
        lea     ecx, [ebp + 0xffffff7c]
        call    FUN_0040c5d0
        lea     eax, [ebp + 0xffffff7c]
        push    eax
        lea     ecx, [ebp + 0xffffff20]
        call    FUN_0040c5d0
        lea     ecx, [ebp + 0xffffff20]
        push    ecx
        lea     ecx, [ebp + 0xfffffdf4]
        call    FUN_0040d030
        lea     edx, [ebp + 0xfffffdf4]
        lea     eax, [ebp + 0xfffffe24]
        lea     ecx, [ebp + 0xfffffe84]
        mov     dword ptr [ebp - 0x8], edx
        mov     dword ptr [ebp - 0xc], eax
        mov     dword ptr [ebp - 0x4], ecx
        /* ---- matrix block 1: local_180 = local_1e0 * local_210 ---- */
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
L54f628:
        mov     esi, dword ptr [ebx + 0x384]
        mov     eax, dword ptr [esi + 0xd8]
        mov     edx, dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     dword ptr [ebp - 0x18], edx
        mov     ecx, dword ptr [eax + 0x1c]
        mov     dword ptr [ebp - 0x14], ecx
        mov     edx, dword ptr [eax + 0x2c]
        lea     eax, [ebp - 0x18]
        push    eax
        lea     ecx, [ebp + 0xfffffee4]
        mov     dword ptr [ebp - 0x10], edx
        call    FUN_0040d030
        push    0x7b9460
        lea     ecx, [ebp + 0xfffffeb4]
        call    FUN_00419460
        mov     ecx, dword ptr [esi + 0x410]
        mov     edx, dword ptr [esi + 0x40c]
        sub     ecx, edx
        sar     ecx, 0x2
        jz      L54f6ba
        mov     eax, dword ptr [edx]
        cmp     eax, edi
        jz      L54f6ba
        fld     dword ptr [eax + 0x198]
        lea     ecx, [ebp + 0xfffffeb4]
        fadd    dword ptr [eax + 0x1bc]
        mov     dword ptr [ebp - 0x64], 0x0
        fstp    dword ptr [ebp - 0x6c]
        fld     dword ptr [eax + 0x1c0]
        fadd    dword ptr [eax + 0x19c]
        lea     eax, [ebp - 0x6c]
        push    eax
        fstp    dword ptr [ebp - 0x68]
        call    FUN_0041a070
L54f6ba:
        lea     ecx, [ebp + 0xfffffee4]
        lea     edx, [ebp + 0xfffffeb4]
        lea     eax, [ebp + 0xfffffe54]
        mov     dword ptr [ebp - 0x4], ecx
        mov     dword ptr [ebp - 0x8], edx
        mov     dword ptr [ebp - 0xc], eax
        /* ---- matrix block 2: local_1b0 = local_e4 * local_180 ---- */
        mov     edx, dword ptr [ebp - 0x8]
        push    esi
        mov     esi, dword ptr [ebp - 0x4]
        mov     eax, dword ptr [ebp - 0xc]
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
        lea     ecx, [ebp + 0xfffffe54]
        lea     edx, [ebp + 0xfffffe84]
        lea     eax, [ebp + 0xffffff2c]
        mov     dword ptr [ebp - 0x4], ecx
        mov     dword ptr [ebp - 0x8], edx
        mov     dword ptr [ebp - 0xc], eax
        /* ---- matrix block 3: local_d8 = local_1b0 * local_180 ---- */
        mov     edx, dword ptr [ebp - 0x8]
        push    esi
        mov     esi, dword ptr [ebp - 0x4]
        mov     eax, dword ptr [ebp - 0xc]
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
        mov     ecx, dword ptr [ebp + 0xffffff38]
        mov     edx, dword ptr [ebp + 0xffffff48]
        mov     eax, dword ptr [ebp + 0xffffff58]
        mov     dword ptr [ebp - 0x18], ecx
        lea     ecx, [ebp - 0x18]
        push    ecx
        lea     ecx, [ebp + 0xffffff5c]
        mov     dword ptr [ebp - 0x14], edx
        mov     dword ptr [ebp - 0x10], eax
        call    FUN_0040c410
        lea     edx, [ebp - 0x3c]
        push    edx
        lea     ecx, [ebp + 0xffffff2c]
        call    FUN_0054fd90
        lea     eax, [ebp - 0x3c]
        push    eax
        lea     ecx, [ebp + 0xffffff5c]
        call    FUN_00766c60
        fld     dword ptr [ebx + 0x520]
        fsub    dword ptr [g_0076d5f0]
        lea     ecx, [ebp - 0x60]
        mov     dword ptr [ebp - 0x50], ecx
        mov     ecx, dword ptr [ebx + 0x384]
        cmp     ecx, edi
        fstp    dword ptr [ebp + 0xffffff74]
        lea     eax, [ebp + 0xffffff5c]
        mov     dword ptr [ebp - 0x54], eax
        mov     dword ptr [ebp - 0x4c], edi
        mov     dword ptr [ebp - 0x44], ebx
        mov     dword ptr [ebp - 0x40], 0x2000
        jz      L54fa73
        mov     dword ptr [ebp - 0x44], ecx
L54fa73:
        mov     edx, dword ptr [ebx + 0xe0]
        cmp     dword ptr [edx + 0x14], 0x7
        jz      L54fb43
        mov     ecx, dword ptr [g_007dc728]
        lea     eax, [ebp - 0x54]
        push    eax
        call    FUN_004e2f40
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     eax, dword ptr [edx + 0x1c]
        xor     eax, 0x85739531
        lea     ecx, [eax + 0x78]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x4]
        fld     dword ptr [eax + 0x34]
        fadd    dword ptr [g_0076d070]
        push    edi
        push    0x3f800000
        push    edi
        lea     ecx, [ebp + 0xffffff78]
        fstp    dword ptr [ebp - 0xc]
        call    FUN_0040c9c0
        mov     ecx, dword ptr [ebp - 0xc]
        lea     edx, [ebp - 0x4]
        push    edx
        lea     eax, [ebp + 0xffffff78]
        mov     dword ptr [ebp - 0x7c], ecx
        mov     ecx, dword ptr [ebp - 0x54]
        push    eax
        call    FUN_00766cb0
        fst     dword ptr [ebp - 0x8]
        fcomp   dword ptr [g_0077d0d8]
        fnstsw  ax
        test    ah, 0x1
        jnz     L54fb31
        fld     dword ptr [ebp - 0x4]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L54fb31
        fld     dword ptr [ebp - 0x4]
        fabs
        fld     dword ptr [g_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jz      L54fb31
        mov     ecx, dword ptr [ebp - 0x54]
        fld     dword ptr [ecx + 0x18]
        fcomp   dword ptr [ebp - 0x8]
        fnstsw  ax
        test    ah, 0x41
        jnz     L54fb34
        mov     edx, dword ptr [ebp - 0x8]
        mov     dword ptr [ecx + 0x18], edx
L54fb31:
        mov     ecx, dword ptr [ebp - 0x54]
L54fb34:
        fld     dword ptr [ecx + 0x18]
        fsub    dword ptr [g_0076d3c8]
        fstp    dword ptr [ecx + 0x18]
        mov     eax, dword ptr [ebp - 0x54]
L54fb43:
        fld     dword ptr [eax + 0x18]
        push    ecx
        mov     esi, eax
        add     eax, 0xc
        fstp    dword ptr [esp]
        push    eax
        lea     ecx, [ebp + 0xffffff7c]
        call    FUN_0040ca40
        lea     eax, [ebp + 0xffffff7c]
        push    eax
        push    esi
        lea     ecx, [ebp - 0x18]
        call    FUN_0040cbb0
        mov     ecx, dword ptr [ebx + 0x298]
        mov     edx, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [ebp - 0x18]
        mov     ecx, dword ptr [ebp - 0x14]
        mov     dword ptr [ebp + 0xffffff38], eax
        mov     eax, dword ptr [ebx + 0xc4]
        mov     dword ptr [ebp + 0xffffff48], ecx
        mov     dword ptr [ebx + 0x344], edx
        mov     edx, dword ptr [ebp - 0x10]
        mov     dword ptr [ebp + 0xffffff58], edx
        mov     eax, dword ptr [eax + 0xd8]
        add     eax, 0x80
        mov     esi, eax
        mov     ecx, 0xc
        lea     edi, [ebp + 0xfffffeb4]
        rep     movsd
        mov     esi, eax
        mov     ecx, 0xc
        lea     edi, [ebp + 0xfffffe24]
        rep     movsd
        lea     ecx, [ebp + 0xfffffe24]
        push    ecx
        lea     ecx, [ebp + 0xfffffeb4]
        call    FUN_004206b0
        mov     dword ptr [ebp - 0x4], eax
        lea     edx, [ebp + 0xffffff2c]
        lea     eax, [ebp + 0xfffffee4]
        mov     dword ptr [ebp - 0x8], edx
        mov     dword ptr [ebp - 0xc], eax
        /* ---- matrix block 4: local_e4 = local_8 * local_120 ---- */
        mov     edx, dword ptr [ebp - 0x8]
        push    esi
        mov     esi, dword ptr [ebp - 0x4]
        mov     eax, dword ptr [ebp - 0xc]
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
        lea     ecx, [ebp + 0xfffffee4]
        push    ecx
        mov     ecx, ebx
        call    FUN_004daa20
        mov     edx, dword ptr [ebx]
        push    0x1
        mov     ecx, ebx
        call    dword ptr [edx + 0x48]
        pop     edi
        pop     esi
        mov     byte ptr [ebx + 0x338], 0x1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}

