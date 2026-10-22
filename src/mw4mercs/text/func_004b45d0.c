/*
 * FUN_004b45d0 (535 B) — __thiscall. MLR LOD transform: guarded by a flag
 * bit in [this+0x18] (bit14). Calls FUN_004b34a0/FUN_004b32e0 to manage a
 * LOD slot, computes a 3x3 matrix multiply ([ebp+0x8] * [ebp-0x48] ->
 * [ebp-0x78]) via FPU, then FUN_00488260, decrements a refcount and
 * conditionally releases via a virtual call.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004b34a0(void);
extern void __cdecl FUN_004b32e0(void);
extern void __cdecl FUN_004206b0(void);
extern void __cdecl FUN_0041c680(void);
extern void __cdecl FUN_00488260(void);

__declspec(naked) void FUN_004b45d0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x78
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x18]
        shr     eax, 0xe
        not     al
        test    al, 0x1
        jz      L_47e0
        lea     ecx, [ebp - 0x8]
        push    ecx
        lea     edx, [ebp - 0x4]
        push    edx
        mov     ecx, esi
        call    FUN_004b34a0
        mov     ecx, esi
        dec     eax
        push    eax
        call    FUN_004b32e0
        add     esi, 0x80
        push    esi
        lea     ecx, [ebp - 0x48]
        call    FUN_004206b0
        mov     ecx, dword ptr [ebp + 0xc]
        lea     eax, [ebp - 0x48]
        push    eax
        push    ecx
        lea     ecx, [ebp - 0x18]
        call    FUN_0041c680
        lea     edx, [ebp - 0x48]
        lea     eax, [ebp - 0x78]
        mov     dword ptr [ebp - 0xc], edx
        mov     dword ptr [ebp + 0xc], eax
        mov     edx, dword ptr [ebp + 0x8]
        push    esi
        mov     esi, dword ptr [ebp - 0xc]
        mov     eax, dword ptr [ebp + 0xc]
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
        mov     ecx, dword ptr [ebp + 0x10]
        push    0xff800000
        push    ecx
        mov     ecx, dword ptr [ebp - 0x4]
        lea     edx, [ebp - 0x18]
        push    edx
        lea     eax, [ebp - 0x78]
        push    eax
        call    FUN_00488260
        mov     ecx, dword ptr [ebp - 0x4]
        dec     word ptr [ecx + 0x10]
        cmp     word ptr [ecx + 0x10], 0x0
        lea     eax, [ecx + 0x10]
        jnz     L_47e0
        test    ecx, ecx
        jz      L_47e0
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
    L_47e0:
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }
}
