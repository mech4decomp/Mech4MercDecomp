/*
 * FUN_005f245a (extent 0x5f245a-0x5f2775) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d064;
extern float  g_0076f5d8;
extern float  g_00770168;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0059db70(void);
extern void __cdecl FUN_005f20d0(void);
extern void __cdecl FUN_005f2300(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_005f245a(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x2c
        push    ebx
        push    esi
        push    edi
        mov    edi, ecx
        mov    esi, dword ptr [edi + 0x170]
        test    esi, esi
        je    L_267e
        mov    eax, dword ptr [edi + 0x178]
        test    eax, eax
        je    L_2490
        mov    eax, dword ptr [eax + 0xe0]
        cmp    dword ptr [eax + 0x14], 6
        je    L_267e
L_2490:
        mov    eax, dword ptr [esi + 0x124]
        test    eax, eax
        je    L_267e
        add    eax, 0x10
        test    eax, eax
        je    L_267e
        fld    dword ptr [eax + 0x3c]
        mov    edx, dword ptr [esi + 0x78]
        fmul    dword ptr [g_0076f5d8]
        lea    ecx, [esi + 0x78]
        fstp    dword ptr [esp + 0x10]
        call    dword ptr [edx + 4]
        mov    ebx, eax
        mov    eax, dword ptr [esi + 0xd8]
        mov    ecx, dword ptr [eax + 0x9c]
        fld    dword ptr [eax + 0x8c]
        mov    edx, dword ptr [eax + 0xac]
        fstp    dword ptr [esp + 0x14]
        add    eax, 0x80
        mov    eax, ecx
        mov    dword ptr [esp + 0x18], eax
        mov    dword ptr [esp + 0x30], ecx
        mov    ecx, edx
        mov    dword ptr [esp + 0x1c], ecx
        mov    eax, dword ptr [esi + 0xd8]
        fld    dword ptr [eax + 0x88]
        add    eax, 0x80
        fstp    dword ptr [esp + 0x2c]
        fld    dword ptr [eax + 0x18]
        mov    dword ptr [esp + 0x34], edx
        mov    edx, dword ptr [esi + 0x440]
        mov    esi, dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x30]
        fld    dword ptr [eax + 0x28]
        push    esi
        lea    eax, [esp + 0x18]
        fstp    dword ptr [esp + 0x38]
        push    eax
        mov    ecx, edi
        mov    dword ptr [esp + 0x14], edx
        call    FUN_005f2300
        lea    ecx, [esp + 0x14]
        push    ecx
        mov    ecx, edi
        call    FUN_005f20d0
        fld    dword ptr [esp + 0xc]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jne    L_267e
        fld    dword ptr [esp + 0xc]
        fld    dword ptr [esp + 0xc]
        fcomp    dword ptr [ebx + 0x2bc]
        fnstsw  ax
        test    ah, 0x41
        jne    L_2572
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [ebx + 0x2bc]
L_2572:
        fcom    dword ptr [ebx + 0x2b8]
        fnstsw  ax
        test    ah, 1
        je    L_2587
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [ebx + 0x2b8]
L_2587:
        fld    st(0)
        fdiv    dword ptr [ebx + 0x2d8]
        fstp    dword ptr [esp + 0x10]
        fcom    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 1
        je    L_25a8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076d064]
L_25a8:
        fld    dword ptr [esp + 0x2c]
        fmul st(0), st(1)
        fstp    dword ptr [esp + 0x20]
        fld    dword ptr [esp + 0x30]
        fmul st(0), st(1)
        fstp    dword ptr [esp + 0x24]
        fld    dword ptr [esp + 0x34]
        fmul st(0), st(1)
        fstp    dword ptr [esp + 0x28]
        fdivr    dword ptr [g_00770168]
        fld    dword ptr [esp + 0x20]
        fmul st(0), st(1)
        fstp    dword ptr [esp + 0x20]
        fld    dword ptr [esp + 0x24]
        fmul st(0), st(1)
        fstp    dword ptr [esp + 0x24]
        fld    dword ptr [esp + 0x28]
        fmul st(0), st(1)
        fstp    dword ptr [esp + 0x28]
        fld    dword ptr [esp + 0x10]
        fadd    dword ptr [g_0076d064]
        call    FUN_0075db4a
        mov    dword ptr [esp + 0x10], eax
        fild    dword ptr [esp + 0x10]
        fdiv st(0), st(1)
        call    FUN_0075db4a
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        cmp    eax, 1
        jge    L_2614
        mov    eax, 1
L_2614:
        test    eax, eax
        fld    dword ptr [esp + 0x20]
        fadd    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x14]
        fld    dword ptr [esp + 0x18]
        fadd    dword ptr [esp + 0x24]
        fstp    dword ptr [esp + 0x18]
        fld    dword ptr [esp + 0x1c]
        fadd    dword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0x1c]
        jle    L_267e
        mov    ebx, eax
L_263e:
        push    esi
        lea    edx, [esp + 0x18]
        push    edx
        mov    ecx, edi
        call    FUN_005f2300
        lea    eax, [esp + 0x14]
        push    eax
        mov    ecx, edi
        call    FUN_005f20d0
        fld    dword ptr [esp + 0x20]
        dec    ebx
        fadd    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x14]
        fld    dword ptr [esp + 0x18]
        fadd    dword ptr [esp + 0x24]
        fstp    dword ptr [esp + 0x18]
        fld    dword ptr [esp + 0x1c]
        fadd    dword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0x1c]
        jne    L_263e
L_267e:
        pop    edi
        pop    esi
        xor    al, al
        pop    ebx
        add    esp, 0x2c
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 8
        push    ebp
        mov    ebp, ecx
        mov    eax, dword ptr [ebp + 0x1c0]
        push    edi
        mov    edi, dword ptr [ebp + 0x1bc]
        cmp    edi, eax
        je    L_26c2
        test    edi, edi
        je    L_26b1
        mov    eax, dword ptr [esp + 0x14]
        mov    dword ptr [edi], eax
L_26b1:
        add    edi, 4
        mov    dword ptr [ebp + 0x1bc], edi
        pop    edi
        pop    ebp
        add    esp, 8
        ret    4
L_26c2:
        push    ebx
        push    esi
        mov    esi, dword ptr [ebp + 0x1b8]
        mov    eax, edi
        sub    eax, esi
        sar    eax, 2
        cmp    eax, 1
        mov    dword ptr [esp + 0x10], 1
        mov    dword ptr [esp + 0x14], eax
        lea    ecx, [esp + 0x10]
        jb    L_26ea
        lea    ecx, [esp + 0x14]
L_26ea:
        mov    ecx, dword ptr [ecx]
        add    ecx, eax
        mov    dword ptr [esp + 0x14], ecx
        je    L_2704
        shl    ecx, 2
        push    ecx
        call    FUN_004084d0
        add    esp, 4
        mov    ebx, eax
        jmp    L_2706
L_2704:
        xor    ebx, ebx
L_2706:
        mov    edx, dword ptr [esp + 0x1c]
        push    0
        push    edx
        push    ebx
        push    edi
        push    esi
        call    FUN_0059db70
        add    esp, 0x14
        test    eax, eax
        je    L_2722
        mov    ecx, dword ptr [esp + 0x1c]
        mov    dword ptr [eax], ecx
L_2722:
        mov    ecx, edi
        sub    ecx, edi
        add    eax, 4
        sar    ecx, 2
        test    ecx, ecx
        mov    esi, eax
        jle    L_273f
        sub    edi, eax
L_2734:
        mov    edx, dword ptr [edi + esi]
        mov    dword ptr [esi], edx
        add    esi, 4
        dec    ecx
        jne    L_2734
L_273f:
        mov    eax, dword ptr [ebp + 0x1b8]
        test    eax, eax
        je    L_2752
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_2752:
        mov    eax, dword ptr [esp + 0x14]
        mov    dword ptr [ebp + 0x1bc], esi
        pop    esi
        mov    dword ptr [ebp + 0x1b8], ebx
        lea    ecx, [ebx + eax*4]
        pop    ebx
        pop    edi
        mov    dword ptr [ebp + 0x1c0], ecx
        pop    ebp
        add    esp, 8
        ret    4
    }
}
