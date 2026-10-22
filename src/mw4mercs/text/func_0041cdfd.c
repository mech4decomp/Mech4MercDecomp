/*
 * FUN_0041cdfd (extent 0x41cdfd-0x41d3ab) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_0041cd20(void);

__declspec(naked) void FUN_0041cdfd(void)
{
    __asm {
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
        mov    edx, dword ptr [esp + 4]
        fld    dword ptr [edx]
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        fmul    dword ptr [esi]
        mov    eax, ecx
        fld    dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 8]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 4]
        faddp st(1), st(0)
        fld    dword ptr [esi + 0xc]
        fmul    dword ptr [edx + 0x30]
        faddp st(1), st(0)
        fstp    dword ptr [eax]
        fld    dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 4]
        fld    dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 8]
        faddp st(1), st(0)
        fld    dword ptr [esi]
        fmul    dword ptr [edx + 4]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x34]
        fmul    dword ptr [esi + 0xc]
        faddp st(1), st(0)
        fstp    dword ptr [eax + 4]
        fld    dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 8]
        fld    dword ptr [edx + 8]
        fmul    dword ptr [esi]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x38]
        fmul    dword ptr [esi + 0xc]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 4]
        faddp st(1), st(0)
        fstp    dword ptr [eax + 8]
        fld    dword ptr [esi + 0xc]
        fmul    dword ptr [edx + 0x3c]
        fld    dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 4]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 8]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0xc]
        fmul    dword ptr [esi]
        faddp st(1), st(0)
        fstp    dword ptr [eax + 0xc]
        fld    dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x14]
        fld    dword ptr [esi + 0x10]
        fmul    dword ptr [edx]
        faddp st(1), st(0)
        fld    dword ptr [esi + 0x1c]
        fmul    dword ptr [edx + 0x30]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x18]
        faddp st(1), st(0)
        fstp    dword ptr [eax + 0x10]
        fld    dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x14]
        fld    dword ptr [esi + 0x10]
        fmul    dword ptr [edx + 4]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x34]
        fmul    dword ptr [esi + 0x1c]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x18]
        faddp st(1), st(0)
        fstp    dword ptr [eax + 0x14]
        fld    dword ptr [esi + 0x14]
        fmul    dword ptr [edx + 0x18]
        fld    dword ptr [edx + 0x38]
        fmul    dword ptr [esi + 0x1c]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x18]
        faddp st(1), st(0)
        fld    dword ptr [esi + 0x10]
        fmul    dword ptr [edx + 8]
        faddp st(1), st(0)
        fstp    dword ptr [eax + 0x18]
        fld    dword ptr [esi + 0x10]
        fmul    dword ptr [edx + 0xc]
        fld    dword ptr [esi + 0x1c]
        fmul    dword ptr [edx + 0x3c]
        faddp st(1), st(0)
        fld    dword ptr [esi + 0x18]
        fmul    dword ptr [edx + 0x2c]
        faddp st(1), st(0)
        fld    dword ptr [esi + 0x14]
        fmul    dword ptr [edx + 0x1c]
        faddp st(1), st(0)
        fstp    dword ptr [eax + 0x1c]
        fld    dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x24]
        fld    dword ptr [esi + 0x20]
        fmul    dword ptr [edx]
        faddp st(1), st(0)
        fld    dword ptr [esi + 0x2c]
        fmul    dword ptr [edx + 0x30]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x28]
        faddp st(1), st(0)
        fstp    dword ptr [eax + 0x20]
        fld    dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x24]
        fld    dword ptr [esi + 0x20]
        fmul    dword ptr [edx + 4]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x34]
        fmul    dword ptr [esi + 0x2c]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x28]
        faddp st(1), st(0)
        fstp    dword ptr [eax + 0x24]
        fld    dword ptr [esi + 0x24]
        fmul    dword ptr [edx + 0x18]
        fld    dword ptr [edx + 0x38]
        fmul    dword ptr [esi + 0x2c]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x28]
        faddp st(1), st(0)
        fld    dword ptr [esi + 0x20]
        fmul    dword ptr [edx + 8]
        faddp st(1), st(0)
        fstp    dword ptr [eax + 0x28]
        fld    dword ptr [esi + 0x20]
        fmul    dword ptr [edx + 0xc]
        fld    dword ptr [esi + 0x2c]
        fmul    dword ptr [edx + 0x3c]
        faddp st(1), st(0)
        fld    dword ptr [esi + 0x28]
        fmul    dword ptr [edx + 0x2c]
        faddp st(1), st(0)
        fld    dword ptr [esi + 0x24]
        fmul    dword ptr [edx + 0x1c]
        faddp st(1), st(0)
        fstp    dword ptr [eax + 0x2c]
        fld    dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x34]
        fld    dword ptr [esi + 0x30]
        fmul    dword ptr [edx]
        faddp st(1), st(0)
        fld    dword ptr [esi + 0x3c]
        fmul    dword ptr [edx + 0x30]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x38]
        faddp st(1), st(0)
        fstp    dword ptr [eax + 0x30]
        fld    dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x34]
        fld    dword ptr [esi + 0x30]
        fmul    dword ptr [edx + 4]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x34]
        fmul    dword ptr [esi + 0x3c]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x38]
        faddp st(1), st(0)
        fstp    dword ptr [eax + 0x34]
        fld    dword ptr [esi + 0x34]
        fmul    dword ptr [edx + 0x18]
        fld    dword ptr [edx + 0x38]
        fmul    dword ptr [esi + 0x3c]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x38]
        faddp st(1), st(0)
        fld    dword ptr [esi + 0x30]
        fmul    dword ptr [edx + 8]
        faddp st(1), st(0)
        fstp    dword ptr [eax + 0x38]
        fld    dword ptr [esi + 0x30]
        fmul    dword ptr [edx + 0xc]
        fld    dword ptr [esi + 0x3c]
        fmul    dword ptr [edx + 0x3c]
        faddp st(1), st(0)
        fld    dword ptr [esi + 0x38]
        fmul    dword ptr [edx + 0x2c]
        faddp st(1), st(0)
        fld    dword ptr [esi + 0x34]
        pop    esi
        fmul    dword ptr [edx + 0x1c]
        faddp st(1), st(0)
        fstp    dword ptr [eax + 0x3c]
        ret    8
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
        mov    edx, dword ptr [esp + 4]
        fld    dword ptr [edx]
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        fmul    dword ptr [esi]
        mov    eax, ecx
        fld    dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 8]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 4]
        faddp st(1), st(0)
        fld    dword ptr [esi + 0xc]
        fmul    dword ptr [edx + 0x30]
        faddp st(1), st(0)
        fstp    dword ptr [eax]
        fld    dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 4]
        fld    dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 8]
        faddp st(1), st(0)
        fld    dword ptr [esi]
        fmul    dword ptr [edx + 4]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x34]
        fmul    dword ptr [esi + 0xc]
        faddp st(1), st(0)
        fstp    dword ptr [eax + 4]
        fld    dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 8]
        fld    dword ptr [edx + 8]
        fmul    dword ptr [esi]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x38]
        fmul    dword ptr [esi + 0xc]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 4]
        faddp st(1), st(0)
        fstp    dword ptr [eax + 8]
        fld    dword ptr [esi + 0xc]
        fmul    dword ptr [edx + 0x3c]
        fld    dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 4]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 8]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0xc]
        fmul    dword ptr [esi]
        faddp st(1), st(0)
        fstp    dword ptr [eax + 0xc]
        fld    dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x14]
        fld    dword ptr [esi + 0x10]
        fmul    dword ptr [edx]
        faddp st(1), st(0)
        fld    dword ptr [esi + 0x1c]
        fmul    dword ptr [edx + 0x30]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x18]
        faddp st(1), st(0)
        fstp    dword ptr [eax + 0x10]
        fld    dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x14]
        fld    dword ptr [esi + 0x10]
        fmul    dword ptr [edx + 4]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x34]
        fmul    dword ptr [esi + 0x1c]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x18]
        faddp st(1), st(0)
        fstp    dword ptr [eax + 0x14]
        fld    dword ptr [esi + 0x14]
        fmul    dword ptr [edx + 0x18]
        fld    dword ptr [edx + 0x38]
        fmul    dword ptr [esi + 0x1c]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x28]
        mov    ecx, dword ptr [edx + 0x30]
        fmul    dword ptr [esi + 0x18]
        faddp st(1), st(0)
        fld    dword ptr [esi + 0x10]
        fmul    dword ptr [edx + 8]
        faddp st(1), st(0)
        fstp    dword ptr [eax + 0x18]
        fld    dword ptr [esi + 0x10]
        fmul    dword ptr [edx + 0xc]
        fld    dword ptr [esi + 0x1c]
        fmul    dword ptr [edx + 0x3c]
        faddp st(1), st(0)
        fld    dword ptr [esi + 0x18]
        fmul    dword ptr [edx + 0x2c]
        faddp st(1), st(0)
        fld    dword ptr [esi + 0x14]
        fmul    dword ptr [edx + 0x1c]
        faddp st(1), st(0)
        fstp    dword ptr [eax + 0x1c]
        fld    dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x24]
        fld    dword ptr [esi + 0x20]
        fmul    dword ptr [edx]
        faddp st(1), st(0)
        fld    dword ptr [esi + 0x2c]
        fmul    dword ptr [edx + 0x30]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x28]
        faddp st(1), st(0)
        fstp    dword ptr [eax + 0x20]
        fld    dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x24]
        fld    dword ptr [esi + 0x20]
        fmul    dword ptr [edx + 4]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x34]
        fmul    dword ptr [esi + 0x2c]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x28]
        faddp st(1), st(0)
        fstp    dword ptr [eax + 0x24]
        fld    dword ptr [esi + 0x24]
        fmul    dword ptr [edx + 0x18]
        fld    dword ptr [edx + 0x38]
        fmul    dword ptr [esi + 0x2c]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x28]
        faddp st(1), st(0)
        fld    dword ptr [esi + 0x20]
        fmul    dword ptr [edx + 8]
        faddp st(1), st(0)
        fstp    dword ptr [eax + 0x28]
        fld    dword ptr [esi + 0x20]
        fmul    dword ptr [edx + 0xc]
        fld    dword ptr [esi + 0x2c]
        fmul    dword ptr [edx + 0x3c]
        faddp st(1), st(0)
        fld    dword ptr [esi + 0x28]
        fmul    dword ptr [edx + 0x2c]
        faddp st(1), st(0)
        fld    dword ptr [esi + 0x24]
        pop    esi
        fmul    dword ptr [edx + 0x1c]
        faddp st(1), st(0)
        fstp    dword ptr [eax + 0x2c]
        mov    dword ptr [eax + 0x30], ecx
        mov    ecx, dword ptr [edx + 0x34]
        mov    dword ptr [eax + 0x34], ecx
        mov    ecx, dword ptr [edx + 0x38]
        mov    edx, dword ptr [edx + 0x3c]
        mov    dword ptr [eax + 0x38], ecx
        mov    dword ptr [eax + 0x3c], edx
        ret    8
    }
}
