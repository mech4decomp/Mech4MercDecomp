/*
 * FUN_00420250 (1119 B) — __thiscall (RET 0x4). Orthonormalizes a 3x3
 * rotation matrix (Gram-Schmidt style) from a set of input vectors.
 * Heavy FPU stack usage; writes 12 floats to the `this` object (ECX).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern double g_0076d970;
extern double g_0076d968;
extern float  g_0076d064;

__declspec(naked) void FUN_00420250(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0xc4
        fld     qword ptr [g_0076d970]
        mov     eax, dword ptr [ebp + 0x8]
        fld     qword ptr [g_0076d970]
        mov     edx, dword ptr [eax + 0x4]
        test    edx, edx
        fst     qword ptr [esp + 0x74]
        fld     qword ptr [g_0076d970]
        push    ebx
        fld     qword ptr [g_0076d970]
        push    esi
        fst     qword ptr [esp + 0x3c]
        push    edi
        fld     qword ptr [g_0076d970]
        mov     dword ptr [esp + 0x78], 0x0
        fst     qword ptr [esp + 0x30]
        mov     dword ptr [esp + 0x7c], 0x0
        fld     qword ptr [g_0076d970]
        mov     dword ptr [esp + 0x38], 0x0
        fst     qword ptr [esp + 0x58]
        mov     dword ptr [esp + 0x3c], 0x0
        fld     qword ptr [g_0076d970]
        fst     qword ptr [esp + 0x20]
        jbe     L_42049c
        mov     eax, dword ptr [eax]
        mov     esi, edx
L_4202cf:
        fld     dword ptr [eax]
        mov     edi, dword ptr [eax]
        faddp   st(7), st(0)
        mov     dword ptr [esp + 0x40], edi
        fld     dword ptr [eax + 0x4]
        mov     edi, dword ptr [eax + 0x4]
        faddp   st(6), st(0)
        mov     dword ptr [esp + 0x68], edi
        fld     dword ptr [eax + 0x8]
        mov     edi, dword ptr [eax + 0x8]
        fadd    qword ptr [esp + 0x78]
        mov     dword ptr [esp + 0x30], edi
        add     eax, 0xc
        dec     esi
        fstp    qword ptr [esp + 0x78]
        fld     dword ptr [esp + 0x40]
        fmul    dword ptr [esp + 0x40]
        faddp   st(5), st(0)
        fld     dword ptr [eax - 0x8]
        fmul    dword ptr [eax - 0xc]
        faddp   st(4), st(0)
        fld     dword ptr [eax - 0x4]
        fmul    dword ptr [eax - 0xc]
        faddp   st(3), st(0)
        fld     dword ptr [esp + 0x68]
        fmul    dword ptr [esp + 0x68]
        faddp   st(2), st(0)
        fld     dword ptr [eax - 0x8]
        fmul    dword ptr [eax - 0x4]
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x30]
        fmul    dword ptr [esp + 0x30]
        fadd    qword ptr [esp + 0x38]
        fstp    qword ptr [esp + 0x38]
        jnz     L_4202cf
        fst     qword ptr [esp + 0x20]
        fxch    st(5)
        fst     qword ptr [esp + 0x80]
        fxch    st(5)
        fstp    st(0)
        fstp    qword ptr [esp + 0x58]
        fstp    qword ptr [esp + 0x30]
        fstp    qword ptr [esp + 0x40]
L_420356:
        mov     dword ptr [esp + 0x48], edx
        mov     dword ptr [esp + 0x4c], 0x0
        fild    qword ptr [esp + 0x48]
        fdivr   qword ptr [g_0076d968]
        fst     qword ptr [esp + 0x70]
        fmul    st(0), st(3)
        fst     qword ptr [esp + 0x10]
        fmul    st(0), st(3)
        fsubr   st(0), st(1)
        fstp    qword ptr [esp + 0x68]
        mov     eax, dword ptr [esp + 0x68]
        fstp    st(0)
        mov     edx, dword ptr [esp + 0x6c]
        fld     qword ptr [esp + 0x70]
        mov     dword ptr [esp + 0x88], eax
        fmul    st(0), st(1)
        mov     dword ptr [esp + 0x8c], edx
        fstp    qword ptr [esp + 0x48]
        fstp    st(0)
        fld     qword ptr [esp + 0x48]
        fmul    st(0), st(1)
        fsubr   qword ptr [esp + 0x40]
        fstp    qword ptr [esp + 0x40]
        fld     qword ptr [esp + 0x70]
        fmul    qword ptr [esp + 0x78]
        fst     qword ptr [esp + 0x70]
        fmul    st(0), st(1)
        fsubr   qword ptr [esp + 0x30]
        fstp    qword ptr [esp + 0x30]
        mov     eax, dword ptr [esp + 0x30]
        fstp    st(0)
        mov     edx, dword ptr [esp + 0x34]
        fld     qword ptr [esp + 0x48]
        mov     dword ptr [esp + 0x98], eax
        fmul    qword ptr [esp + 0x80]
        mov     dword ptr [esp + 0xb8], eax
        mov     dword ptr [esp + 0x9c], edx
        mov     dword ptr [esp + 0xbc], edx
        fsubr   qword ptr [esp + 0x58]
        fld     qword ptr [esp + 0x70]
        fmul    qword ptr [esp + 0x80]
        fsubr   qword ptr [esp + 0x20]
        fld     qword ptr [esp + 0x70]
        fld     st(0)
        fmul    qword ptr [esp + 0x78]
        fsubr   qword ptr [esp + 0x38]
        fstp    qword ptr [esp + 0x38]
        fld     qword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x38]
        fstp    dword ptr [ecx + 0xc]
        mov     edx, dword ptr [esp + 0x3c]
        fld     qword ptr [esp + 0x48]
        mov     dword ptr [esp + 0xc8], eax
        fstp    dword ptr [ecx + 0x1c]
        mov     dword ptr [esp + 0xcc], edx
        fstp    dword ptr [ecx + 0x2c]
        fld     qword ptr [esp + 0x40]
        fst     qword ptr [esp + 0x90]
        fstp    qword ptr [esp + 0xa0]
        fld     st(1)
        fstp    qword ptr [esp + 0xa8]
        fst     qword ptr [esp + 0xb0]
        fstp    qword ptr [esp + 0xc0]
        fld     qword ptr [esp + 0x68]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 0x41
        jnz     L_4204b4
        fld     qword ptr [esp + 0x68]
        fcomp   qword ptr [esp + 0x38]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_4204a9
        fcomp   qword ptr [esp + 0x38]
        xor     esi, esi
        fnstsw  ax
        test    ah, 0x41
        jz      L_4204dc
L_420495:
        mov     eax, 0x2
        jmp     L_4204e1
L_42049c:
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        jmp     L_420356
L_4204a9:
        fstp    st(0)
        mov     esi, 0x2
        xor     eax, eax
        jmp     L_4204e1
L_4204b4:
        fcomp   qword ptr [esp + 0x38]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_4204d7
        fld     qword ptr [esp + 0x68]
        mov     esi, 0x1
        fcomp   qword ptr [esp + 0x38]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_420495
        xor     eax, eax
        jmp     L_4204e1
L_4204d7:
        mov     esi, 0x2
L_4204dc:
        mov     eax, 0x1
L_4204e1:
        mov     ebx, esi
        shl     ebx, 0x5
        lea     ebx, [esp + ebx*0x1 + 0x88]
        mov     dword ptr [esp + 0x30], ebx
        lea     edi, [esi + esi*0x2]
        lea     ebx, [edi + eax*0x1]
        fld     qword ptr [esp + ebx*0x8 + 0x88]
        mov     ebx, dword ptr [esp + 0x30]
        fdiv    qword ptr [ebx]
        mov     dword ptr [esp + esi*0x4 + 0x10], 0x3f800000
        mov     edx, 0x3
        sub     edx, eax
        sub     edx, esi
        add     edi, edx
        fstp    dword ptr [esp + eax*0x4 + 0x10]
        fld     qword ptr [esp + edi*0x8 + 0x88]
        fdiv    qword ptr [ebx]
        lea     edi, [eax + eax*0x2]
        mov     ebx, eax
        shl     ebx, 0x5
        lea     ebx, [esp + ebx*0x1 + 0x88]
        mov     dword ptr [esp + 0x30], ebx
        lea     ebx, [edi + esi*0x1]
        add     edi, edx
        fstp    dword ptr [esp + edx*0x4 + 0x10]
        fld     qword ptr [esp + ebx*0x8 + 0x88]
        mov     ebx, dword ptr [esp + 0x30]
        fdiv    qword ptr [ebx]
        fstp    dword ptr [esp + esi*0x4 + 0x20]
        fld     qword ptr [esp + edi*0x8 + 0x88]
        fdiv    qword ptr [ebx]
        mov     dword ptr [esp + eax*0x4 + 0x20], 0x3f800000
        fstp    dword ptr [esp + edx*0x4 + 0x20]
        fld     dword ptr [esp + 0x18]
        fmul    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x14]
        fmul    dword ptr [esp + 0x14]
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [esp + 0x10]
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x28]
        fmul    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x24]
        fmul    dword ptr [esp + 0x14]
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x20]
        fmul    dword ptr [esp + 0x10]
        faddp   st(1), st(0)
        fdiv    st(0), st(1)
        fchs
        fld     st(0)
        fmul    dword ptr [esp + 0x10]
        fadd    dword ptr [esp + 0x20]
        fstp    dword ptr [esp + 0x20]
        fld     st(0)
        fmul    dword ptr [esp + 0x14]
        fadd    dword ptr [esp + 0x24]
        fstp    dword ptr [esp + 0x24]
        fmul    dword ptr [esp + 0x18]
        fadd    dword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0x28]
        fsqrt
        fdivr   dword ptr [g_0076d064]
        fst     dword ptr [esp + 0x40]
        fmul    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x40]
        fmul    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x4c]
        fld     dword ptr [esp + 0x40]
        fmul    dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x50]
        fld     dword ptr [esp + 0x28]
        fmul    dword ptr [esp + 0x28]
        fld     dword ptr [esp + 0x24]
        fmul    dword ptr [esp + 0x24]
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x20]
        fmul    dword ptr [esp + 0x20]
        faddp   st(1), st(0)
        mov     eax, dword ptr [esp + 0x4c]
        mov     edx, dword ptr [esp + 0x50]
        pop     edi
        fsqrt
        pop     esi
        pop     ebx
        fdivr   dword ptr [g_0076d064]
        fld     st(0)
        fmul    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x4c]
        fld     st(0)
        fmul    dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x50]
        fmul    dword ptr [esp + 0x1c]
        fst     dword ptr [esp + 0x54]
        fmul    dword ptr [esp + 0x40]
        fld     dword ptr [esp + 0x50]
        fmul    dword ptr [esp + 0x44]
        fsubp   st(1), st(0)
        fstp    dword ptr [esp + 0x4]
        fld     dword ptr [esp + 0x4c]
        fmul    dword ptr [esp + 0x44]
        fld     dword ptr [esp + 0x54]
        fmul    st(0), st(2)
        fsubp   st(1), st(0)
        fstp    dword ptr [esp + 0x8]
        fld     dword ptr [esp + 0x50]
        fmul    st(0), st(1)
        fld     dword ptr [esp + 0x4c]
        fmul    dword ptr [esp + 0x40]
        fsubp   st(1), st(0)
        fstp    dword ptr [esp + 0xc]
        fstp    dword ptr [ecx]
        mov     dword ptr [ecx + 0x10], eax
        mov     eax, dword ptr [esp + 0x4c]
        mov     dword ptr [ecx + 0x20], edx
        mov     edx, dword ptr [esp + 0x50]
        mov     dword ptr [ecx + 0x4], eax
        mov     eax, dword ptr [esp + 0x54]
        mov     dword ptr [ecx + 0x14], edx
        mov     edx, dword ptr [esp + 0x4]
        mov     dword ptr [ecx + 0x24], eax
        mov     eax, dword ptr [esp + 0x8]
        mov     dword ptr [ecx + 0x8], edx
        mov     edx, dword ptr [esp + 0xc]
        mov     dword ptr [ecx + 0x18], eax
        mov     dword ptr [ecx + 0x28], edx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
