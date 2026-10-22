/*
 * FUN_004c29cf (extent 0x4c29cf-0x4c2c2e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_0041c680(void);
extern void __cdecl FUN_004206b0(void);
extern void __cdecl FUN_00488130(void);
extern void __cdecl FUN_00488160(void);
extern void __cdecl FUN_00488260(void);
extern void __cdecl FUN_00487db0(void);
extern void __cdecl FUN_00488110(void);

__declspec(naked) void FUN_004c29cf(void)
{
    __asm {
        nop    
        mov    ecx, dword ptr [ecx + 0x174]
        test    ecx, ecx
        je    L_29df
        jmp    FUN_00487db0
L_29df:
        xor    eax, eax
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
        mov    ecx, dword ptr [ecx + 0x174]
        jmp    FUN_00488110
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        mov    edx, dword ptr [esp + 4]
        mov    ecx, dword ptr [ecx + 0x174]
        push    eax
        push    edx
        call    FUN_00488130
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        mov    ecx, dword ptr [ecx + 0x174]
        push    eax
        mov    eax, dword ptr [esp + 8]
        push    edx
        push    eax
        call    FUN_00488160
        ret    0xc
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        sub    esp, 0x70
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x18]
        shr    eax, 0xe
        not    al
        test    al, 1
        push    edi
        je    L_2c26
        mov    edx, dword ptr [esi]
        push    0
        call    dword ptr [edx + 0x38]
        add    esi, 0x80
        push    esi
        lea    ecx, [ebp - 0x40]
        mov    edi, eax
        call    FUN_004206b0
        mov    ecx, dword ptr [ebp + 0xc]
        lea    eax, [ebp - 0x40]
        push    eax
        push    ecx
        lea    ecx, [ebp - 0x10]
        call    FUN_0041c680
        lea    edx, [ebp - 0x40]
        lea    eax, [ebp - 0x70]
        mov    dword ptr [ebp - 4], edx
        mov    dword ptr [ebp + 0xc], eax
        mov    edx, dword ptr [ebp + 8]
        push    esi
        mov    esi, dword ptr [ebp - 4]
        mov    eax, dword ptr [ebp + 0xc]
        fld    dword ptr [edx]
        fmul    dword ptr [esi]
        fld    dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 4]
        fld    dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 4]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax]
        fld    dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 8]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax + 4]
        fld    dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0xc]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax + 8]
        fld    dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fadd    dword ptr [esi + 0xc]
        fld    dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x18]
        fxch    st(1)
        fstp    dword ptr [eax + 0xc]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x10]
        fld    dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x14]
        fld    dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x18]
        fld    dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fadd    dword ptr [esi + 0x1c]
        fld    dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x28]
        fxch    st(1)
        fstp    dword ptr [eax + 0x1c]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x20]
        fld    dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x24]
        fld    dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x28]
        fld    dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp st(1), st(0)
        faddp st(1), st(0)
        fadd    dword ptr [esi + 0x2c]
        fstp    dword ptr [eax + 0x2c]
        pop    esi
        mov    ecx, dword ptr [ebp + 0x10]
        push    0xff800000
        push    ecx
        lea    edx, [ebp - 0x10]
        push    edx
        lea    eax, [ebp - 0x70]
        push    eax
        mov    ecx, edi
        call    FUN_00488260
L_2c26:
        pop    edi
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    0xc
    }
}
