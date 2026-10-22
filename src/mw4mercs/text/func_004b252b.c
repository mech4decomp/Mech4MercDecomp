/*
 * FUN_004b252b (extent 0x4b252b-0x4b288b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern int    g_007da9e8;
extern int    g_007da9f8;
extern int    g_007da9fc;
extern float  g_007daac8;
extern int    g_007dab18;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_00487e30(void);
extern void __cdecl FUN_004afd70(void);
extern void __cdecl FUN_006f4710(void);

__declspec(naked) void FUN_004b252b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        sub    esp, 0x1c
        push    ebx
        push    ebp
        push    esi
        xor    ebp, ebp
        test    eax, eax
        push    edi
        je    L_260c
        fld    dword ptr [eax + 0x8c]
        mov    edx, dword ptr [eax + 0x9c]
        fld    dword ptr [ecx + 0x8c]
        mov    eax, dword ptr [eax + 0xac]
        fxch    st(1)
        mov    dword ptr [esp + 0x18], edx
        mov    edx, dword ptr [ecx + 0x9c]
        fsub st(0), st(1)
        fxch    st(1)
        mov    dword ptr [esp + 0x1c], eax
        mov    eax, dword ptr [ecx + 0xac]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [esp + 0x18]
        mov    dword ptr [esp + 0x24], edx
        fsub    dword ptr [esp + 0x24]
        mov    dword ptr [esp + 0x28], eax
        fld    dword ptr [esp + 0x1c]
        fsub    dword ptr [esp + 0x28]
        fld    st(0)
        fmul st(0), st(1)
        fld    st(2)
        fmul st(0), st(3)
        faddp st(1), st(0)
        fld    st(3)
        fmul st(0), st(4)
        faddp st(1), st(0)
        fadd    dword ptr [g_007daac8]
        fstp    dword ptr [esp + 0x30]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [esp + 0x30]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_25c6
        mov    dword ptr [esp + 0x30], ebp
L_25c6:
        mov    edi, dword ptr [ecx + 0x188]
        xor    edx, edx
        test    edi, edi
        jbe    L_260c
        mov    ebx, dword ptr [ecx + 0x14c]
        xor    eax, eax
L_25da:
        shl    eax, 4
        add    eax, ebx
        mov    esi, eax
        fld    dword ptr [esi]
        fcomp    dword ptr [esp + 0x30]
        fnstsw  ax
        test    ah, 0x41
        je    L_25fc
        fld    dword ptr [esi + 0xc]
        fcomp    dword ptr [esp + 0x30]
        fnstsw  ax
        test    ah, 1
        je    L_260a
L_25fc:
        inc    edx
        mov    eax, edx
        and    eax, 0xffff
        cmp    eax, edi
        jb    L_25da
        jmp    L_260c
L_260a:
        mov    ebp, edx
L_260c:
        lea    edx, [esp + 0x10]
        push    edx
        lea    eax, [esp + 0x34]
        push    eax
        push    ebp
        call    FUN_004afd70
        mov    eax, dword ptr [esp + 0x30]
        pop    edi
        mov    ecx, eax
        add    eax, 0x10
        dec    word ptr [eax]
        cmp    word ptr [eax], 0
        pop    esi
        pop    ebp
        pop    ebx
        jne    L_263c
        test    ecx, ecx
        je    L_263c
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
L_263c:
        mov    eax, dword ptr [esp + 0x20]
        add    esp, 0x1c
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
        sub    esp, 0x18
        push    ebx
        push    ebp
        mov    ebp, ecx
        mov    ecx, dword ptr [ebp + 0x188]
        push    esi
        push    edi
        xor    edi, edi
        test    ecx, ecx
        mov    dword ptr [esp + 0x18], ebp
        jle    L_26c2
        mov    eax, dword ptr [ebp + 0x184]
        mov    dword ptr [esp + 0x10], eax
        mov    dword ptr [esp + 0x14], ecx
L_2677:
        mov    ecx, dword ptr [eax]
        xor    ebx, ebx
        mov    bl, byte ptr [ecx + 0x1c]
        xor    esi, esi
        test    ebx, ebx
        jle    L_26b0
        mov    ebp, ecx
L_2686:
        push    esi
        mov    ecx, ebp
        call    FUN_00487e30
        mov    edx, dword ptr [eax]
        lea    ecx, [esp + 0x1c]
        push    ecx
        lea    ecx, [esp + 0x28]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x28]
        add    edi, dword ptr [esp + 0x1c]
        inc    esi
        cmp    esi, ebx
        jl    L_2686
        mov    eax, dword ptr [esp + 0x10]
        mov    ebp, dword ptr [esp + 0x18]
L_26b0:
        mov    ecx, dword ptr [esp + 0x14]
        add    eax, 4
        dec    ecx
        mov    dword ptr [esp + 0x10], eax
        mov    dword ptr [esp + 0x14], ecx
        jne    L_2677
L_26c2:
        mov    esi, dword ptr [esp + 0x2c]
        mov    ebx, dword ptr [esi + 4]
        cmp    edi, ebx
        je    L_2767
        test    edi, edi
        jbe    L_2753
        lea    edx, [edi + edi*2]
        shl    edx, 2
        push    edx
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_26f7
        lea    ecx, [edi - 1]
        mov    dword ptr [esp + 0x24], ecx
        mov    ecx, eax
        mov    dword ptr [esp + 0x10], ecx
        jmp    L_2703
L_26f7:
        mov    dword ptr [esp + 0x10], 0
        mov    ecx, dword ptr [esp + 0x10]
L_2703:
        mov    edx, dword ptr [esi]
        test    edx, edx
        je    L_274f
        cmp    edi, ebx
        mov    eax, edi
        jb    L_2711
        mov    eax, ebx
L_2711:
        mov    ebx, eax
        dec    eax
        test    ebx, ebx
        je    L_2740
        lea    esi, [eax + eax*2]
        mov    ebp, edx
        lea    esi, [ecx + esi*4]
        sub    ebp, ecx
        lea    ebx, [eax + 1]
L_2725:
        lea    edx, [esi + ebp]
        push    edx
        mov    ecx, esi
        call    FUN_0040c410
        dec    ebx
        sub    esi, 0xc
        test    ebx, ebx
        ja    L_2725
        mov    ebp, dword ptr [esp + 0x18]
        mov    esi, dword ptr [esp + 0x2c]
L_2740:
        mov    eax, dword ptr [esi]
        push    eax
        call    FUN_004084e0
        mov    ecx, dword ptr [esp + 0x14]
        add    esp, 4
L_274f:
        mov    dword ptr [esi], ecx
        jmp    L_2764
L_2753:
        mov    eax, dword ptr [esi]
        push    eax
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [esi], 0
L_2764:
        mov    dword ptr [esi + 4], edi
L_2767:
        mov    eax, dword ptr [ebp + 0x188]
        xor    ebx, ebx
        test    eax, eax
        jle    L_281c
        mov    ecx, dword ptr [ebp + 0x184]
        mov    dword ptr [esp + 0x14], ecx
        mov    dword ptr [esp + 0x10], eax
L_2785:
        mov    edx, dword ptr [ecx]
        xor    eax, eax
        mov    al, byte ptr [edx + 0x1c]
        xor    edi, edi
        mov    ebp, eax
        test    ebp, ebp
        mov    dword ptr [esp + 0x24], ebp
        jle    L_2806
        mov    ecx, edx
        mov    dword ptr [esp + 0x1c], ecx
L_279e:
        mov    ecx, dword ptr [esp + 0x1c]
        push    edi
        call    FUN_00487e30
        mov    edx, dword ptr [eax]
        lea    ecx, [esp + 0x18]
        push    ecx
        lea    ecx, [esp + 0x24]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x28]
        mov    ecx, dword ptr [esp + 0x18]
        xor    esi, esi
        test    ecx, ecx
        jle    L_27fb
        mov    ecx, dword ptr [esp + 0x2c]
        mov    ecx, dword ptr [ecx]
        lea    eax, [ebx + ebx*2]
        xor    edx, edx
        lea    eax, [ecx + eax*4]
L_27d1:
        mov    ecx, dword ptr [esp + 0x20]
        mov    ebp, dword ptr [ecx + edx]
        add    ecx, edx
        mov    dword ptr [eax], ebp
        mov    ebp, dword ptr [ecx + 4]
        mov    ecx, dword ptr [ecx + 8]
        mov    dword ptr [eax + 4], ebp
        mov    dword ptr [eax + 8], ecx
        mov    ecx, dword ptr [esp + 0x18]
        inc    esi
        add    edx, 0xc
        add    eax, 0xc
        cmp    esi, ecx
        jl    L_27d1
        mov    ebp, dword ptr [esp + 0x24]
L_27fb:
        add    ebx, ecx
        inc    edi
        cmp    edi, ebp
        jl    L_279e
        mov    ecx, dword ptr [esp + 0x14]
L_2806:
        mov    eax, dword ptr [esp + 0x10]
        add    ecx, 4
        dec    eax
        mov    dword ptr [esp + 0x14], ecx
        mov    dword ptr [esp + 0x10], eax
        jne    L_2785
L_281c:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x18
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
        mov    eax, dword ptr [g_007da9e8]
        push    esi
        push    eax
        push    0
        push    0x770660
        call    FUN_006f4710
        push    0x18
        mov    dword ptr [g_007da9f8], eax
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_287f
        mov    ecx, dword ptr [g_007dab18]
        push    ecx
        push    0x77063c
        push    0x90
        mov    ecx, esi
        call    FUN_004151c0
        mov    dword ptr [esi + 0x14], 0x4b3000
        mov    dword ptr [g_007da9fc], esi
        pop    esi
        ret    
L_287f:
        mov    dword ptr [g_007da9fc], 0
        pop    esi
        ret    
    }
}
