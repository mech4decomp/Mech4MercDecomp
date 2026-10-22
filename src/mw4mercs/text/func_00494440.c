/*
 * FUN_00494440 (1227 B) — MLR camera update / visibility traversal.
 * __thiscall, RET 0x4.
 *
 * Updates camera transform (3x4 matrix multiply), then walks a linked
 * list of render nodes doing distance culling and per-node setup via
 * virtual calls, and finally a second list traversal for child nodes.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da920;
extern int g_007da884;
extern int g_007b8c28;
extern int g_007b8c58;
extern int g_007b8c5c;
extern int g_007b8c60;
extern int g_007b8c64;
extern float g_007da930;
extern float g_007da934;
extern float g_007da938;
extern float g_007da940;
extern float g_0076c5b0;
extern float g_0076d064;

extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_00419460(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_00415020(void);
extern void __cdecl FUN_00492560(void);
extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_00417d80(void);
extern void __cdecl FUN_004188e0(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_00494440(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xac
        push    ebx
        mov     ebx, ecx
        test    byte ptr [ebx + 0x9c], 0x1
        push    esi
        push    edi
        jnz     L4462
        xor     al, al
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
L4462:
        mov     eax, dword ptr [g_007da920]
        push    eax
        call    FUN_006f4950
        mov     edi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edi + 0x8]
        cmp     eax, 0xbf800000
        jz      L4482
        mov     ecx, eax
        mov     dword ptr [ebx + 0x98], ecx
L4482:
        fld     qword ptr [edi]
        mov     esi, dword ptr [edi + 0x18]
        fsub    qword ptr [ebx + 0x88]
        push    0x7b8c28
        mov     ecx, esi
        fmul    dword ptr [ebx + 0x94]
        fadd    dword ptr [ebx + 0x90]
        fstp    dword ptr [ebp - 0x10]
        call    FUN_00419460
        push    0x7b8c58
        lea     ecx, [esi + 0x30]
        call    FUN_0040c410
        mov     eax, dword ptr [edi + 0x14]
        mov     edx, dword ptr [g_007b8c64]
        mov     dword ptr [ebp - 0x4], eax
        lea     eax, [ebx + 0x58]
        mov     dword ptr [ebp - 0xc], eax
        lea     eax, [ebx + 0x28]
        mov     dword ptr [esi + 0x3c], edx
        mov     dword ptr [ebp - 0x8], eax
        mov     edx, dword ptr [ebp - 0xc]
        push    esi
        mov     esi, dword ptr [ebp - 0x4]
        mov     eax, dword ptr [ebp - 0x8]
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
L4650:
        mov     eax, dword ptr [ebx + 0x24]
        test    eax, eax
        jz      L47EA
        mov     esi, dword ptr [eax]
        test    esi, esi
        jz      L47EA
        fld     dword ptr [esi + 0x10]
        fcomp   dword ptr [ebx + 0x90]
        __emit 0xDF   /* fnstsw ax: MSVC6 emits 9B-prefixed fstsw; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jz      L47EA
        fld     dword ptr [g_007da930]
        fsub    dword ptr [ebx + 0x34]
        fld     dword ptr [g_007da934]
        fsub    dword ptr [ebx + 0x44]
        fld     dword ptr [g_007da938]
        fsub    dword ptr [ebx + 0x54]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fadd    dword ptr [g_007da940]
        fstp    st(3)
        fstp    st(0)
        fstp    st(0)
        fcom    dword ptr [g_007da940]
        __emit 0xDF   /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L46C5
        fstp    st(0)
        fld     dword ptr [g_007da940]
L46C5:
        fcom    dword ptr [esi + 0x14]
        __emit 0xDF   /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 */
        __emit 0xC4
        __emit 0x01
        jnz     L47DA
        fcomp   dword ptr [esi + 0x18]
        __emit 0xDF   /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 */
        __emit 0xC4
        __emit 0x41
        jz      L47DC
        mov     eax, dword ptr [esi + 0x1c]
        and     eax, 0xc
        cmp     eax, 0xc
        jnz     L46F5
        mov     eax, dword ptr [ebx + 0x9c]
        and     eax, 0xc
L46F5:
        mov     ecx, dword ptr [esi + 0x20]
        or      eax, 0x1
        push    eax
        push    ecx
        mov     ecx, dword ptr [g_007da884]
        call    FUN_00492560
        mov     edi, eax
        push    edi
        lea     ecx, [ebx + 0x14]
        mov     dword ptr [ebp - 0xc], edi
        call    FUN_004179b0
        fld     dword ptr [ebx + 0x90]
        fld     st(0)
        mov     edx, dword ptr [ebx + 0x24]
        mov     eax, dword ptr [edx + 0x4]
        add     esi, 0x24
        add     edi, 0x58
        mov     ecx, 0xc
        rep     movsd
        mov     esi, dword ptr [ebx + 0x10]
        mov     ecx, dword ptr [ebx + 0x90]
        mov     dword ptr [ebx + 0x24], eax
        fmul    dword ptr [esi + 0x2c]
        mov     dword ptr [ebp - 0x4], ecx
        fadd    dword ptr [esi + 0x30]
        fmul    st(0), st(1)
        fadd    dword ptr [esi + 0x28]
        fmul    st(0), st(1)
        fadd    dword ptr [esi + 0x24]
        fstp    dword ptr [ebp - 0x8]
        fstp    st(0)
        call    FUN_00415020
        fld     dword ptr [ebp - 0x4]
        fmul    dword ptr [esi + 0x40]
        fadd    dword ptr [esi + 0x44]
        fmul    dword ptr [ebp - 0x4]
        fadd    dword ptr [esi + 0x3c]
        fmul    dword ptr [ebp - 0x4]
        fadd    dword ptr [esi + 0x38]
        fsub    dword ptr [ebp - 0x8]
        fmulp   st(1), st(0)
        fadd    dword ptr [ebp - 0x8]
        fcom    dword ptr [g_0076c5b0]
        __emit 0xDF   /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L478E
        fstp    st(0)
        fld     dword ptr [g_0076c5b0]
        jmp     L47A3
