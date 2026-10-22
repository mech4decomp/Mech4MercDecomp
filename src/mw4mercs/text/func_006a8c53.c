/*
 * FUN_006a8c53 (extent 0x6a8c53-0x6a9544) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2ac;
extern int    g_0076b2d8;
extern float  g_0076c5b0;
extern float  g_0076d064;
extern float  g_0076d598;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_004da880(void);
extern void __cdecl FUN_00604f30(void);
extern void __cdecl FUN_006055f0(void);
extern void __cdecl FUN_006056a0(void);
extern void __cdecl FUN_00605700(void);
extern void __cdecl FUN_00605740(void);
extern void __cdecl FUN_0066b370(void);
extern void __cdecl FUN_00698b90(void);
extern void __cdecl FUN_00698df0(void);
extern void __cdecl FUN_00699010(void);
extern void __cdecl FUN_00699160(void);
extern void __cdecl FUN_006991d0(void);
extern void __cdecl FUN_006992f0(void);
extern void __cdecl FUN_00699530(void);
extern void __cdecl FUN_00699940(void);
extern void __cdecl FUN_00767d20(void);

__declspec(naked) void FUN_006a8c53(void)
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
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x30]
        mov    edx, dword ptr [eax + 0x10]
        mov    eax, dword ptr [edx + 4]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
        mov    eax, dword ptr [ecx + 0x38]
        cmp    eax, 0xbf800000
        jne    L_8c7d
        fadd    dword ptr [ecx + 0x10]
        ret    
L_8c7d:
        fld    st(0)
        fadd    dword ptr [ecx + 0x10]
        fxch    st(1)
        fmul    dword ptr [ecx + 0x38]
        fsubp st(1), st(0)
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x38
        push    ebx
        mov    ebx, dword ptr [esp + 0x44]
        push    ebp
        push    esi
        push    edi
        mov    ebp, ecx
        push    0x796e48
        mov    ecx, ebx
        mov    dword ptr [esp + 0x20], ebp
        call    FUN_00767d20
        push    0x76ff64
        mov    ecx, ebx
        call    FUN_00767d20
        mov    esi, dword ptr [eax + 4]
        push    0x799ea4
        push    esi
        call    dword ptr [g_0076b2ac]
        add    esp, 8
        test    eax, eax
        jne    L_8cd8
        mov    dword ptr [ebp + 0x30], 0xbf800000
        jmp    L_8ce5
L_8cd8:
        push    esi
        call    dword ptr [g_0076b2d8]
        fstp    dword ptr [ebp + 0x30]
        add    esp, 4
L_8ce5:
        push    0x799ed4
        mov    ecx, ebx
        call    FUN_00767d20
        mov    dword ptr [esp + 0x10], 0
        mov    eax, dword ptr [eax + 4]
        push    eax
        push    0
        lea    ecx, [esp + 0x20]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x14]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 0x18]
        test    eax, eax
        je    L_8d2d
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_8d2d
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_8d2d:
        mov    ecx, dword ptr [esp + 0x10]
        push    0x799e90
        push    ecx
        lea    ecx, [esp + 0x20]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x14]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 0x18]
        test    eax, eax
        je    L_8d65
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_8d65
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_8d65:
        mov    edx, dword ptr [esp + 0x10]
        mov    esi, dword ptr [esp + 0x4c]
        push    edx
        mov    ecx, esi
        call    FUN_0066b370
        mov    edi, eax
        push    0x799ec8
        mov    ecx, ebx
        mov    dword ptr [ebp + 0x44], edi
        call    FUN_00767d20
        mov    eax, dword ptr [eax + 4]
        push    eax
        lea    ecx, [esp + 0x14]
        call    FUN_00412780
        mov    eax, dword ptr [esp + 0x10]
        push    0x799e90
        push    eax
        lea    ecx, [esp + 0x54]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x14]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 0x4c]
        test    eax, eax
        je    L_8dcb
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_8dcb
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_8dcb:
        mov    ecx, dword ptr [esp + 0x10]
        push    ecx
        mov    ecx, esi
        call    FUN_0066b370
        push    0x799ea8
        mov    ecx, ebx
        mov    dword ptr [esp + 0x1c], eax
        mov    dword ptr [ebp + 0x48], eax
        call    FUN_00767d20
        mov    eax, dword ptr [eax + 4]
        mov    ecx, dword ptr [esi + 0x18]
        push    eax
        call    FUN_004da880
        push    0x2c
        mov    dword ptr [ebp + 0x34], eax
        mov    dword ptr [ebp + 0x38], 0xbf800000
        call    FUN_004084d0
        xor    ebx, ebx
        add    esp, 4
        cmp    eax, ebx
        je    L_8e1e
        push    edi
        mov    ecx, eax
        call    FUN_00698b90
        mov    dword ptr [esp + 0x4c], eax
        jmp    L_8e24
L_8e1e:
        mov    dword ptr [esp + 0x4c], ebx
        mov    eax, ebx
L_8e24:
        mov    edi, dword ptr [edi + 0x10]
        mov    edx, dword ptr [edi + 0x30]
        shr    edx, 4
        test    edx, edx
        mov    dword ptr [esp + 0x20], edx
        jle    L_8eca
        mov    edi, dword ptr [edi + 0x2c]
        add    edi, 0xd
        mov    dword ptr [esp + 0x14], edi
L_8e43:
        cmp    byte ptr [edi], 0
        jne    L_8eba
        push    ebx
        mov    ecx, eax
        call    FUN_00698df0
        mov    ecx, dword ptr [esp + 0x4c]
        push    ebx
        mov    esi, eax
        call    FUN_00699010
        push    0
        mov    edi, eax
        push    edi
        push    edi
        push    esi
        lea    edx, [esp + 0x34]
        push    esi
        push    edx
        call    FUN_00699940
        fld    dword ptr [eax + 8]
        fcomp    dword ptr [g_0076c5b0]
        add    esp, 0x18
        push    0
        push    edi
        push    edi
        fnstsw  ax
        push    esi
        push    esi
        test    ah, 0x41
        jne    L_8e99
        lea    eax, [esp + 0x44]
        push    eax
        call    FUN_00699940
        fld    dword ptr [eax + 8]
        add    esp, 0x18
        jmp    L_8eab
L_8e99:
        lea    ecx, [esp + 0x50]
        push    ecx
        call    FUN_00699940
        fld    dword ptr [eax + 8]
        add    esp, 0x18
        fchs    
L_8eab:
        mov    edx, dword ptr [esp + 0x20]
        fstp    dword ptr [ebp + 0x38]
        mov    eax, dword ptr [esp + 0x4c]
        mov    edi, dword ptr [esp + 0x14]
L_8eba:
        inc    ebx
        add    edi, 0x10
        cmp    ebx, edx
        mov    dword ptr [esp + 0x14], edi
        jl    L_8e43
L_8eca:
        test    eax, eax
        je    L_8ed6
        mov    edx, dword ptr [eax]
        push    1
        mov    ecx, eax
        call    dword ptr [edx]
L_8ed6:
        push    0x2c
        mov    dword ptr [ebp + 0x3c], 0xbf800000
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_8eff
        mov    esi, dword ptr [esp + 0x18]
        push    esi
        mov    ecx, eax
        call    FUN_00698b90
        mov    edi, eax
        mov    dword ptr [esp + 0x4c], edi
        jmp    L_8f0f
L_8eff:
        mov    esi, dword ptr [esp + 0x18]
        mov    dword ptr [esp + 0x4c], 0
        mov    edi, dword ptr [esp + 0x4c]
L_8f0f:
        mov    eax, dword ptr [esi + 0x10]
        mov    ecx, dword ptr [eax + 0x30]
        shr    ecx, 4
        xor    ebx, ebx
        test    ecx, ecx
        jle    L_8fb4
        mov    ecx, dword ptr [eax + 0x30]
        mov    ebp, dword ptr [eax + 0x2c]
        shr    ecx, 4
        mov    dword ptr [esp + 0x20], ecx
        add    ebp, 0xd
L_8f32:
        cmp    byte ptr [ebp], 0
        jne    L_8fa8
        push    ebx
        mov    ecx, edi
        call    FUN_00698df0
        push    ebx
        mov    ecx, edi
        mov    esi, eax
        call    FUN_00699010
        push    0
        mov    edi, eax
        push    edi
        push    edi
        push    esi
        lea    edx, [esp + 0x4c]
        push    esi
        push    edx
        call    FUN_00699940
        fld    dword ptr [eax + 8]
        fcomp    dword ptr [g_0076c5b0]
        add    esp, 0x18
        push    0
        push    edi
        push    edi
        fnstsw  ax
        push    esi
        push    esi
        test    ah, 0x41
        jne    L_8f87
        lea    eax, [esp + 0x44]
        push    eax
        call    FUN_00699940
        fld    dword ptr [eax + 8]
        add    esp, 0x18
        jmp    L_8f99
L_8f87:
        lea    ecx, [esp + 0x38]
        push    ecx
        call    FUN_00699940
        fld    dword ptr [eax + 8]
        add    esp, 0x18
        fchs    
L_8f99:
        mov    edx, dword ptr [esp + 0x1c]
        mov    ecx, dword ptr [esp + 0x20]
        fstp    dword ptr [edx + 0x3c]
        mov    edi, dword ptr [esp + 0x4c]
L_8fa8:
        inc    ebx
        add    ebp, 0x10
        cmp    ebx, ecx
        jl    L_8f32
        mov    ebp, dword ptr [esp + 0x1c]
L_8fb4:
        mov    ecx, dword ptr [esp + 0x50]
        push    0x799eb4
        mov    dword ptr [ebp + 0x40], 0x3f800000
        call    FUN_00767d20
        test    eax, eax
        je    L_8fdd
        mov    eax, dword ptr [eax + 4]
        push    eax
        call    dword ptr [g_0076b2d8]
        fstp    dword ptr [ebp + 0x40]
        add    esp, 4
L_8fdd:
        test    edi, edi
        je    L_8fe9
        mov    edx, dword ptr [edi]
        push    1
        mov    ecx, edi
        call    dword ptr [edx]
L_8fe9:
        mov    eax, dword ptr [esp + 0x10]
        test    eax, eax
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        je    L_9008
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_9008
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_9008:
        add    esp, 0x38
        ret    0xc
        nop    
        nop    
        sub    esp, 0x10
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x24]
        lea    edx, [esp + 0x10]
        mov    esi, ecx
        mov    ecx, dword ptr [esi + 0x34]
        mov    eax, dword ptr [ecx]
        push    edx
        mov    edx, dword ptr [edi + 0x18]
        push    edx
        call    dword ptr [eax + 8]
        fld    dword ptr [esp + 0x10]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        je    L_9049
        fld    dword ptr [esp + 0x10]
        fchs    
        fstp    dword ptr [esp + 0x10]
L_9049:
        fld    dword ptr [esi + 0x20]
        fcomp    dword ptr [esi + 0x10]
        fnstsw  ax
        test    ah, 1
        jne    L_9383
        mov    ebp, dword ptr [edi + 0x3c]
        push    0x3f800000
        mov    ecx, ebp
        call    FUN_006055f0
        fld    dword ptr [esi + 0x40]
        fmul    dword ptr [esi + 0x38]
        mov    dword ptr [esp + 0x1c], eax
        fcomp    dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 0x41
        jne    L_9175
        mov    ebx, dword ptr [esi + 0x4c]
        mov    eax, dword ptr [ebx + 0x18]
        fld    dword ptr [ebx + 0x10]
        mov    eax, dword ptr [eax + 4]
        fsub    dword ptr [eax + 8]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
        fdivp st(1), st(0)
        fstp    dword ptr [esp + 0x18]
        fld    dword ptr [esp + 0x10]
        fdiv    dword ptr [esi + 0x38]
        fst    dword ptr [esp + 0x14]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_9164
        fld    dword ptr [esp + 0x14]
        fmul    dword ptr [esp + 0x28]
        fst    dword ptr [esp + 0x28]
        mov    ecx, dword ptr [esp + 0x28]
        fadd    dword ptr [esi + 0x20]
        push    ecx
        mov    ecx, ebx
        fstp    dword ptr [esi + 0x20]
        call    FUN_00699530
        test    al, al
        je    L_90fc
        mov    ecx, ebx
        call    FUN_006991d0
        fdiv    dword ptr [esp + 0x14]
        mov    ecx, ebp
        fstp    dword ptr [esi + 0x24]
        call    FUN_006056a0
        pop    edi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        add    esp, 0x10
        ret    0xc
L_90fc:
        mov    edx, dword ptr [ebx + 0x18]
        fld    dword ptr [ebx + 0x10]
        mov    eax, dword ptr [edx + 4]
        fsub    dword ptr [eax + 8]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
        fdivp st(1), st(0)
        fsub    dword ptr [esp + 0x18]
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jne    L_913f
        mov    ecx, dword ptr [esi + 0x50]
        mov    eax, dword ptr [ecx + 0x18]
        mov    eax, dword ptr [eax + 4]
        fld    dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul st(0), st(1)
        fstp    dword ptr [esp]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        call    FUN_00699530
        jmp    L_9141
L_913f:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_9141:
        mov    ecx, dword ptr [esp + 0x14]
        mov    edi, dword ptr [esi + 0x50]
        mov    edx, ecx
        mov    dword ptr [ebx + 0x14], ecx
        mov    dword ptr [edi + 0x14], edx
        mov    dword ptr [ebx + 0x20], 0x3f800000
        mov    dword ptr [edi + 0x20], 0
        push    ebx
        jmp    L_9326
L_9164:
        mov    edi, dword ptr [esi + 0x50]
        xor    eax, eax
        mov    dword ptr [ebx + 0x14], eax
        mov    dword ptr [edi + 0x14], eax
        push    ebx
        jmp    L_9326
L_9175:
        fld    dword ptr [esp + 0x10]
        mov    edi, dword ptr [esi + 0x50]
        fcomp    dword ptr [esi + 0x3c]
        fld    dword ptr [edi + 0x10]
        fnstsw  ax
        test    ah, 1
        mov    eax, dword ptr [edi + 0x18]
        mov    eax, dword ptr [eax + 4]
        fsub    dword ptr [eax + 8]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
        fdivp st(1), st(0)
        jne    L_9278
        fstp    dword ptr [esp + 0x18]
        fld    dword ptr [esp + 0x10]
        fdiv    dword ptr [esi + 0x3c]
        fst    dword ptr [esp + 0x14]
        fmul    dword ptr [esp + 0x28]
        fst    dword ptr [esp + 0x28]
        fadd    dword ptr [esi + 0x20]
        fstp    dword ptr [esi + 0x20]
        fld    dword ptr [esp + 0x14]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_9268
        mov    ecx, dword ptr [esp + 0x28]
        push    ecx
        mov    ecx, edi
        call    FUN_00699530
        test    al, al
        je    L_9201
        mov    ecx, edi
        call    FUN_006991d0
        fdiv    dword ptr [esp + 0x14]
        mov    ecx, ebp
        fstp    dword ptr [esi + 0x24]
        call    FUN_006056a0
        pop    edi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        add    esp, 0x10
        ret    0xc
L_9201:
        mov    edx, dword ptr [edi + 0x18]
        fld    dword ptr [edi + 0x10]
        mov    eax, dword ptr [edx + 4]
        fsub    dword ptr [eax + 8]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
        fdivp st(1), st(0)
        fsub    dword ptr [esp + 0x18]
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jne    L_9244
        mov    ecx, dword ptr [esi + 0x4c]
        mov    eax, dword ptr [ecx + 0x18]
        mov    eax, dword ptr [eax + 4]
        fld    dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul st(0), st(1)
        fstp    dword ptr [esp]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        call    FUN_00699530
        jmp    L_9246
L_9244:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_9246:
        mov    ecx, dword ptr [esp + 0x14]
        mov    eax, dword ptr [esi + 0x4c]
        mov    edx, ecx
        mov    dword ptr [eax + 0x14], ecx
        mov    dword ptr [edi + 0x14], edx
        mov    dword ptr [eax + 0x20], 0
        mov    dword ptr [edi + 0x20], 0x3f800000
        jmp    L_9325
L_9268:
        mov    eax, dword ptr [esi + 0x4c]
        xor    ecx, ecx
        mov    dword ptr [eax + 0x14], ecx
        mov    dword ptr [edi + 0x14], ecx
        jmp    L_9325
L_9278:
        mov    ecx, dword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0x18]
        fld    dword ptr [esp + 0x28]
        push    ecx
        fadd    dword ptr [esi + 0x20]
        mov    ecx, edi
        fstp    dword ptr [esi + 0x20]
        call    FUN_00699530
        test    al, al
        je    L_92b3
        mov    ecx, edi
        call    FUN_006991d0
        fstp    dword ptr [esi + 0x24]
        mov    ecx, ebp
        call    FUN_006056a0
        pop    edi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        add    esp, 0x10
        ret    0xc
L_92b3:
        mov    edx, dword ptr [edi + 0x18]
        fld    dword ptr [edi + 0x10]
        mov    eax, dword ptr [edx + 4]
        fsub    dword ptr [eax + 8]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
        fdivp st(1), st(0)
        fsub    dword ptr [esp + 0x18]
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jne    L_92f6
        mov    ecx, dword ptr [esi + 0x4c]
        mov    eax, dword ptr [ecx + 0x18]
        mov    eax, dword ptr [eax + 4]
        fld    dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul st(0), st(1)
        fstp    dword ptr [esp]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        call    FUN_00699530
        jmp    L_92f8
L_92f6:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_92f8:
        mov    eax, dword ptr [esi + 0x4c]
        mov    ecx, 0x3f800000
        mov    dword ptr [edi + 0x14], ecx
        mov    dword ptr [eax + 0x14], ecx
        fld    dword ptr [esp + 0x10]
        fsub    dword ptr [esi + 0x38]
        fld    dword ptr [esi + 0x3c]
        fsub    dword ptr [esi + 0x38]
        fdivp st(1), st(0)
        fst    dword ptr [edi + 0x20]
        fld    dword ptr [g_0076d064]
        fsub st(0), st(1)
        fstp    dword ptr [eax + 0x20]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_9325:
        push    eax
L_9326:
        mov    ecx, ebp
        call    FUN_00605740
        push    edi
        mov    ecx, ebp
        call    FUN_00605740
        mov    ecx, ebp
        call    FUN_00605700
        mov    eax, dword ptr [esi + 0x14]
        test    eax, eax
        je    L_938d
        mov    ecx, dword ptr [edi + 0x18]
        fld    dword ptr [edi + 0x10]
        mov    eax, dword ptr [ecx + 4]
        fsub    dword ptr [eax + 8]
        mov    esi, dword ptr [esi + 0x18]
        fld    dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        mov    eax, dword ptr [esp + 0x28]
        mov    ecx, dword ptr [eax + 0x34]
        fdivp st(1), st(0)
        lea    edx, [esi + esi*2]
        lea    ecx, [ecx + edx*8]
        fstp    dword ptr [esp]
        call    FUN_00604f30
        mov    edx, dword ptr [esp + 0x1c]
        pop    edi
        pop    esi
        pop    ebp
        fstp    dword ptr [edx + 0x10]
        xor    al, al
        pop    ebx
        add    esp, 0x10
        ret    0xc
L_9383:
        fld    dword ptr [esp + 0x28]
        fadd    dword ptr [esi + 0x20]
        fstp    dword ptr [esi + 0x20]
L_938d:
        pop    edi
        pop    esi
        pop    ebp
        xor    al, al
        pop    ebx
        add    esp, 0x10
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [esp + 4]
        push    esi
        fcomp    dword ptr [g_0076d598]
        mov    esi, ecx
        fnstsw  ax
        test    ah, 0x40
        jne    L_9442
        fld    dword ptr [esp + 8]
        mov    ecx, dword ptr [esi + 0x4c]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_93d3
        call    FUN_00699160
        jmp    L_93ec
L_93d3:
        mov    eax, dword ptr [ecx + 0x18]
        mov    eax, dword ptr [eax + 4]
        fld    dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [esp + 0xc]
        fstp    dword ptr [esp]
        call    FUN_006992f0
L_93ec:
        fld    dword ptr [esp + 8]
        mov    ecx, dword ptr [esi + 0x50]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_9417
        call    FUN_00699160
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x14]
        fmul    dword ptr [esp + 8]
        fstp    dword ptr [esi + 0x20]
        pop    esi
        ret    8
L_9417:
        mov    edx, dword ptr [ecx + 0x18]
        mov    eax, dword ptr [edx + 4]
        fld    dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [esp + 0xc]
        fstp    dword ptr [esp]
        call    FUN_006992f0
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x14]
        fmul    dword ptr [esp + 8]
        fstp    dword ptr [esi + 0x20]
        pop    esi
        ret    8
L_9442:
        fld    dword ptr [esi + 0x30]
        mov    ecx, dword ptr [esi + 0x4c]
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_945e
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        call    FUN_00699160
        jmp    L_9477
L_945e:
        mov    edx, dword ptr [ecx + 0x18]
        mov    eax, dword ptr [edx + 4]
        fld    dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul st(0), st(1)
        fstp    dword ptr [esp]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        call    FUN_006992f0
L_9477:
        fld    dword ptr [esi + 0x30]
        mov    ecx, dword ptr [esi + 0x50]
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_949c
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        call    FUN_00699160
        mov    dword ptr [esi + 0x20], 0
        pop    esi
        ret    8
L_949c:
        mov    eax, dword ptr [ecx + 0x18]
        mov    eax, dword ptr [eax + 4]
        fld    dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul st(0), st(1)
        fstp    dword ptr [esp]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        call    FUN_006992f0
        mov    dword ptr [esi + 0x20], 0
        pop    esi
        ret    8
        push    esi
        push    0x2c
        mov    esi, ecx
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_94de
        mov    ecx, dword ptr [esi + 0x44]
        push    ecx
        mov    ecx, eax
        call    FUN_00698b90
        jmp    L_94e0
L_94de:
        xor    eax, eax
L_94e0:
        push    0x2c
        mov    dword ptr [esi + 0x4c], eax
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_9503
        mov    edx, dword ptr [esi + 0x48]
        push    edx
        mov    ecx, eax
        call    FUN_00698b90
        mov    dword ptr [esi + 0x50], eax
        pop    esi
        ret    4
L_9503:
        xor    eax, eax
        mov    dword ptr [esi + 0x50], eax
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esi + 0x4c]
        test    ecx, ecx
        je    L_9520
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_9520:
        mov    ecx, dword ptr [esi + 0x50]
        test    ecx, ecx
        mov    dword ptr [esi + 0x4c], 0
        je    L_9534
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
L_9534:
        mov    dword ptr [esi + 0x50], 0
        mov    dword ptr [esi + 0x20], 0xbf800000
        pop    esi
        ret    
    }
}
