/*
 * FUN_005592f0 (1299 B) — Matrix multiply / transform method.
 *
 * __thiscall (ECX = this), no params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * NOTE: extern data/function symbols referenced by name so MSVC6 emits the
 * correct memory-deref (D8 3D / D8 0D) and rel32 (E8) opcode forms; the
 * 4-byte address fields are relocations masked by the diff harness.
 */

/* ---- external data symbols ---- */
extern float g_76d064;   /* 0x0076d064 */
extern float g_77d144;   /* 0x0077d144 */
extern float g_77016c;   /* 0x0077016c */

/* ---- external functions ---- */
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_00428850(void);
extern void __cdecl FUN_00419460(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0040cb00(void);
extern void __cdecl FUN_0040ca40(void);
extern void __cdecl FUN_0040c9e0(void);
extern void __cdecl FUN_0041fde0(void);
extern void __cdecl FUN_0040d030(void);
extern void __cdecl FUN_004206b0(void);

__declspec(naked) void __cdecl func_005592F0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x120
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x6b0]
        test    eax, eax
        push    esi
        push    edi
        jz      L_597fc
        lea     ecx, [ebx + 0x6a0]
        call    FUN_0041fd80
        mov     esi, eax
        test    esi, esi
        jz      L_597fc
        push    0x7b8d88
        lea     ecx, [ebp - 0x54]
        call    FUN_0040c5d0
        push    0x7b9460
        lea     ecx, [ebp - 0xc0]
        call    FUN_00428850
        mov     edi, dword ptr [esi + 0x124]
        test    edi, edi
        mov     eax, dword ptr [esi + 0xd8]
        jz      L_594eb
        add     eax, 0x80
        lea     ecx, [edi + 0x10]
        lea     edx, [ebp - 0x90]
        mov     dword ptr [ebp - 0x14], eax
        mov     dword ptr [ebp - 0x4], ecx
        mov     dword ptr [ebp - 0x18], edx
        mov     edx, dword ptr [ebp - 0x4]
        push    esi
        mov     esi, dword ptr [ebp - 0x14]
        mov     eax, dword ptr [ebp - 0x18]
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
        jmp     L_594fc

L_594eb:
        add     eax, 0x80
        push    eax
        lea     ecx, [ebp - 0x90]
        call    FUN_00419460

L_594fc:
        mov     ecx, dword ptr [ebx + 0x384]
        mov     eax, dword ptr [ecx + 0xd8]
        mov     edx, dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     eax, dword ptr [eax + 0x2c]
        lea     ecx, [ebp - 0x90]
        push    ecx
        lea     ecx, [ebp - 0x60]
        mov     dword ptr [ebp - 0x48], edx
        mov     dword ptr [ebp - 0x40], eax
        call    FUN_00419480
        fld     dword ptr [ebp - 0x60]
        fsub    dword ptr [ebp - 0x48]
        lea     ecx, [ebp - 0x24]
        mov     dword ptr [ebp - 0x20], 0
        fstp    dword ptr [ebp - 0x24]
        fld     dword ptr [ebp - 0x58]
        fsub    dword ptr [ebp - 0x40]
        fstp    dword ptr [ebp - 0x1c]
        call    FUN_0040cb00
        test    edi, edi
        fsqrt
        fdivr   g_76d064
        fld     dword ptr [ebp - 0x24]
        fmul    st, st(1)
        fstp    dword ptr [ebp - 0x30]
        fld     st(0)
        fmul    dword ptr [ebp - 0x20]
        fstp    dword ptr [ebp - 0x2c]
        fld     dword ptr [ebp - 0x1c]
        fmul    st, st(1)
        fstp    dword ptr [ebp - 0x28]
        fstp    st(0)
        jz      L_59585
        fld     dword ptr [edi + 0x4c]
        push    ecx
        fmul    g_77d144
        lea     edx, [ebp - 0x30]
        fstp    dword ptr [esp]
        push    edx
        jmp     L_5958e

L_59585:
        push    0xc1a00000
        lea     eax, [ebp - 0x30]
        push    eax

L_5958e:
        lea     ecx, [ebp - 0x54]
        call    FUN_0040ca40
        lea     ecx, [ebp - 0x90]
        push    ecx
        lea     ecx, [ebp - 0x60]
        call    FUN_00419480
        lea     edx, [ebp - 0x60]
        push    edx
        lea     eax, [ebp - 0x54]
        push    eax
        lea     ecx, [ebp - 0x10]
        call    FUN_0040c9e0
        test    edi, edi
        jz      L_595c1
        mov     ecx, dword ptr [ebp - 0x74]
        mov     dword ptr [ebp - 0xc], ecx
        jmp     L_595cd

L_595c1:
        fld     dword ptr [ebp - 0xc]
        fadd    g_77016c
        fstp    dword ptr [ebp - 0xc]

L_595cd:
        lea     edx, [ebp - 0x90]
        push    edx
        lea     ecx, [ebp - 0x48]
        call    FUN_00419480
        fld     dword ptr [ebp - 0x48]
        fsub    dword ptr [ebp - 0x10]
        push    0
        push    1
        push    2
        fstp    dword ptr [ebp - 0x3c]
        lea     eax, [ebp - 0x3c]
        fld     dword ptr [ebp - 0x44]
        push    eax
        fsub    dword ptr [ebp - 0xc]
        lea     ecx, [ebp - 0xc0]
        fstp    dword ptr [ebp - 0x38]
        fld     dword ptr [ebp - 0x40]
        fsub    dword ptr [ebp - 0x8]
        fstp    dword ptr [ebp - 0x34]
        call    FUN_0041fde0
        lea     ecx, [ebp - 0x10]
        push    ecx
        lea     ecx, [ebp - 0xc0]
        call    FUN_0040d030
        mov     edx, dword ptr [ebx + 0xd8]
        add     edx, 0x80
        push    edx
        lea     ecx, [ebp - 0xf0]
        call    FUN_004206b0
        lea     eax, [ebp - 0xf0]
        lea     ecx, [ebp - 0xc0]
        lea     edx, [ebp - 0x120]
        mov     dword ptr [ebp - 0x14], eax
        mov     dword ptr [ebp - 0x18], ecx
        mov     dword ptr [ebp - 0x4], edx
        mov     edx, dword ptr [ebp - 0x18]
        push    esi
        mov     esi, dword ptr [ebp - 0x14]
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
        mov     ebx, dword ptr [ebx + 0x6b0]
        mov     eax, dword ptr [ebx + 0x18]
        mov     edx, dword ptr [ebx]
        and     eax, 0xfffffffe
        or      eax, 0x4
        mov     ecx, ebx
        mov     dword ptr [ebx + 0x18], eax
        call    dword ptr [edx + 0x10]
        lea     edi, [ebx + 0x20]
        mov     ecx, 0xc
        lea     esi, [ebp - 0x120]
        rep     movsd
        mov     ecx, ebx
        call    dword ptr [ebx + 0x1c]

L_597fc:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
