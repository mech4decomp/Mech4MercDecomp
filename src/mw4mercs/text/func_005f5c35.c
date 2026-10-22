/*
 * FUN_005f5c35 (extent 0x5f5c35-0x5f6334) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_007866d4;
extern float  g_007b220c;
extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_005f1570(void);
extern void __cdecl FUN_005f1730(void);
extern void __cdecl FUN_005f2b10(void);
extern void __cdecl FUN_005f5c00(void);
extern void __cdecl FUN_005f5db0(void);
extern void __cdecl FUN_005fbcb0(void);
extern void __cdecl FUN_00629290(void);

__declspec(naked) void FUN_005f5c35(void)
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
        nop    
        sub    esp, 0x1c
        push    esi
        mov    esi, dword ptr [esp + 0x24]
        push    edi
        mov    edi, ecx
        mov    eax, dword ptr [edi + 0xd8]
        fld    dword ptr [eax + 0x9c]
        mov    ecx, dword ptr [eax + 0x8c]
        mov    edx, dword ptr [eax + 0xac]
        fst    dword ptr [esi + 4]
        fld    dword ptr [edi + 0x440]
        add    eax, 0x80
        fabs    
        fld    dword ptr [g_007b220c]
        mov    dword ptr [esi], ecx
        fcompp    
        mov    dword ptr [esi + 8], edx
        fnstsw  ax
        test    ah, 1
        je    L_5d9d
        mov    eax, dword ptr [edi + 0x10]
        shr    eax, 0x13
        and    al, 1
        cmp    al, 1
        je    L_5d9d
        push    ebx
        fstp    dword ptr [esp + 0xc]
        mov    bl, byte ptr [esp + 0x34]
        test    bl, bl
        je    L_5cd7
        push    edi
        push    esi
        call    FUN_005f2b10
        fcom    dword ptr [g_007866d4]
        add    esp, 8
        fnstsw  ax
        test    ah, 0x40
        jne    L_5cd5
        fstp    dword ptr [esp + 0xc]
        jmp    L_5cd7
L_5cd5:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_5cd7:
        mov    eax, dword ptr [edi + 0xd8]
        fld    dword ptr [eax + 0x88]
        test    bl, bl
        fld    dword ptr [eax + 0x98]
        pop    ebx
        fstp    dword ptr [esp + 0x1c]
        fld    dword ptr [eax + 0xa8]
        fstp    dword ptr [esp + 0x20]
        fld    dword ptr [esp + 0x2c]
        fmul    dword ptr [edi + 0x440]
        fstp    dword ptr [esp + 0x28]
        fld    dword ptr [eax + 0x80]
        fld    dword ptr [eax + 0x90]
        fstp    dword ptr [esp + 0x10]
        fld    dword ptr [eax + 0xa0]
        fstp    dword ptr [esp + 0x14]
        fld    dword ptr [esp + 0x2c]
        fmul    dword ptr [edi + 0x430]
        fstp    dword ptr [esp + 0x30]
        fmul    dword ptr [esp + 0x30]
        fxch    st(1)
        fmul    dword ptr [esp + 0x28]
        faddp st(1), st(0)
        fadd    dword ptr [esi]
        fstp    dword ptr [esi]
        fld    dword ptr [esp + 0x10]
        fmul    dword ptr [esp + 0x30]
        fld    dword ptr [esp + 0x1c]
        fmul    dword ptr [esp + 0x28]
        faddp st(1), st(0)
        fadd    dword ptr [esi + 4]
        fstp    dword ptr [esi + 4]
        fld    dword ptr [esp + 0x14]
        fmul    dword ptr [esp + 0x30]
        fld    dword ptr [esp + 0x20]
        fmul    dword ptr [esp + 0x28]
        faddp st(1), st(0)
        fadd    dword ptr [esi + 8]
        fstp    dword ptr [esi + 8]
        je    L_5d9f
        push    edi
        push    esi
        call    FUN_005f2b10
        fcom    dword ptr [g_007866d4]
        add    esp, 8
        fnstsw  ax
        test    ah, 0x40
        jne    L_5d9d
        fsub    dword ptr [esp + 8]
        pop    edi
        mov    eax, esi
        fadd    dword ptr [esi + 4]
        fstp    dword ptr [esi + 4]
        pop    esi
        add    esp, 0x1c
        ret    0xc
L_5d9d:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_5d9f:
        pop    edi
        mov    eax, esi
        pop    esi
        add    esp, 0x1c
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x40]
        xor    ecx, 0x85739531
        je    L_5de4
        mov    ecx, dword ptr [eax + 0x40]
        push    0xe
        xor    ecx, 0x85739531
        call    FUN_00629290
        mov    dword ptr [eax + 0x80], 0xffffffff
L_5de4:
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
        mov    eax, dword ptr [g_007dab44]
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [eax]
        push    edi
        xor    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [ecx + 0xc]
        xor    eax, 0x85739531
        mov    dl, byte ptr [eax + 0x17]
        test    dl, dl
        je    L_5e2a
        xor    ecx, ecx
        mov    cl, byte ptr [esi + 0x14]
        mov    edi, ecx
        shl    edi, 7
        add    edi, ecx
        shl    edi, 3
        sub    edi, ecx
        mov    eax, dword ptr [eax + edi*8 + 0x3584]
        jmp    L_5e32
L_5e2a:
        mov    eax, dword ptr [ecx + 0x18]
        xor    eax, 0x85739531
L_5e32:
        test    dl, dl
        mov    ecx, dword ptr [esp + 0xc]
        je    L_5e48
        cmp    ecx, 0x13
        jl    L_5e48
        cmp    ecx, 0x1b
        jle    L_632c
L_5e48:
        cmp    ecx, 0x1d
        ja    L_632c
        jmp    dword ptr [ecx*4 + 0x5f6334]
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0xb8]
        pop    edi
        pop    esi
        ret    4
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0xbc]
        pop    edi
        pop    esi
        ret    4
        mov    al, byte ptr [esi + 0x2f8]
        test    al, al
        je    L_5e91
        mov    edx, dword ptr [esi]
        push    0
        mov    ecx, esi
        call    dword ptr [edx + 0xb0]
        pop    edi
        pop    esi
        ret    4
L_5e91:
        mov    eax, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [eax + 0xb0]
        pop    edi
        pop    esi
        ret    4
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0xb4]
        pop    edi
        pop    esi
        ret    4
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0xac]
        pop    edi
        pop    esi
        ret    4
        mov    edx, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [edx + 0x10c]
        pop    edi
        pop    esi
        ret    4
        mov    eax, dword ptr [esi]
        push    0
        mov    ecx, esi
        call    dword ptr [eax + 0x10c]
        pop    edi
        pop    esi
        ret    4
        mov    ecx, esi
        call    FUN_005f5c00
        pop    edi
        pop    esi
        ret    4
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x14c]
        pop    edi
        pop    esi
        ret    4
        mov    ecx, esi
        call    FUN_005fbcb0
        pop    edi
        pop    esi
        ret    4
        lea    ecx, [eax + 0x1b0]
        cmp    dword ptr [ecx], 0xa
        jne    L_5f69
        push    0
        call    FUN_005f1570
        cmp    al, 1
        jne    L_632c
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x40]
        xor    ecx, 0x85739531
        je    L_632c
        mov    ecx, dword ptr [eax + 0x40]
        push    0xe
        xor    ecx, 0x85739531
        call    FUN_00629290
        mov    edx, dword ptr [eax + 0x80]
        dec    edx
        neg    edx
        sbb    edx, edx
        and    edx, 2
        dec    edx
        pop    edi
        mov    dword ptr [eax + 0x80], edx
        pop    esi
        ret    4
L_5f69:
        push    0x1389
L_5f6e:
        push    esi
        call    FUN_005f1730
        cmp    al, 1
        jne    L_632c
        mov    ecx, esi
        call    FUN_005f5db0
        pop    edi
        pop    esi
        ret    4
        lea    ecx, [eax + 0x1b0]
        cmp    dword ptr [ecx], 0xa
        jne    L_5fee
        push    1
        call    FUN_005f1570
        cmp    al, 1
        jne    L_632c
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x40]
        xor    ecx, 0x85739531
        je    L_632c
        mov    ecx, dword ptr [eax + 0x40]
        push    0xe
        xor    ecx, 0x85739531
        call    FUN_00629290
        mov    ecx, dword ptr [eax + 0x80]
        xor    edx, edx
        cmp    ecx, 2
        setne    dl
        pop    edi
        pop    esi
        dec    edx
        and    edx, 0xfffffffd
        add    edx, 2
        mov    dword ptr [eax + 0x80], edx
        ret    4
L_5fee:
        push    0x138a
        jmp    L_5f6e
        lea    ecx, [eax + 0x1b0]
        cmp    dword ptr [ecx], 0xa
        jne    L_605e
        push    2
        call    FUN_005f1570
        cmp    al, 1
        jne    L_632c
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x40]
        xor    ecx, 0x85739531
        je    L_632c
        mov    ecx, dword ptr [eax + 0x40]
        push    0xe
        xor    ecx, 0x85739531
        call    FUN_00629290
        mov    ecx, dword ptr [eax + 0x80]
        xor    edx, edx
        cmp    ecx, 3
        setne    dl
        pop    edi
        pop    esi
        dec    edx
        and    edx, 0xfffffffc
        add    edx, 3
        mov    dword ptr [eax + 0x80], edx
        ret    4
L_605e:
        push    0x138b
        jmp    L_5f6e
        lea    ecx, [eax + 0x1b0]
        cmp    dword ptr [ecx], 0xa
        jne    L_60bd
        push    3
        call    FUN_005f1570
        cmp    al, 1
        jne    L_632c
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x40]
        xor    ecx, 0x85739531
        je    L_632c
        mov    ecx, dword ptr [eax + 0x40]
        push    0xe
        xor    ecx, 0x85739531
        call    FUN_00629290
        pop    edi
        mov    dword ptr [eax + 0x80], 0xfffffffd
        pop    esi
        ret    4
L_60bd:
        push    0x138c
        jmp    L_5f6e
        lea    ecx, [eax + 0x1b0]
        cmp    dword ptr [ecx], 0xa
        jne    L_612e
        push    4
        call    FUN_005f1570
        cmp    al, 1
        jne    L_632c
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x40]
        xor    ecx, 0x85739531
        je    L_632c
        mov    ecx, dword ptr [eax + 0x40]
        push    0xe
        xor    ecx, 0x85739531
        call    FUN_00629290
        mov    ecx, dword ptr [eax + 0x80]
        xor    edx, edx
        cmp    ecx, 4
        setne    dl
        pop    edi
        pop    esi
        dec    edx
        and    edx, 0xfffffffb
        add    edx, 4
        mov    dword ptr [eax + 0x80], edx
        ret    4
L_612e:
        push    0x138d
        jmp    L_5f6e
        lea    ecx, [eax + 0x1b0]
        cmp    dword ptr [ecx], 0xa
        jne    L_619e
        push    5
        call    FUN_005f1570
        cmp    al, 1
        jne    L_632c
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x40]
        xor    ecx, 0x85739531
        je    L_632c
        mov    ecx, dword ptr [eax + 0x40]
        push    0xe
        xor    ecx, 0x85739531
        call    FUN_00629290
        mov    ecx, dword ptr [eax + 0x80]
        xor    edx, edx
        cmp    ecx, 5
        setne    dl
        pop    edi
        pop    esi
        dec    edx
        and    edx, 0xfffffffa
        add    edx, 5
        mov    dword ptr [eax + 0x80], edx
        ret    4
L_619e:
        push    0x138e
        jmp    L_5f6e
        lea    ecx, [eax + 0x1b0]
        cmp    dword ptr [ecx], 0xa
        jne    L_620e
        push    6
        call    FUN_005f1570
        cmp    al, 1
        jne    L_632c
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x40]
        xor    ecx, 0x85739531
        je    L_632c
        mov    ecx, dword ptr [eax + 0x40]
        push    0xe
        xor    ecx, 0x85739531
        call    FUN_00629290
        mov    ecx, dword ptr [eax + 0x80]
        xor    edx, edx
        cmp    ecx, 6
        setne    dl
        pop    edi
        pop    esi
        dec    edx
        and    edx, 0xfffffff9
        add    edx, 6
        mov    dword ptr [eax + 0x80], edx
        ret    4
L_620e:
        push    0x138f
        jmp    L_5f6e
        lea    ecx, [eax + 0x1b0]
        cmp    dword ptr [ecx], 0xa
        jne    L_627e
        push    7
        call    FUN_005f1570
        cmp    al, 1
        jne    L_632c
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x40]
        xor    ecx, 0x85739531
        je    L_632c
        mov    ecx, dword ptr [eax + 0x40]
        push    0xe
        xor    ecx, 0x85739531
        call    FUN_00629290
        mov    ecx, dword ptr [eax + 0x80]
        xor    edx, edx
        cmp    ecx, 7
        setne    dl
        pop    edi
        pop    esi
        dec    edx
        and    edx, 0xfffffff8
        add    edx, 7
        mov    dword ptr [eax + 0x80], edx
        ret    4
L_627e:
        push    0x1390
        jmp    L_5f6e
        lea    ecx, [eax + 0x1b0]
        cmp    dword ptr [ecx], 0xa
        jne    L_62d9
        push    8
        call    FUN_005f1570
        cmp    al, 1
        jne    L_632c
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x40]
        xor    ecx, 0x85739531
        je    L_632c
        mov    ecx, dword ptr [eax + 0x40]
        push    0xe
        xor    ecx, 0x85739531
        call    FUN_00629290
        pop    edi
        mov    dword ptr [eax + 0x80], 0xfffffffc
        pop    esi
        ret    4
L_62d9:
        push    0x1391
        jmp    L_5f6e
        lea    ecx, [eax + 0x1b0]
        cmp    dword ptr [ecx], 0xa
        jne    L_632c
        push    9
        call    FUN_005f1570
        cmp    al, 1
        jne    L_632c
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x40]
        xor    ecx, 0x85739531
        je    L_632c
        mov    ecx, dword ptr [eax + 0x40]
        push    0xe
        xor    ecx, 0x85739531
        call    FUN_00629290
        mov    dword ptr [eax + 0x80], 0xfffffffe
L_632c:
        pop    edi
        pop    esi
        ret    4
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        // jump-table data @ 0x005F6334 (0 relocated pointers)
    }
}
