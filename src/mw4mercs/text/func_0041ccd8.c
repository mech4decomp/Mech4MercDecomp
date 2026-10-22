/*
 * FUN_0041ccd8 (extent 0x41ccd8-0x41cfd2) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_0041cd20(void);
extern void __cdecl FUN_0041ce30(void);
extern void __cdecl FUN_0041cf80(void);

__declspec(naked) void FUN_0041ccd8(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        lea    eax, [edi + 0xc]
        mov    esi, ecx
        push    eax
        call    FUN_0041ce30
        push    edi
        mov    ecx, esi
        call    FUN_0041cf80
        xor    eax, eax
        mov    dword ptr [esi + 0x30], eax
        mov    dword ptr [esi + 0x34], eax
        mov    dword ptr [esi + 0x38], eax
        pop    edi
        mov    dword ptr [esi + 0x3c], 0x3f800000
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        sub    esp, 0x1c
        mov    eax, ecx
        lea    ecx, [ebp - 0x14]
        push    ebx
        mov    dword ptr [ebp - 4], ecx
        push    ebx
        push    edx
        mov    ebx, dword ptr [ebp - 4]
        mov    edx, dword ptr [ebp + 8]
        fld    dword ptr [edx]
        fsincos    
        fstp    dword ptr [ebx + 4]
        fstp    dword ptr [ebx]
        pop    edx
        pop    ebx
        mov    ecx, dword ptr [ebp + 8]
        lea    edx, [ecx + 4]
        mov    dword ptr [ebp + 8], edx
        lea    edx, [ebp - 0x1c]
        mov    dword ptr [ebp - 4], edx
        push    ebx
        push    edx
        mov    ebx, dword ptr [ebp - 4]
        mov    edx, dword ptr [ebp + 8]
        fld    dword ptr [edx]
        fsincos    
        fstp    dword ptr [ebx + 4]
        fstp    dword ptr [ebx]
        pop    edx
        pop    ebx
        add    ecx, 8
        mov    dword ptr [ebp + 8], ecx
        lea    ecx, [ebp - 0xc]
        mov    dword ptr [ebp - 4], ecx
        push    ebx
        push    edx
        mov    ebx, dword ptr [ebp - 4]
        mov    edx, dword ptr [ebp + 8]
        fld    dword ptr [edx]
        fsincos    
        fstp    dword ptr [ebx + 4]
        fstp    dword ptr [ebx]
        pop    edx
        pop    ebx
        fld    dword ptr [ebp - 8]
        fmul    dword ptr [ebp - 0x18]
        pop    ebx
        fstp    dword ptr [eax]
        fld    dword ptr [ebp - 0xc]
        fmul    dword ptr [ebp - 0x18]
        fstp    dword ptr [eax + 0x10]
        fld    dword ptr [ebp - 0x1c]
        fchs    
        fstp    dword ptr [eax + 0x20]
        fld    dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp - 0x1c]
        fld    st(0)
        fmul    dword ptr [ebp - 8]
        fld    dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp - 0xc]
        fsubp st(1), st(0)
        fstp    dword ptr [eax + 4]
        fmul    dword ptr [ebp - 0xc]
        fld    dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp - 8]
        faddp st(1), st(0)
        fstp    dword ptr [eax + 0x14]
        fld    dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp - 0x18]
        fstp    dword ptr [eax + 0x24]
        fld    dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp - 0x1c]
        fld    st(0)
        fmul    dword ptr [ebp - 8]
        fld    dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp - 0xc]
        faddp st(1), st(0)
        fstp    dword ptr [eax + 8]
        fmul    dword ptr [ebp - 0xc]
        fld    dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp - 8]
        fsubp st(1), st(0)
        fstp    dword ptr [eax + 0x18]
        fld    dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp - 0x18]
        fstp    dword ptr [eax + 0x28]
        mov    esp, ebp
        pop    ebp
        ret    4
        nop    
        nop    
        nop    
        xor    eax, eax
        mov    dword ptr [ecx + 0xc], eax
        mov    dword ptr [ecx + 0x1c], eax
        mov    dword ptr [ecx + 0x2c], eax
        mov    dword ptr [ecx + 0x30], eax
        mov    dword ptr [ecx + 0x34], eax
        mov    dword ptr [ecx + 0x38], eax
        mov    eax, dword ptr [esp + 4]
        push    eax
        mov    dword ptr [ecx + 0x3c], 0x3f800000
        call    FUN_0041cd20
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x1c
        mov    edx, dword ptr [esp + 0x20]
        fld    dword ptr [edx]
        mov    eax, ecx
        fmul    dword ptr [edx + 4]
        fld    dword ptr [edx + 8]
        fmul    dword ptr [edx + 4]
        fstp    dword ptr [esp + 0x18]
        fld    dword ptr [edx + 8]
        fmul    dword ptr [edx]
        fstp    dword ptr [esp + 0xc]
        fld    dword ptr [edx + 0xc]
        fmul    dword ptr [edx]
        fstp    dword ptr [esp + 0x14]
        fld    dword ptr [edx + 0xc]
        fmul    dword ptr [edx + 4]
        fstp    dword ptr [esp + 0x10]
        fld    dword ptr [edx + 0xc]
        fmul    dword ptr [edx + 8]
        fld    dword ptr [edx + 0xc]
        fld    st(0)
        fmul st(0), st(1)
        fstp    dword ptr [esp + 4]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [edx]
        fld    st(0)
        fmul st(0), st(1)
        fstp    dword ptr [esp + 8]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [edx + 4]
        fld    st(0)
        fmul st(0), st(1)
        fstp    dword ptr [esp + 0x20]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [edx + 8]
        fld    st(0)
        fmul st(0), st(1)
        __emit 0xD9  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x5C
__emit 0x24
__emit 0x00
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [esp + 8]
        fadd    dword ptr [esp + 4]
        fsub    dword ptr [esp + 0x20]
        __emit 0xD8  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x64
__emit 0x24
__emit 0x00
        fstp    dword ptr [eax]
        fld    st(1)
        fsub st(0), st(1)
        fadd    st(0), st(0)
        fstp    dword ptr [eax + 4]
        fld    dword ptr [esp + 0x10]
        fadd    dword ptr [esp + 0xc]
        fadd    st(0), st(0)
        fstp    dword ptr [eax + 8]
        fadd st(0), st(1)
        fadd    st(0), st(0)
        fstp    dword ptr [eax + 0x10]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [esp + 4]
        fsub    dword ptr [esp + 8]
        fld    st(0)
        fadd    dword ptr [esp + 0x20]
        __emit 0xD8  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x64
__emit 0x24
__emit 0x00
        fstp    dword ptr [eax + 0x14]
        fld    dword ptr [esp + 0x18]
        fsub    dword ptr [esp + 0x14]
        fadd    st(0), st(0)
        fstp    dword ptr [eax + 0x18]
        fld    dword ptr [esp + 0xc]
        fsub    dword ptr [esp + 0x10]
        fadd    st(0), st(0)
        fstp    dword ptr [eax + 0x20]
        fld    dword ptr [esp + 0x14]
        fadd    dword ptr [esp + 0x18]
        fadd    st(0), st(0)
        fstp    dword ptr [eax + 0x24]
        fsub    dword ptr [esp + 0x20]
        __emit 0xD8  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        fstp    dword ptr [eax + 0x28]
        add    esp, 0x1c
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    edx, dword ptr [esp + 4]
        mov    eax, ecx
        mov    dword ptr [eax], 0x3f800000
        xor    ecx, ecx
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], ecx
        push    edi
        mov    edi, dword ptr [edx]
        mov    dword ptr [eax + 0xc], edi
        mov    edi, dword ptr [edx + 4]
        mov    edx, dword ptr [edx + 8]
        mov    dword ptr [eax + 0x10], ecx
        mov    dword ptr [eax + 0x14], 0x3f800000
        mov    dword ptr [eax + 0x18], ecx
        mov    dword ptr [eax + 0x1c], edi
        mov    dword ptr [eax + 0x20], ecx
        mov    dword ptr [eax + 0x24], ecx
        mov    dword ptr [eax + 0x28], 0x3f800000
        mov    dword ptr [eax + 0x2c], edx
        mov    dword ptr [eax + 0x30], ecx
        mov    dword ptr [eax + 0x34], ecx
        mov    dword ptr [eax + 0x38], ecx
        mov    dword ptr [eax + 0x3c], 0x3f800000
        pop    edi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, ecx
        mov    ecx, dword ptr [esp + 4]
        mov    edx, dword ptr [ecx]
        mov    dword ptr [eax + 0xc], edx
        mov    edx, dword ptr [ecx + 4]
        mov    ecx, dword ptr [ecx + 8]
        mov    dword ptr [eax + 0x1c], edx
        mov    dword ptr [eax + 0x2c], ecx
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [esp + 8]
        push    esi
        mov    esi, dword ptr [esp + 8]
        xor    edx, edx
        sub    esi, ecx
L_cfad:
        fld    dword ptr [esi + ecx]
        fsub    dword ptr [ecx]
        fabs    
        fcomp    dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 0x41
        je    L_cfca
        inc    edx
        add    ecx, 4
        cmp    edx, 0x10
        jae    L_cfce
        jmp    L_cfad
L_cfca:
        xor    al, al
        pop    esi
        ret    
L_cfce:
        mov    al, 1
        pop    esi
        ret    
    }
}
