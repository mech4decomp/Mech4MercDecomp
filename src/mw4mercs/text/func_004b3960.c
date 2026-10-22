/*
 * FUN_004b3960 (646 B) — __thiscall. MLR matrix concatenation (two stages):
 * 1) [this+0x80] = [this+0x50] * ([this+0x10]+0x80) via FPU (or straight
 *    copy when flag bit0 of [this+0x18] is set), then FUN_004206b0([this+0x144]).
 * 2) [this+0xf0] = [this+0x80] * [this+0xb0] (FPU), then copies
 *    [this+0xec] -> [this+0x12c], clears flag bit2 of [this+0x18], and calls
 *    a virtual method at vtable+0x10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004206b0(void);

__declspec(naked) void FUN_004b3960(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xc
        push    ebx
        mov     ebx, ecx
        push    esi
        push    edi
        lea     eax, [ebx + 0x50]
        lea     esi, [ebx + 0x20]
        mov     ecx, 0xc
        mov     edi, eax
        rep movsd
        test    byte ptr [ebx + 0x18], 0x1
        jnz     L_3b1e
        mov     ecx, dword ptr [ebx + 0x10]
        mov     dword ptr [ebp - 0xc], eax
        add     ecx, 0x80
        lea     eax, [ebx + 0x80]
        mov     dword ptr [ebp - 0x8], ecx
        mov     dword ptr [ebp - 0x4], eax
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
        jmp     L_3b34
    L_3b1e:
        mov     esi, dword ptr [ebx + 0x10]
        lea     edi, [ebx + 0x80]
        add     esi, 0x80
        mov     ecx, 0xc
        rep movsd
    L_3b34:
        lea     esi, [ebx + 0x80]
        push    esi
        lea     ecx, [ebx + 0x144]
        call    FUN_004206b0
        lea     edi, [ebx + 0xb0]
        lea     ecx, [ebx + 0xf0]
        mov     dword ptr [ebp - 0x4], esi
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
        fxch
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
        fxch
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
        fxch
        fstp    dword ptr [eax + 0x1c]
        fadd    dword ptr [edx + 0x2c]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        pop     esi
        faddp   st(1), st(0)
        fstp    dword ptr [eax + 0x2c]
        mov     eax, dword ptr [ebx + 0x18]
        mov     edx, dword ptr [edi + 0x3c]
        and     eax, 0xfffffffb
        mov     dword ptr [ecx + 0x3c], edx
        mov     dword ptr [ebx + 0x18], eax
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax + 0x10]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
