/*
 * FUN_00604c61 (extent 0x604c61-0x604dee) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d598;
extern void __cdecl FUN_00604ba0(void);

__declspec(naked) void FUN_00604c61(void)
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
        nop    
        push    ebx
        push    edi
        mov    edi, ecx
        mov    eax, dword ptr [edi + 0x20]
        xor    ecx, ecx
        xor    ebx, ebx
        cmp    eax, ecx
        mov    byte ptr [edi + 0x28], 0
        jle    L_4d35
        push    ebp
        mov    ebp, dword ptr [esp + 0x18]
        push    esi
        jmp    L_4c91
L_4c8f:
        xor    ecx, ecx
L_4c91:
        fld    dword ptr [esp + 0x18]
        mov    eax, dword ptr [edi + 0x24]
        mov    edx, dword ptr [edi + 0x10]
        fcomp    dword ptr [g_0076d598]
        mov    edx, dword ptr [edx + 0x30]
        add    eax, ebx
        mov    esi, dword ptr [edx + eax*4]
        fnstsw  ax
        test    ah, 0x40
        jne    L_4cfb
        fld    dword ptr [esp + 0x18]
        fcomp    dword ptr [esi + 0x28]
        fnstsw  ax
        test    ah, 1
        jne    L_4d24
        fld    dword ptr [esi + 0x2c]
        fadd    dword ptr [esi + 0x28]
        fcomp    dword ptr [esp + 0x18]
        fnstsw  ax
        test    ah, 1
        jne    L_4d24
        fld    dword ptr [esp + 0x18]
        mov    eax, dword ptr [esi]
        fsub    dword ptr [esi + 0x28]
        push    ebp
        push    ecx
        mov    ecx, esi
        fdiv    dword ptr [esi + 0x2c]
        mov    dword ptr [esi + 8], 1
        fstp    dword ptr [esp]
        call    dword ptr [eax + 4]
        mov    ecx, dword ptr [esi + 0x20]
        mov    dword ptr [edi + 0x1c], ecx
        mov    ecx, edi
        call    FUN_00604ba0
        jmp    L_4d27
L_4cfb:
        cmp    dword ptr [esi + 0xc], -1
        jne    L_4d24
        mov    edx, dword ptr [esi]
        push    ebp
        push    0xbf800000
        mov    ecx, esi
        mov    dword ptr [esi + 8], 1
        call    dword ptr [edx + 4]
        mov    eax, dword ptr [esi + 0x20]
        mov    ecx, edi
        mov    dword ptr [edi + 0x1c], eax
        call    FUN_00604ba0
        jmp    L_4d27
L_4d24:
        mov    dword ptr [esi + 8], ecx
L_4d27:
        mov    eax, dword ptr [edi + 0x20]
        inc    ebx
        cmp    ebx, eax
        jl    L_4c8f
        pop    esi
        pop    ebp
L_4d35:
        pop    edi
        pop    ebx
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebx
        push    edi
        mov    edi, ecx
        mov    ebx, dword ptr [edi + 0x20]
        test    ebx, ebx
        jle    L_4d79
        mov    eax, dword ptr [edi + 0x10]
        mov    ecx, dword ptr [edi + 0x24]
        mov    edx, dword ptr [eax + 0x30]
        push    ebp
        mov    ebp, dword ptr [esp + 0x10]
        push    esi
        lea    esi, [edx + ecx*4]
L_4d5d:
        mov    ecx, dword ptr [esi]
        mov    eax, dword ptr [ecx]
        push    ebp
        call    dword ptr [eax + 8]
        add    esi, 4
        dec    ebx
        jne    L_4d5d
        pop    esi
        pop    ebp
        mov    dword ptr [edi + 0x2c], 0
        pop    edi
        pop    ebx
        ret    4
L_4d79:
        mov    dword ptr [edi + 0x2c], 0
        pop    edi
        pop    ebx
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
        push    ebx
        mov    ebx, ecx
        push    edi
        mov    edi, dword ptr [ebx + 0x20]
        test    edi, edi
        jle    L_4dc0
        mov    eax, dword ptr [ebx + 0x10]
        mov    ecx, dword ptr [ebx + 0x24]
        mov    edx, dword ptr [eax + 0x30]
        push    esi
        lea    esi, [edx + ecx*4]
L_4da8:
        mov    ecx, dword ptr [esi]
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 0xc]
        add    esi, 4
        dec    edi
        jne    L_4da8
        pop    esi
        pop    edi
        mov    dword ptr [ebx + 0x2c], 0xbf800000
        pop    ebx
        ret    
L_4dc0:
        pop    edi
        mov    dword ptr [ebx + 0x2c], 0xbf800000
        pop    ebx
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [esp + 8]
        mov    dword ptr [ecx], eax
        mov    eax, dword ptr [esp + 0xc]
        mov    dword ptr [ecx + 4], edx
        mov    edx, dword ptr [esp + 0x10]
        mov    dword ptr [ecx + 8], eax
        mov    dword ptr [ecx + 0xc], edx
        ret    0x10
    }
}
