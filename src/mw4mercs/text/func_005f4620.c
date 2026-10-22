/*
 * FUN_005f4620 (1238 B) — __thiscall, RET 4 (1 float stack param).
 *
 * Vehicle turret/turn update. Dispatches on a byte state via a jump table
 * (0x5f4af8, byte table 0x5f4b10), then does extensive FPU angle clamping.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float DAT_0076c5b0;
extern float DAT_0076d598;
extern float DAT_0078a30c;
extern float DAT_0077de90;
extern float DAT_00782354;
extern float DAT_0078a304;
extern float DAT_00782350;
extern float DAT_0076d064;
extern float DAT_0077d0fc;
extern int DAT_007f23d8;
extern void FUN_00415230(void);
extern void FUN_005ced20(void);

__declspec(naked) void __fastcall FUN_005f4620(void)
{
    
__asm {
sub     esp, 0xc
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [eax + 0x4]
        mov     ebp, eax
        mov     al, byte ptr [esi + 0x2f8]
        xor     ebx, ebx
        cmp     al, bl
        jz      L464b
        mov     dword ptr [esi + 0x42c], ebx
        mov     dword ptr [esi + 0x448], ebx
L464b:
        xor     eax, eax
        mov     al, byte ptr [esi + 0x4bc]
        push    edi
        mov     dword ptr [esp + 0x10], 0x3f800000
        add     eax, -0x2
        cmp     eax, 0x19
        ja      L46fa
        xor     ecx, ecx
        mov     cl, byte ptr [eax + 0x5f4b10]
        jmp     dword ptr [ecx*4 + 0x5f4af8]
case2:
        cmp     dword ptr [ebp + 0x50], 0x3
        jnz     L46fa
        mov     dword ptr [esp + 0x10], 0x3fa00000
        jmp     L46fa
caseC:
        mov     eax, dword ptr [ebp + 0x50]
        sub     eax, 0x2
        jz      L469c
        dec     eax
        jnz     L46fa
        mov     dword ptr [esp + 0x10], 0x3e800000
        jmp     L46fa
L469c:
        mov     dword ptr [esp + 0x10], 0x3f000000
        jmp     L46fa
case16:
        mov     eax, dword ptr [ebp + 0x50]
        sub     eax, 0x2
        jz      L46cf
        dec     eax
        jnz     L46fa
        jmp     L46cf
case17:
        mov     eax, dword ptr [ebp + 0x50]
        cmp     eax, 0x2
        jl      L46fa
        cmp     eax, 0x3
        jg      L46fa
        jmp     L46cf
case19:
        mov     eax, dword ptr [ebp + 0x50]
        cmp     eax, 0x2
        jl      L46fa
        cmp     eax, 0x3
        jg      L46fa
L46cf:
        mov     edi, dword ptr [esi + 0x2fc]
        cmp     edi, ebx
        mov     dword ptr [esp + 0x10], 0
        jz      L46fa
        mov     eax, dword ptr [DAT_007f23d8]
        mov     ecx, dword ptr [edi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L46fa
        mov     ecx, edi
        call    FUN_005ced20
L46fa:
        fld     dword ptr [esi + 0x42c]
        pop     edi
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw ax
        test ah, 0x1
        jnz     L4724
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x114]
        fmul    dword ptr [esi + 0x42c]
        fmul    dword ptr [esp + 0xc]
        jmp     L4736
L4724:
        fld     dword ptr [ebp + 0x2c4]
        fmul    dword ptr [esi + 0x42c]
        fmul    dword ptr [esp + 0xc]
        fchs
L4736:
        fstp    dword ptr [esi + 0x43c]
        fld     dword ptr [esi + 0x43c]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw ax
        test ah, 0x40
        jz      L4773
        fld     dword ptr [esi + 0x440]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw ax
        test ah, 0x40
        jz      L4773
        mov     dword ptr [esi + 0x448], ebx
        mov     dword ptr [esi + 0x444], ebx
        jmp     L4ab8
L4773:
        mov     eax, dword ptr [esi + 0xd8]
        fld     dword ptr [eax + 0x88]
        add     eax, 0x80
        fld     dword ptr [eax + 0x18]
        fld     dword ptr [eax + 0x28]
        fmul    dword ptr [esi + 0x49c]
        fxch    st(1)
        fmul    dword ptr [esi + 0x498]
        faddp   st(1), st
        fxch    st(1)
        fmul    dword ptr [esi + 0x494]
        faddp   st(1), st
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw ax
        test ah, 0x1
        jz      L47e7
        fld     dword ptr [esi + 0x484]
        fcomp   dword ptr [DAT_0076c5b0]
        fld     dword ptr [esi + 0x484]
        fnstsw ax
        test ah, 0x41
        jz      L47cc
        fchs
L47cc:
        fld     dword ptr [esi + 0x484]
        fcomp   dword ptr [DAT_0076c5b0]
        fld     dword ptr [esi + 0x484]
        fnstsw ax
        test ah, 0x1
        jz      L480c
        jmp     L4806
L47e7:
        fld     dword ptr [DAT_0076c5b0]
        fld     dword ptr [esi + 0x484]
        fcomp   dword ptr [DAT_0076c5b0]
        fld     dword ptr [esi + 0x484]
        fnstsw ax
        test ah, 0x41
        jnz     L480c
L4806:
        fmul    dword ptr [DAT_0076d598]
L480c:
        fstp    dword ptr [esi + 0x484]
        fcomp   dword ptr [esi + 0x450]
        fld     dword ptr [esi + 0x484]
        fnstsw ax
        test ah, 0x41
        jz      L490b
        fld     dword ptr [esi + 0x450]
        fsub    dword ptr [DAT_0078a30c]
        fst     dword ptr [esp + 0x10]
        fchs
        fstp    dword ptr [esp + 0x14]
        fcom    dword ptr [esp + 0x14]
        fnstsw ax
        test ah, 0x1
        jz      L4852
        fstp    st
        fld     dword ptr [esp + 0x14]
        jmp     L4863
L4852:
        fcom    dword ptr [esp + 0x10]
        fnstsw ax
        test ah, 0x41
        jnz     L4863
        fstp    st
        fld     dword ptr [esp + 0x10]
L4863:
        fld     dword ptr [esi + 0x440]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw ax
        test ah, 0x41
        jnz     L48a1
        fcom    dword ptr [DAT_0076c5b0]
        fnstsw ax
        test ah, 0x1
        jnz     L48fd
        fld     dword ptr [esi + 0x43c]
        fxch    st(1)
        fmul    dword ptr [DAT_0077de90]
        fdiv    dword ptr [esi + 0x450]
        fmul    st, st(1)
        fsubr   st, st(1)
        fstp    dword ptr [esi + 0x43c]
L48a1:
        fstp    st
L48a3:
        fld     dword ptr [esi + 0x440]
        fcomp   dword ptr [DAT_0076c5b0]
        fld     dword ptr [esi + 0x43c]
        fnstsw ax
        fcomp   dword ptr [esi + 0x440]
        test ah, 0x1
        fnstsw ax
        jnz     L49af
        test ah, 0x41
        jnz     L4960
        fld     dword ptr [esp + 0x1c]
        fmul    dword ptr [ebp + 0x2d4]
        fadd    dword ptr [esi + 0x440]
        fst     dword ptr [esi + 0x440]
        fcomp   dword ptr [esi + 0x43c]
        fnstsw ax
        test ah, 0x41
        jnz     L4a33
        jmp     L4a27
L48fd:
        fmul    dword ptr [DAT_00782354]
        fdiv    dword ptr [esi + 0x450]
        jmp     L4949
L490b:
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw ax
        test ah, 0x41
        jnz     L4920
        mov     dword ptr [esi + 0x43c], ebx
        jmp     L48a3
L4920:
        fld     dword ptr [esi + 0x484]
        fchs
        fcom    dword ptr [DAT_0078a304]
        fnstsw ax
        test ah, 0x41
        jnz     L493d
        fstp    st
        fld     dword ptr [DAT_0078a304]
L493d:
        fmul    dword ptr [DAT_00782350]
        fdiv    dword ptr [DAT_0078a304]
L4949:
        fadd    dword ptr [DAT_0076d064]
        fmul    dword ptr [esi + 0x43c]
        fstp    dword ptr [esi + 0x43c]
        jmp     L48a3
L4960:
        fld     dword ptr [esi + 0x43c]
        fcomp   dword ptr [esi + 0x440]
        fnstsw ax
        test ah, 0x1
        jz      L4a33
        fld     dword ptr [esp + 0x1c]
        fmul    dword ptr [ebp + 0x2d8]
        fsubr   dword ptr [esi + 0x440]
        fst     dword ptr [esi + 0x440]
        fcomp   dword ptr [esi + 0x43c]
        fnstsw ax
        test ah, 0x1
        jz      L4a33
        mov     ecx, dword ptr [esi + 0x43c]
        mov     dword ptr [esi + 0x440], ecx
        jmp     L4a33
L49af:
        test ah, 0x1
        jz      L49eb
        fld     dword ptr [ebp + 0x2dc]
        fmul    dword ptr [ebp + 0x2d4]
        fmul    dword ptr [esp + 0x1c]
        fsubr   dword ptr [esi + 0x440]
        fst     dword ptr [esi + 0x440]
        fcomp   dword ptr [esi + 0x43c]
        fnstsw ax
        test ah, 0x1
        jz      L4a33
        mov     edx, dword ptr [esi + 0x43c]
        mov     dword ptr [esi + 0x440], edx
        jmp     L4a33
L49eb:
        fld     dword ptr [esi + 0x43c]
        fcomp   dword ptr [esi + 0x440]
        fnstsw ax
        test ah, 0x41
        jnz     L4a33
        fld     dword ptr [ebp + 0x2e0]
        fmul    dword ptr [ebp + 0x2d8]
        fmul    dword ptr [esp + 0x1c]
        fadd    dword ptr [esi + 0x440]
        fst     dword ptr [esi + 0x440]
        fcomp   dword ptr [esi + 0x43c]
        fnstsw ax
        test ah, 0x41
        jnz     L4a33
L4a27:
        mov     eax, dword ptr [esi + 0x43c]
        mov     dword ptr [esi + 0x440], eax
L4a33:
        fld     dword ptr [esp + 0xc]
        fmul    dword ptr [ebp + 0x2c4]
        fcom    dword ptr [esi + 0x440]
        fnstsw ax
        test ah, 0x41
        jz      L4a75
        mov     edx, dword ptr [esi]
        fstp    st
        mov     ecx, esi
        call    dword ptr [edx + 0x114]
        fmul    dword ptr [esp + 0xc]
        fcomp   dword ptr [esi + 0x440]
        fnstsw ax
        test ah, 0x1
        jz      L4a7b
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x114]
        fmul    dword ptr [esp + 0xc]
L4a75:
        fstp    dword ptr [esi + 0x440]
L4a7b:
        fld     dword ptr [esi + 0x440]
        mov     ecx, dword ptr [esi + 0x440]
        fmul    dword ptr [DAT_0077d0fc]
        mov     dword ptr [esi + 0x170], ecx
        fst     dword ptr [esi + 0x444]
        fld     dword ptr [esi + 0x43c]
        fmul    dword ptr [DAT_0077d0fc]
        fstp    dword ptr [esi + 0x448]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw ax
        test ah, 0x40
        jz      L4ad7
L4ab8:
        mov     dword ptr [esi + 0x41c], ebx
        mov     dword ptr [esi + 0x424], ebx
        mov     dword ptr [esi + 0x420], 0x1
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     4
L4ad7:
        mov     dword ptr [esi + 0x420], ebx
        mov     dword ptr [esi + 0x424], ebx
        mov     dword ptr [esi + 0x41c], 0x1
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     4
    }

}
