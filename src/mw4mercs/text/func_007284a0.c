/*
 * FUN_007284a0 (extent 0x7284a0-0x728ea8) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d070;
extern float  g_0076d3c8;
extern float  g_0076dd60;
extern int    g_007b7114;
extern float  g_007b7118;
extern int    g_008806a0;
extern int    g_008806a4;
extern float  g_008816b0;
extern float  g_008816b8;
extern int    g_008816bc;
extern int    g_008816c0;
extern char   g_008816c4;
extern int    g_008816cc;
extern int    g_008816d0;
extern float  g_008816d8;
extern char   g_008816dc;
extern char   g_008816dd;
extern char   g_008816e4;
extern char   g_008816e5;
extern char   g_008816e6;
extern int    g_008816e8;
extern int    g_008816ec;
extern void __cdecl FUN_00713ae0(void);
extern void __cdecl FUN_00713cc0(void);
extern void __cdecl FUN_007277f0(void);
extern void __cdecl FUN_00727ec0(void);
extern void __cdecl FUN_007280a0(void);

__declspec(naked) void FUN_007284a0(void)
{
    __asm {
        sub    esp, 0x18
        fld    dword ptr [g_008816b8]
        push    ebx
        fadd    dword ptr [g_0076dd60]
        push    ebp
        push    esi
        mov    esi, dword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0xc]
        fld    dword ptr [g_008816b0]
        mov    al, byte ptr [esi]
        fadd    dword ptr [g_0076dd60]
        push    edi
        mov    edi, dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x14]
        mov    ebp, dword ptr [esp + 0x14]
        and    edi, 0x7fffff
        and    ebp, 0x7fffff
        sub    edi, 0x400000
        xor    ebx, ebx
        sub    ebp, 0x400000
        cmp    al, 0xd
        mov    dword ptr [esp + 0x10], edi
        mov    dword ptr [g_008816ec], ebx
        jne    L_852c
        mov    al, byte ptr [esi + 1]
        inc    esi
        cmp    al, 0xa
        jne    L_8506
        inc    esi
L_8506:
        mov    eax, dword ptr [esp + 0x30]
        push    0x20
        push    0x8816ec
        lea    ecx, [esp + 0x38]
        push    ecx
        mov    dword ptr [eax], esi
        call    FUN_00727ec0
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 1
        pop    ebx
        add    esp, 0x18
        ret    8
L_852c:
        mov    al, byte ptr [esi]
        cmp    al, 0xd
        je    L_8630
L_8536:
        cmp    al, 0xa
        je    L_8630
        test    al, al
        je    L_8630
        push    esi
        call    FUN_007280a0
        test    eax, eax
        je    L_855c
L_8550:
        add    esi, eax
        push    esi
        call    FUN_007280a0
        test    eax, eax
        jne    L_8550
L_855c:
        mov    cl, byte ptr [esi]
        cmp    cl, 0xd
        je    L_8630
        cmp    cl, 0xa
        je    L_8630
        test    cl, cl
        je    L_8630
        cmp    cl, 0x20
        jne    L_85b0
        mov    al, byte ptr [g_008816dd]
        test    al, al
        je    L_85b0
        mov    edx, dword ptr [g_008816e8]
        add    edx, edi
        mov    dword ptr [esp + 0x18], edx
        mov    dword ptr [esp + 0x1c], 0
        fild    qword ptr [esp + 0x18]
        fcomp    dword ptr [g_008816b0]
        fnstsw  ax
        test    ah, 0x41
        je    L_8618
        lea    ebx, [esi + 1]
        mov    ebp, edi
L_85b0:
        push    ecx
        lea    eax, [esp + 0x30]
        push    eax
        lea    ecx, [esp + 0x1c]
        push    ecx
        inc    esi
        call    FUN_00727ec0
        mov    eax, dword ptr [esp + 0x2c]
        cmp    eax, dword ptr [g_008816ec]
        jle    L_85d2
        mov    dword ptr [g_008816ec], eax
L_85d2:
        mov    ecx, dword ptr [esp + 0x14]
        mov    edx, dword ptr [g_008816e8]
        add    edx, ecx
        add    edx, edi
        mov    dword ptr [esp + 0x20], edx
        mov    dword ptr [esp + 0x24], 0
        fild    qword ptr [esp + 0x20]
        fcomp    dword ptr [g_008816b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_8606
        mov    al, byte ptr [g_008816dd]
        test    al, al
        jne    L_8624
L_8606:
        mov    al, byte ptr [esi]
        add    edi, ecx
        cmp    al, 0xd
        mov    dword ptr [esp + 0x10], edi
        jne    L_8536
        jmp    L_8630
L_8618:
        test    ebx, ebx
        mov    edi, ebp
        mov    dword ptr [esp + 0x10], edi
        je    L_8630
        jmp    L_862e
L_8624:
        test    ebx, ebx
        mov    edi, ebp
        mov    dword ptr [esp + 0x10], edi
        je    L_8630
L_862e:
        mov    esi, ebx
L_8630:
        mov    eax, dword ptr [g_008816e8]
        add    eax, edi
        mov    dword ptr [esp + 0x20], eax
        mov    dword ptr [esp + 0x24], 0
        fild    qword ptr [esp + 0x20]
        fcomp    dword ptr [g_008816b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_8667
        mov    al, byte ptr [g_008816dd]
        test    al, al
        je    L_8667
        test    ebx, ebx
        mov    dword ptr [esp + 0x10], ebp
        je    L_8667
        mov    esi, ebx
L_8667:
        mov    al, byte ptr [esi]
        cmp    al, 0xd
        je    L_8671
        cmp    al, 0xa
        jne    L_8672
L_8671:
        inc    esi
L_8672:
        mov    eax, dword ptr [esp + 0x30]
        test    eax, eax
        je    L_867c
        mov    dword ptr [eax], esi
L_867c:
        fild    dword ptr [esp + 0x10]
        pop    edi
        pop    esi
        pop    ebp
        fsub    dword ptr [g_008816b8]
        pop    ebx
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp + 0x20]
        mov    eax, dword ptr [esp + 0x20]
        and    eax, 0x7fffff
        sub    eax, 0x400000
        add    esp, 0x18
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    al, byte ptr [g_008816dc]
        mov    cl, byte ptr [esp + 4]
        sub    esp, 0x24
        test    al, al
        push    ebx
        push    esi
        push    edi
        je    L_8a15
        cmp    cl, 0xd
        je    L_89bd
        cmp    cl, 0xa
        je    L_89bd
        cmp    cl, 0x20
        mov    eax, dword ptr [g_008816cc]
        jb    L_86fb
        mov    edx, dword ptr [esp + 0x34]
        mov    esi, dword ptr [eax + 0x114]
        and    edx, 0xff
        cmp    edx, esi
        jl    L_8795
L_86fb:
        mov    cl, 0x40
L_86fd:
        add    cl, 0xe0
        mov    byte ptr [esp + 0x34], cl
        mov    esi, dword ptr [esp + 0x34]
        and    esi, 0xff
        xor    ecx, ecx
        mov    cl, byte ptr [esi + eax + 0x2f8]
        xor    edx, edx
        mov    dl, byte ptr [esi + eax + 0x3d8]
        push    ebp
        mov    dword ptr [esp + 0x38], ecx
        fild    dword ptr [esp + 0x38]
        xor    ecx, ecx
        mov    cl, byte ptr [esi + eax + 0x4b8]
        add    edx, ecx
        mov    dword ptr [esp + 0x38], edx
        fild    dword ptr [esp + 0x38]
        xor    edx, edx
        mov    dl, byte ptr [esi + eax + 0x598]
        fstp    dword ptr [esp + 0x38]
        fst    dword ptr [esp + 0x18]
        mov    ebp, edx
        mov    dl, byte ptr [g_008816e4]
        test    dl, dl
        mov    dword ptr [esp + 0x2c], ebp
        fild    dword ptr [esp + 0x2c]
        fadd    dword ptr [esp + 0x38]
        fstp    dword ptr [esp + 0x14]
        je    L_87f9
        xor    edx, edx
        mov    dl, byte ptr [esi + eax + 0x218]
        inc    edx
        mov    dword ptr [esp + 0x2c], edx
        fild    dword ptr [esp + 0x2c]
        fmul    dword ptr [g_007b7118]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp + 0x2c]
        mov    ebx, dword ptr [esp + 0x2c]
        jmp    L_8813
L_8795:
        cmp    cl, 0x20
        jne    L_86fd
        fild    dword ptr [eax + 0x124]
        mov    cl, byte ptr [g_008816e4]
        test    cl, cl
        fmul    dword ptr [g_007b7118]
        je    L_87e9
        fmul    dword ptr [g_0076d070]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp + 0x34]
        mov    eax, dword ptr [esp + 0x34]
L_87c8:
        mov    ecx, dword ptr [g_008816c0]
        pop    edi
        and    eax, 0x7fffff
        lea    edx, [ecx + eax - 0x400000]
        pop    esi
        mov    dword ptr [g_008816c0], edx
        pop    ebx
        add    esp, 0x24
        ret    4
L_87e9:
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp + 0x34]
        mov    eax, dword ptr [esp + 0x34]
        jmp    L_87c8
L_87f9:
        fild    dword ptr [eax + 0x124]
        fmul    dword ptr [g_007b7118]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp + 0x2c]
        mov    ebx, dword ptr [esp + 0x2c]
L_8813:
        xor    edx, edx
        mov    dl, byte ptr [esi + eax + 0x218]
        add    ebp, ecx
        and    ebx, 0x7fffff
        sub    ebx, 0x400000
        mov    edi, edx
        xor    edx, edx
        mov    dl, byte ptr [esi + eax + 0x138]
        mov    dword ptr [esp + 0x10], edi
        mov    dword ptr [esp + 0x1c], edx
        fild    dword ptr [esp + 0x1c]
        add    edx, edi
        mov    dword ptr [esp + 0x2c], edx
        fadd st(0), st(1)
        fmul    dword ptr [eax + 0x11c]
        fstp    dword ptr [esp + 0x24]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [esp + 0x38]
        fmul    dword ptr [eax + 0x11c]
        fstp    dword ptr [esp + 0x38]
        fild    dword ptr [esp + 0x2c]
        mov    dword ptr [esp + 0x2c], ebp
        pop    ebp
        fadd    dword ptr [esp + 0x14]
        fmul    dword ptr [eax + 0x11c]
        fstp    dword ptr [esp + 0x14]
        fld    dword ptr [esp + 0x10]
        fmul    dword ptr [eax + 0x11c]
        fstp    dword ptr [esp + 0x10]
        fild    dword ptr [g_008816c0]
        fst    dword ptr [esp + 0x18]
        fild    dword ptr [esp + 0xc]
        fmul    dword ptr [g_007b7118]
        fadd st(0), st(1)
        fstp    dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 0xc]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fild    dword ptr [esp + 0x28]
        mov    dword ptr [esp + 0x28], edx
        mov    dl, byte ptr [g_008816e6]
        test    dl, dl
        fmul    dword ptr [g_007b7118]
        fiadd    dword ptr [g_008816bc]
        fstp    dword ptr [esp + 0x24]
        je    L_8908
        mov    edx, dword ptr [eax + 0x128]
        mov    dword ptr [esp + 0x1c], edx
        sub    edx, ecx
        mov    dword ptr [esp + 0x2c], edx
        fild    dword ptr [esp + 0x2c]
        fidiv    dword ptr [esp + 0x1c]
        fild    dword ptr [eax + 0x124]
        fmul    dword ptr [g_007b7118]
        fmul    dword ptr [g_0076d3c8]
        fmulp st(1), st(0)
        fld    st(0)
        fadd    dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x18]
        fadd    dword ptr [esp + 0xc]
        fstp    dword ptr [esp + 0xc]
L_8908:
        mov    edx, dword ptr [g_007b7114]
        xor    ecx, ecx
        mov    cl, byte ptr [esi + eax + 0x678]
        cmp    edx, dword ptr [eax + ecx*4 + 0x760]
        je    L_8999
        mov    ecx, dword ptr [g_008806a4]
        xor    edi, edi
        cmp    ecx, edi
        je    L_8962
        cmp    dword ptr [g_008806a0], edi
        je    L_893d
        push    2
        push    0xb
        call    FUN_00713cc0
L_893d:
        mov    eax, dword ptr [g_008806a4]
        push    eax
        push    0x8806a8
        call    FUN_00713ae0
        cmp    dword ptr [g_008806a0], edi
        je    L_895d
        push    edi
        push    0xb
        call    FUN_00713cc0
L_895d:
        mov    eax, dword ptr [g_008816cc]
L_8962:
        xor    ecx, ecx
        mov    cl, byte ptr [esi + eax + 0x678]
        mov    dword ptr [g_008806a0], edi
        mov    dword ptr [g_008806a4], edi
        mov    eax, dword ptr [eax + ecx*4 + 0x760]
        push    eax
        push    1
        mov    dword ptr [g_007b7114], eax
        call    FUN_00713cc0
        mov    eax, dword ptr [g_008816cc]
        mov    byte ptr [g_008816c4], 1
        jmp    L_899b
L_8999:
        xor    edi, edi
L_899b:
        xor    edx, edx
        mov    dl, byte ptr [esi + eax + 0x4b8]
        mov    dword ptr [esp + 0x2c], edx
        fild    dword ptr [esp + 0x2c]
        fmul    dword ptr [g_007b7118]
        fiadd    dword ptr [g_008816bc]
        jmp    L_8d13
L_89bd:
        fld    dword ptr [g_008816b8]
        mov    edx, dword ptr [g_008816bc]
        fadd    dword ptr [g_0076dd60]
        pop    edi
        pop    esi
        fstp    dword ptr [esp + 0x2c]
        pop    ebx
        fld    dword ptr [g_008816d8]
        mov    eax, dword ptr [esp + 0x28]
        fadd    dword ptr [g_0076dd60]
        and    eax, 0x7fffff
        sub    eax, 0x400000
        fstp    dword ptr [esp + 0x28]
        mov    dword ptr [g_008816c0], eax
        mov    ecx, dword ptr [esp + 0x28]
        and    ecx, 0x7fffff
        lea    eax, [edx + ecx - 0x400000]
        mov    dword ptr [g_008816bc], eax
        add    esp, 0x24
        ret    4
L_8a15:
        cmp    cl, 0xa
        je    L_8e4d
        cmp    cl, 0xd
        je    L_8e4d
        cmp    cl, 0x20
        mov    eax, dword ptr [g_008816cc]
        jb    L_8a49
        mov    edx, dword ptr [esp + 0x34]
        mov    esi, dword ptr [eax + 0x114]
        and    edx, 0xff
        cmp    edx, esi
        jl    L_8aed
L_8a49:
        mov    cl, 0x40
L_8a4b:
        add    cl, 0xe0
        mov    byte ptr [esp + 0x34], cl
        mov    esi, dword ptr [esp + 0x34]
        xor    ecx, ecx
        and    esi, 0xff
        mov    cl, byte ptr [esi + eax + 0x2f8]
        xor    edx, edx
        mov    dl, byte ptr [esi + eax + 0x4b8]
        mov    dword ptr [esp + 0x34], ecx
        fild    dword ptr [esp + 0x34]
        xor    ecx, ecx
        mov    cl, byte ptr [esi + eax + 0x3d8]
        mov    edi, edx
        xor    edx, edx
        mov    dl, byte ptr [esi + eax + 0x598]
        mov    dword ptr [esp + 0x28], edi
        add    ecx, edi
        mov    dword ptr [esp + 0x34], ecx
        fild    dword ptr [esp + 0x34]
        mov    cl, byte ptr [g_008816e4]
        test    cl, cl
        mov    dword ptr [esp + 0x2c], edx
        fstp    dword ptr [esp + 0x34]
        fst    dword ptr [esp + 0x14]
        fild    dword ptr [esp + 0x2c]
        fst    dword ptr [esp + 0x24]
        fadd    dword ptr [esp + 0x34]
        fstp    dword ptr [esp + 0x10]
        je    L_8b61
        xor    ecx, ecx
        mov    cl, byte ptr [esi + eax + 0x218]
        inc    ecx
        mov    dword ptr [esp + 0x2c], ecx
        fild    dword ptr [esp + 0x2c]
        fmul    dword ptr [g_007b7118]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp + 0x2c]
        mov    ebx, dword ptr [esp + 0x2c]
        jmp    L_8b7b
L_8aed:
        cmp    cl, 0x20
        jne    L_8a4b
        mov    cl, byte ptr [g_008816e4]
        test    cl, cl
        je    L_8b45
        mov    eax, dword ptr [eax + 0x124]
        sar    eax, 1
        mov    dword ptr [esp + 0x34], eax
        fild    dword ptr [esp + 0x34]
        fmul    dword ptr [g_007b7118]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp + 0x34]
        mov    ecx, dword ptr [esp + 0x34]
L_8b24:
        mov    edx, dword ptr [g_008816c0]
        pop    edi
        and    ecx, 0x7fffff
        lea    eax, [edx + ecx - 0x400000]
        pop    esi
        mov    dword ptr [g_008816c0], eax
        pop    ebx
        add    esp, 0x24
        ret    4
L_8b45:
        fild    dword ptr [eax + 0x124]
        fmul    dword ptr [g_007b7118]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp + 0x34]
        mov    ecx, dword ptr [esp + 0x34]
        jmp    L_8b24
L_8b61:
        fild    dword ptr [eax + 0x124]
        fmul    dword ptr [g_007b7118]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp + 0x2c]
        mov    ebx, dword ptr [esp + 0x2c]
L_8b7b:
        xor    edx, edx
        mov    dl, byte ptr [esi + eax + 0x138]
        xor    ecx, ecx
        mov    cl, byte ptr [esi + eax + 0x218]
        and    ebx, 0x7fffff
        sub    ebx, 0x400000
        mov    dword ptr [esp + 0x18], edx
        fild    dword ptr [esp + 0x18]
        add    edx, ecx
        mov    dword ptr [esp + 0x2c], edx
        fadd st(0), st(1)
        mov    dword ptr [esp + 0xc], ecx
        mov    cl, byte ptr [g_008816e6]
        test    cl, cl
        fmul    dword ptr [eax + 0x11c]
        fstp    dword ptr [esp + 0x20]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [esp + 0x34]
        fmul    dword ptr [eax + 0x11c]
        fstp    dword ptr [esp + 0x34]
        fild    dword ptr [esp + 0x2c]
        fadd    dword ptr [esp + 0x14]
        fmul    dword ptr [eax + 0x11c]
        fstp    dword ptr [esp + 0x14]
        fld    dword ptr [esp + 0x10]
        fmul    dword ptr [eax + 0x11c]
        fstp    dword ptr [esp + 0x10]
        fild    dword ptr [g_008816c0]
        fst    dword ptr [esp + 0x18]
        fild    dword ptr [esp + 0xc]
        fmul    dword ptr [g_007b7118]
        fadd st(0), st(1)
        fstp    dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 0xc]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [esp + 0x24]
        fmul    dword ptr [g_007b7118]
        fiadd    dword ptr [esp + 0x28]
        mov    dword ptr [esp + 0x28], edx
        fiadd    dword ptr [g_008816bc]
        fstp    dword ptr [esp + 0x24]
        je    L_8c6b
        mov    ecx, dword ptr [eax + 0x128]
        mov    dword ptr [esp + 0x1c], ecx
        sub    ecx, edi
        mov    dword ptr [esp + 0x2c], ecx
        fild    dword ptr [esp + 0x2c]
        fidiv    dword ptr [esp + 0x1c]
        fild    dword ptr [eax + 0x124]
        fmul    dword ptr [g_007b7118]
        fmul    dword ptr [g_0076d3c8]
        fmulp st(1), st(0)
        fld    st(0)
        fadd    dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x18]
        fadd    dword ptr [esp + 0xc]
        fstp    dword ptr [esp + 0xc]
L_8c6b:
        mov    edx, dword ptr [g_007b7114]
        xor    ecx, ecx
        mov    cl, byte ptr [esi + eax + 0x678]
        cmp    edx, dword ptr [eax + ecx*4 + 0x760]
        je    L_8cfa
        mov    ecx, dword ptr [g_008806a4]
        xor    edi, edi
        cmp    ecx, edi
        je    L_8cc5
        cmp    dword ptr [g_008806a0], edi
        je    L_8ca0
        push    2
        push    0xb
        call    FUN_00713cc0
L_8ca0:
        mov    eax, dword ptr [g_008806a4]
        push    eax
        push    0x8806a8
        call    FUN_00713ae0
        cmp    dword ptr [g_008806a0], edi
        je    L_8cc0
        push    edi
        push    0xb
        call    FUN_00713cc0
L_8cc0:
        mov    eax, dword ptr [g_008816cc]
L_8cc5:
        xor    ecx, ecx
        mov    cl, byte ptr [esi + eax + 0x678]
        mov    dword ptr [g_008806a0], edi
        mov    dword ptr [g_008806a4], edi
        mov    eax, dword ptr [eax + ecx*4 + 0x760]
        push    eax
        push    1
        mov    dword ptr [g_007b7114], eax
        call    FUN_00713cc0
        mov    eax, dword ptr [g_008816cc]
        mov    byte ptr [g_008816c4], 1
L_8cfa:
        xor    edx, edx
        mov    dl, byte ptr [esi + eax + 0x4b8]
        add    edx, dword ptr [g_008816bc]
        mov    dword ptr [esp + 0x2c], edx
        fild    dword ptr [esp + 0x2c]
        xor    edi, edi
L_8d13:
        mov    ecx, dword ptr [g_008816d0]
        mov    eax, dword ptr [g_008806a4]
        mov    edx, dword ptr [esp + 0x20]
        shl    eax, 5
        mov    dword ptr [eax + 0x8806b8], ecx
        mov    dword ptr [eax + 0x8806d8], ecx
        mov    dword ptr [eax + 0x8806f8], ecx
        mov    dword ptr [eax + 0x880718], ecx
        mov    ecx, dword ptr [esp + 0x18]
        mov    dword ptr [eax + 0x8806a8], ecx
        fst    dword ptr [eax + 0x8806ac]
        fild    dword ptr [g_008816c0]
        mov    ecx, dword ptr [esp + 0x34]
        mov    dword ptr [eax + 0x8806c0], edx
        mov    edx, dword ptr [esp + 0x24]
        mov    dword ptr [eax + 0x8806c4], ecx
        fstp    dword ptr [eax + 0x8806c8]
        mov    ecx, dword ptr [esp + 0x20]
        mov    dword ptr [eax + 0x8806cc], edx
        mov    edx, dword ptr [esp + 0x10]
        mov    dword ptr [eax + 0x8806e0], ecx
        mov    ecx, dword ptr [esp + 0x28]
        mov    dword ptr [eax + 0x8806e4], edx
        mov    edx, dword ptr [esp + 0x24]
        mov    dword ptr [eax + 0x8806e8], ecx
        mov    ecx, dword ptr [esp + 0x14]
        mov    dword ptr [eax + 0x8806ec], edx
        mov    edx, dword ptr [esp + 0x10]
        mov    dword ptr [eax + 0x880700], ecx
        mov    ecx, dword ptr [esp + 0xc]
        mov    dword ptr [eax + 0x880704], edx
        mov    edx, dword ptr [esp + 0x14]
        mov    dword ptr [eax + 0x880708], ecx
        fstp    dword ptr [eax + 0x88070c]
        mov    ecx, dword ptr [esp + 0x34]
        mov    dword ptr [eax + 0x880720], edx
        xor    edx, edx
        mov    dl, byte ptr [g_008816e5]
        mov    dword ptr [eax + 0x880724], ecx
        push    edx
        call    FUN_007277f0
        mov    al, byte ptr [g_008816e5]
        test    al, al
        je    L_8deb
        inc    ebx
L_8deb:
        cmp    dword ptr [g_008806a4], 0x7c
        jb    L_8e38
        cmp    dword ptr [g_008806a0], edi
        je    L_8e05
        push    2
        push    0xb
        call    FUN_00713cc0
L_8e05:
        mov    eax, dword ptr [g_008806a4]
        push    eax
        push    0x8806a8
        call    FUN_00713ae0
        cmp    dword ptr [g_008806a0], edi
        je    L_8e25
        push    edi
        push    0xb
        call    FUN_00713cc0
L_8e25:
        mov    dword ptr [g_008806a0], edi
        mov    dword ptr [g_008806a4], edi
        mov    byte ptr [g_008816c4], 1
L_8e38:
        mov    eax, dword ptr [g_008816c0]
        pop    edi
        add    eax, ebx
        pop    esi
        mov    dword ptr [g_008816c0], eax
        pop    ebx
        add    esp, 0x24
        ret    4
L_8e4d:
        fld    dword ptr [g_008816b8]
        mov    eax, dword ptr [g_008816bc]
        fadd    dword ptr [g_0076dd60]
        pop    edi
        pop    esi
        fstp    dword ptr [esp + 0x2c]
        pop    ebx
        fld    dword ptr [g_008816d8]
        mov    ecx, dword ptr [esp + 0x28]
        fadd    dword ptr [g_0076dd60]
        and    ecx, 0x7fffff
        sub    ecx, 0x400000
        fstp    dword ptr [esp + 0x28]
        mov    dword ptr [g_008816c0], ecx
        mov    edx, dword ptr [esp + 0x28]
        and    edx, 0x7fffff
        lea    ecx, [eax + edx - 0x400000]
        mov    dword ptr [g_008816bc], ecx
        add    esp, 0x24
        ret    4
    }
}
