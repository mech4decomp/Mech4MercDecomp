/*
 * FUN_5e005050 (455 B) — DirectDraw wrapper helper (per-element transform).
 *
 * __thiscall (ECX = this), RET 0x8 (2 stack params: param_1, param_2).
 * Loops over param_1[], applying float transforms based on flag bits in
 * element[0x20], writing results to element[0..0xc].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_5e035aa0;              /* DAT_5e035aa0 (float constant) */
extern float g_5e035aa4;              /* DAT_5e035aa4 (float constant) */
extern float g_5e035ab4;              /* DAT_5e035ab4 (float constant) */

__declspec(naked) void FUN_5e005050(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        sub     esp, 0x10
        push    ebx
        xor     ebx, ebx
        cmp     eax, ebx
        jle     L_5210
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x24]
        mov     ebp, eax
    L_506b:
        mov     edx, dword ptr [edi]
        mov     esi, dword ptr [edx + 0x20]
        mov     eax, esi
        and     eax, 0x300
        cmp     eax, 0x100
        jz      L_50e3
        cmp     eax, 0x200
        jz      L_50d4
        fld     dword ptr [g_5e035aa4]
        fdiv    dword ptr [edx + 0x30]
        fcom    dword ptr [g_5e035ab4]
        fnstsw ax
        __emit 0xF6          /* __emit: TEST AH,0x1 (F6 C4 01); MSVC6 rejects test ah,imm8 */
        les eax, dword ptr [ecx]
        jz      L_50a3
        fstp    st(0)
        fld     dword ptr [g_5e035ab4]
    L_50a3:
        fld     st(0)
        fmul    dword ptr [edx + 0x2c]
        fst     dword ptr [edx + 0x8]
        fcomp   dword ptr [g_5e035aa0]
        fnstsw ax
        __emit 0xF6          /* __emit: TEST AH,0x1 (F6 C4 01) */
        les eax, dword ptr [ecx]
        jz      L_50bb
        mov     dword ptr [edx + 0x8], ebx
    L_50bb:
        fld     dword ptr [edx + 0x8]
        fcomp   dword ptr [g_5e035aa4]
        fnstsw ax
        test ah, 0x41
        jnz     L_50f0
        mov     dword ptr [edx + 0x8], 0x3f800000
        jmp     L_50f0
    L_50d4:
        fld     dword ptr [g_5e035ab4]
        mov     dword ptr [edx + 0x8], 0x3f800000
        jmp     L_50f0
    L_50e3:
        fld     dword ptr [g_5e035aa4]
        mov     dword ptr [edx + 0x8], 0x2edbe6ff
    L_50f0:
        mov     eax, esi
        and     eax, 0xc00
        cmp     eax, 0x400
        jz      L_515c
        cmp     eax, 0x800
        jz      L_514c
        fld     dword ptr [ecx + 0x4598]
        fmul    dword ptr [edx + 0x24]
        fmul    st(0), st(1)
        fadd    dword ptr [ecx + 0x45a0]
        fst     dword ptr [edx]
        fcomp   dword ptr [g_5e035aa0]
        fnstsw ax
        __emit 0xF6          /* __emit: TEST AH,0x1 (F6 C4 01) */
        les eax, dword ptr [ecx]
        jz      L_5127
        mov     dword ptr [edx], ebx
    L_5127:
        mov     eax, dword ptr [ecx + 0x4558]
        mov     dword ptr [esp + 0x14], ebx
        add     eax, dword ptr [ecx + 0x4550]
        mov     dword ptr [esp + 0x10], eax
        fild    qword ptr [esp + 0x10]
        fcom    dword ptr [edx]
        fnstsw ax
        __emit 0xF6          /* __emit: TEST AH,0x1 (F6 C4 01) */
        les eax, dword ptr [ecx]
        jz      L_5172
        fstp    dword ptr [edx]
        jmp     L_5174
    L_514c:
        fld     dword ptr [ecx + 0x45a0]
        fadd    dword ptr [ecx + 0x4598]
        fstp    dword ptr [edx]
        jmp     L_5174
    L_515c:
        fld     dword ptr [ecx + 0x4598]
        fmul    dword ptr [g_5e035ab4]
        fadd    dword ptr [ecx + 0x45a0]
        fstp    dword ptr [edx]
        jmp     L_5174
    L_5172:
        fstp    st(0)
    L_5174:
        mov     eax, esi
        and     eax, 0x3000
        cmp     eax, 0x1000
        jz      L_51e7
        cmp     eax, 0x2000
        jz      L_51d6
        fld     dword ptr [ecx + 0x459c]
        fmul    dword ptr [edx + 0x28]
        fmul    st(0), st(1)
        fadd    dword ptr [ecx + 0x45a4]
        fst     dword ptr [edx + 0x4]
        fcomp   dword ptr [g_5e035aa0]
        fnstsw ax
        __emit 0xF6          /* __emit: TEST AH,0x1 (F6 C4 01) */
        les eax, dword ptr [ecx]
        jz      L_51ad
        mov     dword ptr [edx + 0x4], ebx
    L_51ad:
        mov     eax, dword ptr [ecx + 0x455c]
        mov     esi, dword ptr [ecx + 0x4554]
        add     eax, esi
        mov     dword ptr [esp + 0x1c], ebx
        mov     dword ptr [esp + 0x18], eax
        fild    qword ptr [esp + 0x18]
        fcom    dword ptr [edx + 0x4]
        fnstsw ax
        __emit 0xF6          /* __emit: TEST AH,0x1 (F6 C4 01) */
        les eax, dword ptr [ecx]
        jz      L_51fe
        fstp    dword ptr [edx + 0x4]
        jmp     L_5200
    L_51d6:
        fld     dword ptr [ecx + 0x45a4]
        fadd    dword ptr [ecx + 0x459c]
        fstp    dword ptr [edx + 0x4]
        jmp     L_5200
    L_51e7:
        fld     dword ptr [ecx + 0x459c]
        fmul    dword ptr [g_5e035ab4]
        fadd    dword ptr [ecx + 0x45a4]
        fstp    dword ptr [edx + 0x4]
        jmp     L_5200
    L_51fe:
        fstp    st(0)
    L_5200:
        fstp    dword ptr [edx + 0xc]
        add     edi, 4
        dec     ebp
        jnz     L_506b
        pop     edi
        pop     esi
        pop     ebp
    L_5210:
        pop     ebx
        add     esp, 0x10
        ret     0x8
    }
}