L478E:
        fcom    dword ptr [g_0076d064]
        __emit 0xDF   /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L47A3
        fstp    st(0)
        fld     dword ptr [g_0076d064]
L47A3:
        mov     edx, dword ptr [ebp + 0x8]
        fld     qword ptr [edx]
        mov     ecx, dword ptr [ebp - 0xc]
        fstp    qword ptr [ebp - 0x2c]
        lea     eax, [ebx + 0x28]
        lea     edx, [ebp - 0x2c]
        fstp    dword ptr [ebp - 0x24]
        mov     dword ptr [ebp - 0x18], eax
        mov     dword ptr [ebp - 0x14], 0x0
        mov     dword ptr [ebp - 0x20], 0x0
        mov     dword ptr [ebp - 0x1c], 0xbf800000
        mov     eax, dword ptr [ecx]
        push    edx
        call    dword ptr [eax + 0x4]
        jmp     L4650
L47DA:
        fstp    st(0)
L47DC:
        mov     eax, dword ptr [ebx + 0x24]
        mov     ecx, dword ptr [eax + 0x4]
        mov     dword ptr [ebx + 0x24], ecx
        jmp     L4650
L47EA:
        mov     edi, dword ptr [ebx + 0x14]
        push    0x7b8c28
        lea     ecx, [ebp - 0x6c]
        call    FUN_00419460
        mov     eax, dword ptr [g_007b8c5c]
        mov     edx, dword ptr [g_007b8c58]
        mov     ecx, dword ptr [g_007b8c60]
        mov     dword ptr [ebp - 0x38], eax
        mov     eax, dword ptr [ebp + 0x8]
        fld     qword ptr [eax]
        mov     dword ptr [ebp - 0x3c], edx
        mov     edx, dword ptr [g_007b8c64]
        mov     dword ptr [ebp - 0x34], ecx
        lea     eax, [ebx + 0x28]
        lea     ecx, [ebp - 0x6c]
        fstp    qword ptr [ebp - 0x2c]
        mov     dword ptr [ebp - 0x30], edx
        mov     dword ptr [ebp - 0x24], 0xbf800000
        mov     dword ptr [ebp - 0x18], eax
        mov     dword ptr [ebp - 0x20], 0x0
        mov     dword ptr [ebp - 0x1c], 0xbf800000
        mov     dword ptr [ebp - 0x14], ecx
        test    edi, edi
        jz      L4894
L4846:
        mov     esi, dword ptr [edi]
        test    esi, esi
        mov     edi, dword ptr [edi + 0x4]
        jz      L4894
        mov     edx, dword ptr [esi]
        lea     eax, [ebp - 0x2c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0xc]
        test    al, al
        jnz     L486C
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx]
        __emit 0xEB   /* jmp L4846: MSVC6 miscomputes backward rel offset (DE vs ref DA) */
        __emit 0xDA
L486C:
        lea     eax, [ebx + 0x58]
        push    eax
        lea     eax, [ebp - 0x6c]
        push    eax
        lea     ecx, [ebp - 0xac]
        call    FUN_00417d80
        mov     ecx, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [ecx + 0x18]
        lea     edx, [ebp - 0xac]
        push    edx
        push    ecx
        call    FUN_004188e0
        __emit 0xEB   /* jmp L4846: MSVC6 miscomputes backward rel offset (B6 vs ref B2) */
        __emit 0xB2
L4894:
        mov     ecx, dword ptr [ebp + 0x8]
        fld     dword ptr [ebp - 0x10]
        mov     eax, dword ptr [ecx]
        fcomp   dword ptr [g_0076d064]
        mov     edx, dword ptr [ecx + 0x4]
        mov     dword ptr [ebx + 0x88], eax
        mov     eax, dword ptr [ebp - 0x10]
        mov     dword ptr [ebx + 0x90], eax
        __emit 0xDF   /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        mov     dword ptr [ebx + 0x8c], edx
        __emit 0xF6   /* test ah, imm8 */
        __emit 0xC4
        __emit 0x01
        jnz     L48F4
        mov     edx, dword ptr [ebx + 0x9c]
        shr     edx, 0x1
        test    dl, 0x1
        mov     dword ptr [ebx + 0x90], 0x3f800000
        jz      L48E2
        mov     eax, dword ptr [ebx]
        push    ecx
        mov     ecx, ebx
        call    dword ptr [eax + 0x4]
        jmp     L48F4
L48E2:
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [edx + 0x18]
        test    al, al
        jz      L48F4
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax + 0x10]
L48F4:
        call    FUN_006f49a0
        mov     eax, dword ptr [ebx + 0x9c]
        pop     edi
        pop     esi
        and     eax, 0x1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
