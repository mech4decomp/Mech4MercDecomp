/*
 * FUN_00602467 (extent 0x602467-0x60251d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_007b220c;

__declspec(naked) void FUN_00602467(void)
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
        lea    eax, [ecx + 0x2228]
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
        sub    esp, 0xc
        push    esi
        mov    esi, dword ptr [ecx + 0x280]
        push    edi
        mov    edi, dword ptr [esp + 0x18]
        mov    eax, dword ptr [edi + 0xd8]
        mov    ecx, dword ptr [eax + 0x8c]
        mov    edx, dword ptr [eax + 0x9c]
        add    eax, 0x80
        mov    eax, dword ptr [eax + 0x2c]
        mov    dword ptr [esp + 8], ecx
        mov    dword ptr [esp + 0xc], edx
        mov    dword ptr [esp + 0x10], eax
L_24b5:
        test    esi, esi
        je    L_2515
        mov    ecx, dword ptr [esi]
        test    ecx, ecx
        mov    esi, dword ptr [esi + 4]
        je    L_2515
        fld    dword ptr [ecx + 0x10]
        mov    byte ptr [ecx + 0x29], 1
        fsub    dword ptr [esp + 8]
        fld    dword ptr [ecx + 0x14]
        fsub    dword ptr [esp + 0xc]
        fld    dword ptr [ecx + 0x18]
        fsub    dword ptr [esp + 0x10]
        fld    dword ptr [ecx + 0x1c]
        fld    st(0)
        fmul st(0), st(1)
        fld    st(2)
        fmul st(0), st(3)
        fld    st(4)
        fmul st(0), st(5)
        faddp st(1), st(0)
        fld    st(5)
        fmul st(0), st(6)
        faddp st(1), st(0)
        fsubp st(1), st(0)
        fld    dword ptr [g_007b220c]
        fchs    
        fcompp    
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fnstsw  ax
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        test    ah, 1
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        je    L_24b5
        mov    edx, dword ptr [ecx]
        push    edi
        call    dword ptr [edx + 4]
        jmp    L_24b5
L_2515:
        pop    edi
        pop    esi
        add    esp, 0xc
        ret    4
    }
}
