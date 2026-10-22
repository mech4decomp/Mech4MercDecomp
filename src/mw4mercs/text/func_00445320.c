/*
 * FUN_00445320 (477 B) - MLR mesh/render transform helper (__thiscall, RET 0x8).
 * Transforms a vertex array by a matrix (FPU), computes per-vertex sign/compare
 * flags into a uint array, then calls FUN_00423e00 and virtual slots 0x18/0x8.
 * Returns local_8 (initialized to -1).
 *
 * CFLAGS: /O1
 */

extern int DAT_007da718;   /* pointer */
extern int DAT_007da70c;   /* pointer */
extern int DAT_007da7f8;

extern void __cdecl FUN_00423e00(void);

__declspec(naked) void FUN_00445320(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x1c
        mov     eax, dword ptr [DAT_007da718]
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [edi + 0xa0]
        mov     eax, dword ptr [edx]
        xor     esi, esi
        cmp     eax, esi
        mov     dword ptr [ebp - 0x10], edi
        mov     dword ptr [ebp - 0x8], ecx
        jle     L454b6
        mov     eax, dword ptr [ebp + 0x8]
        add     eax, 0x28
        mov     dword ptr [ebp - 0x1c], eax
        mov     dword ptr [ebp - 0xc], esi
L45356:
        mov     ecx, dword ptr [edi + 0x10]
        mov     eax, dword ptr [ebp - 0xc]
        mov     edx, dword ptr [ebp - 0x8]
        add     ecx, eax
        mov     dword ptr [ebp - 0x18], ecx
        mov     dword ptr [ebp - 0x14], edx
        mov     edx, dword ptr [ebp - 0x1c]
        mov     eax, dword ptr [ebp - 0x18]
        fld     dword ptr [eax]
        fld     dword ptr [eax + 0x4]
        fld     dword ptr [eax + 0x8]
        mov     eax, dword ptr [ebp - 0x14]
        fld     dword ptr [edx + 0x34]
        fmul    st(0), st(2)
        fld     dword ptr [edx + 0x38]
        fmul    st(0), st(2)
        fxch    st(1)
        fadd    dword ptr [edx + 0x3c]
        fld     dword ptr [edx + 0x30]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    st(0), st(4)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    st(0), st(3)
        fxch    st(1)
        fstp    dword ptr [eax + 0xc]
        fadd    dword ptr [edx + 0x1c]
        fld     dword ptr [edx + 0x10]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x24]
        fmul    st(0), st(4)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x28]
        fmul    st(0), st(3)
        fxch    st(1)
        fstp    dword ptr [eax + 0x4]
        fadd    dword ptr [edx + 0x2c]
        fld     dword ptr [edx + 0x20]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    st(0), st(4)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    st(0), st(3)
        fxch    st(1)
        fstp    dword ptr [eax + 0x8]
        fadd    dword ptr [edx + 0xc]
        fld     dword ptr [edx]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fstp    st(1)
        fstp    st(1)
        fstp    st(1)
        fstp    dword ptr [eax]
        mov     eax, dword ptr [DAT_007da70c]
        mov     ecx, dword ptr [eax]
        lea     edx, [ecx + esi*4]
        mov     dword ptr [ebp - 0x18], edx
        mov     dword ptr [ebp - 0x14], 0x0
        mov     edi, dword ptr [ebp - 0x8]
        xor     ecx, ecx
        xor     edx, edx
        test    dword ptr [edi], 0x80000000
        setnz   cl
        sub     edx, ecx
        and     edx, 0x8
        xor     ebx, ebx
        test    dword ptr [edi + 0x4], 0x80000000
        setnz   cl
        sub     ebx, ecx
        and     ebx, 0x2
        or      edx, ebx
        xor     ebx, ebx
        test    dword ptr [edi + 0x8], 0x80000000
        setnz   cl
        sub     ebx, ecx
        and     ebx, 0x10
        or      edx, ebx
        fld     dword ptr [edi + 0xc]
        xor     ebx, ebx
        fcom    dword ptr [edi]
        __emit 0xDF /* __emit: fnstsw ax no-WAIT form (MSVC6 inserts 9B WAIT) */
        __emit 0xE0
        __emit 0xF6 /* __emit: test ah,imm8 not supported in MSVC6 inline asm */
        __emit 0xC4
        __emit 0x01
        setnz   cl
        sub     ebx, ecx
        and     ebx, 0x4
        or      edx, ebx
        xor     ebx, ebx
        fcom    dword ptr [edi + 0x4]
        __emit 0xDF /* __emit: fnstsw ax no-WAIT form */
        __emit 0xE0
        __emit 0xF6 /* __emit: test ah,imm8 not supported */
        __emit 0xC4
        __emit 0x01
        setnz   cl
        sub     ebx, ecx
        and     ebx, 0x1
        or      edx, ebx
        xor     ebx, ebx
        fcomp   dword ptr [edi + 0x8]
        __emit 0xDF /* __emit: fnstsw ax no-WAIT form */
        __emit 0xE0
        __emit 0xF6 /* __emit: test ah,imm8 not supported */
        __emit 0xC4
        __emit 0x41
        setnz   cl
        sub     ebx, ecx
        and     ebx, 0x20
        or      edx, ebx
        mov     dword ptr [ebp - 0x14], edx
        mov     edx, dword ptr [ebp - 0x8]
        mov     eax, dword ptr [ebp - 0x14]
        mov     ecx, dword ptr [ebp - 0x18]
        mov     edi, dword ptr [ebp - 0xc]
        add     edx, 0x10
        mov     dword ptr [ebp - 0x8], edx
        mov     edx, dword ptr [ebp - 0x10]
        mov     dword ptr [ecx], eax
        mov     eax, dword ptr [edx + 0xa0]
        mov     ecx, dword ptr [eax]
        add     edi, 0xc
        inc     esi
        cmp     esi, ecx
        mov     dword ptr [ebp - 0xc], edi
        mov     edi, edx
        jl      L45356
L454b6:
        mov     ecx, dword ptr [DAT_007da7f8]
        mov     esi, dword ptr [ebp + 0x8]
        mov     ebx, dword ptr [edi]
        push    0x1
        push    ecx
        push    ecx
        lea     edx, [esi + 0x24]
        mov     ecx, esp
        push    edx
        mov     dword ptr [ebp - 0x4], 0xffffffff
        call    FUN_00423e00
        mov     ecx, edi
        call    dword ptr [ebx + 0x18]
        test    eax, eax
        jz      L454f1
        mov     ecx, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ecx]
        lea     edx, [ebp - 0x4]
        push    edx
        add     esi, 0x4
        push    esi
        push    edi
        call    dword ptr [eax + 0x8]
L454f1:
        mov     eax, dword ptr [ebp - 0x4]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }
}
