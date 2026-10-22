/*
 * FUN_00604F30 (669 B) — __thiscall animation curve evaluator.
 *
 * Clamps the input parameter, applies a per-type curve function via a
 * jump table (13 cases + default), then scales/offsets the result.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00604df0(void);
extern void __cdecl FUN_006fab90(void);
extern float g_76d064;
extern float g_76d070;
extern float g_78b950;
extern float g_7704c4;
extern int g_6051d0;

__declspec(naked) void FUN_00604f30(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        fld     dword ptr [ebp + 8]
        push    esi
        mov     esi, ecx
        fcomp   dword ptr [esi + 0xc]
        mov     dword ptr [ebp - 4], 0
        __emit 0xDF   /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8; ref uses F6 C4 01 */
        __emit 0xC4
        __emit 0x01
        jz      L_4f54
        mov     dword ptr [ebp + 8], 0
        jmp     L_4f79
L_4f54:
        fld     dword ptr [ebp + 8]
        fcomp   dword ptr [esi + 0x10]
        __emit 0xDF   /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8; ref uses F6 C4 41 */
        __emit 0xC4
        __emit 0x41
        jnz     L_4f6a
        mov     dword ptr [ebp + 8], 0x3f800000
        jmp     L_4f79
L_4f6a:
        fld     dword ptr [ebp + 8]
        fsub    dword ptr [esi + 0xc]
        fdiv    dword ptr [esi + 0x10]
        fsub    dword ptr [esi + 0xc]
        fstp    dword ptr [ebp + 8]
L_4f79:
        mov     al, byte ptr [esi + 0x14]
        test    al, al
        jz      L_4f8c
        fld     dword ptr [g_76d064]
        fsub    dword ptr [ebp + 8]
        fstp    dword ptr [ebp + 8]
L_4f8c:
        mov     eax, dword ptr [esi]
        cmp     eax, 0xc
        ja      L_5199
        jmp     dword ptr [eax*4 + g_6051d0]
L_4f9e:
        fld     dword ptr [ebp + 8]
        jmp     L_51ae
L_4fa6:
        fld     dword ptr [ebp + 8]
        fmul    dword ptr [ebp + 8]
        fmul    dword ptr [ebp + 8]
        jmp     L_51ae
L_4fb4:
        fld     dword ptr [ebp + 8]
        fmul    dword ptr [ebp + 8]
        fld     st(0)
        fmul    dword ptr [ebp + 8]
        fmul    dword ptr [g_78b950]
        fxch
        fmul    dword ptr [g_7704c4]
        faddp   st(1), st(0)
        jmp     L_51ae
L_4fd4:
        fld     dword ptr [ebp + 8]
        fsub    dword ptr [g_76d070]
        fadd    st(0), st(0)
        fabs
        fsubr   dword ptr [g_76d064]
        jmp     L_51ae
L_4fec:
        mov     eax, dword ptr [ebp + 8]
        push    eax
        mov     ecx, 0x7f2748
        call    FUN_00604df0
        jmp     L_51ae
L_4fff:
        mov     ecx, dword ptr [ebp + 8]
        push    ecx
        mov     ecx, 0x7f2738
        call    FUN_00604df0
        jmp     L_51ae
L_5012:
        mov     edx, dword ptr [ebp + 8]
        push    edx
        mov     ecx, 0x7f2728
        call    FUN_00604df0
        jmp     L_51ae
L_5025:
        mov     eax, dword ptr [ebp + 8]
        push    eax
        mov     ecx, 0x7f2718
        call    FUN_00604df0
        jmp     L_51ae
L_5038:
        fld     dword ptr [ebp + 8]
        fcomp   dword ptr [g_76d070]
        fld     dword ptr [ebp + 8]
        __emit 0xDF   /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8; ref uses F6 C4 01 */
        __emit 0xC4
        __emit 0x01
        jnz     L_506c
        fsub    dword ptr [g_76d070]
        push    ecx
        mov     ecx, 0x7f2708
        fadd    st(0), st(0)
        fsubr   dword ptr [g_76d064]
        fstp    dword ptr [esp]
        call    FUN_00604df0
        jmp     L_51ae
