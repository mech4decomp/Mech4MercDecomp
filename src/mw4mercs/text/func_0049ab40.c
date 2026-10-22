/*
 * FUN_0049ab40 (843 B) — MLR PointLight update (__thiscall, RET 0x4).
 * Evaluates color/intensity curves (piecewise-linear lookup + cubic
 * polynomial), builds a 3x4 transform matrix, and calls a virtual method
 * through DAT_007da968.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da968;
extern void __cdecl FUN_00494440(void);

__declspec(naked) void FUN_0049ab40(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x54
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        test    byte ptr [edi + 0x9c], 0x1
        jnz     short loc_49ab5f
        xor     al, al
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
loc_49ab5f:
        mov     eax, dword ptr [ebp + 0x8]
        push    eax
        mov     ecx, edi
        call    FUN_00494440
        test    al, al
        jnz     short loc_49ab77
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
loc_49ab77:
        mov     ecx, dword ptr [edi + 0x10]
        fld     dword ptr [edi + 0x90]
        mov     dword ptr [ebp - 0x4c], 0xbf800000
        mov     dword ptr [ebp - 0x50], 0xbf800000
        mov     dword ptr [ebp - 0x54], 0xbf800000
        mov     esi, dword ptr [ecx + 0x68]
        xor     edx, edx
        test    esi, esi
        jbe     short loc_49abb2
loc_49ab9e:
        mov     ebx, dword ptr [ecx + 0x64]
loc_49aba1:
        fcom    dword ptr [ebx]
        fnstsw  ax
        __emit 0xF6 /* test ah, imm8: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jnz     short loc_49abb2
        inc     edx
        add     ebx, 0xc
        cmp     edx, esi
        jc      short loc_49aba1
loc_49abb2:
        mov     eax, dword ptr [ecx + 0x64]
        lea     edx, [edx + edx*0x2]
        fsub    dword ptr [eax + edx*0x4 - 0xc]
        lea     eax, [eax + edx*0x4 - 0xc]
        xor     edx, edx
        fmul    dword ptr [eax + 0x4]
        fadd    dword ptr [eax + 0x8]
        fstp    dword ptr [ebp - 0x54]
        mov     esi, dword ptr [ecx + 0x74]
        test    esi, esi
        fld     dword ptr [edi + 0x90]
        jbe     short loc_49abec
loc_49abd8:
        mov     ebx, dword ptr [ecx + 0x70]
loc_49abdb:
        fcom    dword ptr [ebx]
        fnstsw  ax
        __emit 0xF6 /* test ah, imm8: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jnz     short loc_49abec
        inc     edx
        add     ebx, 0xc
        cmp     edx, esi
        jc      short loc_49abdb
loc_49abec:
        mov     eax, dword ptr [ecx + 0x70]
        lea     edx, [edx + edx*0x2]
        fsub    dword ptr [eax + edx*0x4 - 0xc]
        lea     eax, [eax + edx*0x4 - 0xc]
        xor     edx, edx
        fmul    dword ptr [eax + 0x4]
        fadd    dword ptr [eax + 0x8]
        fstp    dword ptr [ebp - 0x50]
        mov     esi, dword ptr [ecx + 0x80]
        test    esi, esi
        fld     dword ptr [edi + 0x90]
        jbe     short loc_49ac29
loc_49ac15:
        mov     ebx, dword ptr [ecx + 0x7c]
loc_49ac18:
        fcom    dword ptr [ebx]
        fnstsw  ax
        __emit 0xF6 /* test ah, imm8: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jnz     short loc_49ac29
        inc     edx
        add     ebx, 0xc
        cmp     edx, esi
        jc      short loc_49ac18
loc_49ac29:
        mov     eax, dword ptr [ecx + 0x7c]
        lea     edx, [edx + edx*0x2]
        fsub    dword ptr [eax + edx*0x4 - 0xc]
        lea     eax, [eax + edx*0x4 - 0xc]
        mov     edx, dword ptr [ebp + 0x8]
        fmul    dword ptr [eax + 0x4]
        fadd    dword ptr [eax + 0x8]
        mov     eax, dword ptr [edx + 0x14]
        mov     dword ptr [ebp - 0x4], eax
        lea     edx, [edi + 0x58]
        lea     eax, [ebp - 0x48]
        fstp    dword ptr [ebp - 0x4c]
        mov     dword ptr [ebp - 0x8], edx
        mov     dword ptr [ebp + 0x8], eax
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
        faddp   st(1), st(0)
        fadd    dword ptr [esi + 0x2c]
        fstp    dword ptr [eax + 0x2c]
        pop     esi
        fld     dword ptr [edi + 0x90]
        mov     esi, dword ptr [ecx + 0x8c]
        xor     edx, edx
        test    esi, esi
        jbe     short loc_49adfe
loc_49ade7:
        mov     ebx, dword ptr [ecx + 0x88]
loc_49aded:
        fcom    dword ptr [ebx]
        fnstsw  ax
        __emit 0xF6 /* test ah, imm8: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jnz     short loc_49adfe
        inc     edx
        add     ebx, 0xc
        cmp     edx, esi
        jc      short loc_49aded
loc_49adfe:
        mov     eax, dword ptr [ecx + 0x88]
        lea     edx, [edx + edx*0x2]
        fsub    dword ptr [eax + edx*0x4 - 0xc]
        lea     eax, [eax + edx*0x4 - 0xc]
        fmul    dword ptr [eax + 0x4]
        fadd    dword ptr [eax + 0x8]
        lea     eax, [ebp - 0x54]
        push    eax
        mov     eax, dword ptr [edi + 0xa0]
        fstp    dword ptr [ebp - 0x18]
        push    eax
        fld     dword ptr [edi + 0x90]
        fld     st(0)
        fmul    dword ptr [ecx + 0x9c]
        fadd    dword ptr [ecx + 0xa0]
        fmul    st(0), st(1)
        fadd    dword ptr [ecx + 0x98]
        fmul    st(0), st(1)
        fadd    dword ptr [ecx + 0x94]
        fstp    dword ptr [ebp - 0x14]
        fstp    st(0)
        fld     dword ptr [edi + 0x90]
        fld     st(0)
        fmul    dword ptr [ecx + 0xb0]
        fadd    dword ptr [ecx + 0xb4]
        fmul    st(0), st(1)
        fadd    dword ptr [ecx + 0xac]
        fmul    st(0), st(1)
        fadd    dword ptr [ecx + 0xa8]
        mov     ecx, dword ptr [g_007da968]
        fstp    dword ptr [ebp - 0x10]
        mov     edx, dword ptr [ecx]
        fstp    st(0)
        call    dword ptr [edx + 0x4]
        pop     edi
        pop     esi
        mov     al, 0x1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
