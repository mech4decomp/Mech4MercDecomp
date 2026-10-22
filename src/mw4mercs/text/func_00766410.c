/*
 * FUN_00766410 (750 B) — Plane-fit / normal computation over a set of points.
 * Accumulates covariance sums, picks the dominant axis, normalizes the result
 * into the output vector (ECX), and validates each point against the plane.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0040c9e0(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_0041c540(void);

extern float DAT_007b8d88;
extern float DAT_007b8d8c;
extern float DAT_007b8d90;
extern float DAT_007b8d68;
extern float DAT_007b8d6c;
extern float DAT_007b8d70;
extern float f_76d064;
extern float f_7b220c;
extern char str_7afd14[];

__declspec(naked) void __cdecl FUN_00766410(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x3c
        mov     edx, dword ptr [DAT_007b8d88]
        mov     eax, dword ptr [ebp + 8]
        push    ebx
        mov     dword ptr [ebp - 0x30], edx
        mov     edx, dword ptr [DAT_007b8d8c]
        push    esi
        push    edi
        mov     edi, dword ptr [eax + 4]
        test    edi, edi
        mov     dword ptr [ebp - 0x2c], edx
        mov     edx, dword ptr [DAT_007b8d90]
        mov     dword ptr [ebp - 0x24], ecx
        mov     dword ptr [ebp - 0x28], edx
        mov     dword ptr [ebp - 0xc], 0
        mov     dword ptr [ebp - 0x1c], 0
        mov     dword ptr [ebp - 0x20], 0
        mov     dword ptr [ebp - 0x8], 0
        mov     dword ptr [ebp - 0x18], 0
        mov     dword ptr [ebp - 0x4], 0
        jbe     L_664d5
L_6646b:
        mov     esi, dword ptr [eax]
        mov     ebx, edi
L_6646f:
        push    esi
        lea     eax, [ebp - 0x30]
        push    eax
        lea     ecx, [ebp - 0x30]
        call    FUN_0040c9e0
        fld     dword ptr [esi]
        fld     st(0)
        add     esi, 0xc
        dec     ebx
        fmul    st(0), st(1)
        fadd    dword ptr [ebp - 0xc]
        fstp    dword ptr [ebp - 0xc]
        fstp    st(0)
        fld     dword ptr [esi - 0xc]
        fmul    dword ptr [esi - 0x8]
        fadd    dword ptr [ebp - 0x1c]
        fstp    dword ptr [ebp - 0x1c]
        fld     dword ptr [esi - 0x4]
        fmul    dword ptr [esi - 0xc]
        fadd    dword ptr [ebp - 0x20]
        fstp    dword ptr [ebp - 0x20]
        fld     dword ptr [esi - 0x8]
        fld     st(0)
        fmul    st(0), st(1)
        fadd    dword ptr [ebp - 0x8]
        fstp    dword ptr [ebp - 0x8]
        fstp    st(0)
        fld     dword ptr [esi - 0x4]
        fmul    dword ptr [esi - 0x8]
        fadd    dword ptr [ebp - 0x18]
        fstp    dword ptr [ebp - 0x18]
        fld     dword ptr [esi - 0x4]
        fld     st(0)
        fmul    st(0), st(1)
        fadd    dword ptr [ebp - 0x4]
        fstp    dword ptr [ebp - 0x4]
        fstp    st(0)
        jnz     L_6646f
        mov     ecx, dword ptr [ebp - 0x24]
L_664d5:
        mov     dword ptr [ebp - 0x10], 0
        mov     dword ptr [ebp - 0x14], edi
        fild    qword ptr [ebp - 0x14]
        fdivr   dword ptr [f_76d064]
        fstp    dword ptr [ebp - 0x10]
        fld     dword ptr [ebp - 0x30]
        fmul    dword ptr [ebp - 0x30]
        fmul    dword ptr [ebp - 0x10]
        fsubr   dword ptr [ebp - 0xc]
        fstp    dword ptr [ebp - 0xc]
        fld     dword ptr [ebp - 0x2c]
        fmul    dword ptr [ebp - 0x30]
        fmul    dword ptr [ebp - 0x10]
        fsubr   dword ptr [ebp - 0x1c]
        fstp    dword ptr [ebp - 0x1c]
        fld     dword ptr [ebp - 0x28]
        fmul    dword ptr [ebp - 0x30]
        fmul    dword ptr [ebp - 0x10]
        fsubr   dword ptr [ebp - 0x20]
        fstp    dword ptr [ebp - 0x20]
        fld     dword ptr [ebp - 0x2c]
        fmul    dword ptr [ebp - 0x2c]
        fmul    dword ptr [ebp - 0x10]
        fsubr   dword ptr [ebp - 0x8]
        fstp    dword ptr [ebp - 0x8]
        fld     dword ptr [ebp - 0x28]
        fmul    dword ptr [ebp - 0x2c]
        fmul    dword ptr [ebp - 0x10]
        fsubr   dword ptr [ebp - 0x18]
        fstp    dword ptr [ebp - 0x18]
        fld     dword ptr [ebp - 0x28]
        fmul    dword ptr [ebp - 0x28]
        fmul    dword ptr [ebp - 0x10]
        fsubr   dword ptr [ebp - 0x4]
        fstp    dword ptr [ebp - 0x4]
        fld     dword ptr [ebp - 0xc]
        fcomp   dword ptr [ebp - 0x8]
        __emit 0xDF  /* FNSTSW AX no-WAIT (MSVC inserts 9B WAIT) */
        __emit 0xE0
        __emit 0xF6  /* TEST AH,0x41 (MSVC rejects test ah,imm8) */
        __emit 0xC4
        __emit 0x41
        jnz     L_66563
        fld     dword ptr [ebp - 0xc]
        fcomp   dword ptr [ebp - 0x4]
        __emit 0xDF  /* FNSTSW AX no-WAIT */
        __emit 0xE0
        __emit 0xF6  /* TEST AH,0x41 */
        __emit 0xC4
        __emit 0x41
        jnz     L_66575
        xor     eax, eax
        jmp     L_6657a
