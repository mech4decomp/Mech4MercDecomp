/*
 * FUN_005a433c (extent 0x5a433c-0x5a46a2) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d064;
extern float  g_0076d070;
extern float  g_007748c8;
extern float  g_00784324;
extern float  g_007b8d08;
extern float  g_007b8d0c;
extern float  g_007b8d10;
extern int    g_007dc728;
extern void __cdecl FUN_0040cb00(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0041a070(void);
extern void __cdecl FUN_0041acb0(void);
extern void __cdecl FUN_0041c680(void);
extern void __cdecl FUN_0041fde0(void);
extern void __cdecl FUN_004daa20(void);
extern void __cdecl FUN_004e2f40(void);

__declspec(naked) void FUN_005a433c(void)
{
    __asm {
        /* __emit: 0x5A433C-0x5A435F is prior fn's jump-table DATA + nop pad,
           not code. gen_bigfunc mis-disassembled it; emit literal bytes. */
        __emit 0xB3
        __emit 0x40
        __emit 0x5A
        __emit 0x00
        __emit 0xDE
        __emit 0x40
        __emit 0x5A
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x01
        __emit 0x01
        __emit 0x01
        __emit 0x01
        __emit 0x01
        __emit 0x01
        __emit 0x01
        __emit 0x01
        __emit 0x00
        __emit 0x01
        __emit 0x01
        __emit 0x01
        __emit 0x01
        __emit 0x01
        __emit 0x01
        __emit 0x01
        __emit 0x01
        __emit 0x01
        __emit 0x01
        __emit 0x01
        __emit 0x01
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        sub    esp, 0xB0
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    esi, ecx
        mov    edi, dword ptr [esi + 0xd8]
        add    edi, 0x80
        push    edi
        lea    ecx, [esp + 0x14]
        call    FUN_00419480
        fld    dword ptr [esp + 0xc4]
        fmul    dword ptr [g_0076d070]
        lea    ebx, [esi + 0x168]
        push    edi
        lea    eax, [esp + 0x58]
        fld    st(0)
        push    eax
        fmul    dword ptr [esi + 0x180]
        lea    ecx, [esp + 0x50]
        fadd    dword ptr [ebx]
        fstp    dword ptr [esp + 0x5c]
        fld    st(0)
        fmul    dword ptr [esi + 0x184]
        fadd    dword ptr [ebx + 4]
        fstp    dword ptr [esp + 0x60]
        fmul    dword ptr [esi + 0x188]
        fadd    dword ptr [ebx + 8]
        fstp    dword ptr [esp + 0x64]
        call    FUN_0041c680
        fld    dword ptr [esp + 0x48]
        mov    edx, dword ptr [esi + 0x78]
        fmul    dword ptr [esp + 0xc4]
        lea    ecx, [esi + 0x78]
        fadd    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x10]
        fld    dword ptr [esp + 0x4c]
        fmul    dword ptr [esp + 0xc4]
        fadd    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x14]
        fld    dword ptr [esp + 0x50]
        fmul    dword ptr [esp + 0xc4]
        fadd    dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x18]
        fld    dword ptr [esp + 0xc4]
        fmul    dword ptr [esi + 0x184]
        fadd    dword ptr [esi + 0x16c]
        fstp    dword ptr [esi + 0x16c]
        fld    dword ptr [esp + 0xc4]
        fmul    dword ptr [esi + 0x18c]
        fadd    dword ptr [esi + 0x174]
        fstp    dword ptr [esi + 0x174]
        fld    dword ptr [esp + 0xc4]
        fmul    dword ptr [esi + 0x190]
        fadd    dword ptr [esi + 0x178]
        fstp    dword ptr [esi + 0x178]
        fld    dword ptr [esp + 0xc4]
        fmul    dword ptr [esi + 0x194]
        fadd    dword ptr [esi + 0x17c]
        fstp    dword ptr [esi + 0x17c]
        call    dword ptr [edx + 4]
        mov    ebp, eax
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x114]
        fdivr    dword ptr [esi + 0x440]
        push    edi
        lea    ecx, [esp + 0x24]
        fstp    dword ptr [esp + 0x20]
        call    FUN_0041acb0
        fld    dword ptr [g_0076d064]
        fsub    dword ptr [esp + 0x1c]
        fmul    dword ptr [ebp + 0x2b4]
        fld    dword ptr [ebp + 0x2b0]
        fmul    dword ptr [esp + 0x1c]
        faddp st(1), st(0)
        fmul    dword ptr [esp + 0xc4]
        fmul    dword ptr [esi + 0x430]
        mov    ecx, 0x7b8d08
        fadd    dword ptr [esp + 0x20]
        fstp    dword ptr [esp + 0x20]
        fld    dword ptr [esp + 0xc4]
        fmul    dword ptr [esi + 0x174]
        fadd    dword ptr [esp + 0x24]
        fstp    dword ptr [esp + 0x24]
        fld    dword ptr [esp + 0xc4]
        fmul    dword ptr [esi + 0x17c]
        fadd    dword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0x28]
        fld    dword ptr [esi + 0x454]
        fadd    dword ptr [g_00784324]
        fstp    dword ptr [esp + 0x44]
        call    FUN_0040cb00
        fsqrt    
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 0x18]
        mov    dword ptr [esp + 0x2c], ecx
        mov    dword ptr [esp + 0x34], edx
        lea    ecx, [esp + 0xb4]
        lea    edx, [esp + 0x20]
        lea    eax, [esp + 0x2c]
        mov    dword ptr [esp + 0x70], ecx
        xor    ebp, ebp
        push    edx
        lea    ecx, [esp + 0x88]
        mov    dword ptr [esp + 0x70], eax
        mov    dword ptr [esp + 0x78], ebp
        mov    dword ptr [esp + 0x80], esi
        mov    dword ptr [esp + 0x84], 0x1000
        fdivr    dword ptr [g_0076d064]
        fld    st(0)
        fmul    dword ptr [g_007b8d08]
        fstp    dword ptr [esp + 0x3c]
        fld    st(0)
        fmul    dword ptr [g_007b8d0c]
        fstp    dword ptr [esp + 0x40]
        fmul    dword ptr [g_007b8d10]
        fstp    dword ptr [esp + 0x44]
        fld    dword ptr [esp + 0x18]
        fadd    dword ptr [g_007748c8]
        fstp    dword ptr [esp + 0x34]
        call    FUN_0041a070
        mov    ecx, dword ptr [g_007dc728]
        lea    eax, [esp + 0x6c]
        push    eax
        call    FUN_004e2f40
        test    eax, eax
        jne    L_45db
        push    edi
        push    ebx
        lea    ecx, [esi + 0x198]
        mov    byte ptr [esi + 0x4bc], 0x18
        call    FUN_0041c680
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 0x14]
        mov    eax, dword ptr [esp + 0x18]
        mov    dword ptr [esp + 0x90], ecx
        mov    dword ptr [esp + 0xa0], edx
        mov    dword ptr [esp + 0xb0], eax
        jmp    L_4686
