/*
 * FUN_5e003cc0 (998 B) — DirectDraw wrapper: matrix/vector transform math
 * (rotation, normalization) driven by flags in the word at obj+0x45a8.
 *
 * __thiscall-style (ECX = this), RET (no stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_5e035aa0;
extern float g_5e035aa4;
extern float g_5e035aa8;
extern float g_5e035aac;
extern float g_5e035ab0;
extern int __cdecl FUN_5e02b4cc(void);

__declspec(naked) void FUN_5e003cc0(void)
{
    __asm {
        sub     esp, 0x18
        push    esi
        mov     esi, ecx
        push    edi
        mov     di, word ptr [esi + 0x45a8]
        test    edi, 0x4000
        jz      L_f64
        fld     dword ptr [esi + 0x40e4]
        fmul    dword ptr [esi + 0x409c]
        lea     ecx, [esi + 0x41c0]
        lea     edx, [esi + 0x4104]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [edx]
        mov     ebx, ecx
        fst     dword ptr [esi + 0x41b0]
        fld     dword ptr [esi + 0x40e8]
        fmul    dword ptr [esi + 0x40a0]
        mov     eax, dword ptr [esi + 0x47d8]
        mov     dword ptr [ebx], ebp
        mov     ebp, dword ptr [edx + 0x4]
        mov     dword ptr [ebx + 0x4], ebp
        fst     dword ptr [esp + 0x20]
        fstp    dword ptr [esi + 0x41b4]
        mov     ebp, dword ptr [edx + 0x8]
        fld     dword ptr [esi + 0x40ec]
        mov     edx, dword ptr [edx + 0xc]
        mov     dword ptr [ebx + 0x8], ebp
        fmul    dword ptr [esi + 0x40a4]
        mov     dword ptr [ebx + 0xc], edx
        mov     edx, eax
        shr     edx, 0x10
        and     edx, 0xff
        mov     ebx, eax
        fst     dword ptr [esp + 0x24]
        fstp    dword ptr [esi + 0x41b8]
        fld     dword ptr [esi + 0x40a8]
        mov     dword ptr [esp + 0x14], edx
        xor     edx, edx
        fst     dword ptr [esi + 0x41bc]
        mov     dword ptr [esp + 0x18], edx
        and     eax, 0xff
        fild    qword ptr [esp + 0x14]
        shr     ebx, 0x8
        and     ebx, 0xff
        mov     dword ptr [esp + 0x18], edx
        fmul    dword ptr [esi + 0x40ac]
        mov     dword ptr [esp + 0x14], ebx
        fmul    dword ptr [g_5e035ab0]
        fadd    dword ptr [esi + 0x40cc]
        fadd    dword ptr [ecx]
        fst     dword ptr [ecx]
        fild    qword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x18], edx
        fmul    dword ptr [esi + 0x40b0]
        fmul    dword ptr [g_5e035ab0]
        fadd    dword ptr [esi + 0x40d0]
        fadd    dword ptr [esi + 0x41c4]
        fst     dword ptr [esp + 0x10]
        fstp    dword ptr [esi + 0x41c4]
        fild    qword ptr [esp + 0x14]
        fmul    dword ptr [esi + 0x40b4]
        fmul    dword ptr [g_5e035ab0]
        fadd    dword ptr [esi + 0x40d4]
        fadd    dword ptr [esi + 0x41c8]
        fst     dword ptr [esp + 0x14]
        fstp    dword ptr [esi + 0x41c8]
        fcom    dword ptr [g_5e035aa4]
        fnstsw ax
        __emit 0xF6            /* __emit: TEST AH,imm8 (F6 C4 01) */
        les eax, dword ptr [ecx]
        jz      L_e15
        fld     st(0)
        fld     dword ptr [g_5e035aa0]
        fcomp
        fnstsw ax
        test ah, 0x41
        fstp    st(0)
        jnz     L_e15
        fstp    st(0)
        fld     dword ptr [g_5e035aa0]
        jmp     L_e2a
L_e15:
        fcom    dword ptr [g_5e035aa4]
        fnstsw ax
        __emit 0xF6            /* __emit: TEST AH,imm8 */
        les eax, dword ptr [ecx]
        jnz     L_e2a
        fstp    st(0)
        fld     dword ptr [g_5e035aa4]
L_e2a:
        fst     dword ptr [ecx]
        fld     dword ptr [esp + 0x10]
        fcomp   dword ptr [g_5e035aa4]
        fnstsw ax
        __emit 0xF6            /* __emit: TEST AH,imm8 */
        les eax, dword ptr [ecx]
        jz      L_e5a
        fld     dword ptr [esp + 0x10]
        fld     dword ptr [g_5e035aa0]
        fcomp
        fnstsw ax
        test ah, 0x41
        fstp    st(0)
        jnz     L_e5a
        fld     dword ptr [g_5e035aa0]
        jmp     L_e77
L_e5a:
        fld     dword ptr [esp + 0x10]
        fcomp   dword ptr [g_5e035aa4]
        fnstsw ax
        __emit 0xF6            /* __emit: TEST AH,imm8 */
        les eax, dword ptr [ecx]
        jz      L_e71
        fld     dword ptr [esp + 0x10]
        jmp     L_e77
L_e71:
        fld     dword ptr [g_5e035aa4]
L_e77:
        fst     dword ptr [esi + 0x41c4]
        fld     dword ptr [esp + 0x14]
        fcomp   dword ptr [g_5e035aa4]
        fnstsw ax
        __emit 0xF6            /* __emit: TEST AH,imm8 */
        les eax, dword ptr [ecx]
        jz      L_eab
        fld     dword ptr [esp + 0x14]
        fld     dword ptr [g_5e035aa0]
        fcomp
        fnstsw ax
        test ah, 0x41
        fstp    st(0)
        jnz     L_eab
        fld     dword ptr [g_5e035aa0]
        jmp     L_ec8
