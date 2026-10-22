/*
 * FUN_0068e97e (extent 0x68e97e-0x68ea77) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b220c;
extern void __cdecl FUN_0041c540(void);

__declspec(naked) void FUN_0068e97e(void)
{
    __asm {
        nop    
        nop    
        sub    esp, 0xc
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, dword ptr [edi + 0x2c]
        mov    ebp, dword ptr [edi + 0x28]
        sub    ecx, ebp
        mov    eax, 0x2aaaaaab
        imul    ecx
        sar    edx, 1
        mov    eax, edx
        shr    eax, 0x1f
        add    edx, eax
        mov    ebx, edx
        xor    esi, esi
        test    ebx, ebx
        jle    L_e9e2
L_e9a9:
        mov    ecx, dword ptr [g_007b220c]
        push    ecx
        lea    edx, [esp + 0x14]
        push    edx
        push    ebp
        mov    dword ptr [esp + 0x1c], 0xbf800000
        mov    dword ptr [esp + 0x20], 0xbf800000
        mov    dword ptr [esp + 0x24], 0xbf800000
        call    FUN_0041c540
        add    esp, 0xc
        test    al, al
        jne    L_e9e2
        inc    esi
        add    ebp, 0xc
        cmp    esi, ebx
        jl    L_e9a9
L_e9e2:
        fild    dword ptr [esp + 0x20]
        mov    ecx, dword ptr [edi + 0x28]
        fild    dword ptr [esp + 0x24]
        pop    edi
        lea    eax, [esi + esi*2]
        pop    esi
        fstp    dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 0xc]
        lea    eax, [ecx + eax*4]
        pop    ebp
        fstp    dword ptr [eax]
        mov    dword ptr [eax + 4], edx
        mov    dword ptr [eax + 8], 0
        pop    ebx
        add    esp, 0xc
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
        nop    
        nop    
        nop    
        nop    
        mov    edx, dword ptr [ecx + 0x2c]
        push    esi
        mov    esi, dword ptr [ecx + 0x28]
        sub    edx, esi
        mov    eax, 0x2aaaaaab
        imul    edx
        sar    edx, 1
        mov    eax, edx
        shr    eax, 0x1f
        add    edx, eax
        test    edx, edx
        jle    L_ea73
        fild    dword ptr [esp + 8]
        mov    ecx, esi
        mov    esi, 0xbf800000
L_ea48:
        fcom    dword ptr [ecx]
        fnstsw  ax
        test    ah, 0x40
        je    L_ea59
        mov    dword ptr [ecx], esi
        mov    dword ptr [ecx + 4], esi
        mov    dword ptr [ecx + 8], esi
L_ea59:
        fcom    dword ptr [ecx + 4]
        fnstsw  ax
        test    ah, 0x40
        je    L_ea6b
        mov    dword ptr [ecx], esi
        mov    dword ptr [ecx + 4], esi
        mov    dword ptr [ecx + 8], esi
L_ea6b:
        add    ecx, 0xc
        dec    edx
        jne    L_ea48
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_ea73:
        pop    esi
        ret    4
    }
}
