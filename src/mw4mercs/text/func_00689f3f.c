/*
 * FUN_00689f3f (extent 0x689f3f-0x68a0e5) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d064;
extern float  g_00783388;
extern void __cdecl FUN_004db100(void);
extern void __cdecl FUN_006b0610(void);
extern void __cdecl FUN_006b0670(void);
extern void __cdecl FUN_006b06d0(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_00689f3f(void)
{
    __asm {
        nop    
        sub    esp, 0x18
        mov    eax, dword ptr [ecx + 0x20]
        mov    eax, dword ptr [eax + 0xd8]
        mov    edx, dword ptr [eax + 0x9c]
        fld    dword ptr [eax + 0x8c]
        add    eax, 0x80
        mov    eax, dword ptr [eax + 0x2c]
        mov    dword ptr [esp + 0x14], eax
        mov    eax, dword ptr [esp + 0x1c]
        fsubr    dword ptr [eax]
        mov    dword ptr [esp + 0x10], edx
        fld    dword ptr [eax + 4]
        push    eax
        fsub    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 8]
        fld    dword ptr [eax + 8]
        fsub    dword ptr [esp + 0x18]
        fst    dword ptr [esp + 0xc]
        fmul    dword ptr [esp + 0xc]
        fld    dword ptr [esp + 8]
        fmul    dword ptr [esp + 8]
        faddp st(1), st(0)
        fld    st(1)
        fmul st(0), st(2)
        faddp st(1), st(0)
        fsqrt    
        fdivr    dword ptr [g_0076d064]
        fstp    dword ptr [esp + 0x20]
        fmul    dword ptr [esp + 0x20]
        fld    dword ptr [esp + 8]
        fmul    dword ptr [esp + 0x20]
        fstp    dword ptr [esp + 0x14]
        fld    dword ptr [esp + 0xc]
        fmul    dword ptr [esp + 0x20]
        fstp    dword ptr [esp + 0x18]
        fmul    dword ptr [g_00783388]
        fld    dword ptr [esp + 0x14]
        fmul    dword ptr [g_00783388]
        fstp    dword ptr [esp + 0x14]
        mov    edx, dword ptr [esp + 0x14]
        fld    dword ptr [esp + 0x18]
        mov    dword ptr [ecx + 0x28], edx
        fmul    dword ptr [g_00783388]
        fstp    dword ptr [esp + 0x18]
        mov    edx, dword ptr [esp + 0x18]
        mov    dword ptr [ecx + 0x2c], edx
        fstp    dword ptr [ecx + 0x24]
        call    FUN_006b0670
        add    esp, 0x18
        ret    4
        nop    
        sub    esp, 0x20
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0x2c]
        mov    eax, dword ptr [esi + 4]
        mov    edx, dword ptr [esi + 0xc]
        push    edi
        mov    edi, ecx
        mov    ecx, dword ptr [esi + 8]
        mov    dword ptr [esp + 0x14], ecx
        mov    ecx, dword ptr [esi + 0x14]
        mov    dword ptr [esp + 0x10], eax
        mov    eax, dword ptr [esi + 0x10]
        mov    dword ptr [esp + 0x20], ecx
        mov    cl, byte ptr [esi + 0x1a]
        mov    dword ptr [esp + 0x18], edx
        mov    dl, byte ptr [esi + 0x18]
        mov    dword ptr [esp + 0x1c], eax
        mov    al, byte ptr [esi + 0x19]
        mov    byte ptr [esp + 0x26], cl
        lea    ecx, [esp + 0xc]
        mov    byte ptr [esp + 0x24], dl
        mov    dl, byte ptr [esi + 0x1b]
        mov    byte ptr [esp + 0x25], al
        mov    eax, dword ptr [esi + 0x1c]
        push    ecx
        mov    ecx, edi
        mov    byte ptr [esp + 0x2b], dl
        mov    dword ptr [esp + 0x2c], eax
        mov    dword ptr [esp + 0x10], 0x798c44
        call    FUN_006b0610
        mov    bl, al
        neg    bl
        sbb    bl, bl
        lea    ecx, [esp + 0xc]
        inc    bl
        call    FUN_006b06d0
        test    bl, bl
        je    L_a086
        pop    edi
        pop    esi
        xor    al, al
        pop    ebx
        add    esp, 0x20
        ret    4
L_a086:
        mov    eax, dword ptr [edi + 0x20]
        mov    edx, dword ptr [esi + 0x20]
        mov    ecx, dword ptr [eax + 0x30]
        mov    eax, dword ptr [edx + 0x30]
        pop    edi
        cmp    ecx, eax
        pop    esi
        setne    al
        pop    ebx
        add    esp, 0x20
        ret    4
        mov    edx, dword ptr [ecx + 0x24]
        mov    eax, dword ptr [esp + 4]
        mov    dword ptr [eax], edx
        mov    edx, dword ptr [ecx + 0x28]
        mov    ecx, dword ptr [ecx + 0x2c]
        mov    dword ptr [eax + 4], edx
        mov    dword ptr [eax + 8], ecx
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, 1
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
        mov    eax, dword ptr [ecx + 0x20]
        mov    ecx, dword ptr [esp + 4]
        push    eax
        call    FUN_004db100
        call    FUN_0075db4a
        ret    4
    }
}
