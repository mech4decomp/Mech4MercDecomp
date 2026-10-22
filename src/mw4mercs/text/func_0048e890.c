/*
 * FUN_0048e890 (1286 B) — MLR render-record builder (__thiscall, RET 0x4).
 * Builds a per-object render record (matrices, color key) and dispatches
 * virtual calls on the object at [this+0x110] / [edi].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0048aec0(void);

extern int g_007da838;
extern int g_007da790;
extern int g_007b955c;
extern int g_007da784;
extern int g_007b9460;
extern int g_007da7f8;

__declspec(naked) void FUN_0048e890(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xc
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edi + 0x8]
        __emit 0xF6      /* test ah, imm8: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x40
        mov     dword ptr [ebp - 0xc], ecx
        jnz     L_eb5e
        mov     al, byte ptr [g_007da838]
        test    al, al
        jnz     L_eb5e
        mov     eax, dword ptr [g_007da790]
        cmp     eax, dword ptr [g_007b955c]
        jnc     L_ed8d
        lea     edx, [eax + eax*0x2]
        shl     edx, 0x4
        add     edx, eax
        mov     eax, dword ptr [g_007da784]
        mov     eax, dword ptr [eax]
        lea     ebx, [eax + edx*0x4]
        test    ebx, ebx
        jz      L_ed8d
        mov     edx, dword ptr [edi]
        mov     eax, dword ptr [edi + 0x4]
        mov     dword ptr [ebx], edx
        mov     edx, dword ptr [edi + 0x8]
        add     ecx, 0xb4
        mov     dword ptr [ebx + 0x4], eax
        mov     eax, dword ptr [edi + 0x1c]
        mov     dword ptr [ebx + 0x8], edx
        mov     dword ptr [ebp - 0x4], ecx
        mov     ecx, dword ptr [edi + 0x20]
        lea     edx, [ebx + 0x28]
        mov     dword ptr [ebx + 0xc0], 0x2
        mov     dword ptr [ebx + 0x24], eax
        mov     dword ptr [ebp - 0x8], ecx
        mov     dword ptr [ebp + 0x8], edx
        mov     edx, dword ptr [ebp - 0x8]
        push    esi
        mov     esi, dword ptr [ebp - 0x4]
        mov     eax, dword ptr [ebp + 0x8]
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
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x30]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x34]
        fxch    st(1)
        fadd    dword ptr [esi + 0x2c]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x38]
        fxch    st(1)
        fstp    dword ptr [eax + 0x2c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x30]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x34]
        fxch    st(1)
        fstp    dword ptr [eax + 0x30]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x38]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi + 0x30]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x34]
        fxch    st(1)
        fstp    dword ptr [eax + 0x34]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x38]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x30]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x34]
        fxch    st(1)
        fstp    dword ptr [eax + 0x38]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x38]
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fadd    dword ptr [esi + 0x3c]
        fstp    dword ptr [eax + 0x3c]
        pop     esi
        mov     eax, dword ptr [ebp - 0xc]
        lea     edi, [ebx + 0x68]
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        rep     movsd
        lea     ecx, [eax + 0x114]
        mov     dword ptr [g_007da7f8], ecx
        mov     ecx, dword ptr [eax + 0x110]
        mov     dword ptr [ebx + 0xb8], 0x0
        mov     dword ptr [ebx + 0xbc], 0xffffffff
        call    FUN_0048aec0
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
L_eb5e:
        mov     eax, dword ptr [edi + 0x20]
        lea     edx, [ecx + 0xb4]
        mov     dword ptr [ebp - 0xc], edx
        mov     edx, dword ptr [edi]
        add     edx, 0x54
        mov     dword ptr [ebp - 0x8], eax
        mov     dword ptr [ebp + 0x8], edx
        mov     edx, dword ptr [ebp - 0x8]
        push    esi
        mov     esi, dword ptr [ebp - 0xc]
        mov     eax, dword ptr [ebp + 0x8]
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
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x30]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x34]
        fxch    st(1)
        fadd    dword ptr [esi + 0x2c]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x38]
        fxch    st(1)
        fstp    dword ptr [eax + 0x2c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x30]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x34]
        fxch    st(1)
        fstp    dword ptr [eax + 0x30]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x38]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi + 0x30]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x34]
        fxch    st(1)
        fstp    dword ptr [eax + 0x34]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x38]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x30]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x34]
        fxch    st(1)
        fstp    dword ptr [eax + 0x38]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x38]
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fadd    dword ptr [esi + 0x3c]
        fstp    dword ptr [eax + 0x3c]
        pop     esi
        mov     esi, dword ptr [ecx + 0x110]
        mov     eax, dword ptr [edi]
        mov     edx, dword ptr [eax]
        push    esi
        add     ecx, 0x114
        push    ecx
        push    edi
        mov     ecx, eax
        call    dword ptr [edx + 0x10]
L_ed8d:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
