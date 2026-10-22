/*
 * FUN_0059997c (extent 0x59997c-0x599ba8) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d064;
extern float  g_0076d978;
extern float  g_00783388;
extern float  g_007b8d08;
extern float  g_007b8d0c;
extern float  g_007b8d10;
extern int    g_007dc728;
extern int    g_007dc8cc;
extern int    g_007f1fe0;
extern int    g_007f25c8;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0040cb00(void);
extern void __cdecl FUN_0040cbb0(void);
extern void __cdecl FUN_0041a160(void);
extern void __cdecl FUN_0041afd0(void);
extern void __cdecl FUN_004daa20(void);
extern void __cdecl FUN_004e2f40(void);
extern void __cdecl FUN_00501a20(void);
extern void __cdecl FUN_005f39c0(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_0059997c(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    0
        mov    esi, ecx
        call    FUN_00707e70
        fstp    qword ptr [esi + 0xec]
        mov    ecx, dword ptr [esi + 0xe0]
        mov    eax, dword ptr [ecx]
        push    0
        push    0xb
        call    dword ptr [eax + 4]
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
        sub    esp, 0x98
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esi + 0x10]
        mov    eax, dword ptr [esi + 0xd8]
        push    edi
        or    ecx, 0x40
        lea    edi, [eax + 0x80]
        mov    dword ptr [esi + 0x10], ecx
        push    edi
        lea    ecx, [esp + 0x58]
        call    FUN_0041afd0
        mov    eax, dword ptr [edi + 0xc]
        mov    dword ptr [esp + 8], eax
        mov    ecx, dword ptr [edi + 0x1c]
        mov    dword ptr [esp + 0xc], ecx
        mov    edx, dword ptr [edi + 0x2c]
        mov    ecx, 0x7b8d08
        mov    dword ptr [esp + 0x10], edx
        mov    dword ptr [esp + 0x2c], 0x447a0000
        call    FUN_0040cb00
        fsqrt    
        mov    ecx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [esp + 8]
        mov    dword ptr [esp + 0x1c], ecx
        lea    ecx, [esp + 0x3c]
        mov    dword ptr [esp + 0x14], eax
        lea    edx, [esp + 0x14]
        lea    eax, [esp + 0x94]
        push    ecx
        mov    ecx, dword ptr [g_007dc728]
        mov    dword ptr [esp + 0x40], edx
        mov    dword ptr [esp + 0x44], eax
        mov    dword ptr [esp + 0x48], 0
        mov    dword ptr [esp + 0x50], esi
        mov    dword ptr [esp + 0x54], 0x1000
        fdivr    dword ptr [g_0076d064]
        fld    dword ptr [g_007b8d08]
        fmul st(0), st(1)
        fstp    dword ptr [esp + 0x24]
        fld    dword ptr [g_007b8d0c]
        fmul st(0), st(1)
        fstp    dword ptr [esp + 0x28]
        fld    dword ptr [g_007b8d10]
        fmul st(0), st(1)
        fstp    dword ptr [esp + 0x2c]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [esp + 0x10]
        fadd    dword ptr [g_00783388]
        fstp    dword ptr [esp + 0x1c]
        call    FUN_004e2f40
        test    eax, eax
        je    L_9adc
        fld    dword ptr [esp + 0x20]
        lea    edx, [esp + 0x30]
        fmul    dword ptr [esp + 0x2c]
        push    edx
        lea    eax, [esp + 0x18]
        push    eax
        fstp    dword ptr [esp + 0x38]
        lea    ecx, [esp + 0x10]
        fld    dword ptr [esp + 0x2c]
        fmul    dword ptr [esp + 0x34]
        fstp    dword ptr [esp + 0x3c]
        fld    dword ptr [esp + 0x30]
        fmul    dword ptr [esp + 0x34]
        fstp    dword ptr [esp + 0x40]
        call    FUN_0040cbb0
        fld    dword ptr [esp + 0xc]
        fadd    dword ptr [g_0076d978]
        fstp    dword ptr [esp + 0xc]
L_9adc:
        mov    ecx, dword ptr [esp + 8]
        mov    edx, dword ptr [esp + 0xc]
        mov    eax, dword ptr [esp + 0x10]
        mov    dword ptr [esp + 0x70], ecx
        lea    ecx, [esp + 0x54]
        push    ecx
        lea    ecx, [esp + 0x68]
        mov    dword ptr [esp + 0x84], edx
        mov    dword ptr [esp + 0x94], eax
        call    FUN_0041a160
        lea    edx, [esp + 0x64]
        push    edx
        mov    ecx, esi
        call    FUN_004daa20
        mov    eax, dword ptr [esp + 0xa8]
        mov    ecx, dword ptr [esp + 0xa4]
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_005f39c0
        pop    edi
        pop    esi
        add    esp, 0x98
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
        push    0xa4
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_9b9d
        mov    ecx, dword ptr [g_007dc8cc]
        mov    edx, dword ptr [g_007f25c8]
        push    0x502c60
        push    0x5028b0
        push    0x675550
        push    0x502240
        push    0x6754a0
        push    ecx
        push    0x6754c0
        push    0x599be0
        push    0
        push    0
        push    edx
        push    0x78338c
        push    0x4bd
        mov    ecx, eax
        call    FUN_00501a20
        mov    dword ptr [g_007f1fe0], eax
        ret    
L_9b9d:
        mov    dword ptr [g_007f1fe0], 0
        ret    
    }
}
