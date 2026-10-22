/*
 * FUN_005f2af9 (extent 0x5f2af9-0x5f2be1) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d064;
extern float  g_0077de8c;
extern float  g_007866d4;
extern float  g_007b8d08;
extern float  g_007b8d0c;
extern float  g_007b8d10;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dc728;
extern void __cdecl FUN_0040cb00(void);
extern void __cdecl FUN_004e2f40(void);

__declspec(naked) void FUN_005f2af9(void)
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
        sub    esp, 0x40
        push    esi
        mov    ecx, 0x7b8d08
        mov    dword ptr [esp + 0x40], 0x42c80000
        call    FUN_0040cb00
        fsqrt    
        mov    eax, dword ptr [esp + 0x48]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [eax + 8]
        mov    dword ptr [esp + 0x28], ecx
        mov    dword ptr [esp + 0x30], edx
        mov    edx, dword ptr [esp + 0x4c]
        lea    ecx, [esp + 4]
        mov    dword ptr [esp + 0x14], ecx
        mov    ecx, dword ptr [g_007dab40]
        mov    dword ptr [esp + 0x18], 0
        mov    dword ptr [esp + 0x20], edx
        mov    dword ptr [esp + 0x24], 0x1000
        fdivr    dword ptr [g_0076d064]
        fld    dword ptr [g_007b8d08]
        fmul st(0), st(1)
        fstp    dword ptr [esp + 0x34]
        fld    dword ptr [g_007b8d0c]
        fmul st(0), st(1)
        fstp    dword ptr [esp + 0x38]
        fld    dword ptr [g_007b8d10]
        fmul st(0), st(1)
        fstp    dword ptr [esp + 0x3c]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [eax + 4]
        lea    eax, [esp + 0x28]
        fadd    dword ptr [g_0077de8c]
        mov    dword ptr [esp + 0x10], eax
        mov    eax, dword ptr [g_007dab44]
        fstp    dword ptr [esp + 0x2c]
        mov    esi, dword ptr [eax]
        xor    esi, ecx
        lea    ecx, [esp + 0x10]
        push    ecx
        mov    ecx, dword ptr [g_007dc728]
        call    FUN_004e2f40
        mov    edx, dword ptr [esi + 0x1c]
        xor    edx, 0x85739531
        cmp    eax, edx
        pop    esi
        jne    L_2bd7
        fld    dword ptr [esp + 0x34]
        fmul    dword ptr [esp + 0x3c]
        fadd    dword ptr [esp + 0x28]
        add    esp, 0x40
        ret    
L_2bd7:
        fld    dword ptr [g_007866d4]
        add    esp, 0x40
        ret    
    }
}
