/*
 * FUN_00481bcb (extent 0x481bcb-0x481e2b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d064;
extern float  g_0076d598;
extern float  g_0076e10c;
extern float  g_007b220c;
extern int    g_007b87ec;
extern int    g_007da848;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00411c40(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_00412a50(void);
extern void __cdecl FUN_00482160(void);
extern void __cdecl FUN_004821a0(void);
extern void __cdecl FUN_004912b0(void);

__declspec(naked) void FUN_00481bcb(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x18
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x24]
        mov    esi, ecx
        push    edi
        call    FUN_00482160
        mov    esi, dword ptr [esi + 0x8c]
        test    esi, esi
        je    L_1c4f
        add    esi, 0xc
        push    esi
        lea    ecx, [esp + 0xc]
        call    FUN_004912b0
        mov    eax, dword ptr [esp + 8]
        and    eax, 0x3fff
        jg    L_1c07
        xor    eax, eax
        jmp    L_1c11
L_1c07:
        mov    ecx, dword ptr [g_007da848]
        mov    eax, dword ptr [ecx + eax*4 + 0x24]
L_1c11:
        mov    edx, dword ptr [eax + 0x10]
        push    edx
        lea    ecx, [esp + 0x28]
        call    FUN_00412570
        lea    eax, [esp + 0x24]
        push    eax
        push    edi
        call    FUN_00412a50
        mov    eax, dword ptr [esp + 0x2c]
        add    esp, 8
        test    eax, eax
        je    L_1c5f
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_1c5f
        push    eax
        call    FUN_004084e0
        add    esp, 4
        pop    edi
        pop    esi
        add    esp, 0x18
        ret    4
L_1c4f:
        mov    ecx, dword ptr [g_007b87ec]
        push    ecx
        push    edi
        call    FUN_00412a50
        add    esp, 8
L_1c5f:
        pop    edi
        pop    esi
        add    esp, 0x18
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x18
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x24]
        mov    esi, ecx
        push    edi
        call    FUN_004821a0
        mov    esi, dword ptr [esi + 0x8c]
        test    esi, esi
        je    L_1cc1
        add    esi, 0xc
        push    esi
        lea    ecx, [esp + 0xc]
        call    FUN_004912b0
        mov    eax, dword ptr [esp + 8]
        and    eax, 0x3fff
        jg    L_1ca7
        xor    eax, eax
        jmp    L_1cb1
L_1ca7:
        mov    ecx, dword ptr [g_007da848]
        mov    eax, dword ptr [ecx + eax*4 + 0x24]
L_1cb1:
        mov    edx, dword ptr [eax + 0x10]
        push    edx
        push    0x76e100
        mov    ecx, edi
        call    FUN_00411c40
L_1cc1:
        pop    edi
        pop    esi
        add    esp, 0x18
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
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
        nop    
        push    ebp
        mov    ebp, esp
        sub    esp, 0x28
        fld    dword ptr [ecx + 0x54]
        lea    eax, [ecx + 0xc]
        mov    edx, dword ptr [eax]
        mov    dword ptr [ebp - 0x1c], edx
        mov    edx, dword ptr [eax + 4]
        mov    eax, dword ptr [eax + 8]
        mov    dword ptr [ebp - 0x18], edx
        mov    edx, dword ptr [ecx + 0x64]
        mov    dword ptr [ebp - 0x14], eax
        mov    eax, dword ptr [ecx + 0x74]
        mov    dword ptr [ebp - 0xc], edx
        mov    edx, dword ptr [ebp + 8]
        mov    dword ptr [ebp - 8], eax
        mov    eax, dword ptr [edx]
        fsub    dword ptr [eax]
        fstp    dword ptr [ebp - 0x10]
        fld    dword ptr [ebp - 0xc]
        fsub    dword ptr [eax + 4]
        fstp    dword ptr [ebp - 0xc]
        fld    dword ptr [ebp - 8]
        fsub    dword ptr [eax + 8]
        fst    dword ptr [ebp - 8]
        fmul    dword ptr [ebp - 8]
        fld    dword ptr [ebp - 0xc]
        fmul    dword ptr [ebp - 0xc]
        faddp st(1), st(0)
        fld    dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp - 0x10]
        faddp st(1), st(0)
        fstp    dword ptr [ebp + 8]
        mov    eax, dword ptr [ebp + 8]
        sar    eax, 1
        add    eax, 0x1fc00000
        mov    dword ptr [ebp - 4], eax
        fld    dword ptr [ebp - 4]
        fcom    dword ptr [ecx + 0x80]
        fnstsw  ax
        test    ah, 0x41
        je    L_1d60
        fld    dword ptr [g_0076d064]
        jmp    L_1d7f
L_1d60:
        fcom    dword ptr [ecx + 0x84]
        fnstsw  ax
        test    ah, 1
        je    L_1e23
        fld    dword ptr [ecx + 0x84]
        fsub st(0), st(1)
        fmul    dword ptr [ecx + 0x88]
L_1d7f:
        fld    dword ptr [ebp - 0x1c]
        mov    eax, dword ptr [edx + 8]
        test    eax, eax
        fmul st(0), st(1)
        fstp    dword ptr [ebp - 0x1c]
        fld    dword ptr [ebp - 0x18]
        fmul st(0), st(1)
        fstp    dword ptr [ebp - 0x18]
        fld    dword ptr [ebp - 0x14]
        fmul st(0), st(1)
        fstp    dword ptr [ebp - 0x14]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fdivr    dword ptr [g_0076d598]
        fld    st(0)
        fmul    dword ptr [ebp - 0x10]
        fstp    dword ptr [ebp - 0x28]
        fld    dword ptr [ebp - 0xc]
        fmul st(0), st(1)
        fstp    dword ptr [ebp - 0x24]
        fld    dword ptr [ebp - 8]
        fmul st(0), st(1)
        fstp    dword ptr [ebp - 0x20]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076e10c]
        je    L_1de2
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [ebp - 0x20]
        fmul    dword ptr [eax + 8]
        fld    dword ptr [ebp - 0x24]
        fmul    dword ptr [eax + 4]
        faddp st(1), st(0)
        fld    dword ptr [ebp - 0x28]
        fmul    dword ptr [eax]
        faddp st(1), st(0)
        fmul    dword ptr [ecx + 8]
        fchs    
L_1de2:
        fcom    dword ptr [g_007b220c]
        fnstsw  ax
        test    ah, 0x41
        jne    L_1e23
        mov    eax, dword ptr [edx + 4]
        fld    st(0)
        fmul    dword ptr [ebp - 0x1c]
        fld    st(1)
        fmul    dword ptr [ebp - 0x18]
        fstp    dword ptr [ebp - 0x18]
        fxch    st(1)
        fmul    dword ptr [ebp - 0x14]
        fstp    dword ptr [ebp - 0x14]
        fadd    dword ptr [eax]
        fstp    dword ptr [eax]
        fld    dword ptr [ebp - 0x18]
        fadd    dword ptr [eax + 4]
        fstp    dword ptr [eax + 4]
        fld    dword ptr [ebp - 0x14]
        fadd    dword ptr [eax + 8]
        fstp    dword ptr [eax + 8]
        mov    esp, ebp
        pop    ebp
        ret    4
L_1e23:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    esp, ebp
        pop    ebp
        ret    4
    }
}
