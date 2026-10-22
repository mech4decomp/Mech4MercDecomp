/*
 * FUN_006459C0 (939 B) — __thiscall (this in ecx), no args.
 * Vector/transform math: scales vectors, queries a spatial structure
 * (0x6410xx family), and emits drawing commands via the 0x55e5c0 /
 * 0x55eed0 / 0x55eb90 family with float-to-int conversions (0x75db4a).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76d064;
extern float g_77dff8;
extern float g_77dff4;
extern float g_76d5f0;
extern float g_76c5b0;

extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_00641010(void);
extern void __cdecl FUN_00641050(void);
extern void __cdecl FUN_00561a30(void);
extern void __cdecl FUN_005619f0(void);
extern void __cdecl FUN_00641000(void);
extern void __cdecl FUN_0040c9c0(void);
extern void __cdecl FUN_00640fa0(void);
extern void __cdecl FUN_0055f5b0(void);
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_0055e5c0(void);
extern void __cdecl FUN_0055eed0(void);
extern void __cdecl FUN_0055eb90(void);

__declspec(naked) void FUN_006459C0(void)
{
    __asm {
        sub     esp, 0x98
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        cmp     dword ptr [edi + 0x5c], 0xbf800000
        je      L_645d61
        lea     eax, [edi + 0x20]
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_0040c410
        fld     dword ptr [esp + 0x10]
        fcomp   dword ptr [g_76d064]
        __emit 0xDF            /* fnstsw ax: MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6            /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        je      L_645a04
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [g_77dff8]
        fstp    dword ptr [esp + 0x10]
L_645a04:
        fld     dword ptr [esp + 0x14]
        fcomp   dword ptr [g_76d064]
        __emit 0xDF            /* fnstsw ax: no-WAIT */
        __emit 0xE0
        __emit 0xF6            /* test ah,0x41 */
        __emit 0xC4
        __emit 0x41
        je      L_645a23
        fld     dword ptr [esp + 0x14]
        fmul    dword ptr [g_77dff4]
        fstp    dword ptr [esp + 0x14]
L_645a23:
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     ecx, [esp + 0x38]
        call    FUN_0040c5d0
        lea     edx, [edi + 0x14]
        push    edx
        lea     ecx, [esp + 0x14]
        call    FUN_0040c410
        fld     dword ptr [esp + 0x10]
        fcomp   dword ptr [g_76d064]
        __emit 0xDF            /* fnstsw ax: no-WAIT */
        __emit 0xE0
        __emit 0xF6            /* test ah,0x41 */
        __emit 0xC4
        __emit 0x41
        je      L_645a5d
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [g_77dff8]
        fstp    dword ptr [esp + 0x10]
L_645a5d:
        fld     dword ptr [esp + 0x14]
        fcomp   dword ptr [g_76d064]
        __emit 0xDF            /* fnstsw ax: no-WAIT */
        __emit 0xE0
        __emit 0xF6            /* test ah,0x41 */
        __emit 0xC4
        __emit 0x41
        je      L_645a7c
        fld     dword ptr [esp + 0x14]
        fmul    dword ptr [g_77dff4]
        fstp    dword ptr [esp + 0x14]
L_645a7c:
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0x50]
        call    FUN_0040c5d0
        lea     ecx, [esp + 0x4c]
        push    ecx
        lea     ecx, [esp + 0x20]
        call    FUN_0040c410
        lea     edx, [esp + 0x30]
        xor     ebx, ebx
        push    edx
        lea     eax, [esp + 0x78]
        lea     esi, [edi + 0x38]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x38], ebx
        mov     dword ptr [esp + 0x34], ebx
        mov     dword ptr [esp + 0x30], ebx
        call    FUN_00641010
        mov     eax, dword ptr [eax]
        cmp     eax, dword ptr [esi]
        mov     dword ptr [esp + 0x40], eax
        je      L_645acd
        mov     ecx, dword ptr [esp + 0x30]
        cmp     ecx, dword ptr [eax + 0x10]
        jge     L_645b07
L_645acd:
        lea     edx, [esp + 0x48]
        push    edx
        lea     eax, [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xa4]
        mov     dword ptr [esp + 0x50], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [esp + 0x48]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [esp + 0x74]
        push    eax
        mov     ecx, esi
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp + 0x40], eax
L_645b07:
        mov     eax, dword ptr [eax + 0x14]
        fld     dword ptr [eax + 0xc]
        lea     ecx, [esp + 0x58]
        fsub    dword ptr [eax + 4]
        push    ecx
        lea     ecx, [esp + 0x94]
        fmul    dword ptr [eax + 0x14]
        mov     dword ptr [esp + 0x64], 0
        fstp    dword ptr [esp + 0x5c]
        fld     dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        fstp    dword ptr [esp + 0x60]
        call    FUN_0040c5d0
        lea     edx, [esp + 0x2c]
        push    edx
        lea     eax, [esp + 0x74]
        push    eax
        mov     ecx, esi
        call    FUN_00641010
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x64]
        mov     dword ptr [esp + 0xc], ecx
        push    edx
        mov     ecx, esi
        call    FUN_00641000
        mov     ecx, eax
        mov     eax, dword ptr [esp + 0xc]
        cmp     eax, dword ptr [ecx]
        je      L_645b73
        mov     edx, dword ptr [esp + 0x2c]
        cmp     edx, dword ptr [eax + 0x10]
        jge     L_645baa
