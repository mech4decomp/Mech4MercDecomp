/*
 * FUN_004ac690 (723 B) -- __thiscall (RET 0x8). MLR sub-object animation
 * update: computes interpolated position/scale via FPU, calls FUN_00415020
 * (rand?), FUN_00495e60/FUN_00495e10 (quaternion/angle helpers), and
 * FUN_0041c610 (matrix build). Writes 3-vector output to param_2.
 *
 * CFLAGS: /O1
 */

extern float g_76c5b0;
extern float g_76d064;
extern float g_770264;
extern float g_7704a0;
extern float g_7704a4;
extern float g_7704a8;
extern void __cdecl FUN_00415020(void);
extern void __cdecl FUN_00495e60(void);
extern void __cdecl FUN_00495e10(void);
extern void __cdecl FUN_0041c610(void);

__declspec(naked) void FUN_004ac690(void)
{
    __asm {
        sub     esp, 0x2c
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi + 0x10]
        fld     dword ptr [edi + 0x90]
        mov     ebx, dword ptr [esi + 0x270]
        fld     st(0)
        fmul    dword ptr [esi + 0x2c]
        imul    ebx, dword ptr [esp + 0x3c]
        fadd    dword ptr [esi + 0x30]
        mov     eax, dword ptr [edi + 0xa8]
        add     ebx, eax
        mov     eax, dword ptr [edi + 0x90]
        fmul    st(0), st(1)
        mov     dword ptr [ebx + 0x1c], 0x0
        mov     dword ptr [esp + 0x3c], eax
        fadd    dword ptr [esi + 0x28]
        fmul    st(0), st(1)
        fadd    dword ptr [esi + 0x24]
        fstp    dword ptr [esp + 0xc]
        fstp    st(0)
        call    FUN_00415020
        fld     dword ptr [esp + 0x3c]
        fmul    dword ptr [esi + 0x40]
        fadd    dword ptr [esi + 0x44]
        fmul    dword ptr [esp + 0x3c]
        fadd    dword ptr [esi + 0x3c]
        fmul    dword ptr [esp + 0x3c]
        fadd    dword ptr [esi + 0x38]
        fsub    dword ptr [esp + 0xc]
        fmulp   st(1), st(0)
        fadd    dword ptr [esp + 0xc]
        fst     dword ptr [esp + 0x3c]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_71f
        mov     dword ptr [esp + 0x3c], 0x0
        jmp     L_738
L_71f:
        fld     dword ptr [esp + 0x3c]
        fcomp   dword ptr [g_76d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_738
        mov     dword ptr [esp + 0x3c], 0x3f800000
L_738:
        mov     ecx, dword ptr [esp + 0x3c]
        fld     dword ptr [edi + 0x90]
        push    0x0
        push    ecx
        mov     dword ptr [ebx + 0x18], ecx
        fstp    dword ptr [esp]
        lea     ecx, [esi + 0xd8]
        call    FUN_00495e60
        fstp    dword ptr [esp + 0xc]
        mov     al, byte ptr [esi + 0xf8]
        test    al, al
        jz      L_77e
        mov     edx, dword ptr [esp + 0x3c]
        push    0x0
        push    edx
        lea     ecx, [esi + 0xe4]
        call    FUN_00495e10
        fmul    dword ptr [esp + 0xc]
        fstp    dword ptr [esp + 0xc]
L_77e:
        fld     dword ptr [esp + 0xc]
        fld     dword ptr [esp + 0xc]
        fcomp   dword ptr [g_770264]
        fnstsw  ax
        test    ah, 0x1
        jz      L_79b
        fstp    st(0)
        fld     dword ptr [g_770264]
L_79b:
        fld     dword ptr [g_76d064]
        fdiv    st(0), st(1)
        fstp    dword ptr [ebx + 0x20]
        fstp    st(0)
        call    FUN_00415020
        fmul    dword ptr [g_7704a0]
        fsub    dword ptr [g_7704a4]
        fstp    dword ptr [esp + 0xc]
        call    FUN_00415020
        fmul    dword ptr [g_7704a8]
        fstp    dword ptr [esp + 0x10]
        call    FUN_00415020
        fstp    dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0xc]
        lea     edx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], ecx
        push    edx
        lea     ecx, [esp + 0x24]
        mov     dword ptr [esp + 0x1c], eax
        call    FUN_0041c610
        fld     dword ptr [esi + 0x7c]
        fmul    dword ptr [edi + 0x90]
        mov     eax, dword ptr [esp + 0x40]
        fadd    dword ptr [esi + 0x78]
        fmul    dword ptr [esp + 0x20]
        fstp    dword ptr [eax]
        fld     dword ptr [esi + 0x88]
        fmul    dword ptr [edi + 0x90]
        fadd    dword ptr [esi + 0x84]
        fmul    dword ptr [esp + 0x24]
        fstp    dword ptr [eax + 0x4]
        fld     dword ptr [esi + 0x94]
        fmul    dword ptr [edi + 0x90]
        fadd    dword ptr [esi + 0x90]
        fmul    dword ptr [esp + 0x28]
        fstp    dword ptr [eax + 0x8]
        mov     eax, dword ptr [esi + 0x9c]
        fld     dword ptr [edi + 0x90]
        mov     dword ptr [esp + 0xc], eax
        fld     st(0)
        fmul    dword ptr [esi + 0xac]
        fadd    dword ptr [esi + 0xb0]
        fmul    st(0), st(1)
        fadd    dword ptr [esi + 0xa8]
        fmul    st(0), st(1)
        fadd    dword ptr [esi + 0xa4]
        fsub    dword ptr [esp + 0xc]
        fstp    dword ptr [esp + 0x40]
        fstp    st(0)
        fld     dword ptr [esp + 0x40]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_88c
        mov     dword ptr [esp + 0x40], 0x0