L_eab:
        fld     dword ptr [esp + 0x14]
        fcomp   dword ptr [g_5e035aa4]
        fnstsw ax
        __emit 0xF6            /* __emit: TEST AH,imm8 */
        les eax, dword ptr [ecx]
        jz      L_ec2
        fld     dword ptr [esp + 0x14]
        jmp     L_ec8
L_ec2:
        fld     dword ptr [g_5e035aa4]
L_ec8:
        fst     dword ptr [esi + 0x41c8]
        fxch    st(3)
        fmul    dword ptr [g_5e035aac]
        call    FUN_5e02b4cc
        fxch    st(1)
        fmul    dword ptr [g_5e035aac]
        mov     ebx, eax
        shl     ebx, 0x8
        call    FUN_5e02b4cc
        fmul    dword ptr [g_5e035aac]
        or      ebx, eax
        shl     ebx, 0x8
        call    FUN_5e02b4cc
        fmul    dword ptr [g_5e035aac]
        or      ebx, eax
        shl     ebx, 0x8
        call    FUN_5e02b4cc
        fcomp   dword ptr [g_5e035aa0]
        or      ebx, eax
        pop     ebp
        mov     dword ptr [esi + 0x41d0], ebx
        pop     ebx
        fnstsw ax
        test ah, 0x40
        jz      L_f4e
        fld     dword ptr [esp + 0x18]
        fcomp   dword ptr [g_5e035aa0]
        fnstsw ax
        test ah, 0x40
        jz      L_f4e
        fld     dword ptr [esp + 0x1c]
        fcomp   dword ptr [g_5e035aa0]
        fnstsw ax
        test ah, 0x40
        jz      L_f4e
        or      edi, 0x2000
        jmp     L_f54
L_f4e:
        and     edi, 0xdfff
L_f54:
        mov     word ptr [esi + 0x45a8], di
        and     word ptr [esi + 0x45a8], 0xbfff
L_f64:
        mov     cx, word ptr [esi + 0x45a8]
        __emit 0xF6            /* __emit: TEST CH,imm8 (F6 C5 10); MSVC6 rejects high-byte reg test */
        __emit 0xC5
        __emit 0x10
        jz      L_a0
        __emit 0xF6            /* __emit: TEST CH,imm8 (F6 C5 20) */
        __emit 0xC5
        __emit 0x20
        jnz     L_93
        fld     dword ptr [esi + 0x4120]
        fmul    dword ptr [g_5e035aa8]
        lea     eax, [esi + 0x41d4]
        mov     edx, eax
        fstp    dword ptr [esp + 0xc]
        fld     dword ptr [esi + 0x4124]
        fmul    dword ptr [g_5e035aa8]
        mov     edi, dword ptr [esp + 0xc]
        mov     dword ptr [edx], edi
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [esi + 0x4128]
        fmul    dword ptr [g_5e035aa8]
        mov     edi, dword ptr [esp + 0x10]
        mov     dword ptr [edx + 0x4], edi
        fstp    dword ptr [esp + 0x14]
        mov     edi, dword ptr [esp + 0x14]
        mov     dword ptr [edx + 0x8], edi
        fld     dword ptr [eax]
        fld     dword ptr [eax + 0x4]
        fld     dword ptr [eax + 0x8]
        fld     st(0)
        fmul    dword ptr [esi + 0x4394]
        fld     st(2)
        fmul    dword ptr [esi + 0x4390]
        faddp   st(1), st(0)
        fld     st(3)
        fmul    dword ptr [esi + 0x438c]
        faddp   st(1), st(0)
        fstp    dword ptr [esp + 0xc]
        mov     edi, dword ptr [esp + 0xc]
        fld     st(0)
        fmul    dword ptr [esi + 0x43a4]
        fld     st(2)
        fmul    dword ptr [esi + 0x43a0]
        mov     dword ptr [edx], edi
        faddp   st(1), st(0)
        fld     st(3)
        fmul    dword ptr [esi + 0x439c]
        faddp   st(1), st(0)
        fstp    dword ptr [esp + 0x10]
        mov     edi, dword ptr [esp + 0x10]
        fmul    dword ptr [esi + 0x43b4]
        fxch    st(1)
        fmul    dword ptr [esi + 0x43b0]
        mov     dword ptr [edx + 0x4], edi
        faddp   st(1), st(0)
        fxch    st(1)
        fmul    dword ptr [esi + 0x43ac]
        faddp   st(1), st(0)
        fstp    dword ptr [esp + 0x14]
        mov     edi, dword ptr [esp + 0x14]
        mov     dword ptr [edx + 0x8], edi
        fld     dword ptr [eax + 0x8]
        fld     dword ptr [eax + 0x4]
        fld     dword ptr [eax]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fsqrt
        fstp    st(3)
        fstp    st(0)
        fstp    st(0)
        fld     dword ptr [eax]
        fdiv    st(0), st(1)
        fstp    dword ptr [esp + 0xc]
        fld     dword ptr [eax + 0x4]
        fdiv    st(0), st(1)
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [eax + 0x8]
        fdiv    st(0), st(1)
        mov     edx, dword ptr [esp + 0xc]
        fstp    dword ptr [esp + 0x14]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [eax + 0x4], edx
        mov     edx, dword ptr [esp + 0x14]
        fstp    st(0)
        mov     dword ptr [eax + 0x8], edx
L_93:
        and     ecx, 0xefff
        mov     word ptr [esi + 0x45a8], cx
L_a0:
        pop     edi
        pop     esi
        add     esp, 0x18
        ret
    }
}