L_506c:
        fadd    st(0), st(0)
        push    ecx
        mov     ecx, 0x7f2708
        fstp    dword ptr [esp]
        call    FUN_00604df0
        jmp     L_51ae
L_5081:
        fld     dword ptr [ebp + 8]
        fcomp   dword ptr [g_76d070]
        fld     dword ptr [ebp + 8]
        __emit 0xDF   /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8; ref uses F6 C4 01 */
        __emit 0xC4
        __emit 0x01
        jnz     L_50b5
        fsub    dword ptr [g_76d070]
        push    ecx
        mov     ecx, 0x7f26f8
        fadd    st(0), st(0)
        fsubr   dword ptr [g_76d064]
        fstp    dword ptr [esp]
        call    FUN_00604df0
        jmp     L_51ae
L_50b5:
        fadd    st(0), st(0)
        push    ecx
        mov     ecx, 0x7f26f8
        fstp    dword ptr [esp]
        call    FUN_00604df0
        jmp     L_51ae
L_50ca:
        fld     dword ptr [ebp + 8]
        fcomp   dword ptr [g_76d070]
        fld     dword ptr [ebp + 8]
        __emit 0xDF   /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8; ref uses F6 C4 01 */
        __emit 0xC4
        __emit 0x01
        jnz     L_50fe
        fsub    dword ptr [g_76d070]
        push    ecx
        mov     ecx, 0x7f26e8
        fadd    st(0), st(0)
        fsubr   dword ptr [g_76d064]
        fstp    dword ptr [esp]
        call    FUN_00604df0
        jmp     L_51ae
L_50fe:
        fadd    st(0), st(0)
        push    ecx
        mov     ecx, 0x7f26e8
        fstp    dword ptr [esp]
        call    FUN_00604df0
        jmp     L_51ae
L_5113:
        fld     dword ptr [ebp + 8]
        fcomp   dword ptr [g_76d070]
        fld     dword ptr [ebp + 8]
        __emit 0xDF   /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8; ref uses F6 C4 01 */
        __emit 0xC4
        __emit 0x01
        jnz     L_5144
        fsub    dword ptr [g_76d070]
        push    ecx
        mov     ecx, 0x7f26d8
        fadd    st(0), st(0)
        fsubr   dword ptr [g_76d064]
        fstp    dword ptr [esp]
        call    FUN_00604df0
        jmp     L_51ae
L_5144:
        fadd    st(0), st(0)
        push    ecx
        mov     ecx, 0x7f26d8
        fstp    dword ptr [esp]
        call    FUN_00604df0
        jmp     L_51ae
L_5156:
        fld     dword ptr [ebp + 8]
        fcomp   dword ptr [g_76d070]
        fld     dword ptr [ebp + 8]
        __emit 0xDF   /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8; ref uses F6 C4 01 */
        __emit 0xC4
        __emit 0x01
        jnz     L_5187
        fsub    dword ptr [g_76d070]
        push    ecx
        mov     ecx, 0x7f26c8
        fadd    st(0), st(0)
        fsubr   dword ptr [g_76d064]
        fstp    dword ptr [esp]
        call    FUN_00604df0
        jmp     L_51ae
L_5187:
        fadd    st(0), st(0)
        push    ecx
        mov     ecx, 0x7f26c8
        fstp    dword ptr [esp]
        call    FUN_00604df0
        jmp     L_51ae
L_5199:
        push    0x78b92c
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_51ab
        int     3
L_51ab:
        fld     dword ptr [ebp - 4]
L_51ae:
        fld     dword ptr [esi + 8]
        mov     al, byte ptr [esi + 0x15]
        test    al, al
        fsub    dword ptr [esi + 4]
        fmulp   st(1), st(0)
        fadd    dword ptr [esi + 4]
        pop     esi
        jz      L_51c7
        fsubr   dword ptr [g_76d064]
L_51c7:
        mov     esp, ebp
        pop     ebp
        ret     4
    }
}
