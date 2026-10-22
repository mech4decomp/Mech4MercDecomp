/*
 * FUN_00661fa6 (extent 0x661fa6-0x66206e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d064;
extern float  g_0076d970;
extern float  g_00794e30;
extern float  g_00794e40;
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_00661fa6(void)
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
        fld    dword ptr [g_0076c5b0]
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 8
        push    esi
        mov    esi, ecx
        fld    qword ptr [esi + 0x14]
        fcomp    qword ptr [g_0076d970]
        fnstsw  ax
        test    ah, 0x40
        jne    L_205f
        fld    dword ptr [esi + 4]
        push    0
        fadd    qword ptr [g_00794e40]
        fstp    qword ptr [esp + 8]
        call    FUN_00707e70
        fcomp    qword ptr [esp + 4]
        fnstsw  ax
        test    ah, 0x41
        jne    L_205f
        push    0
        call    FUN_00707e70
        fsub    qword ptr [esi + 0x14]
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        fstp    qword ptr [esp + 4]
        call    dword ptr [eax + 0x20]
        cmp    al, 1
        fld    qword ptr [g_00794e30]
        fmul    qword ptr [esp + 4]
        jne    L_2045
        fadd    dword ptr [esi + 0x10]
        fst    dword ptr [esi + 0x10]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jne    L_205f
        push    0
        mov    dword ptr [esi + 0x10], 0x3f800000
        call    FUN_00707e70
        fstp    qword ptr [esi + 0x14]
        pop    esi
        add    esp, 8
        ret    
L_2045:
        fsubr    dword ptr [esi + 0x10]
        fst    dword ptr [esi + 0x10]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_205f
        mov    dword ptr [esi + 0x10], 0
L_205f:
        push    0
        call    FUN_00707e70
        fstp    qword ptr [esi + 0x14]
        pop    esi
        add    esp, 8
        ret    
    }
}
