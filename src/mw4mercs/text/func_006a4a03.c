/*
 * FUN_006a4a03 (extent 0x6a4a03-0x6a4add) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d064;
extern void __cdecl FUN_00682ec0(void);

__declspec(naked) void FUN_006a4a03(void)
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
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [esp + 4]
        mov    eax, dword ptr [ecx]
        push    0
        push    0
        push    0
        push    0
        call    dword ptr [eax + 0x34]
        push    eax
        call    FUN_00682ec0
        add    esp, 0x14
        cmp    al, 1
        jne    L_4a35
        fld    dword ptr [g_0076d064]
        ret    
L_4a35:
        fld    dword ptr [g_0076c5b0]
        ret    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0xc
        push    esi
        mov    esi, dword ptr [esp + 0x14]
        mov    eax, dword ptr [esi]
        push    0x40800000
        mov    ecx, esi
        call    dword ptr [eax + 0x54]
        cmp    al, 1
        jne    L_4ad2
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x34]
        mov    eax, dword ptr [eax + 0xd8]
        mov    ecx, dword ptr [eax + 0x8c]
        mov    edx, dword ptr [eax + 0x9c]
        add    eax, 0x80
        mov    eax, dword ptr [eax + 0x2c]
        mov    dword ptr [esp + 4], ecx
        mov    dword ptr [esp + 8], edx
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        mov    dword ptr [esp + 0xc], eax
        call    dword ptr [edx + 0x58]
        fld    dword ptr [eax]
        fsub    dword ptr [esp + 4]
        fld    dword ptr [eax + 4]
        fsub    dword ptr [esp + 8]
        fld    dword ptr [eax + 8]
        fsub    dword ptr [esp + 0xc]
        fld    st(0)
        fmul st(0), st(1)
        fld    st(2)
        fmul st(0), st(3)
        faddp st(1), st(0)
        fld    st(3)
        fmul st(0), st(4)
        faddp st(1), st(0)
        fld    dword ptr [esp + 0x18]
        fmul    dword ptr [esp + 0x18]
        fcompp    
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fnstsw  ax
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        test    ah, 0x41
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        je    L_4ad2
        fld    dword ptr [g_0076d064]
        pop    esi
        add    esp, 0xc
        ret    
L_4ad2:
        fld    dword ptr [g_0076c5b0]
        pop    esi
        add    esp, 0xc
        ret    
    }
}