L_45db:
        fld    dword ptr [esp + 0x38]
        mov    cl, byte ptr [esp + 0x78]
        fmul    dword ptr [esp + 0x44]
        push    2
        fld    dword ptr [esp + 0x40]
        push    ebp
        fmul    dword ptr [esp + 0x4c]
        push    1
        mov    byte ptr [esi + 0x4bc], cl
        push    0x7b8d18
        fstp    dword ptr [esp + 0x74]
        lea    ecx, [esp + 0x94]
        fld    dword ptr [esp + 0x50]
        fmul    dword ptr [esp + 0x54]
        fstp    dword ptr [esp + 0x78]
        fadd    dword ptr [esp + 0x3c]
        fst    dword ptr [esp + 0x20]
        fld    dword ptr [esp + 0x74]
        fadd    dword ptr [esp + 0x40]
        fld    dword ptr [esp + 0x44]
        fadd    dword ptr [esp + 0x78]
        fstp    dword ptr [esp + 0x28]
        mov    eax, dword ptr [esp + 0x28]
        mov    dword ptr [esp + 0xc0], eax
        fadd    dword ptr [esi + 0x454]
        fstp    dword ptr [esp + 0x24]
        mov    edx, dword ptr [esp + 0x24]
        mov    dword ptr [esp + 0xb0], edx
        fstp    dword ptr [esp + 0xa0]
        call    FUN_0041fde0
        mov    ecx, dword ptr [esi + 0x440]
        lea    edx, [esp + 0x84]
        push    edx
        mov    dword ptr [esi + 0x170], ecx
        push    ebx
        lea    ecx, [esi + 0x198]
        mov    dword ptr [ebx], ebp
        mov    dword ptr [esi + 0x16c], ebp
        call    FUN_0041c680
L_4686:
        lea    eax, [esp + 0x84]
        push    eax
        mov    ecx, esi
        call    FUN_004daa20
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0xb0
        ret    4
    }
}
