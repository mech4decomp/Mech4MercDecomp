/*
 * FUN_0068E05C (1528 B) — gos data-block function (block 0x68E05C).
 * The block contains TWO functions plus padding:
 *   - 0x68E05C..0x68E05F: 4 nops (pad)
 *   - FUN_0068E060 (0x68E060..0x68E2AA): __thiscall, iterates a list of
 *     objects, builds records, calls FUN_0068E2B0.
 *   - 0x68E2AB..0x68E2AF: 5 nops (pad)
 *   - FUN_0068E2B0 (0x68E2B0..0x68E651): __thiscall ret 0xc, heavy FPU
 *     geometry (ray/plane intersection), returns al=1/0.
 *   - 0x68E652..0x68E653: 2 nops (pad)
 * Transcribed verbatim so the block bytes match exactly.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0068e020(void);
extern void __cdecl FUN_006f4950(void);
extern void *__cdecl FUN_004084d0(int);
extern void __cdecl FUN_0068df80(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_005d8350(void);
extern void __cdecl FUN_0068f110(void);
extern void __cdecl FUN_0068d820(void);
extern void __cdecl FUN_00551870(void);
extern void __cdecl FUN_0068e660(void);
extern void __cdecl FUN_005d8270(void);
extern void __cdecl FUN_005d6dc0(void);
extern void __cdecl FUN_004fcb30(void);

extern unsigned int g_7f2464;
extern unsigned int g_7dab44;
extern unsigned int g_7dab40;
extern float g_787964;
extern float g_76d064;
extern float g_76d978;
extern float g_76c5b0;
extern float g_798ed8;
extern double g_76d968;

__declspec(naked) void FUN_0068E05C(void)
{
    __asm {
        /* ---- pad ---- */
        nop
        nop
        nop
        nop
        /* ---- FUN_0068E060 ---- */
        sub     esp, 0x6c
        mov     edx, dword ptr [ecx + 0x20]
        push    ebx
        sub     edx, dword ptr [ecx + 0x1c]
        sar     edx, 2
        push    ebp
        lea     eax, [edx - 1]
        push    esi
        xor     ebp, ebp
        test    eax, eax
        push    edi
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0x18], edx
        jle     L_2a3
    L_e085:
        mov     eax, dword ptr [ecx + 0x1c]
        cmp     dword ptr [eax + ebp*4], 0
        je      L_297
        lea     ebx, [ebp + 1]
        cmp     ebx, edx
        jge     L_297
    L_e09d:
        mov     esi, dword ptr [ecx + 0x1c]
        lea     eax, [ecx + 0x1c]
        cmp     dword ptr [esi + ebx*4], 0
        je      L_286
        mov     edi, dword ptr [esi + ebp*4]
        mov     eax, dword ptr [edi + 0x14]
        cmp     eax, dword ptr [edi + 0x18]
        je      L_e0e2
    L_e0b8:
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [ecx + 4]
        cmp     edx, edi
        jne     L_e0c6
        mov     ecx, dword ptr [ecx + 8]
        jmp     L_e0c8
    L_e0c6:
        mov     ecx, edx
    L_e0c8:
        cmp     ecx, dword ptr [esi + ebx*4]
        je      L_e0d9
        mov     ecx, dword ptr [edi + 0x18]
        add     eax, 4
        cmp     eax, ecx
        jne     L_e0b8
        jmp     L_e0e2
    L_e0d9:
        cmp     dword ptr [eax], 0
        jne     L_286
    L_e0e2:
        lea     eax, [esp + 0x38]
        mov     ecx, 9
    L_e0eb:
        mov     dword ptr [eax - 4], 0
        mov     dword ptr [eax], 0
        add     eax, 8
        dec     ecx
        jne     L_e0eb
        mov     ecx, dword ptr [esi + ebx*4]
        push    ecx
        mov     ecx, dword ptr [esi + ebp*4]
        call    FUN_0068e020
        test    eax, eax
        je      L_e112
        mov     edi, dword ptr [eax]
        jmp     L_e163
    L_e112:
        mov     edx, dword ptr [g_7f2464]
        push    edx
        call    FUN_006f4950
        push    0xb0
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        je      L_e14c
        mov     edx, dword ptr [esi + ebx*4]
        push    0x7b5524
        lea     ecx, [esp + 0x38]
        push    ecx
        mov     ecx, dword ptr [esi + ebp*4]
        push    edx
        push    ecx
        mov     ecx, eax
        call    FUN_0068df80
        mov     esi, eax
        jmp     L_e14e
    L_e14c:
        xor     esi, esi
    L_e14e:
        call    FUN_006f49a0
        mov     ecx, dword ptr [esp + 0x10]
        push    esi
        mov     byte ptr [ecx + 0x34], 1
        call    FUN_005d8350
        mov     edi, eax
    L_e163:
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [eax + 0x10]
        mov     esi, dword ptr [edx + edi*4]
        push    esi
        lea     ecx, [esp + 0x20]
        push    ecx
        push    ebx
        lea     ecx, [eax + 0x1c]
        call    FUN_0068f110
        mov     ecx, dword ptr [eax]
        call    FUN_0068d820
        mov     edx, dword ptr [eax]
        sub     esp, 0xc
        mov     ecx, esp
        mov     dword ptr [ecx], edx
        mov     edx, dword ptr [eax + 4]
        mov     eax, dword ptr [eax + 8]
        mov     dword ptr [ecx + 4], edx
        mov     edx, dword ptr [esp + 0x1c]
        mov     dword ptr [ecx + 8], eax
        push    esi
        lea     ecx, [esp + 0x38]
        push    ecx
        push    ebp
        lea     ecx, [edx + 0x1c]
        call    FUN_0068f110
        mov     ecx, dword ptr [eax]
        call    FUN_0068d820
        sub     esp, 0xc
        mov     ecx, esp
        push    eax
        call    FUN_00551870
        mov     eax, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [eax + 0x38]
        call    FUN_0068e660
        cmp     eax, -1
        mov     dword ptr [esp + 0x14], eax
        jne     L_e1e1
        mov     ecx, dword ptr [esp + 0x10]
        push    edi
        call    FUN_005d8270
        jmp     L_286
    L_e1e1:
        mov     ecx, dword ptr [esp + 0x10]
        push    ebx
        push    ebp
        push    eax
        call    L_2b0
        test    al, al
        jne     L_e200
        mov     ecx, dword ptr [esp + 0x10]
        push    edi
        call    FUN_005d8270
        jmp     L_286
    L_e200:
        mov     ecx, dword ptr [esp + 0x10]
        mov     edi, dword ptr [ecx + 0x1c]
        lea     eax, [ecx + 0x1c]
        mov     ecx, dword ptr [edi + ebp*4]
        push    esi
        call    FUN_005d6dc0
        lea     eax, [esp + 0x34]
        mov     ecx, 9
    L_e21c:
        fst     dword ptr [eax]
        mov     edx, dword ptr [edi + ebp*4]
        fld     dword ptr [edx + 0x44]
        add     eax, 8
        dec     ecx
        fadd    st(0), st(1)
        fst     dword ptr [eax - 8]
        mov     edx, dword ptr [edi + ebx*4]
        fadd    dword ptr [edx + 0x44]
        fst     dword ptr [eax - 8]
        fstp    dword ptr [eax - 4]
        jne     L_e21c
        fstp    st(0)
        xor     eax, eax
        lea     ecx, [esp + 0x38]
    L_e243:
        mov     edi, dword ptr [esi + 4]
        fld     dword ptr [ecx - 4]
        xor     edx, edx
        cmp     edi, edi
        setne   dl
        add     edx, eax
        fst     dword ptr [esi + edx*4 + 0x14]
        fstp    dword ptr [esi + edx*4 + 0x5c]
        mov     edi, dword ptr [esi + 4]
        fld     dword ptr [ecx]
        xor     edx, edx
        cmp     edi, dword ptr [esi + 8]
        setne   dl
        add     ecx, 8
        add     edx, eax
        add     eax, 2
        fst     dword ptr [esi + edx*4 + 0x14]
        cmp     eax, 0x12
        fstp    dword ptr [esi + edx*4 + 0x5c]
        jl      L_e243
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [esi + 0xa4], eax
    L_286:
        mov     edx, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x10]
        inc     ebx
        cmp     ebx, edx
        jl      L_e09d
    L_297:
        inc     ebp
        lea     eax, [edx - 1]
        cmp     ebp, eax
        jl      L_e085
    L_2a3:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x6c
        ret
        /* ---- pad ---- */
        nop
        nop
        nop
        nop
        nop
        /* ---- FUN_0068E2B0 ---- */
    L_2b0:
        sub     esp, 0x40
        mov     eax, dword ptr [g_7dab44]
        mov     eax, dword ptr [eax]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        xor     eax, dword ptr [g_7dab40]
        mov     ecx, dword ptr [esp + 0x54]
        push    ecx
        mov     ecx, dword ptr [eax + 0x10]
        xor     ecx, 0x85739531
        call    FUN_004fcb30
        mov     eax, dword ptr [eax + 0xd8]
        mov     edx, dword ptr [eax + 0x8c]
        mov     esi, dword ptr [edi + 0x20]
        add     eax, 0x80
        mov     eax, dword ptr [eax + 0x2c]
        mov     dword ptr [esp + 0x14], edx
        sub     esi, dword ptr [edi + 0x1c]
        sar     esi, 2
        xor     edx, edx
        test    esi, esi
        mov     dword ptr [esp + 0x1c], eax
        jle     L_e63c
        mov     ebx, dword ptr [esp + 0x5c]
        mov     eax, dword ptr [esp + 0x58]
    L_e30c:
        cmp     edx, eax
        je      L_e633
        cmp     edx, ebx
        je      L_e633
        mov     ecx, dword ptr [edi + 0x1c]
        cmp     dword ptr [ecx + edx*4], 0
        je      L_e633
        mov     eax, dword ptr [ecx + eax*4]
        mov     ebp, dword ptr [eax + 8]
        add     eax, 8
        mov     eax, dword ptr [eax + 8]
        mov     dword ptr [esp + 0x28], eax
        mov     eax, dword ptr [ecx + edx*4]
        fld     dword ptr [eax + 8]
        add     eax, 8
        mov     eax, dword ptr [eax + 8]
        mov     dword ptr [esp + 0x40], eax
        mov     eax, dword ptr [ecx + edx*4]
        fld     dword ptr [eax + 0x48]
        mov     dword ptr [esp + 0x20], ebp
        fld     dword ptr [esp + 0x14]
        fcomp   dword ptr [esp + 0x20]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x40
        je      L_e36e
        fld     dword ptr [g_787964]
        jmp     L_e380
    L_e36e:
        fld     dword ptr [esp + 0x1c]
        fsub    dword ptr [esp + 0x28]
        fld     dword ptr [esp + 0x14]
        fsub    dword ptr [esp + 0x20]
        fdivp   st(1), st(0)
    L_e380:
        fld     dword ptr [esp + 0x14]
        fmul    st(0), st(1)
        fsubr   dword ptr [esp + 0x1c]
        fsub    dword ptr [esp + 0x40]
        fstp    dword ptr [esp + 0x5c]
        fld     st(0)
        fmul    st(0), st(1)
        fadd    dword ptr [g_76d064]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x5c]
        fmul    st(0), st(1)
        fadd    st(0), st(0)
        fld     st(3)
        fadd    st(0), st(0)
        fsubp   st(1), st(0)
        fstp    dword ptr [esp + 0x54]
        fstp    st(0)
        fld     dword ptr [esp + 0x54]
        fmul    dword ptr [esp + 0x54]
        fld     dword ptr [esp + 0x5c]
        fmul    dword ptr [esp + 0x5c]
        fsub    st(0), st(2)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fmul    dword ptr [esp + 0x10]
        fmul    dword ptr [g_76d978]
        fsubp   st(1), st(0)
        fstp    st(2)
        fstp    st(0)
        fcom    dword ptr [g_76c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jne     L_e4b2
        fsqrt
        fld     dword ptr [esp + 0x10]
        fadd    st(0), st(0)
        fld     st(1)
        fsub    dword ptr [esp + 0x54]
        fdiv    st(0), st(1)
        fstp    dword ptr [esp + 0x5c]
        fld     dword ptr [esp + 0x54]
        fchs
        fsub    st(0), st(2)
        fdiv    st(0), st(1)
        fstp    dword ptr [esp + 0x54]
        fstp    st(0)
        fstp    st(0)
        fld     dword ptr [esp + 0x14]
        fcomp   dword ptr [esp + 0x20]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x40
        je      L_e440
        fld     dword ptr [esp + 0x5c]
        fsub    dword ptr [esp + 0x20]
        fmul    dword ptr [g_798ed8]
        fld     dword ptr [esp + 0x54]
        fsub    dword ptr [esp + 0x20]
        fmul    dword ptr [g_798ed8]
        jmp     L_e464
    L_e440:
        fld     dword ptr [esp + 0x14]
        fsub    dword ptr [esp + 0x20]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x5c]
        fsub    dword ptr [esp + 0x20]
        fdiv    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x54]
        fsub    dword ptr [esp + 0x20]
        fdiv    dword ptr [esp + 0x10]
    L_e464:
        fstp    dword ptr [esp + 0x54]
        fcom    dword ptr [g_76c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jne     L_e488
        fcomp   qword ptr [g_76d968]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jne     L_e648
        jmp     L_e48a
    L_e488:
        fstp    st(0)
    L_e48a:
        fld     dword ptr [esp + 0x54]
        fcomp   dword ptr [g_76c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jne     L_e4b4
        fld     dword ptr [esp + 0x54]
        fcomp   qword ptr [g_76d968]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jne     L_e648
        jmp     L_e4b4
    L_e4b2:
        fstp    st(0)
    L_e4b4:
        mov     eax, dword ptr [ecx + ebx*4]
        mov     ebp, dword ptr [eax + 8]
        add     eax, 8
        mov     eax, dword ptr [eax + 8]
        mov     dword ptr [esp + 0x34], eax
        mov     eax, dword ptr [ecx + edx*4]
        fld     dword ptr [eax + 8]
        mov     ecx, dword ptr [ecx + edx*4]
        fld     dword ptr [ecx + 0x48]
        add     eax, 8
        fld     dword ptr [esp + 0x14]
        mov     eax, dword ptr [eax + 8]
        mov     dword ptr [esp + 0x2c], ebp
        fcomp   dword ptr [esp + 0x2c]
        mov     dword ptr [esp + 0x4c], eax
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x40
        je      L_e4f5
        fld     dword ptr [g_787964]
        jmp     L_e507
    L_e4f5:
        fld     dword ptr [esp + 0x1c]
        fsub    dword ptr [esp + 0x34]
        fld     dword ptr [esp + 0x14]
        fsub    dword ptr [esp + 0x2c]
        fdivp   st(1), st(0)
    L_e507:
        fld     dword ptr [esp + 0x14]
        fmul    st(0), st(1)
        fsubr   dword ptr [esp + 0x1c]
        fsub    dword ptr [esp + 0x4c]
        fstp    dword ptr [esp + 0x5c]
        fld     st(0)
        fmul    st(0), st(1)
        fadd    dword ptr [g_76d064]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x5c]
        fmul    st(0), st(1)
        fadd    st(0), st(0)
        fld     st(3)
        fadd    st(0), st(0)
        fsubp   st(1), st(0)
        fstp    dword ptr [esp + 0x54]
        fstp    st(0)
        fld     dword ptr [esp + 0x54]
        fmul    dword ptr [esp + 0x54]
        fld     dword ptr [esp + 0x5c]
        fmul    dword ptr [esp + 0x5c]
        fsub    st(0), st(2)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fmul    dword ptr [esp + 0x10]
        fmul    dword ptr [g_76d978]
        fsubp   st(1), st(0)
        fstp    st(2)
        fstp    st(0)
        fcom    dword ptr [g_76c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jne     L_e631
        fsqrt
        fld     dword ptr [esp + 0x10]
        fadd    st(0), st(0)
        fld     st(1)
        fsub    dword ptr [esp + 0x54]
        fdiv    st(0), st(1)
        fstp    dword ptr [esp + 0x5c]
        fld     dword ptr [esp + 0x54]
        fchs
        fsub    st(0), st(2)
        fdiv    st(0), st(1)
        fstp    dword ptr [esp + 0x54]
        fstp    st(0)
        fstp    st(0)
        fld     dword ptr [esp + 0x14]
        fcomp   dword ptr [esp + 0x2c]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x40
        je      L_e5c7
        fld     dword ptr [esp + 0x5c]
        fsub    dword ptr [esp + 0x2c]
        fmul    dword ptr [g_798ed8]
        fld     dword ptr [esp + 0x54]
        fsub    dword ptr [esp + 0x2c]
        fmul    dword ptr [g_798ed8]
        jmp     L_e5eb
    L_e5c7:
        fld     dword ptr [esp + 0x14]
        fsub    dword ptr [esp + 0x2c]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x5c]
        fsub    dword ptr [esp + 0x2c]
        fdiv    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x54]
        fsub    dword ptr [esp + 0x2c]
        fdiv    dword ptr [esp + 0x10]
    L_e5eb:
        fstp    dword ptr [esp + 0x54]
        fcom    dword ptr [g_76c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jne     L_e60b
        fcomp   qword ptr [g_76d968]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jne     L_e648
        jmp     L_e60d
    L_e60b:
        fstp    st(0)
    L_e60d:
        fld     dword ptr [esp + 0x54]
        fcomp   dword ptr [g_76c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jne     L_e633
        fld     dword ptr [esp + 0x54]
        fcomp   qword ptr [g_76d968]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jne     L_e648
        jmp     L_e633
    L_e631:
        fstp    st(0)
    L_e633:
        inc     edx
        cmp     edx, esi
        /* __emit: MSVC6 miscomputes backward jl rel32 (off-by-4: call-reloc between branch and target) */
        __emit 0x0F
        __emit 0x8C
        __emit 0xD0
        __emit 0xFC
        __emit 0xFF
        __emit 0xFF
    L_e63c:
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        add     esp, 0x40
        ret     0xc
    L_e648:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x40
        ret     0xc
        /* ---- pad ---- */
        nop
        nop
    }
}
