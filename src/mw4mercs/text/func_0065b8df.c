/*
 * FUN_0065b8df (extent 0x65b8df-0x65bb73) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_00794a9c;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_005c9800(void);
extern void __cdecl FUN_005dd7a0(void);
extern void __cdecl FUN_0065a840(void);
extern void __cdecl FUN_0065a910(void);
extern void __cdecl FUN_0065ab00(void);
extern void __cdecl FUN_0065acd0(void);
extern void __cdecl FUN_0069eb70(void);

__declspec(naked) void FUN_0065b8df(void)
{
    __asm {
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
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ecx
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi]
        push    edi
        call    dword ptr [eax + 0x2c]
        test    al, al
        je    L_bb11
        lea    ecx, [esp + 8]
        push    ecx
        mov    ecx, dword ptr [esi + 4]
        call    FUN_005dd7a0
        mov    ecx, dword ptr [esi + 0xc]
        push    eax
        push    4
        call    FUN_0069eb70
        mov    eax, dword ptr [esp + 8]
        test    eax, eax
        je    L_bb11
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_bb11
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_bb11:
        mov    edi, dword ptr [esi + 4]
        push    0
        push    edi
        call    FUN_0065ab00
        mov    edx, dword ptr [esi + 8]
        push    edx
        push    edi
        mov    byte ptr [edi + 0x614], 1
        mov    byte ptr [esi + 0x14], 0
        call    FUN_0065a840
        add    esp, 0x10
        pop    edi
        pop    esi
        pop    ecx
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 8]
        mov    ecx, dword ptr [ecx + 4]
        push    eax
        push    ecx
        call    FUN_0065a910
        add    esp, 8
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
        mov    byte ptr [ecx + 0x14], 1
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
        xor    al, al
        ret    
    }
}
