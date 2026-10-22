/*
 * FUN_004994af (extent 0x4994af-0x49957a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d064;
extern void __cdecl FUN_00415020(void);
extern void __cdecl FUN_00499580(void);
extern void __cdecl FUN_00494960(void);

__declspec(naked) void FUN_004994af(void)
{
    __asm {
        nop    
        mov    dword ptr [ecx + 0xa0], 0
        jmp    FUN_00494960
        nop    
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov    ebp, dword ptr [esp + 0x14]
        push    edi
        mov    edi, ecx
        mov    esi, dword ptr [edi + 0x10]
        fld    dword ptr [edi + 0x90]
        fld    st(0)
        mov    ecx, dword ptr [edi + 0x90]
        fmul    dword ptr [esi + 0x2c]
        mov    ebx, dword ptr [edi + 0xac]
        mov    eax, ebp
        shl    eax, 6
        fadd    dword ptr [esi + 0x30]
        add    ebx, eax
        mov    dword ptr [esp + 0x18], ecx
        fmul st(0), st(1)
        fadd    dword ptr [esi + 0x28]
        fmul st(0), st(1)
        fadd    dword ptr [esi + 0x24]
        fstp    dword ptr [esp + 0x10]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        call    FUN_00415020
        fld    dword ptr [esp + 0x18]
        fmul    dword ptr [esi + 0x40]
        fadd    dword ptr [esi + 0x44]
        fmul    dword ptr [esp + 0x18]
        fadd    dword ptr [esi + 0x3c]
        fmul    dword ptr [esp + 0x18]
        fadd    dword ptr [esi + 0x38]
        fsub    dword ptr [esp + 0x10]
        fmulp st(1), st(0)
        fadd    dword ptr [esp + 0x10]
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_9552
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        push    ebp
        fld    dword ptr [g_0076c5b0]
        mov    ecx, edi
        fstp    dword ptr [ebx + 0x3c]
        call    FUN_00499580
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        pop    ecx
        ret    4
L_9552:
        fcom    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jne    L_9567
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076d064]
L_9567:
        push    ebp
        fstp    dword ptr [ebx + 0x3c]
        mov    ecx, edi
        call    FUN_00499580
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        pop    ecx
        ret    4
    }
}
