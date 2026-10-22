/*
 * FUN_005c4613 (extent 0x5c4613-0x5c4b50) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b420;
extern float  g_0076c5b0;
extern float  g_0076d064;
extern float  g_0076d598;
extern float  g_0076ed00;
extern float  g_007878d8;
extern float  g_007878dc;
extern float  g_007b220c;
extern int    g_007f2460;
extern void __cdecl FUN_0041c830(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_005480c0(void);
extern void __cdecl FUN_005c4b50(void);
extern void __cdecl FUN_005cb1c0(void);
extern void __cdecl FUN_005cb3d0(void);
extern void __cdecl FUN_005cbd00(void);
extern void __cdecl FUN_005cbe50(void);
extern void __cdecl FUN_005cbf80(void);
extern void __cdecl FUN_005dbbd0(void);
extern void __cdecl FUN_005dd330(void);
extern void __cdecl FUN_005eaec0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005c4613(void)
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
        mov    eax, dword ptr [g_007f2460]
        sub    esp, 0x78
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        mov    ebx, ecx
        call    FUN_006f4950
        mov    esi, dword ptr [esp + 0x8c]
        push    esi
        mov    ecx, ebx
        call    FUN_005dd330
        lea    ecx, [ebx + 0x1c8]
        call    FUN_0041fd80
        test    eax, eax
        je    L_4785
        mov    ebp, dword ptr [ebx + 0x4e0]
        test    ebp, 0xfffffffc
        je    L_475e
        mov    ecx, dword ptr [esp + 0x14]
        push    ecx
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, 0x787d18
        repne scasb
        not    ecx
        dec    ecx
        add    ecx, 0x787d18
        push    ecx
        push    0x787d18
        mov    ecx, esi
        call    FUN_005cbd00
        mov    edx, dword ptr [esp + 0x14]
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, 0x787d0c
        repne scasb
        not    ecx
        dec    ecx
        push    edx
        add    ecx, 0x787d0c
        push    ecx
        push    0x787d0c
        mov    ecx, esi
        call    FUN_005cbd00
        mov    ecx, ebp
        and    ecx, 0xfffffffc
        mov    eax, dword ptr [ecx]
        lea    edx, [esp + 0x18]
        push    edx
        call    dword ptr [eax + 8]
        mov    ecx, dword ptr [esp + 0x14]
        mov    edx, dword ptr [eax + 4]
        mov    eax, dword ptr [eax]
        push    ecx
        push    edx
        push    eax
        mov    ecx, esi
        call    FUN_005cbe50
        lea    ecx, [esp + 0x18]
        call    FUN_005cb3d0
        mov    edi, dword ptr [ebx + 0x5e8]
        cmp    edi, dword ptr [ebx + 0x5ec]
        je    L_4785
L_46f3:
        lea    ecx, [ebx + 0x1c8]
        call    FUN_0041fd80
        mov    ecx, dword ptr [edi + 4]
        cmp    ecx, dword ptr [eax + 0x30]
        je    L_4715
        mov    eax, dword ptr [ebx + 0x5ec]
        add    edi, 0x10
        cmp    edi, eax
        jne    L_46f3
        jmp    L_4785
L_4715:
        cmp    dword ptr [edi], 0
        jne    L_473c
        mov    edx, dword ptr [esp + 0x14]
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, 0x787cfc
        repne scasb
        not    ecx
        dec    ecx
        push    edx
        add    ecx, 0x787cfc
        push    ecx
        push    0x787cfc
        jmp    L_477e
L_473c:
        mov    eax, dword ptr [esp + 0x14]
        push    eax
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, 0x787cec
        repne scasb
        not    ecx
        dec    ecx
        add    ecx, 0x787cec
        push    ecx
        push    0x787cec
        jmp    L_477e
L_475e:
        mov    ecx, dword ptr [esp + 0x14]
        push    ecx
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, 0x787cdc
        repne scasb
        not    ecx
        dec    ecx
        add    ecx, 0x787cdc
        push    ecx
        push    0x787cdc
L_477e:
        mov    ecx, esi
        call    FUN_005cbd00
L_4785:
        mov    edx, dword ptr [esp + 0x14]
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, 0x787cc8
        repne scasb
        not    ecx
        dec    ecx
        push    edx
        add    ecx, 0x787cc8
        push    ecx
        push    0x787cc8
        mov    ecx, esi
        call    FUN_005cbf80
        mov    ecx, ebx
        call    FUN_005dbbd0
        push    eax
        lea    eax, [esp + 0x28]
        push    0x76b9a8
        push    eax
        call    dword ptr [g_0076b420]
        add    esp, 0xc
        lea    ecx, [esp + 0x13]
        push    ecx
        lea    ecx, [esp + 0x1c]
        call    FUN_005cb1c0
        or    ecx, 0xffffffff
        xor    eax, eax
        lea    edi, [esp + 0x24]
        repne scasb
        not    ecx
        dec    ecx
        lea    edx, [esp + ecx + 0x24]
        push    edx
        lea    eax, [esp + 0x28]
        push    eax
        lea    ecx, [esp + 0x20]
        call    FUN_005480c0
        mov    ecx, dword ptr [esp + 0x14]
        mov    edx, dword ptr [esp + 0x1c]
        mov    eax, dword ptr [esp + 0x18]
        push    ecx
        push    edx
        push    eax
        mov    ecx, esi
        call    FUN_005cbe50
        lea    ecx, [esp + 0x18]
        call    FUN_005cb3d0
        mov    ecx, dword ptr [esp + 0x14]
        push    ecx
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, 0x77a078
        repne scasb
        not    ecx
        dec    ecx
        add    ecx, 0x77a078
        push    ecx
        push    0x77a078
        mov    ecx, esi
        call    FUN_005cbf80
        call    FUN_006f49a0
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x78
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        sub    esp, 0x10
        cmp    byte ptr [ebp + 0x10], 1
        push    ebx
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 0xc]
        mov    esi, ecx
        jne    L_490f
        mov    eax, dword ptr [edi + 0x17c]
        mov    ecx, dword ptr [eax + 0xd8]
        mov    ebx, dword ptr [ebp + 8]
        add    ecx, 0x80
        push    ecx
        push    ebx
        lea    ecx, [ebp - 0x10]
        call    FUN_0041c830
        fld    dword ptr [ebp - 8]
        fmul    dword ptr [ebp - 8]
        fld    dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp - 0x10]
        faddp st(1), st(0)
        fstp    dword ptr [ebp + 0x10]
        fld    dword ptr [ebp - 0xc]
        fmul    dword ptr [ebp - 0xc]
        fadd    dword ptr [ebp + 0x10]
        fstp    dword ptr [ebp + 8]
        mov    eax, dword ptr [ebp + 8]
        sar    eax, 1
        add    eax, 0x1fc00000
        mov    dword ptr [ebp + 0xc], eax
        fld    dword ptr [ebp + 0xc]
        fabs    
        fld    dword ptr [g_007b220c]
        fcompp    
        fnstsw  ax
        test    ah, 1
        jne    L_48d1
        mov    dword ptr [ebp + 0x10], 0
        jmp    L_49b0
L_48d1:
        mov    edx, dword ptr [ebp + 0x10]
        mov    dword ptr [ebp + 0x10], edx
        mov    eax, dword ptr [ebp + 0x10]
        sar    eax, 1
        add    eax, 0x1fc00000
        mov    dword ptr [ebp + 8], eax
        fld    dword ptr [ebp + 8]
        fabs    
        fld    dword ptr [g_007b220c]
        fcompp    
        fnstsw  ax
        test    ah, 1
        jne    L_4904
        mov    dword ptr [ebp + 0x10], 0
        jmp    L_49b0
L_4904:
        fld    dword ptr [ebp - 0x10]
        fld    dword ptr [ebp - 8]
        jmp    L_49ab
L_490f:
        mov    eax, dword ptr [esi + 0x170]
        mov    ecx, dword ptr [eax + 0xd8]
        mov    ebx, dword ptr [ebp + 8]
        add    ecx, 0x80
        push    ecx
        push    ebx
        lea    ecx, [ebp - 0x10]
        call    FUN_0041c830
        fld    dword ptr [ebp - 8]
        fmul    dword ptr [ebp - 8]
        fld    dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp - 0x10]
        faddp st(1), st(0)
        fstp    dword ptr [ebp + 0x10]
        fld    dword ptr [ebp - 0xc]
        fmul    dword ptr [ebp - 0xc]
        fadd    dword ptr [ebp + 0x10]
        fstp    dword ptr [ebp + 8]
        mov    eax, dword ptr [ebp + 8]
        sar    eax, 1
        add    eax, 0x1fc00000
        mov    dword ptr [ebp + 0xc], eax
        fld    dword ptr [ebp + 0xc]
        fabs    
        fld    dword ptr [g_007b220c]
        fcompp    
        fnstsw  ax
        test    ah, 1
        jne    L_4975
        mov    dword ptr [ebp + 0x10], 0
        jmp    L_49b0
L_4975:
        mov    edx, dword ptr [ebp + 0x10]
        mov    dword ptr [ebp + 0x10], edx
        mov    eax, dword ptr [ebp + 0x10]
        sar    eax, 1
        add    eax, 0x1fc00000
        mov    dword ptr [ebp + 8], eax
        fld    dword ptr [ebp + 8]
        fabs    
        fld    dword ptr [g_007b220c]
        fcompp    
        fnstsw  ax
        test    ah, 1
        jne    L_49a5
        mov    dword ptr [ebp + 0x10], 0
        jmp    L_49b0
L_49a5:
        fld    dword ptr [ebp - 0x10]
        fld    dword ptr [ebp - 8]
L_49ab:
        fpatan    
        fstp    dword ptr [ebp + 0x10]
L_49b0:
        push    edi
        mov    ecx, esi
        call    FUN_005c4b50
        fstp    dword ptr [ebp + 8]
        mov    eax, dword ptr [edi + 0x78]
        lea    esi, [edi + 0x78]
        mov    ecx, esi
        call    dword ptr [eax + 4]
        test    eax, eax
        je    L_49ea
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 4]
        fld    dword ptr [g_007878d8]
        fsub    dword ptr [g_0076ed00]
        fcomp    dword ptr [eax + 0x63c]
        fnstsw  ax
        test    ah, 1
        jne    L_4a00
L_49ea:
        fld    dword ptr [ebp + 0x10]
        fabs    
        fcomp    dword ptr [g_007878dc]
        fnstsw  ax
        test    ah, 1
        je    L_4b2e
L_4a00:
        fld    dword ptr [ebp + 0x10]
        fabs    
        fcomp    dword ptr [g_007878dc]
        fnstsw  ax
        test    ah, 1
        je    L_4a50
        fld    dword ptr [edi + 0x198]
        fabs    
        fcomp    dword ptr [g_007878dc]
        fnstsw  ax
        test    ah, 0x41
        jne    L_4a50
        fld    dword ptr [edi + 0x198]
        fcomp    dword ptr [g_0076c5b0]
        fld    dword ptr [ebp + 8]
        fnstsw  ax
        test    ah, 1
        jne    L_4b47
        fmul    dword ptr [g_0076d598]
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0xc
L_4a50:
        mov    ecx, edi
        call    FUN_005eaec0
        push    eax
        push    ebx
        lea    ecx, [ebp - 0x10]
        call    FUN_0041c830
        fld    dword ptr [ebp - 8]
        fmul    dword ptr [ebp - 8]
        fld    dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp - 0x10]
        faddp st(1), st(0)
        fstp    dword ptr [ebp + 0x10]
        fld    dword ptr [ebp - 0xc]
        fmul    dword ptr [ebp - 0xc]
        fadd    dword ptr [ebp + 0x10]
        fstp    dword ptr [ebp + 0xc]
        mov    eax, dword ptr [ebp + 0xc]
        sar    eax, 1
        add    eax, 0x1fc00000
        mov    dword ptr [ebp - 4], eax
        fld    dword ptr [ebp - 4]
        fabs    
        fld    dword ptr [g_007b220c]
        fcompp    
        fnstsw  ax
        test    ah, 1
        jne    L_4aa7
        fld    dword ptr [g_0076c5b0]
        jmp    L_4ade
L_4aa7:
        mov    eax, dword ptr [ebp + 0x10]
        mov    dword ptr [ebp + 0x10], eax
        mov    eax, dword ptr [ebp + 0x10]
        sar    eax, 1
        add    eax, 0x1fc00000
        mov    dword ptr [ebp + 0xc], eax
        fld    dword ptr [ebp + 0xc]
        fabs    
        fld    dword ptr [g_007b220c]
        fcompp    
        fnstsw  ax
        test    ah, 1
        jne    L_4ad6
        fld    dword ptr [g_0076c5b0]
        jmp    L_4ade
L_4ad6:
        fld    dword ptr [ebp - 0x10]
        fld    dword ptr [ebp - 8]
        fpatan    
L_4ade:
        fld    st(0)
        fabs    
        fmul    dword ptr [ebp + 8]
        fst    dword ptr [ebp + 0x10]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_4afe
        mov    dword ptr [ebp + 0x10], 0
        jmp    L_4b15
L_4afe:
        fld    dword ptr [ebp + 0x10]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jne    L_4b15
        mov    dword ptr [ebp + 0x10], 0x3f800000
L_4b15:
        fcomp    dword ptr [g_0076c5b0]
        fld    dword ptr [ebp + 0x10]
        fnstsw  ax
        test    ah, 1
        jne    L_4b41
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0xc
L_4b2e:
        fld    dword ptr [ebp + 0x10]
        fcomp    dword ptr [g_0076c5b0]
        fld    dword ptr [ebp + 8]
        fnstsw  ax
        test    ah, 0x41
        je    L_4b47
L_4b41:
        fmul    dword ptr [g_0076d598]
L_4b47:
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0xc
    }
}
