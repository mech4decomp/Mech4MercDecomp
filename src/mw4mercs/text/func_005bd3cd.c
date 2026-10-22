/*
 * FUN_005bd3cd (extent 0x5bd3cd-0x5bd671) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d5f0;
extern float  g_00779d28;
extern float  g_0077d038;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007db094;
extern int    g_007f2270;
extern int    g_007f2274;
extern int    g_007f2280;
extern int    g_007f2284;
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416c60(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_0053d720(void);
extern void __cdecl FUN_005bd5f0(void);
extern void __cdecl FUN_005bdf10(void);
extern void __cdecl FUN_0067d5e0(void);
extern void __cdecl FUN_0067ddf0(void);
extern void __cdecl FUN_0067e280(void);
extern void __cdecl FUN_00680b10(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_00707f50(void);

__declspec(naked) void FUN_005bd3cd(void)
{
    __asm {
        nop    
        nop    
        nop    
        sub    esp, 8
        mov    eax, dword ptr [g_007dab44]
        fld    qword ptr [esp + 0xc]
        push    ebx
        fld    st(0)
        mov    ebx, dword ptr [g_007dab40]
        push    ebp
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [eax]
        fsub    qword ptr [esi + 0x504]
        xor    ecx, ebx
        mov    edx, dword ptr [ecx + 0xc]
        xor    edx, 0x85739531
        mov    al, byte ptr [edx + 0x17]
        test    al, al
        fstp    dword ptr [esp + 0xc]
        push    edi
        jne    L_d418
        pop    edi
        fstp    qword ptr [esi + 0x504]
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 8
        ret    8
L_d418:
        mov    eax, dword ptr [ecx + 0x20]
        xor    eax, 0x85739531
        mov    bl, 1
        je    L_d44e
        fld    st(0)
        fsub    qword ptr [esi + 0x50c]
        fcomp    qword ptr [g_00779d28]
        fnstsw  ax
        test    ah, 0x41
        jne    L_d44e
        mov    edx, dword ptr [ecx + 0x20]
        fst    qword ptr [esi + 0x50c]
        xor    edx, 0x85739531
        mov    byte ptr [edx + 0x1b0], bl
L_d44e:
        mov    edi, dword ptr [ecx + 0xc]
        xor    edi, 0x85739531
        mov    al, byte ptr [edi + 0x16]
        test    al, al
        jne    L_d4aa
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        call    FUN_00707f50
        mov    edi, dword ptr [esi + 0x930]
        mov    ecx, edi
        mov    ebx, eax
        mov    ebp, edx
        call    FUN_0067e280
        mov    eax, dword ptr [esp + 0x10]
        push    eax
        mov    ecx, edi
        call    FUN_0067ddf0
        call    FUN_00707f50
        mov    ecx, dword ptr [g_007f2270]
        sub    eax, ebx
        sbb    edx, ebp
        add    ecx, eax
        mov    eax, dword ptr [g_007f2274]
        adc    eax, edx
        mov    dword ptr [g_007f2270], ecx
        mov    dword ptr [g_007f2274], eax
        jmp    L_d5c4
L_d4aa:
        fld    st(0)
        fsub    qword ptr [esi + 0x514]
        fcomp    qword ptr [g_0077d038]
        fnstsw  ax
        test    ah, 0x41
        jne    L_d4e3
        mov    ebp, dword ptr [esi + 0x92c]
        fstp    qword ptr [esi + 0x514]
        mov    ecx, ebp
        call    FUN_0067d5e0
        test    al, al
        je    L_d4e5
L_d4d6:
        mov    ecx, ebp
        call    FUN_0067d5e0
        test    al, al
        jne    L_d4d6
        jmp    L_d4e5
L_d4e3:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_d4e5:
        cmp    byte ptr [esi + 0xb0], bl
        jne    L_d4f6
        mov    ecx, esi
        call    FUN_005bdf10
        jmp    L_d516
L_d4f6:
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0x20]
        xor    edx, 0x85739531
        mov    al, byte ptr [edx + 0x1b0]
        test    al, al
        je    L_d53c
L_d516:
        mov    ecx, edi
        call    FUN_0053d720
        mov    eax, dword ptr [g_007dab44]
        mov    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax]
        xor    ecx, edx
        mov    edx, dword ptr [ecx + 0x20]
        xor    edx, 0x85739531
        mov    byte ptr [edx + 0x1b0], 0
L_d53c:
        call    FUN_00707f50
        xor    ebp, ebp
        mov    dword ptr [esp + 0x10], eax
        mov    dword ptr [esp + 0x14], edx
        lea    ebx, [esi + 0xb4]
        add    edi, 0x353c
L_d557:
        mov    ecx, dword ptr [g_007db094]
        xor    eax, eax
        mov    al, byte ptr [ecx + 0x28]
        cmp    ebp, eax
        je    L_d580
        cmp    byte ptr [edi], 0
        je    L_d580
        mov    ecx, dword ptr [ebx]
        test    ecx, ecx
        je    L_d580
        mov    edx, dword ptr [esp + 0x20]
        mov    eax, dword ptr [esp + 0x1c]
        push    edx
        push    eax
        call    FUN_00680b10
L_d580:
        inc    ebp
        add    ebx, 4
        add    edi, 0x2038
        cmp    ebp, 0xff
        jl    L_d557
        mov    ecx, esi
        call    FUN_005bd5f0
        call    FUN_00707f50
        mov    ebx, dword ptr [esp + 0x10]
        mov    edi, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [g_007f2280]
        sub    eax, ebx
        sbb    edx, edi
        add    ecx, eax
        mov    eax, dword ptr [g_007f2284]
        adc    eax, edx
        mov    dword ptr [g_007f2280], ecx
        mov    dword ptr [g_007f2284], eax
L_d5c4:
        mov    ecx, dword ptr [esp + 0x1c]
        mov    edx, dword ptr [esp + 0x20]
        pop    edi
        mov    dword ptr [esi + 0x504], ecx
        mov    dword ptr [esi + 0x508], edx
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 8
        ret    8
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
        add    ecx, 0x4b0
        push    ebx
        push    ecx
        lea    ecx, [esp + 0xc]
        call    FUN_00416bc0
        xor    ebx, ebx
        push    ebx
        mov    dword ptr [esp + 0xc], 0x77d098
        call    FUN_00707e70
        fstp    dword ptr [esp + 4]
        lea    ecx, [esp + 8]
        call    FUN_00416cc0
        mov    ecx, eax
        cmp    ecx, ebx
        je    L_d661
L_d627:
        cmp    byte ptr [ecx + 0x93a], bl
        je    L_d652
        fld    dword ptr [esp + 4]
        fsub    dword ptr [ecx + 0x93c]
        fcomp    dword ptr [g_0076d5f0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_d652
        mov    byte ptr [ecx + 0x93a], bl
        mov    dword ptr [ecx + 0x93c], ebx
L_d652:
        lea    ecx, [esp + 8]
        call    FUN_00416cc0
        mov    ecx, eax
        cmp    ecx, ebx
        jne    L_d627
L_d661:
        lea    ecx, [esp + 8]
        call    FUN_00416c60
        pop    ebx
        add    esp, 0x18
        ret    
        nop    
        ret    
    }
}
