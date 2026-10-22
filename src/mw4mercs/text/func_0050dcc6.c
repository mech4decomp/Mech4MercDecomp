/*
 * FUN_0050dcc6 (extent 0x50dcc6-0x50ddbc) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_0050d680(void);
extern void __cdecl FUN_0050d6a0(void);
extern void __cdecl FUN_0050d7f0(void);
extern void __cdecl FUN_0050d810(void);
extern void __cdecl FUN_0050d860(void);

__declspec(naked) void FUN_0050dcc6(void)
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
        mov    ecx, dword ptr [esp + 4]
        mov    eax, dword ptr [ecx + 4]
        push    edi
        xor    edi, edi
        test    eax, eax
        jle    L_dcfd
        push    ebx
        push    esi
        mov    esi, dword ptr [ecx]
        mov    ebx, eax
L_dce4:
        mov    eax, dword ptr [esi]
        push    eax
        call    FUN_0050d680
        add    esp, 4
        add    edi, eax
        add    esi, 4
        dec    ebx
        jne    L_dce4
        pop    esi
        pop    ebx
        mov    eax, edi
        pop    edi
        ret    
L_dcfd:
        mov    eax, edi
        pop    edi
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
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        mov    eax, dword ptr [esi + 4]
        push    edi
        mov    edi, dword ptr [esp + 0x14]
        push    eax
        push    edi
        call    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi]
        mov    edx, dword ptr [esi + 0x10]
        push    0
        push    0
        lea    ebx, [ecx + eax*4]
        mov    eax, dword ptr [ebx]
        push    edx
        push    edi
        push    eax
        call    FUN_0050d860
        add    esp, 0x1c
        cmp    eax, -1
        jne    L_dd51
        mov    ecx, dword ptr [ebx]
        push    edi
        push    ecx
        call    FUN_0050d6a0
        add    esp, 8
        pop    edi
        pop    esi
        pop    ebx
        ret    
L_dd51:
        mov    edx, dword ptr [ebx]
        push    eax
        push    edi
        push    edx
        call    FUN_0050d810
        add    esp, 0xc
        pop    edi
        pop    esi
        pop    ebx
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
        push    ebx
        mov    ebx, dword ptr [esp + 0xc]
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        mov    eax, dword ptr [esi + 4]
        push    edi
        push    eax
        push    ebx
        call    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi]
        mov    edx, dword ptr [esi + 0x10]
        push    0
        push    0
        lea    edi, [ecx + eax*4]
        mov    eax, dword ptr [edi]
        push    edx
        push    ebx
        push    eax
        call    FUN_0050d860
        add    esp, 0x1c
        cmp    eax, -1
        jne    L_dda7
        pop    edi
        pop    esi
        xor    eax, eax
        pop    ebx
        ret    
L_dda7:
        mov    ecx, dword ptr [edi]
        push    eax
        push    ecx
        call    FUN_0050d7f0
        add    esp, 8
        pop    edi
        pop    esi
        mov    eax, 1
        pop    ebx
        ret    
    }
}
