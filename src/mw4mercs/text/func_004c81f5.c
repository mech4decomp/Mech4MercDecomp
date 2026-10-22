/*
 * FUN_004c81f5 (extent 0x4c81f5-0x4c8457) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00766d10(void);
extern void __cdecl FUN_00766e40(void);

__declspec(naked) void FUN_004c81f5(void)
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
        xor    al, al
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
        nop    
        nop    
        sub    esp, 0x10
        mov    eax, dword ptr [ecx + 0xfc]
        mov    edx, dword ptr [ecx + 0x10c]
        __emit 0x89  // mov dword ptr [esp], eax
__emit 0x44
__emit 0x24
__emit 0x00
        mov    eax, dword ptr [ecx + 0x11c]
        mov    ecx, dword ptr [ecx + 0x12c]
        mov    dword ptr [esp + 4], edx
        mov    dword ptr [esp + 0xc], ecx
        mov    ecx, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [ecx]
        lea    edx, [esp + 0x14]
        mov    dword ptr [esp + 8], eax
        push    edx
        lea    eax, [esp + 4]
        push    eax
        call    FUN_00766d10
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jne    L_8268
        mov    eax, 1
        add    esp, 0x10
        ret    4
L_8268:
        xor    eax, eax
        add    esp, 0x10
        ret    4
        mov    eax, dword ptr [esp + 4]
        add    ecx, 0xf0
        push    ecx
        mov    ecx, dword ptr [eax]
        call    FUN_00766e40
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jne    L_8297
        mov    eax, 1
        ret    4
L_8297:
        xor    eax, eax
        ret    4
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    eax, dword ptr [eax + 0x10]
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        xor    eax, eax
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
        nop    
        nop    
        sub    esp, 0x10
        mov    eax, dword ptr [ecx + 0x10c]
        fld    dword ptr [ecx + 0xfc]
        mov    edx, dword ptr [ecx + 0x11c]
        mov    dword ptr [esp + 4], eax
        mov    eax, dword ptr [ecx + 0x12c]
        mov    ecx, dword ptr [esp + 0x14]
        fsub    dword ptr [ecx]
        mov    dword ptr [esp + 8], edx
        fld    dword ptr [esp + 4]
        mov    dword ptr [esp + 0xc], eax
        fsub    dword ptr [ecx + 4]
        mov    eax, dword ptr [ecx + 0x10]
        fld    dword ptr [esp + 8]
        xor    edx, edx
        dec    eax
        fsub    dword ptr [ecx + 8]
        fld    st(0)
        fmul st(0), st(1)
        fld    st(2)
        fmul st(0), st(3)
        faddp st(1), st(0)
        fld    st(3)
        fmul st(0), st(4)
        faddp st(1), st(0)
        fstp    st(3)
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        je    L_8408
        dec    eax
        je    L_83d4
        sub    eax, 2
        fld    dword ptr [esp + 0xc]
        je    L_83a4
        fadd    dword ptr [ecx + 0xc]
        fld    st(0)
        fmul st(0), st(1)
        fld    st(2)
        fcompp    
        fnstsw  ax
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        test    ah, 0x41
        je    L_8431
        fld    dword ptr [esp + 0xc]
        mov    edx, 1
        fsub    dword ptr [ecx + 0xc]
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, dl
        jne    L_8371
        fld    st(0)
        fmul st(0), st(1)
        fld    st(2)
        fcompp    
        fnstsw  ax
        test    ah, 0x41
        je    L_8371
        mov    edx, 3
L_8371:
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        je    L_842f
        fld    st(0)
        fmul st(0), st(1)
        fxch    st(1)
        fxch    st(2)
        fcompp    
        fnstsw  ax
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        test    ah, 0x41
        je    L_8433
        or    edx, 4
        mov    eax, edx
        add    esp, 0x10
        ret    4
L_83a4:
        fsub    dword ptr [ecx + 0xc]
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        je    L_842f
        fld    st(0)
        fmul st(0), st(1)
        fxch    st(1)
        fxch    st(2)
        fcompp    
        fnstsw  ax
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        test    ah, 0x41
        je    L_8433
        mov    edx, 4
        mov    eax, edx
        add    esp, 0x10
        ret    4
L_83d4:
        fld    dword ptr [esp + 0xc]
        fsub    dword ptr [ecx + 0xc]
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jne    L_842f
        fld    st(0)
        fmul st(0), st(1)
        fxch    st(1)
        fxch    st(2)
        fcompp    
        fnstsw  ax
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        test    ah, 0x41
        je    L_8433
        mov    edx, 2
        mov    eax, edx
        add    esp, 0x10
        ret    4
L_8408:
        fld    dword ptr [esp + 0xc]
        fadd    dword ptr [ecx + 0xc]
        fld    st(0)
        fmul st(0), st(1)
        fxch    st(1)
        fxch    st(2)
        fcompp    
        fnstsw  ax
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        test    ah, 0x41
        je    L_8433
        mov    edx, 1
        mov    eax, edx
        add    esp, 0x10
        ret    4
L_842f:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_8431:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_8433:
        mov    eax, edx
        add    esp, 0x10
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        push    0x76d414
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_8452
        int 3    
L_8452:
        xor    eax, eax
        ret    4
    }
}
