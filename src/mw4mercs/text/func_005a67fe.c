/*
 * FUN_005a67fe (extent 0x5a67fe-0x5a689a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d070;
extern float  g_007b4384;
extern void __cdecl FUN_0050e200(void);
extern void __cdecl FUN_005a6820(void);
extern void __cdecl FUN_005f08f0(void);

__declspec(naked) void FUN_005a67fe(void)
{
    __asm {
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_005f08f0
        push    edi
        mov    ecx, esi
        call    FUN_005a6820
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, ecx
        mov    eax, dword ptr [edi + 0x78]
        lea    ecx, [edi + 0x78]
        call    dword ptr [eax + 4]
        mov    esi, eax
        mov    ecx, dword ptr [esi + 0x38]
        xor    al, al
        push    ecx
        mov    byte ptr [edi + 0x1ac], al
        mov    byte ptr [edi + 0x1ad], al
        call    FUN_0050e200
        fstp    dword ptr [edi + 0x1c0]
        fld    dword ptr [esi + 0x38]
        add    esp, 4
        fdiv    dword ptr [esi + 0x34]
        fstp    dword ptr [edi + 0x1b4]
        fld    dword ptr [esi + 0x3c]
        fsub    dword ptr [esi + 0x38]
        fld    dword ptr [g_007b4384]
        fmul st(0), st(1)
        fmul st(0), st(1)
        fld    dword ptr [esi + 0x3c]
        fadd    st(0), st(0)
        fsub    dword ptr [esi + 0x38]
        fdivp st(1), st(0)
        fstp    dword ptr [edi + 0x1b8]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [esi + 0x38]
        fmul    dword ptr [g_0076d070]
        fsubr    dword ptr [esi + 0x3c]
        fmul    dword ptr [esi + 0x38]
        fdivr    dword ptr [esi + 0x40]
        fstp    dword ptr [edi + 0x1bc]
        pop    edi
        pop    esi
        ret    4
    }
}
