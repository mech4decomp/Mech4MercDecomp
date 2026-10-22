/*
 * FUN_006ac4c1 (extent 0x6ac4c1-0x6ac88e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d064;
extern float  g_00786dd0;
extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_0041eb40(void);
extern void __cdecl FUN_0041ee20(void);
extern void __cdecl FUN_0067f7b0(void);

__declspec(naked) void FUN_006ac4c1(void)
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
        nop    
        nop    
        push    esi
        push    1
        push    0
        push    9
        call    FUN_0067f7b0
        push    1
        push    1
        push    9
        mov    esi, eax
        call    FUN_0067f7b0
        add    esp, 0x18
        add    eax, esi
        pop    esi
        ret    
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        mov    eax, dword ptr [esi + 0x10]
        push    edi
        mov    edi, dword ptr [esi + 0x14]
        sub    edi, eax
        mov    eax, dword ptr [esi + 8]
        shl    edi, 3
        cmp    eax, -0x14
        je    L_c50d
        lea    edi, [edi + eax - 8]
L_c50d:
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [eax + 0x408]
        fld    dword ptr [ecx + 0x50]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_c52f
        fld    dword ptr [g_0076c5b0]
        jmp    L_c561
L_c52f:
        fld    dword ptr [ecx + 0x4c]
        fdiv    dword ptr [ecx + 0x50]
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_c54c
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076c5b0]
        jmp    L_c561
L_c54c:
        fcom    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jne    L_c561
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076d064]
L_c561:
        fstp    dword ptr [esp + 0x10]
        fld    dword ptr [ecx + 0x58]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_c57d
        fld    dword ptr [g_0076c5b0]
        jmp    L_c5af
L_c57d:
        fld    dword ptr [ecx + 0x54]
        fdiv    dword ptr [ecx + 0x58]
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_c59a
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076c5b0]
        jmp    L_c5af
L_c59a:
        fcom    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jne    L_c5af
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076d064]
L_c5af:
        push    1
        fstp    dword ptr [esp + 0x10]
        push    0
        push    9
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        push    0x3f800000
        push    0
        lea    ecx, [esp + 0x1c]
        push    ecx
        mov    ecx, esi
        call    FUN_0041ee20
        push    1
        push    1
        push    9
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        push    0x3f800000
        push    0
        lea    edx, [esp + 0x18]
        push    edx
        mov    ecx, esi
        call    FUN_0041ee20
        mov    eax, dword ptr [esi + 0x14]
        mov    ecx, dword ptr [esi + 0x10]
        mov    esi, dword ptr [esi + 8]
        sub    eax, ecx
        shl    eax, 3
        cmp    esi, -0x14
        je    L_c60e
        lea    eax, [eax + esi - 8]
L_c60e:
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0x14]
        mov    edx, dword ptr [esp + 0x14]
        xor    ecx, 0x85739531
        mov    ecx, dword ptr [ecx + 0x1814]
        mov    esi, dword ptr [ecx + edx*4 + 0x848c]
        add    ecx, 0x8484
        sub    eax, edi
        add    esi, eax
        mov    dword ptr [ecx + edx*4 + 8], esi
        mov    edx, dword ptr [ecx + 0xc00]
        add    edx, eax
        pop    edi
        mov    dword ptr [ecx + 0xc00], edx
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
        push    ebp
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        mov    ebp, dword ptr [esi + 0x14]
        mov    eax, dword ptr [esi + 8]
        push    edi
        sub    ebp, dword ptr [esi + 0x10]
        shl    ebp, 3
        cmp    eax, -0x14
        je    L_c67c
        lea    ebp, [eax + ebp - 8]
L_c67c:
        mov    eax, dword ptr [esp + 0x10]
        push    ebx
        mov    ebx, dword ptr [eax + 0x34c]
L_c687:
        test    ebx, ebx
        je    L_c6c3
        mov    edi, dword ptr [ebx]
        test    edi, edi
        mov    ebx, dword ptr [ebx + 4]
        je    L_c6c3
        push    1
        lea    ecx, [esp + 0x1c]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x20], 0
        call    FUN_0041eb40
        mov    eax, dword ptr [esp + 0x18]
        test    eax, eax
        jne    L_c687
        mov    ecx, dword ptr [edi + 0xe0]
        mov    edx, dword ptr [ecx]
        push    0
        push    5
        call    dword ptr [edx + 4]
        jmp    L_c687
L_c6c3:
        mov    eax, dword ptr [esi + 0x14]
        mov    edi, dword ptr [esi + 0x10]
        mov    esi, dword ptr [esi + 8]
        sub    eax, edi
        shl    eax, 3
        cmp    esi, -0x14
        pop    ebx
        je    L_c6db
        lea    eax, [eax + esi - 8]
L_c6db:
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        sub    eax, ebp
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0x14]
        mov    edx, dword ptr [esp + 0x24]
        xor    ecx, 0x85739531
        mov    ecx, dword ptr [ecx + 0x1814]
        mov    esi, dword ptr [ecx + edx*4 + 0x848c]
        add    ecx, 0x8484
        add    esi, eax
        mov    dword ptr [ecx + edx*4 + 8], esi
        mov    edx, dword ptr [ecx + 0xc00]
        pop    edi
        add    edx, eax
        pop    esi
        mov    dword ptr [ecx + 0xc00], edx
        pop    ebp
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
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [eax + 0x34c]
        xor    eax, eax
L_c73c:
        test    ecx, ecx
        je    L_c74c
        mov    edx, dword ptr [ecx]
        test    edx, edx
        mov    ecx, dword ptr [ecx + 4]
        je    L_c74c
        inc    eax
        jmp    L_c73c
L_c74c:
        ret    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [eax + 0x34c]
        xor    eax, eax
L_c75c:
        test    ecx, ecx
        je    L_c76c
        mov    edx, dword ptr [ecx]
        test    edx, edx
        mov    ecx, dword ptr [ecx + 4]
        je    L_c76c
        inc    eax
        jmp    L_c75c
L_c76c:
        ret    
        nop    
        nop    
        nop    
        sub    esp, 0xc
        mov    ecx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [ecx + 0xd8]
        fld    dword ptr [eax + 0x8c]
        mov    edx, dword ptr [eax + 0x9c]
        fsubr    dword ptr [esp + 0x14]
        add    eax, 0x80
        fld    dword ptr [esp + 0x18]
        mov    eax, dword ptr [eax + 0x2c]
        mov    dword ptr [esp + 4], edx
        fsub    dword ptr [esp + 4]
        fld    dword ptr [esp + 0x1c]
        mov    dword ptr [esp + 8], eax
        fsub    dword ptr [esp + 8]
        fld    st(0)
        fmul st(0), st(1)
        fld    st(2)
        fmul st(0), st(3)
        faddp st(1), st(0)
        fld    st(3)
        fmul st(0), st(4)
        faddp st(1), st(0)
        fcomp    dword ptr [g_00786dd0]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fnstsw  ax
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        test    ah, 1
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        je    L_c7e0
        mov    al, byte ptr [ecx + 0x93a]
        test    al, al
        je    L_c7e0
        mov    al, 1
        add    esp, 0xc
        ret    
L_c7e0:
        xor    al, al
        add    esp, 0xc
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
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        mov    ebx, dword ptr [esi + 0x10]
        mov    eax, dword ptr [esi + 8]
        push    edi
        mov    edi, dword ptr [esi + 0x14]
        sub    edi, ebx
        shl    edi, 3
        cmp    eax, -0x14
        je    L_c80e
        lea    edi, [edi + eax - 8]
L_c80e:
        mov    ebx, dword ptr [esp + 0x14]
        test    ebx, ebx
        jle    L_c82f
L_c816:
        push    1
        lea    eax, [esp + 0x14]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x18], 0
        call    FUN_0041eb40
        dec    ebx
        jne    L_c816
L_c82f:
        mov    eax, dword ptr [esi + 0x14]
        mov    ebx, dword ptr [esi + 0x10]
        mov    esi, dword ptr [esi + 8]
        sub    eax, ebx
        shl    eax, 3
        cmp    esi, -0x14
        je    L_c846
        lea    eax, [eax + esi - 8]
L_c846:
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0x14]
        mov    edx, dword ptr [esp + 0x20]
        xor    ecx, 0x85739531
        mov    ecx, dword ptr [ecx + 0x1814]
        mov    esi, dword ptr [ecx + edx*4 + 0x848c]
        add    ecx, 0x8484
        sub    eax, edi
        add    esi, eax
        mov    dword ptr [ecx + edx*4 + 8], esi
        mov    edx, dword ptr [ecx + 0xc00]
        pop    edi
        add    edx, eax
        pop    esi
        mov    dword ptr [ecx + 0xc00], edx
        pop    ebx
        ret    
    }
}
