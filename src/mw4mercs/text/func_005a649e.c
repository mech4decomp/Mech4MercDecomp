/*
 * FUN_005a649e (extent 0x5a649e-0x5a66ed) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern int    g_007dd234;
extern int    g_007f206c;
extern int    g_007f2d1c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004dad70(void);
extern void __cdecl FUN_00501b40(void);
extern void __cdecl FUN_0050e200(void);
extern void __cdecl FUN_0050e230(void);
extern void __cdecl FUN_005a66f0(void);
extern void __cdecl FUN_00637a20(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_0070cbb0(void);

__declspec(naked) void FUN_005a649e(void)
{
    __asm {
        nop    
        nop    
        sub    esp, 8
        push    ebx
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x1c0]
        push    edi
        push    eax
        call    FUN_0050e230
        fstp    dword ptr [esp + 0x10]
        fld    qword ptr [esp + 0x1c]
        mov    edx, dword ptr [esi + 0x78]
        fsub    qword ptr [esi + 0xe4]
        lea    ecx, [esi + 0x78]
        add    esp, 4
        fstp    dword ptr [esp + 0x10]
        call    dword ptr [edx + 4]
        mov    edi, dword ptr [esi + 0xe0]
        mov    ebx, eax
        mov    eax, dword ptr [edi + 0x14]
        sub    eax, 6
        je    L_6550
        dec    eax
        jne    L_6635
        mov    eax, dword ptr [esi + 0x10]
        and    eax, 7
        cmp    eax, 5
        je    L_64f8
        test    eax, eax
        jne    L_652e
L_64f8:
        fld    dword ptr [esp + 0x10]
        fmul    dword ptr [esi + 0x1b4]
        fadd    dword ptr [esp + 0xc]
        fst    dword ptr [esp + 0xc]
        fcomp    dword ptr [ebx + 0x38]
        fnstsw  ax
        test    ah, 0x41
        jne    L_651b
        mov    eax, dword ptr [ebx + 0x38]
        mov    dword ptr [esp + 0xc], eax
L_651b:
        mov    ecx, dword ptr [esp + 0xc]
        push    ecx
        call    FUN_0050e200
        fstp    dword ptr [esi + 0x1c0]
        add    esp, 4
L_652e:
        fld    dword ptr [esp + 0xc]
        fcomp    dword ptr [ebx + 0x38]
        fnstsw  ax
        test    ah, 0x40
        je    L_6635
        mov    edx, dword ptr [edi]
        push    0
        push    1
        mov    ecx, edi
        call    dword ptr [edx + 4]
        jmp    L_6635
L_6550:
        fld    dword ptr [esp + 0xc]
        fsub    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0xc]
        mov    eax, dword ptr [esp + 0xc]
        push    eax
        call    FUN_0050e200
        fstp    dword ptr [esi + 0x1c0]
        fld    dword ptr [esp + 0x10]
        add    esp, 4
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        je    L_65a8
        push    0
        mov    dword ptr [esp + 0x10], 0
        call    FUN_0050e200
        fstp    dword ptr [esi + 0x1c0]
        mov    edx, dword ptr [edi]
        add    esp, 4
        push    0
        push    7
        mov    ecx, edi
        call    dword ptr [edx + 4]
        jmp    L_6635
L_65a8:
        mov    edi, dword ptr [esi + 0x1b0]
        fld    dword ptr [edi + 0x170]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_65ee
        fld    dword ptr [edi + 0x42c]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        je    L_65ee
        fld    dword ptr [esi + 0x1bc]
        fmul    dword ptr [edi + 0x42c]
        fadd    dword ptr [edi + 0x188]
        fstp    dword ptr [edi + 0x188]
        jmp    L_6600
L_65ee:
        fld    dword ptr [esi + 0x1b8]
        fadd    dword ptr [edi + 0x184]
        fstp    dword ptr [edi + 0x184]
L_6600:
        mov    ecx, dword ptr [g_007f2d1c]
        push    0x127
        call    FUN_00637a20
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_6635
        fld    dword ptr [edi + 0x430]
        fmul    dword ptr [esi + 0x1bc]
        fadd    dword ptr [edi + 0x180]
        fstp    dword ptr [edi + 0x180]
L_6635:
        fld    dword ptr [esp + 0xc]
        sub    esp, 8
        fstp    qword ptr [esp]
        push    0x784a28
        push    0x784a1c
        call    FUN_0070cbb0
        mov    eax, dword ptr [esp + 0x2c]
        mov    ecx, dword ptr [esp + 0x28]
        add    esp, 0x10
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_004dad70
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 8
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, dword ptr [g_007f206c]
        test    esi, esi
        je    L_668b
        mov    ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_668b:
        mov    dword ptr [g_007f206c], 0
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
        mov    eax, dword ptr [g_007dd234]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x1c8
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_66e2
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007f206c]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_005a66f0
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_66e2:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
    }
}
