/*
 * FUN_006874c9 (extent 0x6874c9-0x68757e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d598;
extern void __cdecl FUN_006858f0(void);

__declspec(naked) void FUN_006874c9(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebx
        push    ebp
        mov    ebp, dword ptr [esp + 0xc]
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, dword ptr [esp + 0x1c]
        mov    eax, dword ptr [edi + 4]
        xor    ebx, ebx
        cmp    eax, ecx
        setne    bl
        or    edx, 0xffffffff
        xor    ecx, ecx
        lea    esi, [edi + ebx*4 + 0x14]
L_74f1:
        test    ecx, ecx
        je    L_751f
        mov    eax, 1
        shl    eax, cl
        test    eax, ebp
        je    L_751f
        cmp    edx, -1
        je    L_751d
        fld    dword ptr [esi]
        lea    eax, [ebx + edx*2]
        fcomp    dword ptr [edi + eax*4 + 0x14]
        fnstsw  ax
        test    ah, 1
        je    L_751f
        cmp    dword ptr [esi], 0xbf800000
        je    L_751f
L_751d:
        mov    edx, ecx
L_751f:
        inc    ecx
        add    esi, 8
        cmp    ecx, 9
        jl    L_74f1
        mov    ecx, edx
        mov    eax, 1
        shl    eax, cl
        cmp    edx, -1
        mov    ecx, dword ptr [esp + 0x18]
        mov    dword ptr [ecx], eax
        jne    L_7549
        fld    dword ptr [g_0076d598]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    0xc
L_7549:
        lea    edx, [ebx + edx*2]
        fld    dword ptr [edi + edx*4 + 0x14]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
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
        mov    eax, dword ptr [ecx + 4]
        cmp    eax, dword ptr [esp + 4]
        jne    L_756c
        mov    eax, dword ptr [ecx + 8]
L_756c:
        ret    4
        nop    
        mov    al, byte ptr [ecx + 0x3c]
        test    al, al
        je    L_757d
        push    ecx
        call    FUN_006858f0
L_757d:
        ret    
    }
}
