/*
 * FUN_0042b226 (extent 0x42b226-0x42b748) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040c9c0(void);
extern void __cdecl FUN_0040ccd0(void);
extern void __cdecl FUN_00415020(void);
extern void __cdecl FUN_0041a2c0(void);
extern void __cdecl FUN_0042baf0(void);
extern void __cdecl FUN_0042bb10(void);

__declspec(naked) void FUN_0042b226(void)
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
        sub    esp, 0x80
        push    ebx
        push    ebp
        push    esi
        mov    esi, ecx
        fld    dword ptr [esi + 0x9c]
        push    edi
        fadd    dword ptr [esi + 0xa4]
        fstp    dword ptr [esp + 0x10]
        mov    edi, dword ptr [esp + 0x10]
        fld    dword ptr [esi + 0x94]
        push    edi
        push    ecx
        fstp    dword ptr [esp]
        fld    dword ptr [esi + 0x8c]
        push    ecx
        fstp    dword ptr [esp]
        lea    ecx, [esp + 0x2c]
        call    FUN_0040c9c0
        lea    eax, [esp + 0x20]
        push    eax
        lea    ecx, [esp + 0x34]
        call    FUN_0040c410
        fld    dword ptr [esi + 0x94]
        push    edi
        push    ecx
        fstp    dword ptr [esp]
        fld    dword ptr [esi + 0x90]
        push    ecx
        fstp    dword ptr [esp]
        lea    ecx, [esp + 0x2c]
        call    FUN_0040c9c0
        lea    ecx, [esp + 0x20]
        push    ecx
        lea    ecx, [esp + 0x40]
        call    FUN_0040c410
        fld    dword ptr [esi + 0x98]
        push    edi
        push    ecx
        fstp    dword ptr [esp]
        fld    dword ptr [esi + 0x90]
        push    ecx
        fstp    dword ptr [esp]
        lea    ecx, [esp + 0x2c]
        call    FUN_0040c9c0
        lea    edx, [esp + 0x20]
        push    edx
        lea    ecx, [esp + 0x4c]
        call    FUN_0040c410
        fld    dword ptr [esi + 0x98]
        push    edi
        push    ecx
        fstp    dword ptr [esp]
        fld    dword ptr [esi + 0x8c]
        push    ecx
        fstp    dword ptr [esp]
        lea    ecx, [esp + 0x2c]
        call    FUN_0040c9c0
        lea    eax, [esp + 0x20]
        push    eax
        lea    ecx, [esp + 0x58]
        call    FUN_0040c410
        fld    dword ptr [esi + 0xa0]
        fdiv    dword ptr [esi + 0x9c]
        fstp    dword ptr [esp + 0x10]
        fld    dword ptr [esi + 0xa0]
        fadd    dword ptr [esi + 0xa4]
        fstp    dword ptr [esp + 0x14]
        fld    dword ptr [esp + 0x10]
        fmul    dword ptr [esi + 0x94]
        fstp    dword ptr [esp + 0x18]
        fld    dword ptr [esp + 0x10]
        fmul    dword ptr [esi + 0x8c]
        fstp    dword ptr [esp + 0x1c]
        mov    edi, dword ptr [esp + 0x14]
        mov    ebx, dword ptr [esp + 0x18]
        mov    ebp, dword ptr [esp + 0x1c]
        push    edi
        push    ebx
        push    ebp
        lea    ecx, [esp + 0x2c]
        call    FUN_0040c9c0
        lea    ecx, [esp + 0x20]
        push    ecx
        lea    ecx, [esp + 0x64]
        call    FUN_0040c410
        fld    dword ptr [esp + 0x10]
        fmul    dword ptr [esi + 0x90]
        push    edi
        push    ebx
        lea    ecx, [esp + 0x28]
        fstp    dword ptr [esp + 0x24]
        mov    ebx, dword ptr [esp + 0x24]
        push    ebx
        call    FUN_0040c9c0
        lea    edx, [esp + 0x20]
        push    edx
        lea    ecx, [esp + 0x70]
        call    FUN_0040c410
        fld    dword ptr [esp + 0x10]
        fmul    dword ptr [esi + 0x98]
        push    edi
        lea    ecx, [esp + 0x24]
        fstp    dword ptr [esp + 0x20]
        mov    esi, dword ptr [esp + 0x20]
        push    esi
        push    ebx
        call    FUN_0040c9c0
        lea    eax, [esp + 0x20]
        push    eax
        lea    ecx, [esp + 0x7c]
        call    FUN_0040c410
        push    edi
        push    esi
        push    ebp
        lea    ecx, [esp + 0x2c]
        call    FUN_0040c9c0
        lea    ecx, [esp + 0x20]
        push    ecx
        lea    ecx, [esp + 0x88]
        call    FUN_0040c410
        mov    esi, dword ptr [esp + 0x94]
        lea    edx, [esp + 0x30]
        push    edx
        mov    ecx, esi
        call    FUN_0040c410
        lea    eax, [esp + 0x3c]
        push    eax
        lea    ecx, [esi + 0xc]
        call    FUN_0040c410
        lea    ecx, [esp + 0x3c]
        push    ecx
        lea    ecx, [esi + 0x18]
        call    FUN_0040c410
        lea    edx, [esp + 0x48]
        push    edx
        lea    ecx, [esi + 0x24]
        call    FUN_0040c410
        lea    eax, [esp + 0x48]
        push    eax
        lea    ecx, [esi + 0x30]
        call    FUN_0040c410
        lea    ecx, [esp + 0x54]
        push    ecx
        lea    ecx, [esi + 0x3c]
        call    FUN_0040c410
        lea    edx, [esp + 0x54]
        push    edx
        lea    ecx, [esi + 0x48]
        call    FUN_0040c410
        lea    eax, [esp + 0x30]
        push    eax
        lea    ecx, [esi + 0x54]
        call    FUN_0040c410
        lea    ecx, [esp + 0x30]
        push    ecx
        lea    ecx, [esi + 0x60]
        call    FUN_0040c410
        lea    edx, [esp + 0x60]
        push    edx
        lea    ecx, [esi + 0x6c]
        call    FUN_0040c410
        lea    eax, [esp + 0x3c]
        push    eax
        lea    ecx, [esi + 0x78]
        call    FUN_0040c410
        lea    ecx, [esp + 0x6c]
        push    ecx
        lea    ecx, [esi + 0x84]
        call    FUN_0040c410
        lea    edx, [esp + 0x48]
        push    edx
        lea    ecx, [esi + 0x90]
        call    FUN_0040c410
        lea    eax, [esp + 0x78]
        push    eax
        lea    ecx, [esi + 0x9c]
        call    FUN_0040c410
        lea    ecx, [esp + 0x54]
        push    ecx
        lea    ecx, [esi + 0xa8]
        call    FUN_0040c410
        lea    edx, [esp + 0x84]
        push    edx
        lea    ecx, [esi + 0xb4]
        call    FUN_0040c410
        lea    eax, [esp + 0x60]
        push    eax
        lea    ecx, [esi + 0xc0]
        call    FUN_0040c410
        lea    ecx, [esp + 0x6c]
        push    ecx
        lea    ecx, [esi + 0xcc]
        call    FUN_0040c410
        lea    edx, [esp + 0x6c]
        push    edx
        lea    ecx, [esi + 0xd8]
        call    FUN_0040c410
        lea    eax, [esp + 0x78]
        push    eax
        lea    ecx, [esi + 0xe4]
        call    FUN_0040c410
        lea    ecx, [esp + 0x78]
        push    ecx
        lea    ecx, [esi + 0xf0]
        call    FUN_0040c410
        lea    edx, [esp + 0x84]
        push    edx
        lea    ecx, [esi + 0xfc]
        call    FUN_0040ccd0
        lea    eax, [esp + 0x84]
        push    eax
        lea    ecx, [esi + 0x108]
        call    FUN_0040ccd0
        lea    ecx, [esp + 0x60]
        push    ecx
        lea    ecx, [esi + 0x114]
        call    FUN_0040ccd0
        mov    esi, dword ptr [esp + 0x98]
        mov    edi, 0x18
L_b551:
        push    0x3f800000
        call    FUN_00415020
        push    ecx
        fstp    dword ptr [esp]
        call    FUN_00415020
        push    ecx
        fstp    dword ptr [esp]
        call    FUN_00415020
        push    ecx
        lea    ecx, [esp + 0x30]
        fstp    dword ptr [esp]
        call    FUN_0042baf0
        push    eax
        mov    ecx, esi
        call    FUN_0042bb10
        add    esi, 0x10
        dec    edi
        jne    L_b551
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x80
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
        nop    
        push    ebp
        mov    ebp, esp
        sub    esp, 8
        push    esi
        push    edi
        lea    eax, [ecx + 0x18]
        lea    edi, [ecx + 0x48]
        mov    dword ptr [ebp - 8], eax
        mov    dword ptr [ebp - 4], edi
        mov    edx, dword ptr [ebp - 8]
        push    esi
        mov    esi, dword ptr [ebp + 8]
        mov    eax, dword ptr [ebp - 4]
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
        push    edi
        add    ecx, 0xf8
        call    FUN_0041a2c0
        pop    edi
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    4
    }
}