L_645b73:
        lea     eax, [esp + 0x44]
        push    eax
        lea     ecx, [esp + 0x30]
        push    ecx
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x4c], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [esp + 0x14]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [esp + 0x70]
        push    eax
        mov     ecx, esi
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp + 0xc], eax
L_645baa:
        mov     eax, dword ptr [eax + 0x14]
        fld     dword ptr [eax + 0xc]
        lea     ecx, [esp + 0x4c]
        fsub    dword ptr [eax + 4]
        push    ecx
        lea     ecx, [esp + 0x7c]
        fmul    dword ptr [eax + 0x14]
        mov     dword ptr [esp + 0x58], 0
        fstp    dword ptr [esp + 0x50]
        fld     dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        fstp    dword ptr [esp + 0x54]
        call    FUN_0040c5d0
        fld     dword ptr [esp + 0x20]
        push    0x3f666666
        fsub    dword ptr [esp + 0x80]
        push    ecx
        fsub    dword ptr [g_76d5f0]
        fstp    dword ptr [esp]
        fld     dword ptr [esp + 0x24]
        push    ecx
        fadd    dword ptr [g_76d5f0]
        lea     ecx, [esp + 0x90]
        fstp    dword ptr [esp]
        call    FUN_0040c9c0
        push    ebx
        push    ebx
        push    0xfa007d00
        lea     edx, [esp + 0x9c]
        push    edx
        lea     eax, [esp + 0x94]
        push    eax
        lea     ecx, [esp + 0x3c]
        push    ecx
        mov     ecx, esi
        call    FUN_00640fa0
        mov     ecx, dword ptr [eax]
        call    FUN_0055f5b0
        fld     dword ptr [esp + 0x38]
        fmul    dword ptr [edi + 0x5c]
        call    FUN_0075db4a
        fld     dword ptr [esp + 0x38]
        fadd    dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x28], eax
        fild    dword ptr [esp + 0x28]
        push    0xfa007d00
        fstp    dword ptr [esp + 0x10]
        fld     st(0)
        call    FUN_0075db4a
        fld     dword ptr [esp + 0x38]
        fadd    dword ptr [esp + 0x20]
        push    eax
        call    FUN_0075db4a
        fsub    dword ptr [esp + 0x14]
        push    eax
        call    FUN_0075db4a
        fld     dword ptr [esp + 0x28]
        push    eax
        call    FUN_0075db4a
        push    eax
        call    FUN_0055e5c0
        fld     dword ptr [edi + 0x5c]
        fcomp   dword ptr [g_76c5b0]
        add     esp, 0x14
        __emit 0xDF            /* fnstsw ax: no-WAIT */
        __emit 0xE0
        __emit 0xF6            /* test ah,0x40 */
        __emit 0xC4
        __emit 0x40
        jne     L_645ced
        mov     edi, dword ptr [edi + 0x50]
        cmp     edi, ebx
        je      L_645ced
        fld     dword ptr [esp + 0x38]
        shl     edi, 0x18
        fadd    dword ptr [esp + 0x20]
        add     edi, 0xffffff
        push    edi
        fld     st(0)
        call    FUN_0075db4a
        fld     dword ptr [esp + 0x38]
        fadd    dword ptr [esp + 0x20]
        push    eax
        call    FUN_0075db4a
        fsub    dword ptr [esp + 0x14]
        push    eax
        call    FUN_0075db4a
        fld     dword ptr [esp + 0x28]
        push    eax
        call    FUN_0075db4a
        push    eax
        call    FUN_0055e5c0
        add     esp, 0x14
L_645ced:
        fld     dword ptr [esp + 0x38]
        fadd    dword ptr [esp + 0x20]
        fsub    dword ptr [esp + 0xc]
        call    FUN_0075db4a
        fld     dword ptr [esp + 0x34]
        fadd    dword ptr [esp + 0x1c]
        mov     esi, eax
        push    0xc8ffffff
        push    esi
        call    FUN_0075db4a
        fld     dword ptr [esp + 0x24]
        push    eax
        push    esi
        call    FUN_0075db4a
        push    eax
        call    FUN_0055eed0
        fld     dword ptr [esp + 0x4c]
        fadd    dword ptr [esp + 0x34]
        push    0xfa007d00
        call    FUN_0075db4a
        fld     dword ptr [esp + 0x4c]
        fadd    dword ptr [esp + 0x34]
        push    eax
        call    FUN_0075db4a
        fld     dword ptr [esp + 0x3c]
        push    eax
        call    FUN_0075db4a
        fld     dword ptr [esp + 0x3c]
        push    eax
        call    FUN_0075db4a
        push    eax
        call    FUN_0055eb90
        add     esp, 0x28
L_645d61:
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x98
        ret
    }
}
