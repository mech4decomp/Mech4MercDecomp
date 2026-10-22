/*
 * FUN_006a5020 (368 B) — __cdecl ABL helper. Given an object (param_1) and a
 * flag (param_2), walks a list via virtual method +0x3c, copies a 0xc-dword
 * transform from the object (+0xd8), computes a vector difference via
 * FUN_00419480 / FUN_0040d560, and returns a float constant depending on a
 * dot-product comparison against 0x0076d070.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0040d560(void);
extern float g_0076d064;
extern float g_0076c5b0;
extern float g_0076d070;

__declspec(naked) void FUN_006a5020(void)
{
    __asm {
        mov     al, byte ptr [esp + 0x8]
        sub     esp, 0x60
        cmp     al, 0x1
        push    ebx
        mov     ebx, dword ptr [esp + 0x68]
        push    esi
        push    edi
        jnz     L_50b0

        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax + 0x3c]
        mov     ecx, dword ptr [eax + 0x410]
        mov     esi, dword ptr [eax + 0x40c]
        sub     ecx, esi
        sar     ecx, 0x2
        jz      L_50b0
        mov     edx, esi
        mov     eax, dword ptr [edx]
        test    eax, eax
        jz      L_50b0

        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax + 0x3c]
        mov     ecx, dword ptr [eax + 0x410]
        mov     esi, dword ptr [eax + 0x40c]
        sub     ecx, esi
        sar     ecx, 0x2
        jz      L_5074
        mov     edx, esi
        mov     eax, dword ptr [edx]
        jmp     L_5076
L_5074:
        xor     eax, eax
L_5076:
        mov     ecx, dword ptr [eax + 0x17c]
        test    ecx, ecx
        jz      L_50b0

        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax + 0x3c]
        mov     ecx, dword ptr [eax + 0x410]
        mov     esi, dword ptr [eax + 0x40c]
        sub     ecx, esi
        sar     ecx, 0x2
        jz      L_50a6
        mov     edx, esi
        mov     eax, dword ptr [edx]
        mov     eax, dword ptr [eax + 0x17c]
        jmp     L_50b7
L_50a6:
        xor     eax, eax
        mov     eax, dword ptr [eax + 0x17c]
        jmp     L_50b7

L_50b0:
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [edx + 0x3c]
L_50b7:
        mov     esi, dword ptr [eax + 0xd8]
        add     esi, 0x80
        mov     ecx, 0xc
        lea     edi, [esp + 0x3c]
        lea     eax, [esp + 0x3c]
        rep movsd
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_00419480
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [edx + 0x34]
        mov     eax, dword ptr [eax + 0xd8]
        fld     dword ptr [eax + 0x8c]
        mov     ecx, dword ptr [eax + 0x9c]
        fsub    dword ptr [esp + 0x18]
        mov     edx, dword ptr [eax + 0xac]
        add     eax, 0x80
        mov     dword ptr [esp + 0x10], ecx
        fstp    dword ptr [esp + 0x24]
        mov     dword ptr [esp + 0x14], edx
        fld     dword ptr [esp + 0x10]
        lea     eax, [esp + 0x24]
        fsub    dword ptr [esp + 0x1c]
        push    eax
        lea     ecx, [esp + 0x34]
        fstp    dword ptr [esp + 0x2c]
        fld     dword ptr [esp + 0x18]
        fsub    dword ptr [esp + 0x24]
        fstp    dword ptr [esp + 0x30]
        call    FUN_0040d560
        fld     dword ptr [esp + 0x44]
        pop     edi
        fld     dword ptr [esp + 0x50]
        pop     esi
        fld     dword ptr [esp + 0x5c]
        pop     ebx
        fld     dword ptr [esp + 0x2c]
        fmul    st(0), st(1)
        fld     dword ptr [esp + 0x28]
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fxch    st(3)
        fmul    dword ptr [esp + 0x24]
        faddp   st(3), st(0)
        fxch    st(2)
        fadd    dword ptr [g_0076d064]
        fmul    dword ptr [g_0076d070]
        fcomp   dword ptr [g_0076d070]
        fxch    st(1)
        fstp    st(0)
        fstp    st(0)
        __emit 0xDF   /* __emit: fnstsw ax — MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 — MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jnz     L_5186
        fld     dword ptr [g_0076d064]
        add     esp, 0x60
        ret
L_5186:
        fld     dword ptr [g_0076c5b0]
        add     esp, 0x60
        ret
    }
}
