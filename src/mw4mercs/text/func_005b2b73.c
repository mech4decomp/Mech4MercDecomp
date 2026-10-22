/*
 * FUN_005b2b73 (extent 0x5b2b73-0x5b2cbd) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d064;
extern float  g_007860c8;
extern int    g_007f2440;
extern void __cdecl FUN_005d9030(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_005b2b73(void)
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
        push    esi
        push    0
        mov    esi, ecx
        call    FUN_00707e70
        fsub    qword ptr [g_007860c8]
        mov    eax, dword ptr [esi + 0x6a4]
        mov    byte ptr [esi + 0x6d1], 1
        fstp    qword ptr [esi + 0x6c8]
        mov    byte ptr [eax + 0x548], 0
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x24
        mov    ecx, dword ptr [ecx + 0x35c]
        mov    eax, dword ptr [ecx + 0xd8]
        mov    edx, dword ptr [eax + 0x8c]
        add    eax, 0x80
        mov    eax, dword ptr [eax + 0x2c]
        push    esi
        mov    esi, dword ptr [esp + 0x2c]
        fld    dword ptr [esi]
        mov    dword ptr [esp + 0x10], edx
        fsub    dword ptr [esp + 0x10]
        mov    dword ptr [esp + 0x18], eax
        fld    dword ptr [esi + 8]
        mov    edx, dword ptr [ecx + 0x78]
        fsub    dword ptr [esp + 0x18]
        add    ecx, 0x78
        fst    dword ptr [esp + 0x24]
        fmul    dword ptr [esp + 0x24]
        fld    st(1)
        fmul st(0), st(2)
        faddp st(1), st(0)
        fsqrt    
        fdivr    dword ptr [g_0076d064]
        fstp    dword ptr [esp + 0x2c]
        fmul    dword ptr [esp + 0x2c]
        fstp    dword ptr [esp + 4]
        fld    dword ptr [esp + 0x24]
        fmul    dword ptr [esp + 0x2c]
        fstp    dword ptr [esp + 0xc]
        call    dword ptr [edx + 4]
        fld    dword ptr [eax + 0x2bc]
        fmul    qword ptr [g_007860c8]
        fld    st(0)
        fmul    dword ptr [esp + 4]
        fstp    dword ptr [esp + 4]
        fmul    dword ptr [esp + 0xc]
        fld    dword ptr [esp + 4]
        fadd    dword ptr [esi]
        fstp    dword ptr [esp + 4]
        fadd    dword ptr [esi + 8]
        call    FUN_0075db4a
        fld    dword ptr [esp + 4]
        push    eax
        call    FUN_0075db4a
        fld    dword ptr [esp + 0x1c]
        push    eax
        call    FUN_0075db4a
        fld    dword ptr [esp + 0x18]
        push    eax
        call    FUN_0075db4a
        mov    ecx, dword ptr [g_007f2440]
        push    eax
        call    FUN_005d9030
        pop    esi
        add    esp, 0x24
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    al, byte ptr [ecx + 0x6e0]
        test    al, al
        je    L_2c8f
        mov    al, 1
        ret    4
L_2c8f:
        mov    al, byte ptr [ecx + 0x6d1]
        test    al, al
        jne    L_2cb8
        mov    al, byte ptr [ecx + 0x6d0]
        test    al, al
        jne    L_2cb8
        mov    edx, dword ptr [esp + 4]
        mov    eax, dword ptr [ecx]
        push    edx
        call    dword ptr [eax + 0x1e8]
        neg    al
        sbb    eax, eax
        inc    eax
        ret    4
L_2cb8:
        xor    al, al
        ret    4
    }
}
