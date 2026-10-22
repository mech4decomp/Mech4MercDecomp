/*
 * FUN_005aba67 (extent 0x5aba67-0x5abbae) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_007b4384;
extern int    g_007f20c4;
extern int    g_007f25b0;
extern int    g_007f25b4;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_005008e0(void);
extern void __cdecl FUN_00500ec0(void);
extern void __cdecl FUN_00501a20(void);

__declspec(naked) void FUN_005aba67(void)
{
    __asm {
        nop    
        /* jump-table dwords from prior function (relocated addresses) */
        __emit 0x19
        __emit 0xB5
        __emit 0x5A
        __emit 0x00
        __emit 0x8A
        __emit 0xB5
        __emit 0x5A
        __emit 0x00
        __emit 0xFB
        __emit 0xB5
        __emit 0x5A
        __emit 0x00
        __emit 0x69
        __emit 0xB6
        __emit 0x5A
        __emit 0x00
        __emit 0xCE
        __emit 0xB8
        __emit 0x5A
        __emit 0x00
        __emit 0xCE
        __emit 0xB8
        __emit 0x5A
        __emit 0x00
        __emit 0xEB
        __emit 0xB8
        __emit 0x5A
        __emit 0x00
        __emit 0x17
        __emit 0xB9
        __emit 0x5A
        __emit 0x00
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x78]
        add    ecx, 0x78
        call    dword ptr [eax + 4]
        fld    dword ptr [esp + 4]
        fcomp    dword ptr [g_0076c5b0]
        mov    ecx, eax
        fnstsw  ax
        test    ah, 1
        je    L_bab5
        fld    dword ptr [g_0076c5b0]
        ret    4
L_bab5:
        fld    dword ptr [ecx + 0x7c]
        fld    dword ptr [esp + 4]
        fmul    dword ptr [esp + 4]
        fld    st(0)
        fmul st(0), st(1)
        fsubp st(1), st(0)
        fabs    
        fsqrt    
        fmul st(0), st(1)
        fmulp st(1), st(0)
        fadd    st(0), st(0)
        fdiv    dword ptr [g_007b4384]
        ret    4
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
        push    esi
        push    0xa8
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_bb58
        mov    eax, dword ptr [g_007f25b0]
        mov    ecx, dword ptr [g_007f25b4]
        push    0x502c60
        push    0x5028b0
        push    0x678150
        push    0
        push    0x678130
        push    eax
        push    0x6746e0
        push    0x5abbe0
        push    0
        push    0
        push    ecx
        push    0x785870
        push    0x49d
        mov    ecx, esi
        call    FUN_00501a20
        mov    dword ptr [esi + 0xa4], 0x5f0a60
        mov    dword ptr [g_007f20c4], esi
        jmp    L_bb62
L_bb58:
        mov    dword ptr [g_007f20c4], 0
L_bb62:
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_bb9b
        push    0x34
        push    2
        push    0x785860
        push    0xb
        mov    ecx, esi
        call    FUN_005008e0
        mov    edx, dword ptr [g_007f20c4]
        push    esi
        lea    ecx, [edx + 0x74]
        mov    dword ptr [esi], 0x775948
        call    FUN_00500ec0
        pop    esi
        ret    
L_bb9b:
        mov    edx, dword ptr [g_007f20c4]
        xor    esi, esi
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        pop    esi
        ret    
    }
}
