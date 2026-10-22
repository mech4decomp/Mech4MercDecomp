/*
 * FUN_0042bb2f (extent 0x42bb2f-0x42bc73) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d064;
extern float  g_0076d598;
extern float  g_0076de20;
extern int    g_007b97dc;
extern int    g_007b97e0;
extern int    g_007b97e4;
extern float  g_007b97e8;
extern float  g_007b97ec;
extern float  g_007b97f0;
extern int    g_007b97f4;
extern int    g_007b97f8;
extern int    g_007b9824;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);

__declspec(naked) void FUN_0042bb2f(void)
{
    __asm {
        nop    
        mov    eax, 6
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
        mov    eax, dword ptr [ecx + 0xa8]
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
        __emit 0xE9  /* near jmp rel32; MSVC6 collapses to short EB form */
        __emit 0x0B
        __emit 0x00
        __emit 0x00
        __emit 0x00
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
L_bb60:
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
        sub    esp, 0xc
        push    esi
        push    0x18
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_bba7
        mov    eax, dword ptr [g_007b9824]
        push    eax
        push    0x76e118
        push    0x67
        mov    ecx, esi
        call    FUN_004151c0
        mov    dword ptr [esi + 0x14], 0x42bf80
        mov    dword ptr [g_007b97f8], esi
        jmp    L_bbb1
L_bba7:
        mov    dword ptr [g_007b97f8], 0
L_bbb1:
        fld    qword ptr [g_0076de20]
        push    8
        fsqrt    
        mov    dword ptr [g_007b97e4], 0x43ac8000
        mov    dword ptr [g_007b97dc], 5
        mov    dword ptr [g_007b97e0], 0x3f000000
        fdivr    dword ptr [g_0076d064]
        fst    dword ptr [esp + 8]
        fmul    dword ptr [g_0076d598]
        fst    dword ptr [esp + 0xc]
        fld    st(0)
        fmul st(0), st(1)
        fld    dword ptr [esp + 8]
        fmul    dword ptr [esp + 8]
        faddp st(1), st(0)
        fld    dword ptr [esp + 0xc]
        fmul    dword ptr [esp + 0xc]
        faddp st(1), st(0)
        fsqrt    
        fdivr    dword ptr [g_0076d064]
        fld    st(0)
        fmul    dword ptr [esp + 8]
        fstp    dword ptr [g_007b97e8]
        fld    st(0)
        fmul    dword ptr [esp + 0xc]
        fstp    dword ptr [g_007b97ec]
        fmul st(0), st(1)
        fstp    dword ptr [g_007b97f0]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_bc64
        push    0x800
        mov    dword ptr [esi], 0
        mov    dword ptr [esi + 4], 0x100
        call    FUN_004084d0
        add    esp, 4
        mov    dword ptr [esi], eax
        mov    dword ptr [g_007b97f4], esi
        pop    esi
        add    esp, 0xc
        ret    
L_bc64:
        mov    dword ptr [g_007b97f4], 0
        pop    esi
        add    esp, 0xc
        ret    
    }
}
