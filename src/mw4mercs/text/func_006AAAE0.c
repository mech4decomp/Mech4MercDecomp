/*
 * FUN_006AAAE0 (2289 B) — __thiscall (ECX = this, 3 stack params, RET 0xC).
 * Animation/IK solver: reads a target from [esp+0x24], queries a bone
 * (vtable at [esi+0x34]), computes normalized direction vectors, and
 * drives a set of child bones (esi+0x60..0x98) via FUN_00699530 /
 * FUN_006991D0 / FUN_006992F0, then re-roots them through FUN_006AB3E0
 * and FUN_006055F0/605740/605700/604F30.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076c5b0;
extern float g_0076d064;

extern void __cdecl FUN_006055f0(void);
extern void __cdecl FUN_00699530(void);
extern void __cdecl FUN_006991d0(void);
extern void __cdecl FUN_006992f0(void);
extern void __cdecl FUN_006056a0(void);
extern void __cdecl FUN_006ab3e0(void);
extern void __cdecl FUN_00605740(void);
extern void __cdecl FUN_00605700(void);
extern void __cdecl FUN_00604f30(void);

__declspec(naked) void FUN_006AAAE0(void)
{
    __asm {
        sub     esp, 0x10
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x24]
        lea     edx, [esp + 0x14]
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x34]
        mov     eax, dword ptr [ecx]
        push    edx
        mov     edx, dword ptr [edi + 0x18]
        push    edx
        call    dword ptr [eax + 8]
        fld     dword ptr [esp + 0x14]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        je      l_ab19
        fld     dword ptr [esp + 0x14]
        fchs
        fstp    dword ptr [esp + 0x14]
    l_ab19:
        fld     dword ptr [esi + 0x20]
        fcomp   dword ptr [esi + 0x10]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jne     l_b3bb
        mov     ebx, dword ptr [edi + 0x3c]
        push    0x3f800000
        mov     ecx, ebx
        call    FUN_006055f0
        fld     dword ptr [esi + 0x40]
        fmul    dword ptr [esi + 0x38]
        mov     dword ptr [esp + 0x1c], eax
        fcomp   dword ptr [esp + 0x14]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jne     l_ade8
        mov     edi, dword ptr [esi + 0x8c]
        mov     eax, dword ptr [edi + 0x18]
        fld     dword ptr [edi + 0x10]
        mov     eax, dword ptr [eax + 4]
        fsub    dword ptr [eax + 8]
        fld     dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
        fdivp   st(1), st(0)
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x14]
        fdiv    dword ptr [esi + 0x38]
        fst     dword ptr [esp + 0x10]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jne     l_ad84
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [esp + 0x28]
        fst     dword ptr [esp + 0x28]
        mov     ecx, dword ptr [esp + 0x28]
        fadd    dword ptr [esi + 0x20]
        push    ecx
        mov     ecx, edi
        fstp    dword ptr [esi + 0x20]
        call    FUN_00699530
        test    al, al
        je      l_abc4
        mov     ecx, edi
        call    FUN_006991d0
        fdiv    dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esi + 0x64]
        fstp    dword ptr [esi + 0x24]
        jmp     l_b0bb
    l_abc4:
        mov     eax, dword ptr [edi + 0x18]
        fld     dword ptr [edi + 0x10]
        mov     eax, dword ptr [eax + 4]
        fsub    dword ptr [eax + 8]
        mov     ebp, dword ptr [esi + 0x64]
        fld     dword ptr [eax + 0xc]
        mov     ecx, dword ptr [ebp + 0x18]
        fsub    dword ptr [eax + 8]
        mov     ecx, dword ptr [ecx + 4]
        mov     edx, dword ptr [edi + 0x18]
        fdivp   st(1), st(0)
        mov     eax, dword ptr [edx + 4]
        push    ecx
        fld     dword ptr [ebp + 0x10]
        fsub    dword ptr [ecx + 8]
        fld     dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 8]
        mov     ecx, ebp
        fdivp   st(1), st(0)
        fsubp   st(1), st(0)
        fstp    dword ptr [esp + 0x2c]
        fld     dword ptr [edi + 0x10]
        fsub    dword ptr [eax + 8]
        fld     dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
        mov     eax, dword ptr [ebp + 0x18]
        mov     eax, dword ptr [eax + 4]
        fdivp   st(1), st(0)
        fsub    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [esp + 0x2c]
        fstp    dword ptr [esp]
        call    FUN_00699530
        mov     ebx, dword ptr [esp + 0x2c]
        test    bl, bl
        jne     l_ad24
        mov     ecx, dword ptr [esi + 0x60]
        mov     edx, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [edx + 4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [esp + 0x2c]
        fstp    dword ptr [esp]
        call    FUN_00699530
        mov     ecx, dword ptr [esi + 0x68]
        mov     eax, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [eax + 4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [esp + 0x2c]
        fstp    dword ptr [esp]
        call    FUN_00699530
        mov     ecx, dword ptr [esi + 0x6c]
        mov     edx, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [edx + 4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [esp + 0x2c]
        fstp    dword ptr [esp]
        call    FUN_00699530
        mov     ecx, dword ptr [esi + 0x70]
        mov     eax, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [eax + 4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [esp + 0x2c]
        fstp    dword ptr [esp]
        call    FUN_00699530
        mov     ecx, dword ptr [esi + 0x88]
        mov     edx, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [edx + 4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp]
        call    FUN_00699530
        mov     ecx, dword ptr [esi + 0x90]
        mov     eax, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [eax + 4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp]
        call    FUN_00699530
        mov     ecx, dword ptr [esi + 0x94]
        mov     edx, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [edx + 4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp]
        call    FUN_00699530
        mov     ecx, dword ptr [esi + 0x98]
        mov     eax, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [eax + 4]
        fld     dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
        push    ecx
        fmul    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp]
        call    FUN_00699530
    l_ad24:
        test    bl, bl
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, ecx
        mov     dword ptr [ebp + 0x14], ecx
        mov     dword ptr [edi + 0x14], edx
        jne     l_add3
        mov     eax, dword ptr [esi + 0x60]
        mov     edx, dword ptr [esi + 0x68]
        mov     dword ptr [eax + 0x14], ecx
        mov     eax, ecx
        mov     ecx, dword ptr [esi + 0x6c]
        mov     dword ptr [edx + 0x14], eax
        mov     edx, eax
        mov     eax, dword ptr [esi + 0x70]
        mov     dword ptr [ecx + 0x14], edx
        mov     ecx, edx
        mov     edx, dword ptr [esi + 0x88]
        mov     dword ptr [eax + 0x14], ecx
        mov     eax, ecx
        mov     ecx, dword ptr [esi + 0x90]
        mov     dword ptr [edx + 0x14], eax
        mov     edx, eax
        mov     eax, dword ptr [esi + 0x94]
        mov     dword ptr [ecx + 0x14], edx
        mov     ecx, edx
        mov     edx, dword ptr [esi + 0x98]
        mov     dword ptr [eax + 0x14], ecx
        mov     eax, ecx
        mov     dword ptr [edx + 0x14], eax
        jmp     l_add3
    l_ad84:
        mov     ebx, dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [esi + 0x64]
        xor     eax, eax
        test    bl, bl
        mov     dword ptr [edi + 0x14], eax
        mov     dword ptr [ecx + 0x14], eax
        jne     l_add3
        mov     edx, dword ptr [esi + 0x60]
        mov     ecx, dword ptr [esi + 0x68]
        mov     dword ptr [edx + 0x14], eax
        mov     edx, dword ptr [esi + 0x6c]
        mov     dword ptr [ecx + 0x14], eax
        mov     ecx, dword ptr [esi + 0x70]
        mov     dword ptr [edx + 0x14], eax
        mov     edx, dword ptr [esi + 0x88]
        mov     dword ptr [ecx + 0x14], eax
        mov     ecx, dword ptr [esi + 0x90]
        mov     dword ptr [edx + 0x14], eax
        mov     edx, dword ptr [esi + 0x94]
        mov     dword ptr [ecx + 0x14], eax
        mov     ecx, dword ptr [esi + 0x98]
        mov     dword ptr [edx + 0x14], eax
        mov     dword ptr [ecx + 0x14], eax
    l_add3:
        mov     dword ptr [esp + 0x28], 0x3f800000
        mov     dword ptr [esp + 0x2c], 0
        jmp     l_b2b2
    l_ade8:
        fld     dword ptr [esp + 0x14]
        mov     edi, dword ptr [esi + 0x64]
        fcomp   dword ptr [esi + 0x3c]
        mov     edx, dword ptr [edi + 0x18]
        fld     dword ptr [edi + 0x10]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        mov     eax, dword ptr [edx + 4]
        fsub    dword ptr [eax + 8]
        fld     dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
        fdivp   st(1), st(0)
        jne     l_b08d
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x14]
        fdiv    dword ptr [esi + 0x3c]
        fst     dword ptr [esp + 0x10]
        fmul    dword ptr [esp + 0x28]
        fst     dword ptr [esp + 0x28]
        fadd    dword ptr [esi + 0x20]
        fstp    dword ptr [esi + 0x20]
        fld     dword ptr [esp + 0x10]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jne     l_b026
        mov     eax, dword ptr [esp + 0x28]
        push    eax
        mov     ecx, edi
        call    FUN_00699530
        test    al, al
        je      l_ae63
        mov     ecx, edi
        call    FUN_006991d0
        fdiv    dword ptr [esp + 0x10]
        jmp     l_b0b2
    l_ae63:
        mov     eax, dword ptr [edi + 0x18]
        fld     dword ptr [edi + 0x10]
        mov     eax, dword ptr [eax + 4]
        fsub    dword ptr [eax + 8]
        mov     ebp, dword ptr [esi + 0x8c]
        fld     dword ptr [eax + 0xc]
        mov     ecx, dword ptr [ebp + 0x18]
        fsub    dword ptr [eax + 8]
        mov     ecx, dword ptr [ecx + 4]
        mov     edx, dword ptr [edi + 0x18]
        fdivp   st(1), st(0)
        mov     eax, dword ptr [edx + 4]
        push    ecx
        fld     dword ptr [ebp + 0x10]
        fsub    dword ptr [ecx + 8]
        fld     dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 8]
        mov     ecx, ebp
        fdivp   st(1), st(0)
        fsubp   st(1), st(0)
        fstp    dword ptr [esp + 0x2c]
        fld     dword ptr [edi + 0x10]
        fsub    dword ptr [eax + 8]
        fld     dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
        mov     eax, dword ptr [ebp + 0x18]
        mov     eax, dword ptr [eax + 4]
        fdivp   st(1), st(0)
        fsub    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [esp + 0x2c]
        fstp    dword ptr [esp]
        call    FUN_00699530
        mov     ebx, dword ptr [esp + 0x2c]
        test    bl, bl
        jne     l_afc6
        mov     ecx, dword ptr [esi + 0x60]
        mov     edx, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [edx + 4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp]
        call    FUN_00699530
        mov     ecx, dword ptr [esi + 0x68]
        mov     eax, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [eax + 4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp]
        call    FUN_00699530
        mov     ecx, dword ptr [esi + 0x6c]
        mov     edx, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [edx + 4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp]
        call    FUN_00699530
        mov     ecx, dword ptr [esi + 0x70]
        mov     eax, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [eax + 4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp]
        call    FUN_00699530
        mov     ecx, dword ptr [esi + 0x88]
        mov     edx, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [edx + 4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [esp + 0x2c]
        fstp    dword ptr [esp]
        call    FUN_00699530
        mov     ecx, dword ptr [esi + 0x90]
        mov     eax, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [eax + 4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [esp + 0x2c]
        fstp    dword ptr [esp]
        call    FUN_00699530
        mov     ecx, dword ptr [esi + 0x94]
        mov     edx, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [edx + 4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [esp + 0x2c]
        fstp    dword ptr [esp]
        call    FUN_00699530
        mov     ecx, dword ptr [esi + 0x98]
        mov     eax, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [eax + 4]
        fld     dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
        push    ecx
        fmul    dword ptr [esp + 0x2c]
        fstp    dword ptr [esp]
        call    FUN_00699530
    l_afc6:
        test    bl, bl
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, ecx
        mov     dword ptr [edi + 0x14], ecx
        mov     dword ptr [ebp + 0x14], edx
        jne     l_b078
        mov     eax, dword ptr [esi + 0x60]
        mov     edx, dword ptr [esi + 0x68]
        mov     dword ptr [eax + 0x14], ecx
        mov     eax, ecx
        mov     ecx, dword ptr [esi + 0x6c]
        mov     dword ptr [edx + 0x14], eax
        mov     edx, eax
        mov     eax, dword ptr [esi + 0x70]
        mov     dword ptr [ecx + 0x14], edx
        mov     ecx, edx
        mov     edx, dword ptr [esi + 0x88]
        mov     dword ptr [eax + 0x14], ecx
        mov     eax, ecx
        mov     ecx, dword ptr [esi + 0x90]
        mov     dword ptr [edx + 0x14], eax
        mov     edx, eax
        mov     eax, dword ptr [esi + 0x94]
        mov     dword ptr [ecx + 0x14], edx
        mov     ecx, edx
        mov     edx, dword ptr [esi + 0x98]
        mov     dword ptr [eax + 0x14], ecx
        mov     eax, ecx
        mov     dword ptr [edx + 0x14], eax
        jmp     l_b078
    l_b026:
        mov     ebx, dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [esi + 0x8c]
        xor     eax, eax
        test    bl, bl
        mov     dword ptr [edi + 0x14], eax
        mov     dword ptr [ecx + 0x14], eax
        jne     l_b078
        mov     edx, dword ptr [esi + 0x60]
        mov     ecx, dword ptr [esi + 0x68]
        mov     dword ptr [edx + 0x14], eax
        mov     edx, dword ptr [esi + 0x6c]
        mov     dword ptr [ecx + 0x14], eax
        mov     ecx, dword ptr [esi + 0x70]
        mov     dword ptr [edx + 0x14], eax
        mov     edx, dword ptr [esi + 0x88]
        mov     dword ptr [ecx + 0x14], eax
        mov     ecx, dword ptr [esi + 0x90]
        mov     dword ptr [edx + 0x14], eax
        mov     edx, dword ptr [esi + 0x94]
        mov     dword ptr [ecx + 0x14], eax
        mov     ecx, dword ptr [esi + 0x98]
        mov     dword ptr [edx + 0x14], eax
        mov     dword ptr [ecx + 0x14], eax
    l_b078:
        mov     dword ptr [esp + 0x28], 0
        mov     dword ptr [esp + 0x2c], 0x3f800000
        jmp     l_b2b2
    l_b08d:
        mov     eax, dword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x28]
        push    eax
        fadd    dword ptr [esi + 0x20]
        mov     ecx, edi
        fstp    dword ptr [esi + 0x20]
        call    FUN_00699530
        test    al, al
        je      l_b0e3
        mov     ecx, edi
        call    FUN_006991d0
    l_b0b2:
        mov     ecx, dword ptr [esi + 0x8c]
        fstp    dword ptr [esi + 0x24]
    l_b0bb:
        mov     edx, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [edx + 4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fstp    dword ptr [esp]
        call    FUN_006992f0
        mov     ecx, ebx
        call    FUN_006056a0
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        add     esp, 0x10
        ret     0xc
    l_b0e3:
        mov     eax, dword ptr [edi + 0x18]
        fld     dword ptr [edi + 0x10]
        mov     eax, dword ptr [eax + 4]
        fsub    dword ptr [eax + 8]
        mov     ebp, dword ptr [esi + 0x8c]
        fld     dword ptr [eax + 0xc]
        mov     ecx, dword ptr [ebp + 0x18]
        fsub    dword ptr [eax + 8]
        mov     ecx, dword ptr [ecx + 4]
        mov     edx, dword ptr [edi + 0x18]
        fdivp   st(1), st(0)
        mov     eax, dword ptr [edx + 4]
        push    ecx
        fld     dword ptr [ebp + 0x10]
        fsub    dword ptr [ecx + 8]
        fld     dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 8]
        mov     ecx, ebp
        fdivp   st(1), st(0)
        fsubp   st(1), st(0)
        fstp    dword ptr [esp + 0x2c]
        fld     dword ptr [edi + 0x10]
        fsub    dword ptr [eax + 8]
        fld     dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
        mov     eax, dword ptr [ebp + 0x18]
        mov     eax, dword ptr [eax + 4]
        fdivp   st(1), st(0)
        fsub    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [esp + 0x2c]
        fstp    dword ptr [esp]
        call    FUN_00699530
        mov     ebx, dword ptr [esp + 0x2c]
        test    bl, bl
        jne     l_b246
        mov     ecx, dword ptr [esi + 0x60]
        mov     edx, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [edx + 4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp]
        call    FUN_00699530
        mov     ecx, dword ptr [esi + 0x68]
        mov     eax, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [eax + 4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp]
        call    FUN_00699530
        mov     ecx, dword ptr [esi + 0x6c]
        mov     edx, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [edx + 4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp]
        call    FUN_00699530
        mov     ecx, dword ptr [esi + 0x70]
        mov     eax, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [eax + 4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp]
        call    FUN_00699530
        mov     ecx, dword ptr [esi + 0x88]
        mov     edx, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [edx + 4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [esp + 0x2c]
        fstp    dword ptr [esp]
        call    FUN_00699530
        mov     ecx, dword ptr [esi + 0x90]
        mov     eax, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [eax + 4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [esp + 0x2c]
        fstp    dword ptr [esp]
        call    FUN_00699530
        mov     ecx, dword ptr [esi + 0x94]
        mov     edx, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [edx + 4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [esp + 0x2c]
        fstp    dword ptr [esp]
        call    FUN_00699530
        mov     ecx, dword ptr [esi + 0x98]
        mov     eax, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [eax + 4]
        fld     dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
        push    ecx
        fmul    dword ptr [esp + 0x2c]
        fstp    dword ptr [esp]
        call    FUN_00699530
    l_b246:
        test    bl, bl
        mov     eax, 0x3f800000
        mov     dword ptr [ebp + 0x14], eax
        mov     dword ptr [edi + 0x14], eax
        jne     l_b291
        mov     ecx, dword ptr [esi + 0x60]
        mov     edx, dword ptr [esi + 0x68]
        mov     dword ptr [ecx + 0x14], eax
        mov     ecx, dword ptr [esi + 0x6c]
        mov     dword ptr [edx + 0x14], eax
        mov     edx, dword ptr [esi + 0x70]
        mov     dword ptr [ecx + 0x14], eax
        mov     ecx, dword ptr [esi + 0x88]
        mov     dword ptr [edx + 0x14], eax
        mov     edx, dword ptr [esi + 0x90]
        mov     dword ptr [ecx + 0x14], eax
        mov     ecx, dword ptr [esi + 0x94]
        mov     dword ptr [edx + 0x14], eax
        mov     edx, dword ptr [esi + 0x98]
        mov     dword ptr [ecx + 0x14], eax
        mov     dword ptr [edx + 0x14], eax
    l_b291:
        fld     dword ptr [esp + 0x14]
        fsub    dword ptr [esi + 0x38]
        fld     dword ptr [esi + 0x3c]
        fsub    dword ptr [esi + 0x38]
        fdivp   st(1), st(0)
        fstp    dword ptr [esp + 0x2c]
        fld     dword ptr [g_0076d064]
        fsub    dword ptr [esp + 0x2c]
        fstp    dword ptr [esp + 0x28]
    l_b2b2:
        mov     edi, dword ptr [esp + 0x24]
        push    ebx
        push    edi
        mov     ecx, esi
        call    FUN_006ab3e0
        mov     eax, dword ptr [esp + 0x28]
        mov     edi, dword ptr [edi + 0x3c]
        push    eax
        mov     ecx, edi
        call    FUN_006055f0
        mov     ecx, dword ptr [esi + 0x8c]
        push    ecx
        mov     ecx, edi
        call    FUN_00605740
        test    bl, bl
        jne     l_b318
        mov     edx, dword ptr [esi + 0x88]
        push    edx
        mov     ecx, edi
        call    FUN_00605740
        mov     eax, dword ptr [esi + 0x90]
        push    eax
        mov     ecx, edi
        call    FUN_00605740
        mov     ecx, dword ptr [esi + 0x94]
        push    ecx
        mov     ecx, edi
        call    FUN_00605740
        mov     edx, dword ptr [esi + 0x98]
        push    edx
        mov     ecx, edi
        call    FUN_00605740
    l_b318:
        mov     ecx, edi
        call    FUN_00605700
        mov     eax, dword ptr [esp + 0x2c]
        push    eax
        mov     ecx, edi
        call    FUN_006055f0
        mov     ebp, dword ptr [esi + 0x64]
        push    ebp
        mov     ecx, edi
        call    FUN_00605740
        test    bl, bl
        jne     l_b366
        mov     ecx, dword ptr [esi + 0x60]
        push    ecx
        mov     ecx, edi
        call    FUN_00605740
        mov     edx, dword ptr [esi + 0x68]
        push    edx
        mov     ecx, edi
        call    FUN_00605740
        mov     eax, dword ptr [esi + 0x6c]
        push    eax
        mov     ecx, edi
        call    FUN_00605740
        mov     ecx, dword ptr [esi + 0x70]
        push    ecx
        mov     ecx, edi
        call    FUN_00605740
    l_b366:
        mov     ecx, edi
        call    FUN_00605700
        mov     ecx, edi
        call    FUN_00605700
        mov     eax, dword ptr [esi + 0x14]
        test    eax, eax
        je      l_b3c5
        mov     edx, dword ptr [ebp + 0x18]
        fld     dword ptr [ebp + 0x10]
        mov     eax, dword ptr [edx + 4]
        fsub    dword ptr [eax + 8]
        mov     esi, dword ptr [esi + 0x18]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        mov     ecx, dword ptr [esp + 0x28]
        mov     edx, dword ptr [ecx + 0x34]
        fdivp   st(1), st(0)
        lea     eax, [esi + esi*2]
        lea     ecx, [edx + eax*8]
        fstp    dword ptr [esp]
        call    FUN_00604f30
        mov     eax, dword ptr [esp + 0x1c]
        pop     edi
        pop     esi
        fstp    dword ptr [eax + 0x10]
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x10
        ret     0xc
    l_b3bb:
        fld     dword ptr [esp + 0x28]
        fadd    dword ptr [esi + 0x20]
        fstp    dword ptr [esi + 0x20]
    l_b3c5:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x10
        ret     0xc
    }
}
