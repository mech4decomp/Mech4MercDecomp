/*
 * FUN_0051edc2 (extent 0x51edc2-0x51ee35) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007db090;
extern void __cdecl FUN_004cdfa0(void);

__declspec(naked) void FUN_0051edc2(void)
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
        nop    
        mov    eax, dword ptr [g_007db090]
        test    eax, eax
        jne    L_eddc
        ret    0xc
L_eddc:
        xor    ecx, ecx
        mov    cl, byte ptr [eax + 0x28]
        mov    eax, ecx
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
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [eax]
        mov    ecx, dword ptr [ecx]
        cmp    ecx, 0xff
        jle    L_ee05
        xor    eax, eax
        ret    0xc
L_ee05:
        cmp    ecx, 1
        jge    L_ee0f
        xor    eax, eax
        ret    0xc
L_ee0f:
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        push    ecx
        mov    ecx, dword ptr [eax + 0x14]
        xor    ecx, 0x85739531
        call    FUN_004cdfa0
        neg    eax
        sbb    eax, eax
        neg    eax
        ret    0xc
    }
}
