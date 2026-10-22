/*
 * FUN_0065b633 (extent 0x65b633-0x65bac9) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_00794a9c;
extern int    g_007f23b0;
extern int    g_007f25c0;
extern int    g_007f268c;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_005c1720(void);
extern void __cdecl FUN_005c17e0(void);
extern void __cdecl FUN_005c9800(void);
extern void __cdecl FUN_005dd750(void);
extern void __cdecl FUN_005dd7a0(void);
extern void __cdecl FUN_0065ab00(void);
extern void __cdecl FUN_0065acd0(void);
extern void __cdecl FUN_0069eb70(void);

__declspec(naked) void FUN_0065b633(void)
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
        mov    eax, dword ptr [ecx + 0x14]
        sub    esp, 0xc
        test    eax, eax
        je    L_b69b
        mov    edx, dword ptr [eax + 0x10]
        shr    edx, 0x13
        and    dl, 1
        cmp    dl, 1
        je    L_b69b
        mov    eax, dword ptr [eax + 0xd8]
        fld    dword ptr [eax + 0x8c]
        add    eax, 0x80
        fld    dword ptr [eax + 0x1c]
        mov    eax, dword ptr [eax + 0x2c]
        mov    dword ptr [esp + 8], eax
        fxch    st(1)
        mov    eax, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [esp + 8]
        fstp    dword ptr [eax]
        mov    dword ptr [eax + 8], ecx
        fstp    dword ptr [eax + 4]
        add    esp, 0xc
        ret    4
L_b69b:
        __emit 0x8D  // 141 edx, [esp] (explicit disp8=0)
__emit 0x54
__emit 0x24
__emit 0x00
        push    edx
        call    FUN_0065acd0
        mov    edx, dword ptr [eax]
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [ecx], edx
        mov    edx, dword ptr [eax + 4]
        mov    eax, dword ptr [eax + 8]
        mov    dword ptr [ecx + 8], eax
        mov    dword ptr [ecx + 4], edx
        mov    eax, ecx
        add    esp, 0xc
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
        nop    
        mov    eax, dword ptr [ecx + 0x14]
        test    eax, eax
        je    L_b6e6
        mov    eax, dword ptr [eax + 0x10]
        shr    eax, 0x13
        and    al, 1
        cmp    al, 1
        je    L_b6e6
        xor    al, al
        ret    
L_b6e6:
        mov    al, 1
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ecx
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    esi, ecx
        mov    edi, dword ptr [esi + 4]
        push    1
        push    edi
        call    FUN_0065ab00
        mov    eax, dword ptr [g_007f25c0]
        mov    ebp, dword ptr [esi + 8]
        mov    ecx, dword ptr [ebp + 4]
        add    esp, 8
        push    eax
        mov    byte ptr [edi + 0x614], 0
        mov    dword ptr [esi + 0x14], 0
        call    FUN_00415230
        cmp    al, 1
        jne    L_b7f7
        mov    ebp, dword ptr [ebp + 0x3b0]
        test    ebp, ebp
        je    L_b7f7
        lea    ebx, [ebp + 0x6a0]
        mov    ecx, ebx
        call    FUN_0041fd80
        test    eax, eax
        je    L_b7f7
        mov    ecx, ebx
        call    FUN_0041fd80
        mov    ebp, eax
        mov    eax, dword ptr [g_007f268c]
        mov    ecx, dword ptr [ebp + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_b7f7
        mov    eax, dword ptr [edi + 0x4e0]
        test    eax, 0xfffffffc
        je    L_b79b
        mov    ecx, eax
        and    ecx, 0xfffffffc
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 4]
        cmp    eax, 0x7e1
        jne    L_b79b
        lea    ecx, [edi + 0x1c8]
        call    FUN_0041fd80
        cmp    eax, ebp
        je    L_b7f7
L_b79b:
        mov    ecx, dword ptr [edi + 0x170]
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 0x60]
        mov    ebx, eax
        mov    eax, dword ptr [ebp]
        mov    ecx, ebp
        call    dword ptr [eax + 0x60]
        cmp    eax, ebx
        je    L_b7f4
        lea    ecx, [esp + 0x10]
        push    ecx
        mov    ecx, edi
        call    FUN_005dd7a0
        mov    ecx, dword ptr [esi + 0xc]
        push    eax
        push    6
        call    FUN_0069eb70
        mov    eax, dword ptr [esp + 0x10]
        test    eax, eax
        je    L_b8d9
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_b8d9
        push    eax
        call    FUN_004084e0
        add    esp, 4
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        pop    ecx
        ret    
L_b7f4:
        mov    dword ptr [esi + 0x14], ebp
L_b7f7:
        mov    eax, dword ptr [esi + 0x14]
        test    eax, eax
        jne    L_b857
        mov    eax, dword ptr [esi + 8]
        mov    ebp, dword ptr [eax + 0x2fc]
        test    ebp, ebp
        je    L_b857
        mov    eax, dword ptr [g_007f23b0]
        mov    ecx, dword ptr [ebp + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jne    L_b857
        lea    ebx, [ebp + 0x1c8]
        mov    ecx, ebx
        call    FUN_0041fd80
        mov    ecx, dword ptr [edi + 0x170]
        mov    edx, dword ptr [ecx]
        mov    ebp, eax
        call    dword ptr [edx + 0x60]
        mov    edx, eax
        mov    eax, dword ptr [ebp]
        mov    ecx, ebp
        mov    dword ptr [esp + 0x10], edx
        call    dword ptr [eax + 0x60]
        mov    ecx, dword ptr [esp + 0x10]
        cmp    eax, ecx
        jne    L_b857
        mov    ecx, ebx
        call    FUN_0041fd80
        mov    dword ptr [esi + 0x14], eax
L_b857:
        mov    eax, dword ptr [esi + 0x14]
        test    eax, eax
        je    L_b873
        mov    edx, dword ptr [eax + 0x10]
        shr    edx, 0x13
        and    dl, 1
        cmp    dl, 1
        jne    L_b873
        mov    dword ptr [esi + 0x14], 0
L_b873:
        mov    ebx, dword ptr [esi + 0x14]
        test    ebx, ebx
        je    L_b8d9
        push    1
        mov    ecx, edi
        call    FUN_005c1720
        push    ebx
        mov    ecx, edi
        call    FUN_005dd750
        push    1
        push    1
        push    0x7e1
        mov    ecx, edi
        call    FUN_005c17e0
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x2c]
        test    al, al
        je    L_b8d9
        lea    ecx, [esp + 0x10]
        push    ecx
        mov    ecx, dword ptr [esi + 4]
        call    FUN_005dd7a0
        mov    ecx, dword ptr [esi + 0xc]
        push    eax
        push    4
        call    FUN_0069eb70
        mov    eax, dword ptr [esp + 0x10]
        test    eax, eax
        je    L_b8d9
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_b8d9
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_b8d9:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        pop    ecx
        ret    
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
        mov    eax, dword ptr [ecx + 0x14]
        sub    esp, 0xc
        test    eax, eax
        je    L_b93b
        mov    edx, dword ptr [eax + 0x10]
        shr    edx, 0x13
        and    dl, 1
        cmp    dl, 1
        je    L_b93b
        mov    eax, dword ptr [eax + 0xd8]
        fld    dword ptr [eax + 0x8c]
        add    eax, 0x80
        fld    dword ptr [eax + 0x1c]
        mov    eax, dword ptr [eax + 0x2c]
        mov    dword ptr [esp + 8], eax
        fxch    st(1)
        mov    eax, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [esp + 8]
        fstp    dword ptr [eax]
        mov    dword ptr [eax + 8], ecx
        fstp    dword ptr [eax + 4]
        add    esp, 0xc
        ret    4
L_b93b:
        __emit 0x8D  // 141 edx, [esp] (explicit disp8=0)
__emit 0x54
__emit 0x24
__emit 0x00
        push    edx
        call    FUN_0065acd0
        mov    edx, dword ptr [eax]
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [ecx], edx
        mov    edx, dword ptr [eax + 4]
        mov    eax, dword ptr [eax + 8]
        mov    dword ptr [ecx + 8], eax
        mov    dword ptr [ecx + 4], edx
        mov    eax, ecx
        add    esp, 0xc
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
        nop    
        sub    esp, 0x18
        push    esi
        mov    esi, ecx
        push    edi
        mov    edi, dword ptr [esi + 4]
        mov    ecx, edi
        call    FUN_005c9800
        cmp    al, 1
        jne    L_ba0b
        mov    eax, dword ptr [esi + 8]
        mov    eax, dword ptr [eax + 0xd8]
        mov    ecx, dword ptr [eax + 0x9c]
        fld    dword ptr [eax + 0x8c]
        mov    edx, dword ptr [eax + 0xac]
        add    eax, 0x80
        mov    eax, dword ptr [edi + 0x170]
        mov    eax, dword ptr [eax + 0xd8]
        fsubr    dword ptr [eax + 0x8c]
        add    eax, 0x80
        mov    dword ptr [esp + 0x18], ecx
        mov    ecx, dword ptr [eax + 0x1c]
        mov    dword ptr [esp + 0x1c], edx
        mov    edx, dword ptr [eax + 0x2c]
        mov    dword ptr [esp + 0xc], ecx
        fld    dword ptr [esp + 0xc]
        fsub    dword ptr [esp + 0x18]
        mov    dword ptr [esp + 0x10], edx
        fld    dword ptr [esp + 0x10]
        fsub    dword ptr [esp + 0x1c]
        fld    st(0)
        fmul st(0), st(1)
        fld    st(2)
        fmul st(0), st(3)
        faddp st(1), st(0)
        fld    st(3)
        fmul st(0), st(4)
        faddp st(1), st(0)
        fcomp    dword ptr [g_00794a9c]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fnstsw  ax
        mov    al, 1
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        test    ah, 1
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jne    L_ba0e
L_ba0b:
        mov    al, byte ptr [esi + 0x14]
L_ba0e:
        pop    edi
        pop    esi
        add    esp, 0x18
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
        sub    esp, 0x18
        push    esi
        mov    esi, ecx
        push    edi
        mov    edi, dword ptr [esi + 4]
        mov    ecx, edi
        call    FUN_005c9800
        cmp    al, 1
        jne    L_bac1
        mov    eax, dword ptr [esi + 8]
        mov    eax, dword ptr [eax + 0xd8]
        mov    ecx, dword ptr [eax + 0x9c]
        fld    dword ptr [eax + 0x8c]
        mov    edx, dword ptr [eax + 0xac]
        add    eax, 0x80
        mov    eax, dword ptr [edi + 0x170]
        mov    eax, dword ptr [eax + 0xd8]
        fsubr    dword ptr [eax + 0x8c]
        add    eax, 0x80
        mov    dword ptr [esp + 0x18], ecx
        mov    ecx, dword ptr [eax + 0x1c]
        mov    dword ptr [esp + 0x1c], edx
        mov    edx, dword ptr [eax + 0x2c]
        mov    dword ptr [esp + 0xc], ecx
        fld    dword ptr [esp + 0xc]
        fsub    dword ptr [esp + 0x18]
        mov    dword ptr [esp + 0x10], edx
        fld    dword ptr [esp + 0x10]
        fsub    dword ptr [esp + 0x1c]
        fld    st(0)
        fmul st(0), st(1)
        fld    st(2)
        fmul st(0), st(3)
        faddp st(1), st(0)
        fld    st(3)
        fmul st(0), st(4)
        faddp st(1), st(0)
        fcomp    dword ptr [g_00794a9c]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fnstsw  ax
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        test    ah, 1
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        je    L_bac1
        pop    edi
        mov    al, 1
        pop    esi
        add    esp, 0x18
        ret    
L_bac1:
        pop    edi
        xor    al, al
        pop    esi
        add    esp, 0x18
        ret    
    }
}