L_88c:
        call    FUN_00415020
        fmul    dword ptr [esp + 0x40]
        fsub    dword ptr [g_7704a4]
        fadd    dword ptr [esp + 0xc]
        fstp    dword ptr [esp + 0x40]
        call    FUN_00415020
        fmul    dword ptr [g_7704a8]
        mov     edx, dword ptr [esi + 0xc0]
        fld     dword ptr [edi + 0x90]
        xor     ecx, ecx
        test    edx, edx
        jbe     L_8d7
        mov     edi, dword ptr [esi + 0xbc]
L_8c6:
        fcom    dword ptr [edi]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_8d7
        inc     ecx
        add     edi, 0xc
        cmp     ecx, edx
        jc      L_8c6
L_8d7:
        mov     edx, dword ptr [esi + 0xbc]
        lea     ecx, [ecx + ecx*0x2]
        fsub    dword ptr [edx + ecx*0x4 - 0xc]
        lea     eax, [edx + ecx*0x4 - 0xc]
        fmul    dword ptr [eax + 0x4]
        fadd    dword ptr [eax + 0x8]
        mov     al, byte ptr [esi + 0xd0]
        test    al, al
        jz      L_93c
        mov     edx, dword ptr [esi + 0xcc]
        xor     ecx, ecx
        test    edx, edx
        jbe     L_91f
        mov     edi, dword ptr [esi + 0xc8]
L_90a:
        fld     dword ptr [edi]
        fcomp   dword ptr [esp + 0x3c]
        fnstsw  ax
        test    ah, 0x41
        jz      L_91f
        inc     ecx
        add     edi, 0xc
        cmp     ecx, edx
        jc      L_90a
L_91f:
        fld     dword ptr [esp + 0x3c]
        lea     eax, [ecx + ecx*0x2]
        mov     ecx, dword ptr [esi + 0xc8]
        fsub    dword ptr [ecx + eax*0x4 - 0xc]
        lea     eax, [ecx + eax*0x4 - 0xc]
        fmul    dword ptr [eax + 0x4]
        fadd    dword ptr [eax + 0x8]
        fmulp   st(1), st(0)
L_93c:
        mov     edx, dword ptr [esp + 0x40]
        fxch    st(1)
        fstp    dword ptr [esp + 0x2c]
        lea     eax, [esp + 0x2c]
        push    eax
        mov     ecx, ebx
        fstp    dword ptr [esp + 0x38]
        mov     dword ptr [esp + 0x34], edx
        call    FUN_0041c610
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x2c
        ret     0x8
    }
}
