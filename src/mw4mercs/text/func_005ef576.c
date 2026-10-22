/*
 * FUN_005ef576 (extent 0x5ef576-0x5ef67e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0077deac;
extern float  g_00785f2c;
extern float  g_00789dbc;

__declspec(naked) void FUN_005ef576(void)
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
        mov    edx, dword ptr [ecx + 0x178]
        test    edx, edx
        push    esi
        je    L_f67a
        mov    eax, dword ptr [edx + 0x10]
        shr    eax, 0x13
        test    al, 1
        jne    L_f67a
        mov    ecx, dword ptr [ecx + 0x198]
        test    ecx, ecx
        je    L_f67a
        mov    eax, dword ptr [ecx + 0x40]
        test    eax, eax
        je    L_f67a
        mov    ecx, dword ptr [eax + 0x150]
        test    ecx, ecx
        je    L_f67a
        mov    esi, dword ptr [ecx + 0x28]
        test    esi, esi
        je    L_f67a
        mov    ecx, dword ptr [edx + 0x410]
        mov    esi, dword ptr [edx + 0x40c]
        sub    ecx, esi
        sar    ecx, 2
        je    L_f67a
        mov    edx, esi
        mov    ecx, dword ptr [edx]
        test    ecx, ecx
        je    L_f67a
        mov    eax, dword ptr [eax + 0x150]
        mov    edx, dword ptr [eax + 0x28]
        mov    eax, dword ptr [ecx + 0x1e0]
        cmp    eax, 1
        jne    L_f628
        cmp    dword ptr [edx + 0x3c], 2
        je    L_f628
        xor    al, al
        pop    esi
        ret    
L_f628:
        cmp    eax, 2
        jne    L_f637
        cmp    dword ptr [edx + 0x3c], 3
        je    L_f637
        xor    al, al
        pop    esi
        ret    
L_f637:
        cmp    eax, 4
        jne    L_f640
        xor    al, al
        pop    esi
        ret    
L_f640:
        test    eax, eax
        jne    L_f67a
        fld    dword ptr [g_00789dbc]
        fmul    dword ptr [g_0077deac]
        fcomp    dword ptr [ecx + 0x1bc]
        fnstsw  ax
        test    ah, 1
        jne    L_f676
        fld    dword ptr [g_00789dbc]
        fmul    dword ptr [g_00785f2c]
        fcomp    dword ptr [ecx + 0x1bc]
        fnstsw  ax
        test    ah, 0x41
        jne    L_f67a
L_f676:
        xor    al, al
        pop    esi
        ret    
L_f67a:
        mov    al, 1
        pop    esi
        ret    
    }
}