L_66563:
        fld     dword ptr [ebp - 0x8]
        fcomp   dword ptr [ebp - 0x4]
        __emit 0xDF  /* FNSTSW AX no-WAIT */
        __emit 0xE0
        __emit 0xF6  /* TEST AH,0x41 */
        __emit 0xC4
        __emit 0x41
        mov     eax, 1
        jz      L_6657a
L_66575:
        mov     eax, 2
L_6657a:
        sub     eax, 0
        jz      L_666bb
        dec     eax
        jz      L_66690
        dec     eax
        jz      L_66665
        mov     ecx, dword ptr [DAT_007b8d68]
        mov     edx, dword ptr [DAT_007b8d6c]
        mov     eax, dword ptr [DAT_007b8d70]
        push    offset str_7afd14
        mov     dword ptr [ebp - 0x3c], ecx
        mov     dword ptr [ebp - 0x38], edx
        mov     dword ptr [ebp - 0x34], eax
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L_665bd
        int     3
L_665bd:
        fld     dword ptr [ebp - 0x3c]
        mov     ecx, dword ptr [ebp - 0x24]
L_665c3:
        fld     dword ptr [ebp - 0x34]
        xor     esi, esi
        test    edi, edi
        fmul    dword ptr [ebp - 0x34]
        fld     dword ptr [ebp - 0x38]
        fmul    dword ptr [ebp - 0x38]
        faddp   st(1), st(0)
        fld     st(1)
        fmul    st(0), st(2)
        faddp   st(1), st(0)
        fsqrt
        fdivr   dword ptr [f_76d064]
        fst     dword ptr [ebp - 0x24]
        fmulp   st(1), st(0)
        fst     dword ptr [ecx]
        fld     dword ptr [ebp - 0x24]
        fmul    dword ptr [ebp - 0x38]
        fst     dword ptr [ecx + 4]
        fld     dword ptr [ebp - 0x24]
        fmul    dword ptr [ebp - 0x34]
        fst     dword ptr [ecx + 8]
        fld     dword ptr [ebp - 0x30]
        fmul    dword ptr [ebp - 0x10]
        fstp    dword ptr [ebp - 0x30]
        fld     dword ptr [ebp - 0x2c]
        fmul    dword ptr [ebp - 0x10]
        fstp    dword ptr [ebp - 0x2c]
        fld     dword ptr [ebp - 0x28]
        fmul    dword ptr [ebp - 0x10]
        fstp    dword ptr [ebp - 0x28]
        fmul    dword ptr [ebp - 0x28]
        fxch
        fmul    dword ptr [ebp - 0x2c]
        faddp   st(1), st(0)
        fxch
        fmul    dword ptr [ebp - 0x30]
        faddp   st(1), st(0)
        fstp    dword ptr [ecx + 0xc]
        jbe     L_666f3
        mov     ecx, dword ptr [ebp + 8]
        mov     ebx, dword ptr [ecx]
        mov     edx, dword ptr [f_7b220c]
