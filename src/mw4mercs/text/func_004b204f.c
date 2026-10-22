/*
 * FUN_004b204f (extent 0x4b204f-0x4b2347) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_0041c680(void);
extern void __cdecl FUN_004206b0(void);
extern void __cdecl FUN_00488110(void);
extern void __cdecl FUN_00488130(void);
extern void __cdecl FUN_00488160(void);
extern void __cdecl FUN_00488260(void);
extern void __cdecl FUN_004afd70(void);
extern void __cdecl FUN_004affa0(void);
extern void __cdecl FUN_00487db0(void);

__declspec(naked) void FUN_004b204f(void)
{
    __asm {
        nop    
        mov    eax, dword ptr [ecx + 0x188]
        test    eax, eax
        jbe    L_2067
        mov    eax, dword ptr [ecx + 0x184]
        mov    ecx, dword ptr [eax]
        jmp    FUN_00487db0
L_2067:
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [ecx + 0x188]
        xor    esi, esi
        test    edi, edi
        jbe    L_209c
        push    ebx
        mov    ebx, dword ptr [ecx + 0x184]
        xor    eax, eax
L_2087:
        mov    ecx, dword ptr [ebx + eax*4]
        call    FUN_00488110
        inc    esi
        mov    eax, esi
        and    eax, 0xffff
        cmp    eax, edi
        jb    L_2087
        pop    ebx
L_209c:
        pop    edi
        pop    esi
        ret    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [ecx + 0x188]
        xor    esi, esi
        test    edi, edi
        jbe    L_20d8
        push    ebx
        mov    ebx, dword ptr [ecx + 0x184]
        push    ebp
        mov    ebp, dword ptr [esp + 0x18]
        xor    eax, eax
L_20bc:
        mov    ecx, dword ptr [esp + 0x14]
        push    ebp
        push    ecx
        mov    ecx, dword ptr [ebx + eax*4]
        call    FUN_00488130
        inc    esi
        mov    eax, esi
        and    eax, 0xffff
        cmp    eax, edi
        jb    L_20bc
        pop    ebp
        pop    ebx
L_20d8:
        pop    edi
        pop    esi
        ret    8
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [ecx + 0x188]
        xor    esi, esi
        test    edi, edi
        jbe    L_211d
        push    ebx
        mov    ebx, dword ptr [ecx + 0x184]
        push    ebp
        mov    ebp, dword ptr [esp + 0x1c]
        xor    eax, eax
L_20fc:
        mov    ecx, dword ptr [esp + 0x18]
        mov    edx, dword ptr [esp + 0x14]
        push    ebp
        push    ecx
        mov    ecx, dword ptr [ebx + eax*4]
        push    edx
        call    FUN_00488160
        inc    esi
        mov    eax, esi
        and    eax, 0xffff
        cmp    eax, edi
        jb    L_20fc
        pop    ebp
        pop    ebx
L_211d:
        pop    edi
        pop    esi
        ret    0xc
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
        push    ebp
        mov    ebp, esp
        sub    esp, 0x78
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x18]
        shr    eax, 0xe
        not    al
        test    al, 1
        je    L_2340
        lea    ecx, [ebp - 8]
        push    ecx
        lea    edx, [ebp - 4]
        push    edx
        mov    ecx, esi
        call    FUN_004affa0
        mov    ecx, esi
        dec    eax
        push    eax
        call    FUN_004afd70
        add    esi, 0x80
        push    esi
        lea    ecx, [ebp - 0x48]
        call    FUN_004206b0
        mov    ecx, dword ptr [ebp + 0xc]
        lea    eax, [ebp - 0x48]
        push    eax
        push    ecx
        lea    ecx, [ebp - 0x18]
        call    FUN_0041c680
        lea    edx, [ebp - 0x48]
        lea    eax, [ebp - 0x78]
        mov    dword ptr [ebp - 0xc], edx
        mov    dword ptr [ebp + 0xc], eax
        mov    edx, dword ptr [ebp + 8]
        push    esi
        mov    esi, dword ptr [ebp - 0xc]
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
        mov    ecx, dword ptr [ebp - 4]
        lea    edx, [ebp - 0x18]
        push    edx
        lea    eax, [ebp - 0x78]
        push    eax
        call    FUN_00488260
        mov    ecx, dword ptr [ebp - 4]
        dec    word ptr [ecx + 0x10]
        cmp    word ptr [ecx + 0x10], 0
        lea    eax, [ecx + 0x10]
        jne    L_2340
        test    ecx, ecx
        je    L_2340
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
L_2340:
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    0xc
    }
}
