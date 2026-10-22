/*
 * FUN_00644e2b (extent 0x644e2b-0x644fc3) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d064;
extern float  g_0077dff4;
extern float  g_0077dff8;
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0055eb90(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_00644e2b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    dword ptr [ecx + 0x50], eax
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0xc
        fld    dword ptr [esp + 0x10]
        fmul    dword ptr [g_0077dff8]
        fst    dword ptr [ecx + 0x54]
        fld    dword ptr [esp + 0x18]
        fmul    dword ptr [g_0077dff8]
        fstp    dword ptr [esp + 0x10]
        fld    dword ptr [esp + 0x14]
        mov    eax, dword ptr [esp + 0x10]
        fmul    dword ptr [g_0077dff4]
        mov    dword ptr [ecx + 0x58], eax
        fst    dword ptr [esp + 0x18]
        fstp    dword ptr [ecx + 0x5c]
        fld    dword ptr [esp + 0x1c]
        fmul    dword ptr [g_0077dff4]
        fst    dword ptr [esp + 0x14]
        fstp    dword ptr [ecx + 0x60]
        fcom    dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 0x41
        jne    L_4e9e
        mov    edx, dword ptr [esp + 0x10]
        fstp    dword ptr [ecx + 0x58]
        mov    dword ptr [ecx + 0x54], edx
        jmp    L_4ea0
L_4e9e:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_4ea0:
        fld    dword ptr [esp + 0x18]
        fcomp    dword ptr [esp + 0x14]
        fnstsw  ax
        test    ah, 0x41
        jne    L_4ebd
        fld    dword ptr [esp + 0x18]
        mov    eax, dword ptr [esp + 0x14]
        fstp    dword ptr [ecx + 0x60]
        mov    dword ptr [ecx + 0x5c], eax
L_4ebd:
        fld    dword ptr [ecx + 0x54]
        mov    eax, 0x3f666666
        fld    dword ptr [ecx + 0x5c]
        mov    dword ptr [ecx + 0x1c], eax
        fstp    dword ptr [esp + 4]
        mov    edx, dword ptr [esp + 4]
        fstp    dword ptr [ecx + 0x14]
        mov    dword ptr [ecx + 0x18], edx
        fld    dword ptr [ecx + 0x58]
        mov    dword ptr [ecx + 0x28], eax
        fsub    dword ptr [ecx + 0x54]
        fld    dword ptr [ecx + 0x60]
        fsub    dword ptr [ecx + 0x5c]
        fstp    dword ptr [esp + 4]
        mov    edx, dword ptr [esp + 4]
        fstp    dword ptr [ecx + 0x20]
        mov    dword ptr [ecx + 0x24], edx
        add    esp, 0xc
        ret    0x10
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x18
        push    esi
        mov    esi, ecx
        lea    eax, [esi + 0x14]
        push    eax
        lea    ecx, [esp + 8]
        call    FUN_0040c410
        fld    dword ptr [esp + 4]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_4f32
        fld    dword ptr [esp + 4]
        fmul    dword ptr [g_0077dff8]
        fstp    dword ptr [esp + 4]
L_4f32:
        fld    dword ptr [esp + 8]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_4f51
        fld    dword ptr [esp + 8]
        fmul    dword ptr [g_0077dff4]
        fstp    dword ptr [esp + 8]
L_4f51:
        add    esi, 0x20
        push    esi
        lea    ecx, [esp + 0x14]
        call    FUN_0040c410
        fld    dword ptr [esp + 0x10]
        fcom    dword ptr [g_0076d064]
        pop    esi
        fnstsw  ax
        test    ah, 0x41
        je    L_4f76
        fmul    dword ptr [g_0077dff8]
L_4f76:
        fld    dword ptr [esp + 0x10]
        fcom    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_4f8d
        fmul    dword ptr [g_0077dff4]
L_4f8d:
        fadd    dword ptr [esp + 4]
        push    0x9600af00
        call    FUN_0075db4a
        fadd    dword ptr [esp + 4]
        push    eax
        call    FUN_0075db4a
        fld    dword ptr [esp + 0xc]
        push    eax
        call    FUN_0075db4a
        fld    dword ptr [esp + 0xc]
        push    eax
        call    FUN_0075db4a
        push    eax
        call    FUN_0055eb90
        add    esp, 0x2c
        ret    
    }
}