L_66636:
        push    edx
        lea     eax, [ebp - 0x30]
        push    eax
        push    ebx
        call    FUN_0041c540
        add     esp, 0xc
        test    al, al
        jz      L_666e8
        inc     esi
        add     ebx, 0xc
        cmp     esi, edi
        __emit 0x72  /* JC L_66636: MSVC miscomputes backward rel8 by 6 (call reloc between branch and target); ref 72 DC */
        __emit 0xDC
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
L_66665:
        fld     dword ptr [ebp - 0x4]
        fcomp   dword ptr [f_7b220c]
        __emit 0xDF  /* FNSTSW AX no-WAIT */
        __emit 0xE0
        __emit 0xF6  /* TEST AH,0x1 */
        __emit 0xC4
        __emit 0x01
        jnz     L_666f3
        fld     dword ptr [ebp - 0x20]
        mov     dword ptr [ebp - 0x34], 0x3f800000
        fdiv    dword ptr [ebp - 0x4]
        fld     dword ptr [ebp - 0x18]
        fdiv    dword ptr [ebp - 0x4]
        fstp    dword ptr [ebp - 0x38]
        jmp     L_665c3
L_66690:
        fld     dword ptr [ebp - 0x8]
        fcomp   dword ptr [f_7b220c]
        __emit 0xDF  /* FNSTSW AX no-WAIT */
        __emit 0xE0
        __emit 0xF6  /* TEST AH,0x1 */
        __emit 0xC4
        __emit 0x01
        jnz     L_666f3
        fld     dword ptr [ebp - 0x1c]
        mov     dword ptr [ebp - 0x38], 0x3f800000
        fdiv    dword ptr [ebp - 0x8]
        fld     dword ptr [ebp - 0x18]
        fdiv    dword ptr [ebp - 0x8]
        fstp    dword ptr [ebp - 0x34]
        jmp     L_665c3
L_666bb:
        fld     dword ptr [ebp - 0xc]
        fcomp   dword ptr [f_7b220c]
        __emit 0xDF  /* FNSTSW AX no-WAIT */
        __emit 0xE0
        __emit 0xF6  /* TEST AH,0x1 */
        __emit 0xC4
        __emit 0x01
        jnz     L_666f3
        fld     dword ptr [f_76d064]
        fld     dword ptr [ebp - 0x1c]
        fdiv    dword ptr [ebp - 0xc]
        fstp    dword ptr [ebp - 0x38]
        fld     dword ptr [ebp - 0x20]
        fdiv    dword ptr [ebp - 0xc]
        fstp    dword ptr [ebp - 0x34]
        jmp     L_665c3
L_666e8:
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
L_666f3:
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
    }
}
